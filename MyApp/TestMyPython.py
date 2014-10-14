import MyPython
import os

o = MyPython.CMyDll()
print(o.SayHello("World"))

class MyPyDll(MyPython.CMyDll):
	def __init__(self):
		MyPython.CMyDll.__init__(self)
	def location(self):
		return "Python"

o1 = MyPyDll();
print(o1.SayHello("World"))
os.system("pause")