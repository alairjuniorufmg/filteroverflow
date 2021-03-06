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
***************************************************************************************/
#ifndef __FILTER_H
#define __FILTER_H

#include "filterSimul.h"

#define INTEGER_BITS 9L
#define FRACTIONAL_BITS 5L

#define a0  FIXED(1,  INTEGER_BITS,FRACTIONAL_BITS)
#define a1  FIXED(-2.84969983702711,  INTEGER_BITS,FRACTIONAL_BITS)
#define a2  FIXED(11.650856937177,  INTEGER_BITS,FRACTIONAL_BITS)
#define a3  FIXED(-23.337710477053,  INTEGER_BITS,FRACTIONAL_BITS)
#define a4  FIXED(53.8183583777722,  INTEGER_BITS,FRACTIONAL_BITS)
#define a5  FIXED(-82.4297754839525,  INTEGER_BITS,FRACTIONAL_BITS)
#define a6  FIXED(135.65174556421,  INTEGER_BITS,FRACTIONAL_BITS)
#define a7  FIXED(-165.317746829402,  INTEGER_BITS,FRACTIONAL_BITS)
#define a8  FIXED(210.586931419685,  INTEGER_BITS,FRACTIONAL_BITS)
#define a9  FIXED(-207.826577663988,  INTEGER_BITS,FRACTIONAL_BITS)
#define a10  FIXED(212.170666101484,  INTEGER_BITS,FRACTIONAL_BITS)
#define a11  FIXED(-169.946406740208,  INTEGER_BITS,FRACTIONAL_BITS)
#define a12  FIXED(140.826181289868,  INTEGER_BITS,FRACTIONAL_BITS)
#define a13  FIXED(-90.376354485204,  INTEGER_BITS,FRACTIONAL_BITS)
#define a14  FIXED(60.6388253863235,  INTEGER_BITS,FRACTIONAL_BITS)
#define a15  FIXED(-30.1059109722922,  INTEGER_BITS,FRACTIONAL_BITS)
#define a16  FIXED(16.0687852728143,  INTEGER_BITS,FRACTIONAL_BITS)
#define a17  FIXED(-5.68815955108835,  INTEGER_BITS,FRACTIONAL_BITS)
#define a18  FIXED(2.32093045513711,  INTEGER_BITS,FRACTIONAL_BITS)
#define a19  FIXED(-0.462786760427299,  INTEGER_BITS,FRACTIONAL_BITS)
#define a20  FIXED(0.132768084192921,  INTEGER_BITS,FRACTIONAL_BITS)
#define b0  FIXED(0.364373550347608,  INTEGER_BITS,FRACTIONAL_BITS)
#define b1  FIXED(-1.1542220168174,  INTEGER_BITS,FRACTIONAL_BITS)
#define b2  FIXED(5.28903277677102,  INTEGER_BITS,FRACTIONAL_BITS)
#define b3  FIXED(-11.7778087529476,  INTEGER_BITS,FRACTIONAL_BITS)
#define b4  FIXED(30.3296232620172,  INTEGER_BITS,FRACTIONAL_BITS)
#define b5  FIXED(-51.5735267334825,  INTEGER_BITS,FRACTIONAL_BITS)
#define b6  FIXED(94.4930689774544,  INTEGER_BITS,FRACTIONAL_BITS)
#define b7  FIXED(-127.618965108368,  INTEGER_BITS,FRACTIONAL_BITS)
#define b8  FIXED(180.522514483159,  INTEGER_BITS,FRACTIONAL_BITS)
#define b9  FIXED(-197.046041788706,  INTEGER_BITS,FRACTIONAL_BITS)
#define b10  FIXED(222.868822789165,  INTEGER_BITS,FRACTIONAL_BITS)
#define b11  FIXED(-197.046041788706,  INTEGER_BITS,FRACTIONAL_BITS)
#define b12  FIXED(180.522514483159,  INTEGER_BITS,FRACTIONAL_BITS)
#define b13  FIXED(-127.618965108368,  INTEGER_BITS,FRACTIONAL_BITS)
#define b14  FIXED(94.4930689774544,  INTEGER_BITS,FRACTIONAL_BITS)
#define b15  FIXED(-51.5735267334825,  INTEGER_BITS,FRACTIONAL_BITS)
#define b16  FIXED(30.3296232620172,  INTEGER_BITS,FRACTIONAL_BITS)
#define b17  FIXED(-11.7778087529476,  INTEGER_BITS,FRACTIONAL_BITS)
#define b18  FIXED(5.28903277677102,  INTEGER_BITS,FRACTIONAL_BITS)
#define b19  FIXED(-1.1542220168174,  INTEGER_BITS,FRACTIONAL_BITS)
#define b20  FIXED(0.364373550347608,  INTEGER_BITS,FRACTIONAL_BITS)

#define ORDER 10
#define STAGES 1
#define MAX_DEPTH 10

#define B {b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20}
#define A {a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20}
#define UPPER_INPUT_LIMIT FIXED(116.243554840494,   INTEGER_BITS,FRACTIONAL_BITS)
#define LOWER_INPUT_LIMIT FIXED(-116.243554840494,   INTEGER_BITS,FRACTIONAL_BITS)
#define UPPER_OUTPUT_LIMIT (FIXED(512.0,  INTEGER_BITS,FRACTIONAL_BITS) -1)
#define LOWER_OUTPUT_LIMIT FIXED(-512.0, INTEGER_BITS,FRACTIONAL_BITS)
#endif // __FILTER_H
