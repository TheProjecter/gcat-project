/*  Copyright 2012 Daniel Wilson.
 *
 *  gammaMapUtils.h
 *  Part of the gammaMap library.
 *
 *  The gammaMap library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  The gammaMap library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with the gammaMap library. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _GAMMAMAPUTILS_H_
#define _GAMMAMAPUTILS_H_

namespace gammaMapUtils {
	// Variables
	extern const double SQRT2PI;
	extern const char* oneLetterCodes;

	// Functions
	double LambertW(const double z);
	double LambertW1(const double z);
	double hypergeometric1F1(const double a, const double b, const double c);
};

#endif // _GAMMAMAPUTILS_H_