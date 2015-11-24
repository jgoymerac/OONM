#@file Makefile.txt 
#@Author Jeff Goymerac
#@Date 3/16/2015
#@Course CS 5201
#@brief This is the makefile to compile the program for Assignment 3 using 
#       c++11


CXX = /usr/bin/g++
CXXFLAGS = -g -Wall -W -pedantic-errors -std=c++11

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
driver.o: MyVect.h MyVect.hpp GauSid.h GauSid.hpp GausSolv.h GausSolv.hpp Matrix.h Matrix.hpp driver.cpp

