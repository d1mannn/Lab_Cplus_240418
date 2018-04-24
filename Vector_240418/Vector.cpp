#include "Vector.h"

MyVector::MyVector(const int cur_size)
{
	this->cur_size = cur_size;
	this->buf_size = cur_size;
	this->els = new int[cur_size];
	for (int i = 0; i < cur_size; i++)
	{
		els[i] = 0;
	}
}

MyVector::MyVector(const MyVector & obj)
{
	this->cur_size = obj.size(); // int size()const{return cur_size}
	this->buf_size = obj.size();
	this->els = new int[buf_size];
	for (int i = 0; i < this->size();i++)
		this->els[i] = obj.els[i];
}

MyVector::~MyVector()
{
	delete[]els;
}

MyVector MyVector :: operator=(const MyVector &obj)
{
	this->cur_size = obj.size(); // int size()const{return cur_size}
	this->buf_size = obj.size();
	this->els = new int[buf_size];
	for (int i = 0; i < this->size();i++)
		this->els[i] = obj.els[i];
	return *this;
}

int & MyVector :: push_back(int element) 
{ // вернет ссылку на добавл€ыемый элемент
	if (buf_size <= 0) 
	{
		buf_size = 2;
		els = new int[buf_size];
	}
	else
	{
		if (cur_size >= buf_size)
		{
			buf_size *= 2;
			int *temp = new int[buf_size];
			for (int i = 0; i < size(); i++)
			{
				temp[i] = els[i];
			}
			delete[] els;
			els = temp;
		}
	}
	els[cur_size++] = element;
	return els[cur_size - 1];
}

int& MyVector::at(int index)
{	
	if (index <= 0 || index > size())
		return els[0];
	else
		return els[index];
}

int&MyVector::operator[](int index)
{
	if (index <= 0 || index > size())
		return els[0];
	else
		return els[index];
}

bool MyVector :: operator == (MyVector &obj) {

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

ostream& operator<<(ostream& os, MyVector v)
{
	for (int i = 0; i < v.size(); i++)
	{
		os << v[i] << "\t";
	}
	return os;
}