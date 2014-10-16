%module(directors="1") MyPython

%{
#include "../MyDll/MyDll.h"
%}

%feature("director") CMyDll;

%include <windows.i>
%include <std_string.i>
%include "../MyDll/MyDll.h"