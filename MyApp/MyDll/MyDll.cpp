// MyDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MyDll.h"


// This is the constructor of a class that has been exported.
// see MyDll.h for the class definition
CMyDll::CMyDll()
{
	return;
}

string CMyDll::SayHello(string name)
{
    return "Hello " + name + ". I'm from " + location() + ".";
}

double CMyDll::add(double i, double j)
{
	return i + j;
}

string CMyDll::location()
{
	 return "C++";
}