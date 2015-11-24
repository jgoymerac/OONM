///////////////////////////////////////////////////////////////////////////////////////
/// @file driver.cpp																																///
/// @author Jeff Goymerac 																													///
/// @brief This file implements the templated array class MyVect as defined in 			///
///		MyVect.hpp																																		///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////


#include "MyVect.h"
#include "Matrix.h"
#include "DMatrix.h"
#include "GausSolv.h"
#include <fstream>
#include <iostream>
#include <iomanip>

#include "GauSid.h"
using namespace std;

int main(int argc, char *argv[])
{
	try
	{
		int a = argc;
		a = 0;
		ifstream myFile;
		const char* inFile = argv[1];
		myFile.open(inFile);
		myFile >> a;
		DMatrix<double> mat(a), mult(a);
		MyVect<double> vect(a), mul(a);
		GausSolv<double> gs;
		myFile >> mat;
		myFile >> vect;
		cout << "Outputting the Matrix times it's transpose" << endl;

		cout << mat * ~mat << endl;
		cout << "Outputting the solution to Ax=b" << endl;
		mul = gs(mat, vect);
		cout << mul << endl;

	}
	catch(string e)
	{
		cout<<"An Error occured\n"<<e<<endl;
	}

	return 0;
}
































