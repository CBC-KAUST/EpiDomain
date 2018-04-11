/*
 * CoverageCalc.cpp
 *
 *  Created on: Raj. 23, 1439 AH
 *      Author: mariapkg
 */
#include "CoverageCalc.h"
using namespace std;

CoverageCalc::CoverageCalc() { // @suppress("Member declaration not found")
}

CoverageCalc::~CoverageCalc() {
	// TODO Auto-generated destructor stub
}

void calcuate_coverage(const char * bedfile,const char * filename){
	string command;
	FILE *stream;
	string outfile_name;
	cout<<filename<<endl;
	string outfile=string(filename)+".cov";
	command="samtools bedcov " + string(bedfile) + " " + string(filename) + " > " + string(outfile);
	stream = popen(command.c_str(), "r");
	pclose(stream);
}
