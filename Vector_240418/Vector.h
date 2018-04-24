#pragma once
#include <iostream>
using namespace std;

class MyVector
{
public:
	//constructors
	MyVector() : cur_size(0), buf_size(0), els(nullptr) {};
	MyVector(const int cur_size);
	MyVector(const MyVector & obj);

	
	int size()const {// ставим констату после, чтобы в операторах присваивания работал obj.size()
		return cur_size;
	}

	//operators
	MyVector operator=(const MyVector &obj);
	int&operator[](int index);

	bool operator == (MyVector &obj);
	~MyVector();
	
	void insert() {
		cout << "HELP" << endl;
	}
	int & push_back(int element); 
	int & at(int index);

private:
	int cur_size;
	int buf_size;
	int * els;

	friend ostream& operator<<(ostream& os, MyVector v);
	//cout<< v; cout<< - ofstream, v - myvector

};