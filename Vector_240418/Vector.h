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

	bool operator == (MyVector &obj) {

		if (this->cur_size != obj.cur_size)
			return 0;
		else
		{
			for (int i = 0; i < size(); i++)
				if (els[i] != obj.els[i])
					return 0;
		}
		return 1;
			
	}
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

protected:

};