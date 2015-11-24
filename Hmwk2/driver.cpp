///////////////////////////////////////////////////////////////////////////////////////
/// @file driver.cpp																																///
/// @author Jeff Goymerac 																													///
/// @brief This driver file uses the CylnCord class functins along with the norm		///
///		for use with the class CylnCord 																							///
///  			 																																					///
///////////////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <iomanip>
#include "NORM1.H"

#include "CylnCord.h"
//using namespace std;


int main()
{
	
	int i;
	float num;
	string filename;
	Norm1<float> norm;
	cout<<"Enter the File name: "<<endl;
	cin>>filename;
	ifstream myFile;
	vector <CylnCord<float> > vect;
	myFile.open(filename.c_str());
	myFile>>i;
	
	for(int x=0;x<i;x++)
	{
		float r,theta,z;
		myFile>>r;
		myFile>>theta;
		myFile>>z;
		vect.push_back(CylnCord<float>(r,theta,z));

	}
	cout<<-vect[0]<<endl;
	cout<<!vect[1]<<endl;
	if(vect[2]<vect[3])
	{
		cout<<vect[2]<<endl;
	}
	else 
	{
		cout<<vect[3]<<endl;
	}
	cout<<vect[4].cartCord()<<endl;
	num=norm(vect);
	cout<<num<<endl;
	return 0;
}

























