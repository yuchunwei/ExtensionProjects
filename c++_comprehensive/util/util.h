/*----------------------------------------------------------------
Copyright (c) 2012 Author: Jagadeesh Vasudevamurthy
file: util.h
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
include this file for all the programs
-----------------------------------------------------------------*/
#ifndef UTIL_H
#define UTIL_H

/*----------------------------------------------------------------
Basic include files 
-----------------------------------------------------------------*/
#include <iostream>
#include <fstream>

#include <iomanip>      // std::setprecision
using namespace std;

#ifdef _WIN32
#include <cassert>
#include <ctime>
#else
#include <assert.h>
#include <time.h>
#include <string.h> //for strlen,strcat and strcpy on linux
#endif

//'sprintf' : This function or variable may be unsafe.Consider using sprintf_s instead.To disable deprecation, 
//use _CRT_SECURE_NO_WARNINGS
//To overcome above warning
#ifdef _MSC_VER
#pragma warning(disable: 4996) /* Disable deprecation */
#endif


/*----------------------------------------------------------------
STL
-----------------------------------------------------------------*/
#include <stdexcept> //Without this catch will NOT work on Linux
#include "memory" //For unique ptr
#include <vector>
#include <string>




#endif

//EOF
