///////////////////////////////////////////////////////////////////////////////////////
/// @file driver.cpp                                                                ///
/// @author Jeff Goymerac                                                           ///
/// @brief This file implements the templated Diagonal, Tridiagonal, and  Symetric  ///
///     Matrix classes                                                              ///
///                                                                                 ///
///                                                                                 ///
///////////////////////////////////////////////////////////////////////////////////////


#include "MyVect.h"
#include "Matrix.h"
#include "DMatrix.h"
#include "GausSolv.h"
#include "MatrixError.h"
#include "TriDMatrix.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[])
{
    try
    {
        int a = argc,
            b;
        a = 0;
        b=0;
        ifstream myFile;
        const char *inFile = argv[1];
        myFile.open (inFile);
        myFile >> a;
        cout<<"Test";
        DMatrix<double> mat(a), mult(a);
        MyVect<double> vect(a), mul(a);
        GausSolv<double> gs;
        cout<<"Test1";
        myFile >> mat;
        myFile >> vect;
        myFile >> b;
        DMatrix<double> matb (b), multb (b);
        MyVect<double> vectb (b), mulb (b);
        myFile >>matb;
        myFile>> vectb;

        cout << "Outputting the Matrix times it's transpose" << endl;
        //cout << mat * ~mat << endl;
        cout << "Outputting the solution to Ax=b" << endl;
        //mul = gs (mat, vect);
        cout << mul << endl;
        cout<<mat;
        mulb= gs(matb, vectb);
        cout << mulb<< endl;
    }
    catch (MatrixError& e)
    {
        cout << "An Error occured\n" ;
        e.message(); 
    }
    return 0;
}
































