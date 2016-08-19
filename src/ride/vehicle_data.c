#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#include "vehicle_data.h"

/** rct2: 0x009A12EC */
static const top_spin_time_to_sprite_map TopSpinTimeToSpriteMap_0[] = {
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{  0,  0 }, {  0,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 },
	{  1,  0 }, {  1,  0 }, {  1,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 },
	{  2,  0 }, {  2,  0 }, {  2,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 },
	{  3,  0 }, {  3,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 },
	{  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  6,  0 }, {  6,  0 },
	{  6,  0 }, {  6,  0 }, {  6,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 },
	{  7,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  9,  0 },
	{  9,  0 }, {  9,  0 }, {  9,  0 }, {  9,  0 }, { 10,  0 }, { 10,  0 }, { 10,  0 },
	{ 10,  0 }, { 10,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 },
	{ 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 13,  0 }, { 13,  0 },
	{ 13,  0 }, { 13,  0 }, { 13,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 },
	{ 14,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 16,  0 },
	{ 16,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 },
	{ 17,  0 }, { 17,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 },
	{ 19,  0 }, { 19,  0 }, { 19,  0 }, { 19,  0 }, { 19,  0 }, { 20,  0 }, { 20,  0 },
	{ 20,  0 }, { 20,  0 }, { 20,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 },
	{ 21,  0 }, { 21,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 },
	{ 22,  0 }, { 22,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 },
	{ 23,  0 }, { 23,  0 }, { 23,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 23,  1 },
	{ 23,  1 }, { 23,  1 }, { 23,  1 }, { 23,  1 }, { 23,  1 }, { 23,  1 }, { 23,  1 },
	{ 22,  2 }, { 22,  2 }, { 22,  2 }, { 22,  2 }, { 22,  2 }, { 22,  2 }, { 22,  2 },
	{ 21,  3 }, { 21,  3 }, { 21,  3 }, { 21,  3 }, { 21,  3 }, { 21,  3 }, { 20,  4 },
	{ 20,  4 }, { 20,  4 }, { 20,  4 }, { 20,  4 }, { 19,  5 }, { 19,  5 }, { 19,  5 },
	{ 19,  5 }, { 19,  5 }, { 18,  6 }, { 18,  6 }, { 18,  6 }, { 18,  6 }, { 18,  6 },
	{ 17,  7 }, { 17,  7 }, { 17,  7 }, { 17,  7 }, { 17,  7 }, { 16,  8 }, { 16,  8 },
	{ 16,  8 }, { 16,  8 }, { 16,  8 }, { 15,  9 }, { 15,  9 }, { 15,  9 }, { 15,  9 },
	{ 15,  9 }, { 14, 10 }, { 14, 10 }, { 14, 10 }, { 14, 10 }, { 14, 10 }, { 13, 11 },
	{ 13, 11 }, { 13, 11 }, { 13, 11 }, { 13, 11 }, { 12, 12 }, { 12, 12 }, { 12, 12 },
	{ 12, 12 }, { 12, 12 }, { 11, 13 }, { 11, 13 }, { 11, 13 }, { 11, 13 }, { 11, 13 },
	{ 10, 14 }, { 10, 14 }, { 10, 14 }, { 10, 14 }, { 10, 14 }, {  9, 15 }, {  9, 15 },
	{  9, 15 }, {  9, 15 }, {  9, 15 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 },
	{  8,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  6,  0 },
	{  6,  0 }, {  6,  0 }, {  6,  0 }, {  6,  0 }, {  5, 15 }, {  5, 15 }, {  5, 15 },
	{  5, 15 }, {  5, 15 }, {  4, 14 }, {  4, 14 }, {  4, 14 }, {  4, 14 }, {  4, 14 },
	{  3, 13 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  2, 12 }, {  2, 12 },
	{  2, 12 }, {  2, 12 }, {  2, 12 }, {  1, 12 }, {  1, 12 }, {  1, 12 }, {  1, 12 },
	{  1, 12 }, {  0, 13 }, {  0, 13 }, {  0, 13 }, {  0, 13 }, {  0, 13 }, { 47, 14 },
	{ 47, 14 }, { 47, 14 }, { 47, 14 }, { 47, 14 }, { 46, 15 }, { 46, 15 }, { 46, 15 },
	{ 46, 15 }, { 46, 15 }, { 45,  0 }, { 45,  0 }, { 45,  0 }, { 45,  0 }, { 45,  0 },
	{ 44,  1 }, { 44,  1 }, { 44,  1 }, { 44,  1 }, { 44,  1 }, { 43,  2 }, { 43,  2 },
	{ 43,  2 }, { 43,  2 }, { 43,  2 }, { 42,  3 }, { 42,  3 }, { 42,  3 }, { 42,  3 },
	{ 42,  3 }, { 41,  4 }, { 41,  4 }, { 41,  4 }, { 41,  4 }, { 41,  4 }, { 40,  5 },
	{ 40,  5 }, { 40,  5 }, { 40,  5 }, { 40,  5 }, { 39,  6 }, { 39,  6 }, { 39,  6 },
	{ 39,  6 }, { 39,  6 }, { 38,  7 }, { 38,  7 }, { 38,  7 }, { 38,  7 }, { 38,  7 },
	{ 37,  8 }, { 37,  8 }, { 37,  8 }, { 37,  8 }, { 37,  8 }, { 36,  9 }, { 36,  9 },
	{ 36,  9 }, { 36,  9 }, { 36,  9 }, { 35, 10 }, { 35, 10 }, { 35, 10 }, { 35, 10 },
	{ 35, 10 }, { 34, 11 }, { 34, 11 }, { 34, 11 }, { 34, 11 }, { 34, 11 }, { 33, 12 },
	{ 33, 12 }, { 33, 12 }, { 33, 12 }, { 33, 12 }, { 32, 13 }, { 32, 13 }, { 32, 13 },
	{ 32, 13 }, { 32, 13 }, { 31, 14 }, { 31, 14 }, { 31, 14 }, { 31, 14 }, { 31, 14 },
	{ 30, 15 }, { 30, 15 }, { 30, 15 }, { 30, 15 }, { 30, 15 }, { 29,  0 }, { 29,  0 },
	{ 29,  0 }, { 29,  0 }, { 29,  0 }, { 28,  1 }, { 28,  1 }, { 28,  1 }, { 28,  1 },
	{ 28,  1 }, { 27,  2 }, { 27,  2 }, { 27,  2 }, { 27,  2 }, { 27,  2 }, { 26,  3 },
	{ 26,  3 }, { 26,  3 }, { 26,  3 }, { 26,  3 }, { 25,  3 }, { 25,  3 }, { 25,  3 },
	{ 25,  3 }, { 25,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 },
	{ 23,  2 }, { 23,  2 }, { 23,  2 }, { 23,  2 }, { 23,  2 }, { 22,  1 }, { 22,  1 },
	{ 22,  1 }, { 22,  1 }, { 22,  1 }, { 22,  1 }, { 21,  0 }, { 21,  0 }, { 21,  0 },
	{ 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 20,  0 }, { 20,  0 }, { 20,  0 },
	{ 20,  0 }, { 20,  0 }, { 20,  0 }, { 20,  0 }, { 20,  0 }, { 20,  0 }, { 21,  0 },
	{ 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 22,  0 },
	{ 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 23,  0 }, { 23,  0 },
	{ 23,  0 }, { 23,  0 }, { 23,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 },
	{ 24,  0 }, { 25,  0 }, { 25,  0 }, { 25,  0 }, { 25,  0 }, { 25,  0 }, { 26,  0 },
	{ 26,  0 }, { 26,  0 }, { 26,  0 }, { 26,  0 }, { 27,  0 }, { 27,  0 }, { 27,  0 },
	{ 27,  0 }, { 27,  0 }, { 28,  0 }, { 28,  0 }, { 28,  0 }, { 28,  0 }, { 28,  0 },
	{ 29,  0 }, { 29,  0 }, { 29,  0 }, { 29,  0 }, { 29,  0 }, { 30,  0 }, { 30,  0 },
	{ 30,  0 }, { 30,  0 }, { 30,  0 }, { 31,  0 }, { 31,  0 }, { 31,  0 }, { 31,  0 },
	{ 31,  0 }, { 32,  0 }, { 32,  0 }, { 32,  0 }, { 32,  0 }, { 32,  0 }, { 33,  0 },
	{ 33,  0 }, { 33,  0 }, { 33,  0 }, { 33,  0 }, { 34,  0 }, { 34,  0 }, { 34,  0 },
	{ 34,  0 }, { 34,  0 }, { 35,  0 }, { 35,  0 }, { 35,  0 }, { 35,  0 }, { 35,  0 },
	{ 36,  0 }, { 36,  0 }, { 36,  0 }, { 36,  0 }, { 36,  0 }, { 37,  0 }, { 37,  0 },
	{ 37,  0 }, { 37,  0 }, { 37,  0 }, { 38,  0 }, { 38,  0 }, { 38,  0 }, { 38,  0 },
	{ 38,  0 }, { 39,  0 }, { 39,  0 }, { 39,  0 }, { 39,  0 }, { 39,  0 }, { 40,  0 },
	{ 40,  0 }, { 40,  0 }, { 40,  0 }, { 40,  0 }, { 41,  0 }, { 41,  0 }, { 41,  0 },
	{ 41,  0 }, { 41,  0 }, { 42,  0 }, { 42,  0 }, { 42,  0 }, { 42,  0 }, { 42,  0 },
	{ 43,  0 }, { 43,  0 }, { 43,  0 }, { 43,  0 }, { 43,  0 }, { 44,  0 }, { 44,  0 },
	{ 44,  0 }, { 44,  0 }, { 44,  0 }, { 45,  0 }, { 45,  0 }, { 45,  0 }, { 45,  0 },
	{ 45,  0 }, { 46,  0 }, { 46,  0 }, { 46,  0 }, { 46,  0 }, { 46,  0 }, { 47,  0 },
	{ 47,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{  0,  0 }, {  0,  0 },
	{ 0xFF },
};

/** rct2: 0x009A1751 */
static const top_spin_time_to_sprite_map TopSpinTimeToSpriteMap_1[] = {
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{  0,  0 }, {  0,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 },
	{  1,  0 }, {  1,  0 }, {  1,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 },
	{  2,  0 }, {  2,  0 }, {  2,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 },
	{  3,  0 }, {  3,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 },
	{  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  6,  0 }, {  6,  0 },
	{  6,  0 }, {  6,  0 }, {  6,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 },
	{  7,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  9,  0 },
	{  9,  0 }, {  9,  0 }, {  9,  0 }, {  9,  0 }, { 10,  0 }, { 10,  0 }, { 10,  0 },
	{ 10,  0 }, { 10,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 },
	{ 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 13,  0 }, { 13,  0 },
	{ 13,  0 }, { 13,  0 }, { 13,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 },
	{ 14,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 16,  0 },
	{ 16,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 },
	{ 17,  0 }, { 17,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 },
	{ 19,  0 }, { 19,  0 }, { 19,  0 }, { 19,  0 }, { 19,  0 }, { 20,  0 }, { 20,  0 },
	{ 20,  0 }, { 20,  0 }, { 20,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 },
	{ 21,  0 }, { 21,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 },
	{ 22,  0 }, { 22,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 },
	{ 23,  0 }, { 23,  0 }, { 23,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  1 },
	{ 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  2 },
	{ 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  3 }, { 24,  3 },
	{ 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  4 }, { 24,  4 }, { 24,  4 }, { 24,  4 },
	{ 24,  4 }, { 24,  5 }, { 24,  5 }, { 24,  5 }, { 24,  5 }, { 24,  5 }, { 24,  6 },
	{ 24,  6 }, { 24,  6 }, { 24,  6 }, { 24,  6 }, { 24,  7 }, { 24,  7 }, { 24,  7 },
	{ 24,  7 }, { 24,  7 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 },
	{ 24,  9 }, { 24,  9 }, { 24,  9 }, { 24,  9 }, { 24,  9 }, { 24, 10 }, { 24, 10 },
	{ 24, 10 }, { 24, 10 }, { 24, 10 }, { 24, 11 }, { 24, 11 }, { 24, 11 }, { 24, 11 },
	{ 24, 11 }, { 24, 12 }, { 24, 12 }, { 24, 12 }, { 24, 12 }, { 24, 12 }, { 24, 13 },
	{ 24, 13 }, { 24, 13 }, { 24, 13 }, { 24, 13 }, { 24, 14 }, { 24, 14 }, { 24, 14 },
	{ 24, 14 }, { 24, 14 }, { 24, 15 }, { 24, 15 }, { 24, 15 }, { 24, 15 }, { 24, 15 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  1 }, { 24,  1 },
	{ 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  2 },
	{ 24,  2 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 23,  4 },
	{ 23,  4 }, { 23,  4 }, { 23,  4 }, { 23,  4 }, { 22,  4 }, { 22,  4 }, { 22,  4 },
	{ 22,  4 }, { 22,  4 }, { 21,  4 }, { 21,  4 }, { 21,  4 }, { 21,  4 }, { 21,  4 },
	{ 20,  4 }, { 20,  4 }, { 20,  4 }, { 20,  4 }, { 20,  4 }, { 19,  4 }, { 19,  4 },
	{ 19,  4 }, { 19,  4 }, { 19,  4 }, { 18,  4 }, { 18,  4 }, { 18,  4 }, { 18,  4 },
	{ 18,  4 }, { 17,  4 }, { 17,  4 }, { 17,  4 }, { 17,  4 }, { 17,  4 }, { 16,  4 },
	{ 16,  4 }, { 16,  4 }, { 16,  4 }, { 16,  4 }, { 15,  4 }, { 15,  4 }, { 15,  4 },
	{ 15,  4 }, { 15,  4 }, { 14,  5 }, { 14,  5 }, { 14,  5 }, { 14,  5 }, { 14,  5 },
	{ 13,  6 }, { 13,  6 }, { 13,  6 }, { 13,  6 }, { 13,  6 }, { 12,  7 }, { 12,  7 },
	{ 12,  7 }, { 12,  7 }, { 12,  7 }, { 12,  8 }, { 12,  8 }, { 12,  8 }, { 12,  8 },
	{ 12,  8 }, { 12,  9 }, { 12,  9 }, { 12,  9 }, { 12,  9 }, { 12,  9 }, { 12, 10 },
	{ 12, 10 }, { 12, 10 }, { 12, 10 }, { 12, 10 }, { 12, 11 }, { 12, 11 }, { 12, 11 },
	{ 12, 11 }, { 12, 11 }, { 12, 12 }, { 12, 12 }, { 12, 12 }, { 12, 12 }, { 12, 12 },
	{ 13, 12 }, { 13, 12 }, { 13, 12 }, { 13, 12 }, { 13, 12 }, { 14, 12 }, { 14, 12 },
	{ 14, 12 }, { 14, 12 }, { 14, 12 }, { 15, 12 }, { 15, 12 }, { 15, 12 }, { 15, 12 },
	{ 15, 12 }, { 16, 12 }, { 16, 12 }, { 16, 12 }, { 16, 12 }, { 16, 12 }, { 17, 12 },
	{ 17, 12 }, { 17, 12 }, { 17, 12 }, { 17, 12 }, { 18, 12 }, { 18, 12 }, { 18, 12 },
	{ 18, 12 }, { 18, 12 }, { 19, 12 }, { 19, 12 }, { 19, 12 }, { 19, 12 }, { 19, 12 },
	{ 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 21, 13 }, { 21, 13 },
	{ 21, 13 }, { 21, 13 }, { 21, 13 }, { 22, 14 }, { 22, 14 }, { 22, 14 }, { 22, 14 },
	{ 22, 14 }, { 23, 15 }, { 23, 15 }, { 23, 15 }, { 23, 15 }, { 23, 15 }, { 24,  0 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 25,  1 }, { 25,  1 }, { 25,  1 },
	{ 25,  1 }, { 25,  1 }, { 26,  2 }, { 26,  2 }, { 26,  2 }, { 26,  2 }, { 26,  2 },
	{ 27,  3 }, { 27,  3 }, { 27,  3 }, { 27,  3 }, { 27,  3 }, { 28,  4 }, { 28,  4 },
	{ 28,  4 }, { 28,  4 }, { 28,  4 }, { 29,  5 }, { 29,  5 }, { 29,  5 }, { 29,  5 },
	{ 29,  5 }, { 30,  6 }, { 30,  6 }, { 30,  6 }, { 30,  6 }, { 30,  6 }, { 31,  7 },
	{ 31,  7 }, { 31,  7 }, { 31,  7 }, { 31,  7 }, { 32,  8 }, { 32,  8 }, { 32,  8 },
	{ 32,  8 }, { 32,  8 }, { 33,  9 }, { 33,  9 }, { 33,  9 }, { 33,  9 }, { 33,  9 },
	{ 34, 10 }, { 34, 10 }, { 34, 10 }, { 34, 10 }, { 34, 10 }, { 35, 11 }, { 35, 11 },
	{ 35, 11 }, { 35, 11 }, { 35, 11 }, { 36, 12 }, { 36, 12 }, { 36, 12 }, { 36, 12 },
	{ 36, 12 }, { 37, 13 }, { 37, 13 }, { 37, 13 }, { 37, 13 }, { 37, 13 }, { 38, 14 },
	{ 38, 14 }, { 38, 14 }, { 38, 14 }, { 38, 14 }, { 39, 15 }, { 39, 15 }, { 39, 15 },
	{ 39, 15 }, { 39, 15 }, { 40,  0 }, { 40,  0 }, { 40,  0 }, { 40,  0 }, { 40,  0 },
	{ 41,  0 }, { 41,  0 }, { 41,  0 }, { 41,  0 }, { 41,  0 }, { 42,  0 }, { 42,  0 },
	{ 42,  0 }, { 42,  0 }, { 42,  0 }, { 43,  0 }, { 43,  0 }, { 43,  0 }, { 43,  0 },
	{ 43,  0 }, { 44,  0 }, { 44,  0 }, { 44,  0 }, { 44,  0 }, { 44,  0 }, { 45,  0 },
	{ 45,  0 }, { 45,  0 }, { 45,  0 }, { 45,  0 }, { 46,  0 }, { 46,  0 }, { 46,  0 },
	{ 46,  0 }, { 46,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 },
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  1, 15 }, {  1, 15 },
	{  1, 15 }, {  1, 15 }, {  1, 15 }, {  2, 14 }, {  2, 14 }, {  2, 14 }, {  2, 14 },
	{  2, 14 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  4, 12 },
	{  4, 12 }, {  4, 12 }, {  4, 12 }, {  4, 12 }, {  5, 11 }, {  5, 11 }, {  5, 11 },
	{  5, 11 }, {  5, 11 }, {  6, 10 }, {  6, 10 }, {  6, 10 }, {  6, 10 }, {  6, 10 },
	{  7,  9 }, {  7,  9 }, {  7,  9 }, {  7,  9 }, {  7,  9 }, {  8,  8 }, {  8,  8 },
	{  8,  8 }, {  8,  8 }, {  8,  8 }, {  9,  7 }, {  9,  7 }, {  9,  7 }, {  9,  7 },
	{  9,  7 }, { 10,  6 }, { 10,  6 }, { 10,  6 }, { 10,  6 }, { 10,  6 }, { 11,  5 },
	{ 11,  5 }, { 11,  5 }, { 11,  5 }, { 11,  5 }, { 12,  4 }, { 12,  4 }, { 12,  4 },
	{ 12,  4 }, { 12,  4 }, { 13,  3 }, { 13,  3 }, { 13,  3 }, { 13,  3 }, { 13,  3 },
	{ 14,  2 }, { 14,  2 }, { 14,  2 }, { 14,  2 }, { 14,  2 }, { 15,  1 }, { 15,  1 },
	{ 15,  1 }, { 15,  1 }, { 15,  1 }, { 16,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 },
	{ 16,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 },
	{ 17,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 },
	{ 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 },
	{ 17,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 },
	{ 16,  0 }, { 16,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 },
	{ 14,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 }, { 13,  0 }, { 13,  0 },
	{ 13,  0 }, { 13,  0 }, { 13,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 },
	{ 12,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 10,  0 },
	{ 10,  0 }, { 10,  0 }, { 10,  0 }, { 10,  0 }, {  9,  0 }, {  9,  0 }, {  9,  0 },
	{  9,  0 }, {  9,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 },
	{  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  6,  0 }, {  6,  0 },
	{  6,  0 }, {  6,  0 }, {  6,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 },
	{  5,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  3,  0 },
	{  3,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 },
	{  2,  0 }, {  2,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 },
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{ 0xFF },
};

