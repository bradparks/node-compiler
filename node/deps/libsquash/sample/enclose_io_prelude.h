/*
 * Copyright (c) 2017 Minqi Pan <pmq2001@gmail.com>
 *                    Shengyuan Liu <sounder.liu@gmail.com>
 *
 * This file is part of libsquash, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#ifndef ENCLOSE_IO_PRELUDE_H_E46A560C
#define ENCLOSE_IO_PRELUDE_H_E46A560C

#ifdef _WIN32
#define WINDOWS_H_A80B5674
typedef unsigned short sqfs_mode_t;
typedef uint32_t sqfs_id_t;
typedef DWORD64 sqfs_off_t;
#ifdef dirent
#undef dirent
struct dirent
{
	long d_namlen;
	ino_t d_ino;
	char *d_name;
	char *d_altname;
	short d_altlen;
	uint8_t d_type;
};
#define dirent direct
#else
struct dirent
{
	long d_namlen;
	ino_t d_ino;
	char *d_name;
	char *d_altname;
	short d_altlen;
	uint8_t d_type;
};
#endif // dirent

#endif // _WIN32

#endif /* end of include guard: ENCLOSE_IO_PRELUDE_H_E46A560C */