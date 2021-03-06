/*
 * Copyright © 2012 - Alfredo Liguoro <freddy@haxaddicts.net>
 * Orazio Briante <orazio.briante@hotmail.it>
 *
 * Licensed under the GNU General Public License Version 3
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 * or write to the Free Software Foundation, Inc., 51 Franklin St
 * Fifth Floor, Boston, MA  02110-1301  USA
 */


#ifndef CONSOLE_H_
#define CONSOLE_H_

#include <twitc/stdredef.h>

extern void
printHelp();
extern void
printVersion();
extern byte_t
shellParam(int, char **);

#endif /* CONSOLE_H_ */
