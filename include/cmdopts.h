/*
	Copyright (c) 2018, Electrux
	All rights reserved.
	Using the BSD 3-Clause license for the project,
	main LICENSE file resides in project's root directory.

	Please read that file and understand the license terms
	before using or altering the project.
*/

#ifndef CMDOPTS_H
#define CMDOPTS_H

#include <stdlib.h>

#include "strvec.h"

// Option bit masks
static const size_t OPT_A = 1 << 0;
static const size_t OPT_CAPS_A = 1 << 1;
static const size_t OPT_D = 1 << 2;
static const size_t OPT_F = 1 << 3;
static const size_t OPT_G = 1 << 4;
static const size_t OPT_H = 1 << 5;
static const size_t OPT_I = 1 << 6;
static const size_t OPT_L = 1 << 7;
static const size_t OPT_T = 1 << 8;
static const size_t OPT_S = 1 << 9;
static const size_t OPT_1 = 1 << 10;

size_t get_cmd_opts( const int argc, const char ** argv, struct str_vec * locs );

#endif // CMDOPTS_H
