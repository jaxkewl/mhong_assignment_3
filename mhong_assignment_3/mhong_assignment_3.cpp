// mhong_assignment_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class MyArray
{
private:
	int *data;
	int size;
	MyArray();	//don't allow empty constructor to be called

public:
	MyArray(int sz)
	{
		cout << "creating pointer" << endl;
		data = new int[sz];
	}

	MyArray(MyArray & ma)
	{
		cout << "creating pointer" << endl;
		//include null terminator when including array size
		data = new int[ma.getSize() + 1];
		*data = *ma.data;
	}

	~MyArray()
	{
		cout << "deleting pointer" << endl;
		//don't forget the open close brackets for array pointers
		delete[] data;
	}

	int getSize() const
	{
		return size;
	}
	void setSize(int val)
	{
		size = val;
	}
};

int main()
{
	cout << "Martin Hong OO C++ Assignment 3" << endl;
	//construct a dummy array because it's just going to be overwritten later
	MyArray existingObj(10);
	//cout << "address of dummy array " << existingObj;
	MyArray newobj = existingObj;
	return 0;
}

