/*
 * CoverageCalc.h
 *
 *  Created on: Raj. 23, 1439 AH
 *      Author: mariapkg
 */

#ifndef SRC_COVERAGE_H_
#define SRC_COVERAGE_H_
#include <fstream>
#include <string>
#include <iostream>

class Coverage {
public:
	Coverage();
	void calc_cov(const char *,const char *);
	virtual ~Coverage();

};

#endif /* SRC_COVERAGECALC_H_ */
