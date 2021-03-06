/***************************************************************************************
*
*  Copyright 2016 Alair Dias Junior
*
*  This file is part of FixedFilterOverflow.
*
*  FixedFilterOverflow is free software: you can redistribute it and/or modify it under the
*  terms of the GNU General Public License as published by the Free Software Foundation,
*  either version 3 of the License, or any later version.
*
*  FilterOverflow is distributed in the hope that it will be useful, but WITHOUT ANY
*  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
*  PARTICULAR PURPOSE. See the GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License along with
*  FixedFilterOverflow. If not, see http://www.gnu.org/licenses/.
*
*  COMMAND LINE TO VERIFY USING CBMC:
*
*       > cbmc cbmcTest.c -I{filter path} --function filterSimulError --unwind 6 --no-unwinding-assertions | grep -F 'histX[0]' | sed -n '1!p'
*
***************************************************************************************/

#include <assert.h>
#include "filterSimul.h"
#include "filter.h"

long filter(long x, long histX[], long histY[]){

    long b[] = B;
    long a[] = A;

    unsigned int j;
    
    if (x < LOWER_INPUT_LIMIT || x > UPPER_INPUT_LIMIT) return 0;
    
    for (j = ORDER; j > 0; --j) {
        histX[j] = histX[j-1];
        histY[j] = histY[j-1];
    }

    histX[0] = x;
    histY[0] = 0;

    for (j = 0; j < ORDER + 1;  ++j) {
        histY[0] += FIXED_MUL(histX[j], b[j], FRACTIONAL_BITS) + FIXED_MUL(histY[j], -a[j], FRACTIONAL_BITS);
    }

    return histY[0];

}

long filterSimul(unsigned int depth, long x[]) {
    long histX[STAGES][ORDER+1];
    long histY[STAGES][ORDER+1];
    long input;
    long y;
    
    unsigned int j;
    unsigned int i;
    for (i = 0; i < STAGES; ++i) {
        for (j = 0; j < ORDER + 1;  ++j) {
            histY[i][j] = 0;
            histX[i][j] = 0;
        }
    }
    
    for (i = 0; i < depth; ++i) {
        input = x[i];
        y = input;
        if (y < LOWER_INPUT_LIMIT || y > UPPER_INPUT_LIMIT) return -1;
        for (j = 0; j < STAGES; ++j) {
            y = filter(y, histX[0], histY[0]);
        }
    }

    return y;
}

