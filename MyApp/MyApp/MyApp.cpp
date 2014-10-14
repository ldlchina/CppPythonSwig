// MyApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <Python.h>

int _tmain(int argc, _TCHAR* argv[])
{
	Py_Initialize();

	PyObject * pModule = PyImport_ImportModule("TestMyPython");

	Py_Finalize();
	return 0;
}

