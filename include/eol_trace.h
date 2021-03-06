#ifndef __EOL_TRACE__
#define __EOL_TRACE__
/*
    Copyright 2012 Engineer of Lies
    This file is part of the Engine of Lies game engine library

    The Engine of Lies (EOL) is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    EOL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the EOL game engine.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * this is a stub.  Once the physics has been more fleshed out, it will either be
 * replaced or removed.
 */

typedef struct
{
  eolVec3D pointOfImpact; /**<point of collision*/
  eolVec3D normal;        /**<normal of impacted surface*/
  eolFloat time;          /**<percentage of vector travelled before impact*/
}eolTrace;

#endif
