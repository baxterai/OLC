/*******************************************************************************
 *
 * This file is part of BAIPROJECT.
 *
 * BAIPROJECT is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License version 3
 * only, as published by the Free Software Foundation. The use of
 * intermediary programs or interfaces including file i/o is considered
 * remote network interaction. This does not imply such arrangements
 * do not constitute derivative works.
 *
 * BAIPROJECT is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License version 3 for more details
 * (a copy is included in the LICENSE file that accompanied this code).
 *
 * You should have received a copy of the GNU Affero General Public License
 * version 3 along with BAIPROJECT.  If not, see <http://www.gnu.org/licenses/>
 * for a copy of the AGPLv3 License.
 *
 *******************************************************************************/

/*******************************************************************************
 *
 * File Name: LDjpeg.hpp
 * Author: Richard Bruce Baxter - Copyright (c) 2005-2021 Baxter AI (baxterai.com)
 * Project: Generic Construct Functions
 * Project Version: 3p4b 07-August-2021
 * /
 *******************************************************************************/


#ifndef HEADER_LD_JPEG
#define HEADER_LD_JPEG

#include "SHAREDglobalDefs.hpp"
#ifdef USE_ATOR
	#include "ATORglobalDefs.hpp"
#include "SHAREDvars.hpp"
#include "jpeglib.h"
#include "jmemsys.h"
#endif

class LDjpegClass
{
	private: SHAREDvarsClass SHAREDvars;
	#ifdef ATOR_VERBOSE_IMAGE_COMPARISON_DECISION_TREE_PATTERN_RECOGNITION_FOURIER_TRANSFORM_BINNING_COMPARISON_DCT_TABLES_TO_HTML
	public: void setPointerToDCTtableHTMLoutputString(string* pointer);
	#endif

	public: int readVerySmallHighlyCompressedJPEGfileAndStoreDCTcoefficients(const string filename, schar dctCoeffArrayY[], schar dctCoeffArrayYcr[], schar dctCoeffArrayYcb[], const int dctCoeffArrayHeight, const int dctCoeffArrayWidth, const bool printOutput);
};

#endif
