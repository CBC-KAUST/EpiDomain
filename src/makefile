all: epidomain.exe
epidomain.exe : main.o Reader.o Profiler.o utils.o segmentation.o freec.o Parser.o CoverageCalc.o
	g++ -m64 -o epidomain.exe main.o Profiler.o Reader.o utils.o segmentation.o freec.o CoverageCalc.o Parser.o
main.o: main.cpp 
	g++ -O3 -g  -c -Wall -m64 main.cpp
	
CoverageCalc.o:	CoverageCalc.cpp CoverageCalc.h
	g++ -c -O3  -g -Wall -m64 CoverageCalc.cpp
	
Reader.o: Reader.cpp Reader.h
	g++  -c  -O3 -g  -Wall -m64 Reader.cpp

Profiler.o: Profiler.cpp Profiler.h
	g++  -c  -O3 -g   -Wall -m64 Profiler.cpp
	
utils.o: utils.cpp utils.h
	g++  -c  -O3 -g   -Wall -m64 utils.cpp
	
segmentation.o: segmentation.cpp segmentation.h
	g++  -c  -O3 -g -Wall   -m64 segmentation.cpp

freec.o: freec.cpp freec.h
	g++  -c -O3 -g -Wall  -m64 freec.cpp

Parser.o: Parser.cpp Parser.h
	g++  -c -O3 -g -Wall  -m64 Parser.cpp

clean: 
	rm -f epidomain.exe *.o *~ *#