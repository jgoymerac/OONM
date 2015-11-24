#@file Makefile.txt 
#@Author Jeff Goymerac
#@Date 1/30/2015
#@Course CS 5201
#@brief This is the makefile to compile the program in EX2 using 
#       Suffix rules and macros 


CXX = /usr/bin/g++
CXXFLAGS = -g -Wall -W -pedantic-errors

OBJECTS = driver.o 

.SUFFIXES: .cpp

.cpp.o: $<
	${CXX} -c ${CXXFLAGS} $< -o $@

default: all

all: driver

driver: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o $@

clean:
	-@rm -f core > /dev/null 2>&1
	-@rm -f driver > /dev/null 2>&1
	-@rm -f ${OBJECTS} > /dev/null 2>&1

# dependency list for source files
driver.o: CylnCord.h CylnCord.hpp Norm1.h driver.cpp