/** rct2: 0x009A1CC6 */
static const top_spin_time_to_sprite_map TopSpinTimeToSpriteMap_2[] = {
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{  0,  0 }, {  0,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 }, {  1,  0 },
	{  1,  0 }, {  1,  0 }, {  1,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 }, {  2,  0 },
	{  2,  0 }, {  2,  0 }, {  2,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 }, {  3,  0 },
	{  3,  0 }, {  3,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 },
	{  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  5,  0 }, {  6,  0 }, {  6,  0 },
	{  6,  0 }, {  6,  0 }, {  6,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 }, {  7,  0 },
	{  7,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  8,  0 }, {  9,  0 },
	{  9,  0 }, {  9,  0 }, {  9,  0 }, {  9,  0 }, { 10,  0 }, { 10,  0 }, { 10,  0 },
	{ 10,  0 }, { 10,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 }, { 11,  0 },
	{ 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 12,  0 }, { 13,  0 }, { 13,  0 },
	{ 13,  0 }, { 13,  0 }, { 13,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 }, { 14,  0 },
	{ 14,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 15,  0 }, { 16,  0 },
	{ 16,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 }, { 17,  0 }, { 17,  0 }, { 17,  0 },
	{ 17,  0 }, { 17,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 }, { 18,  0 },
	{ 19,  0 }, { 19,  0 }, { 19,  0 }, { 19,  0 }, { 19,  0 }, { 20,  0 }, { 20,  0 },
	{ 20,  0 }, { 20,  0 }, { 20,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 }, { 21,  0 },
	{ 21,  0 }, { 21,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 }, { 22,  0 },
	{ 22,  0 }, { 22,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 }, { 23,  0 },
	{ 23,  0 }, { 23,  0 }, { 23,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  1 },
	{ 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  2 },
	{ 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  3 }, { 24,  3 },
	{ 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  4 }, { 24,  4 }, { 24,  4 }, { 24,  4 },
	{ 24,  4 }, { 24,  5 }, { 24,  5 }, { 24,  5 }, { 24,  5 }, { 24,  5 }, { 24,  6 },
	{ 24,  6 }, { 24,  6 }, { 24,  6 }, { 24,  6 }, { 24,  7 }, { 24,  7 }, { 24,  7 },
	{ 24,  7 }, { 24,  7 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 },
	{ 24,  9 }, { 24,  9 }, { 24,  9 }, { 24,  9 }, { 24,  9 }, { 24, 10 }, { 24, 10 },
	{ 24, 10 }, { 24, 10 }, { 24, 10 }, { 24, 11 }, { 24, 11 }, { 24, 11 }, { 24, 11 },
	{ 24, 11 }, { 24, 12 }, { 24, 12 }, { 24, 12 }, { 24, 12 }, { 24, 12 }, { 24, 13 },
	{ 24, 13 }, { 24, 13 }, { 24, 13 }, { 24, 13 }, { 24, 14 }, { 24, 14 }, { 24, 14 },
	{ 24, 14 }, { 24, 14 }, { 24, 15 }, { 24, 15 }, { 24, 15 }, { 24, 15 }, { 24, 15 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  1 }, { 24,  1 },
	{ 24,  1 }, { 24,  1 }, { 24,  1 }, { 24,  2 }, { 24,  2 }, { 24,  2 }, { 24,  2 },
	{ 24,  2 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 24,  3 }, { 23,  4 },
	{ 23,  4 }, { 23,  4 }, { 23,  4 }, { 23,  4 }, { 22,  4 }, { 22,  4 }, { 22,  4 },
	{ 22,  4 }, { 22,  4 }, { 21,  4 }, { 21,  4 }, { 21,  4 }, { 21,  4 }, { 21,  4 },
	{ 20,  4 }, { 20,  4 }, { 20,  4 }, { 20,  4 }, { 20,  4 }, { 19,  4 }, { 19,  4 },
	{ 19,  4 }, { 19,  4 }, { 19,  4 }, { 18,  4 }, { 18,  4 }, { 18,  4 }, { 18,  4 },
	{ 18,  4 }, { 17,  4 }, { 17,  4 }, { 17,  4 }, { 17,  4 }, { 17,  4 }, { 16,  4 },
	{ 16,  4 }, { 16,  4 }, { 16,  4 }, { 16,  4 }, { 15,  4 }, { 15,  4 }, { 15,  4 },
	{ 15,  4 }, { 15,  4 }, { 14,  5 }, { 14,  5 }, { 14,  5 }, { 14,  5 }, { 14,  5 },
	{ 13,  6 }, { 13,  6 }, { 13,  6 }, { 13,  6 }, { 13,  6 }, { 12,  7 }, { 12,  7 },
	{ 12,  7 }, { 12,  7 }, { 12,  7 }, { 12,  8 }, { 12,  8 }, { 12,  8 }, { 12,  8 },
	{ 12,  8 }, { 12,  9 }, { 12,  9 }, { 12,  9 }, { 12,  9 }, { 12,  9 }, { 12, 10 },
	{ 12, 10 }, { 12, 10 }, { 12, 10 }, { 12, 10 }, { 12, 11 }, { 12, 11 }, { 12, 11 },
	{ 12, 11 }, { 12, 11 }, { 12, 12 }, { 12, 12 }, { 12, 12 }, { 12, 12 }, { 12, 12 },
	{ 13, 12 }, { 13, 12 }, { 13, 12 }, { 13, 12 }, { 13, 12 }, { 14, 12 }, { 14, 12 },
	{ 14, 12 }, { 14, 12 }, { 14, 12 }, { 15, 12 }, { 15, 12 }, { 15, 12 }, { 15, 12 },
	{ 15, 12 }, { 16, 12 }, { 16, 12 }, { 16, 12 }, { 16, 12 }, { 16, 12 }, { 17, 12 },
	{ 17, 12 }, { 17, 12 }, { 17, 12 }, { 17, 12 }, { 18, 12 }, { 18, 12 }, { 18, 12 },
	{ 18, 12 }, { 18, 12 }, { 19, 12 }, { 19, 12 }, { 19, 12 }, { 19, 12 }, { 19, 12 },
	{ 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 21, 13 }, { 21, 13 },
	{ 21, 13 }, { 21, 13 }, { 21, 13 }, { 22, 14 }, { 22, 14 }, { 22, 14 }, { 22, 14 },
	{ 22, 14 }, { 23, 15 }, { 23, 15 }, { 23, 15 }, { 23, 15 }, { 23, 15 }, { 24,  0 },
	{ 24,  0 }, { 24,  0 }, { 24,  0 }, { 24,  0 }, { 25,  1 }, { 25,  1 }, { 25,  1 },
	{ 25,  1 }, { 25,  1 }, { 26,  2 }, { 26,  2 }, { 26,  2 }, { 26,  2 }, { 26,  2 },
	{ 27,  3 }, { 27,  3 }, { 27,  3 }, { 27,  3 }, { 27,  3 }, { 28,  4 }, { 28,  4 },
	{ 28,  4 }, { 28,  4 }, { 28,  4 }, { 29,  5 }, { 29,  5 }, { 29,  5 }, { 29,  5 },
	{ 29,  5 }, { 30,  6 }, { 30,  6 }, { 30,  6 }, { 30,  6 }, { 30,  6 }, { 31,  7 },
	{ 31,  7 }, { 31,  7 }, { 31,  7 }, { 31,  7 }, { 32,  8 }, { 32,  8 }, { 32,  8 },
	{ 32,  8 }, { 32,  8 }, { 33,  9 }, { 33,  9 }, { 33,  9 }, { 33,  9 }, { 33,  9 },
	{ 34, 10 }, { 34, 10 }, { 34, 10 }, { 34, 10 }, { 34, 10 }, { 35, 11 }, { 35, 11 },
	{ 35, 11 }, { 35, 11 }, { 35, 11 }, { 36, 12 }, { 36, 12 }, { 36, 12 }, { 36, 12 },
	{ 36, 12 }, { 37, 13 }, { 37, 13 }, { 37, 13 }, { 37, 13 }, { 37, 13 }, { 38, 14 },
	{ 38, 14 }, { 38, 14 }, { 38, 14 }, { 38, 14 }, { 39, 15 }, { 39, 15 }, { 39, 15 },
	{ 39, 15 }, { 39, 15 }, { 40,  0 }, { 40,  0 }, { 40,  0 }, { 40,  0 }, { 40,  0 },
	{ 41,  0 }, { 41,  0 }, { 41,  0 }, { 41,  0 }, { 41,  0 }, { 42,  0 }, { 42,  0 },
	{ 42,  0 }, { 42,  0 }, { 42,  0 }, { 43,  0 }, { 43,  0 }, { 43,  0 }, { 43,  0 },
	{ 43,  0 }, { 44,  0 }, { 44,  0 }, { 44,  0 }, { 44,  0 }, { 44,  0 }, { 45,  0 },
	{ 45,  0 }, { 45,  0 }, { 45,  0 }, { 45,  0 }, { 46,  0 }, { 46,  0 }, { 46,  0 },
	{ 46,  0 }, { 46,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 }, { 47,  0 },
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  1, 15 }, {  1, 15 },
	{  1, 15 }, {  1, 15 }, {  1, 15 }, {  2, 14 }, {  2, 14 }, {  2, 14 }, {  2, 14 },
	{  2, 14 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  3, 13 }, {  4, 12 },
	{  4, 12 }, {  4, 12 }, {  4, 12 }, {  4, 12 }, {  5, 11 }, {  5, 11 }, {  5, 11 },
	{  5, 11 }, {  5, 11 }, {  6, 10 }, {  6, 10 }, {  6, 10 }, {  6, 10 }, {  6, 10 },
	{  7,  9 }, {  7,  9 }, {  7,  9 }, {  7,  9 }, {  7,  9 }, {  8,  8 }, {  8,  8 },
	{  8,  8 }, {  8,  8 }, {  8,  8 }, {  9,  7 }, {  9,  7 }, {  9,  7 }, {  9,  7 },
	{  9,  7 }, { 10,  6 }, { 10,  6 }, { 10,  6 }, { 10,  6 }, { 10,  6 }, { 11,  5 },
	{ 11,  5 }, { 11,  5 }, { 11,  5 }, { 11,  5 }, { 12,  4 }, { 12,  4 }, { 12,  4 },
	{ 12,  4 }, { 12,  4 }, { 13,  3 }, { 13,  3 }, { 13,  3 }, { 13,  3 }, { 13,  3 },
	{ 14,  2 }, { 14,  2 }, { 14,  2 }, { 14,  2 }, { 14,  2 }, { 15,  1 }, { 15,  1 },
	{ 15,  1 }, { 15,  1 }, { 15,  1 }, { 16,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 },
	{ 16,  0 }, { 17, 15 }, { 17, 15 }, { 17, 15 }, { 17, 15 }, { 17, 15 }, { 18, 14 },
	{ 18, 14 }, { 18, 14 }, { 18, 14 }, { 18, 14 }, { 19, 13 }, { 19, 13 }, { 19, 13 },
	{ 19, 13 }, { 19, 13 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 },
	{ 21, 11 }, { 21, 11 }, { 21, 11 }, { 21, 11 }, { 21, 11 }, { 22, 10 }, { 22, 10 },
	{ 22, 10 }, { 22, 10 }, { 22, 10 }, { 23,  9 }, { 23,  9 }, { 23,  9 }, { 23,  9 },
	{ 23,  9 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 25,  7 },
	{ 25,  7 }, { 25,  7 }, { 25,  7 }, { 25,  7 }, { 26,  6 }, { 26,  6 }, { 26,  6 },
	{ 26,  6 }, { 26,  6 }, { 27,  5 }, { 27,  5 }, { 27,  5 }, { 27,  5 }, { 27,  5 },
	{ 28,  4 }, { 28,  4 }, { 28,  4 }, { 28,  4 }, { 28,  4 }, { 29,  3 }, { 29,  3 },
	{ 29,  3 }, { 29,  3 }, { 29,  3 }, { 30,  2 }, { 30,  2 }, { 30,  2 }, { 30,  2 },
	{ 30,  2 }, { 31,  1 }, { 31,  1 }, { 31,  1 }, { 31,  1 }, { 31,  1 }, { 32,  0 },
	{ 32,  0 }, { 32,  0 }, { 32,  0 }, { 32,  0 }, { 33, 15 }, { 33, 15 }, { 33, 15 },
	{ 33, 15 }, { 33, 15 }, { 34, 14 }, { 34, 14 }, { 34, 14 }, { 34, 14 }, { 34, 14 },
	{ 35, 13 }, { 35, 13 }, { 35, 13 }, { 35, 13 }, { 35, 13 }, { 36, 12 }, { 36, 12 },
	{ 36, 12 }, { 36, 12 }, { 36, 12 }, { 37, 11 }, { 37, 11 }, { 37, 11 }, { 37, 11 },
	{ 37, 11 }, { 38, 10 }, { 38, 10 }, { 38, 10 }, { 38, 10 }, { 38, 10 }, { 39,  9 },
	{ 39,  9 }, { 39,  9 }, { 39,  9 }, { 39,  9 }, { 40,  8 }, { 40,  8 }, { 40,  8 },
	{ 40,  8 }, { 40,  8 }, { 41,  8 }, { 41,  8 }, { 41,  8 }, { 41,  8 }, { 41,  8 },
	{ 41,  8 }, { 41,  8 }, { 42,  8 }, { 42,  8 }, { 42,  8 }, { 42,  8 }, { 42,  8 },
	{ 42,  8 }, { 42,  8 }, { 42,  8 }, { 42,  8 }, { 42,  8 }, { 41,  8 }, { 41,  8 },
	{ 41,  8 }, { 41,  8 }, { 41,  8 }, { 41,  8 }, { 41,  8 }, { 40,  8 }, { 40,  8 },
	{ 40,  8 }, { 40,  8 }, { 40,  8 }, { 39,  9 }, { 39,  9 }, { 39,  9 }, { 39,  9 },
	{ 39,  9 }, { 38, 10 }, { 38, 10 }, { 38, 10 }, { 38, 10 }, { 38, 10 }, { 37, 11 },
	{ 37, 11 }, { 37, 11 }, { 37, 11 }, { 37, 11 }, { 36, 12 }, { 36, 12 }, { 36, 12 },
	{ 36, 12 }, { 36, 12 }, { 35, 13 }, { 35, 13 }, { 35, 13 }, { 35, 13 }, { 35, 13 },
	{ 34, 14 }, { 34, 14 }, { 34, 14 }, { 34, 14 }, { 34, 14 }, { 33, 15 }, { 33, 15 },
	{ 33, 15 }, { 33, 15 }, { 33, 15 }, { 32,  0 }, { 32,  0 }, { 32,  0 }, { 32,  0 },
	{ 32,  0 }, { 31,  1 }, { 31,  1 }, { 31,  1 }, { 31,  1 }, { 31,  1 }, { 30,  2 },
	{ 30,  2 }, { 30,  2 }, { 30,  2 }, { 30,  2 }, { 29,  3 }, { 29,  3 }, { 29,  3 },
	{ 29,  3 }, { 29,  3 }, { 28,  4 }, { 28,  4 }, { 28,  4 }, { 28,  4 }, { 28,  4 },
	{ 27,  5 }, { 27,  5 }, { 27,  5 }, { 27,  5 }, { 27,  5 }, { 26,  6 }, { 26,  6 },
	{ 26,  6 }, { 26,  6 }, { 26,  6 }, { 25,  7 }, { 25,  7 }, { 25,  7 }, { 25,  7 },
	{ 25,  7 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 24,  8 }, { 23,  9 },
	{ 23,  9 }, { 23,  9 }, { 23,  9 }, { 23,  9 }, { 22, 10 }, { 22, 10 }, { 22, 10 },
	{ 22, 10 }, { 22, 10 }, { 21, 11 }, { 21, 11 }, { 21, 11 }, { 21, 11 }, { 21, 11 },
	{ 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 20, 12 }, { 19, 13 }, { 19, 13 },
	{ 19, 13 }, { 19, 13 }, { 19, 13 }, { 18, 14 }, { 18, 14 }, { 18, 14 }, { 18, 14 },
	{ 18, 14 }, { 17, 15 }, { 17, 15 }, { 17, 15 }, { 17, 15 }, { 17, 15 }, { 16,  0 },
	{ 16,  0 }, { 16,  0 }, { 16,  0 }, { 16,  0 }, { 15,  1 }, { 15,  1 }, { 15,  1 },
	{ 15,  1 }, { 15,  1 }, { 14,  2 }, { 14,  2 }, { 14,  2 }, { 14,  2 }, { 14,  2 },
	{ 13,  3 }, { 13,  3 }, { 13,  3 }, { 13,  3 }, { 13,  3 }, { 12,  2 }, { 12,  2 },
	{ 12,  2 }, { 12,  2 }, { 12,  2 }, { 11,  1 }, { 11,  1 }, { 11,  1 }, { 11,  1 },
	{ 11,  1 }, { 10,  0 }, { 10,  0 }, { 10,  0 }, { 10,  0 }, { 10,  0 }, {  9, 15 },
	{  9, 15 }, {  9, 15 }, {  9, 15 }, {  9, 15 }, {  8, 14 }, {  8, 14 }, {  8, 14 },
	{  8, 14 }, {  8, 14 }, {  7, 13 }, {  7, 13 }, {  7, 13 }, {  7, 13 }, {  7, 13 },
	{  6, 14 }, {  6, 14 }, {  6, 14 }, {  6, 14 }, {  6, 14 }, {  5, 15 }, {  5, 15 },
	{  5, 15 }, {  5, 15 }, {  5, 15 }, {  4,  0 }, {  4,  0 }, {  4,  0 }, {  4,  0 },
	{  4,  0 }, {  3,  1 }, {  3,  1 }, {  3,  1 }, {  3,  1 }, {  3,  1 }, {  2,  2 },
	{  2,  2 }, {  2,  2 }, {  2,  2 }, {  2,  2 }, {  1,  1 }, {  1,  1 }, {  1,  1 },
	{  1,  1 }, {  1,  1 }, {  1,  1 }, {  1,  1 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 }, {  0,  0 },
	{ 0xFF },
};

/** rct2: 0x009A12E0 */
const top_spin_time_to_sprite_map * TopSpinTimeToSpriteMaps[] = {
	TopSpinTimeToSpriteMap_0,
	TopSpinTimeToSpriteMap_1,
	TopSpinTimeToSpriteMap_2,
};
