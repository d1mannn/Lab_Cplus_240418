#include "Vector.h"


int main()
{
	setlocale(LC_ALL, "Rus");
	MyVector v;
	v.push_back(10);
	v.push_back(5);
	v.push_back(8);
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		cout << v.push_back(i + 1) << endl; 
	}
	cout << endl;
	/*for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}
	v[0] = 17;
	v.at(1) = 4;
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}*/
	MyVector v2 = v;

	//for (int i = 0; i < 10; i++)
	//{
	//	v2.push_back(i + 1);
	//	cout << v2.push_back(i + 1) << endl;
	//}
	v2.push_back(15);
	v.push_back(15);
	if (v2 == v)
		cout << "HELLO" << endl;
	cout << endl;
	system("pause");
	return 0;
}