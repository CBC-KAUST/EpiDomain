/*
 * CoverageCalc.h
 *
 *  Created on: Raj. 23, 1439 AH
 *      Author: mariapkg
 */

#ifndef SRC_COVERAGECALC_H_
#define SRC_COVERAGECALC_H_
# include "types.h"
#include <fstream>
#include <string>
#include <iostream>

class CoverageCalc {
public:
	CoverageCalc();
	virtual ~CoverageCalc();
	void calculate_coverage(const char *,const char *);
};

#endif /* SRC_COVERAGECALC_H_ */
