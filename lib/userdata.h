/*
 * userdata.h -- userdata.c -- Get data on users (from /etc/passwd).
 * Copyright (c) 1999 Akim Demaille, Miguel Santana
 */

/*
 * This file is part of a2ps.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef USERDATA_H_
# define USERDATA_H_

#ifndef PARAMS
#  if PROTOTYPES
#    define PARAMS(protos) protos
#  else /* no PROTOTYPES */
#    define PARAMS(protos) ()
#  endif /* no PROTOTYPES */
#endif

struct userdata
{
  char *login;
  char *name;
  char *comments;
  char *home;
};

void userdata_get PARAMS ((struct userdata *udata));
void userdata_free PARAMS ((struct userdata *udata));
#endif /* !USERDATA_H_ */
