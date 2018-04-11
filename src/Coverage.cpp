/*
 * CoverageCalc.cpp
 *
 *  Created on: Raj. 23, 1439 AH
 *      Author: mariapkg
 */
#include "Coverage.h"
using namespace std;

Coverage::Coverage() {
}

Coverage::~Coverage() {
	// TODO Auto-generated destructor stub
}

void Coverage::calc_cov(const char * bedfile,const char * filename){
	string command;
	FILE *stream;
	cout<<filename<<endl;
	string outfile=string(filename)+".cov";
	command="samtools bedcov " + string(bedfile) + " " + string(filename) + " > " + string(outfile);
	stream = popen(command.c_str(), "r");
	pclose(stream);
}
