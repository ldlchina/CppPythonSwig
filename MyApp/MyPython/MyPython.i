%module(directors="1") MyPython

%{
#include "../MyDll/MyDll.h"
%}

%feature("director") CMyDll;

%include <windows.i>
%include <stl.i>
%include "../MyDll/MyDll.h"