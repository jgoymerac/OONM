///////////////////////////////////////////////////////////////////////////////////////
/// @file driver.cpp																																///
/// @author Jeff Goymerac 																													///
/// @brief This file implements the templated array class MyVect as defined in 			///
///		MyVect.hpp																																		///
///									 																																///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////


#include "MyVect.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include "GauSid.h"

int main(int argc, char *argv[])
{
	int a=argc;
	a=0;
	ifstream myFile;
	const char* inFile = argv[1];
	myFile.open(inFile);
	myFile>>a;
	vector <MyVect<double> > vect;
	GauSid<double> gauSid;
	MyVect<double> gs(a);
	MyVect<double> gsTester;
	for(int i=0;i<a;i++)
	{
		MyVect<double> temp(a);
		myFile>>temp;
		vect.push_back(temp);
	}

	
	cout<<"The sum of the first two vectors = ";
	cout<<vect[0]+vect[1]<<endl;
	cout<<"The difference of the first two vectors = ";
	cout<<vect[0]-vect[1]<<endl;
	cout<<"The dot product of the first two vectors = ";
	cout<<vect[0]*vect[1]<<endl;
	cout<<"Stream operator demostration:"<<endl;
	for(int i=0;i<a;i++)
	{
		cout<<vect[i]<<endl;
	}
	cout<<"Demonstrating the [] operator on the second entry in the Gauss-Siedel vector: ";
	gs=gauSid(vect);
	cout <<gs[0]<<endl;
	gsTester=gs*0;
	if (gs==gsTester)
	{
		cout<<"The set of vectors is Linearly Independent!"<<endl;
		cout<<"Tolerance = "<<gauSid.tolerance<<" And iterations == "<<gauSid.getIt()<<endl;
	}
	else
	{
		cout<<"The set of vectors is Lineraly Dependent!!! "<<endl;
		for (int i=0;i<gs.size(); i++)
		{
			cout<<gs[i]<<" times "<<vect[i]<<endl;
			cout<<" + "<<endl;
		}
		cout<<"equals"<<endl;
		cout<<vect[gs.size()]<<endl;
		cout<<"Tolerance = "<<gauSid.tolerance<<" And iterations == "<<gauSid.getIt()<<endl;

	}
	cout<<"the Gauss-Siedel vector is ";
	cout<<gs<<endl;
	return 0;
}
































