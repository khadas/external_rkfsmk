/* common.h - Common functions

   Copyright (C) 1993 Werner Almesberger <werner.almesberger@lrc.di.epfl.ch>
   Copyright (C) 2008-2014 Daniel Baumann <mail@daniel-baumann.ch>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.

   The complete text of the GNU General Public License
   can be found in /usr/share/common-licenses/GPL-3 file.
*/

#ifndef _COMMON_H
#define _COMMON_H

void Die(const char *msg, ...)
__attribute((noreturn, format(printf, 1, 2)));

/* Displays a prinf-style message and terminates the program. */

void pdie(const char *msg, ...)
__attribute((noreturn, format(printf, 1, 2)));


void *Malloc(int size);

/* Like die, but appends an error message according to the state of errno. */

void *Alloc(void **root, int size);

/* Like alloc, but registers the data area in a list described by ROOT. */

void Free(void **root);

/* Deallocates all RkAlloc'ed data areas described by ROOT. */

int min(int a, int b);

/* Returns the smaller integer value of a and b. */

char GetKey(const char *valid, const char *prompt);

/* Displays PROMPT and waits for user input. Only characters in VALID are
   accepted. Terminates the program on EOF. Returns the character. */

#endif
