#include<iostream>

using namespace std;

int Distance(int a, int b);

int main() 
{
	//���1
	cout << "���1" << endl;
	cout << "1011 + 0101 = 10000"<<endl;
	cout << "110100 + 11011 = 1001111" << endl;
	cout << "1011 + 110011 = 111110" << endl;

	//���2
	cout << "\n���2" << endl;
	cout << "FF + FF = 1FE" << endl;
	cout << "ed + 10 = fd" << endl;
	cout << "563 + cd = 630" << endl;

	//���3
	cout << "\n���3" << endl;
	cout << "char = -128�`127\n" << "int = -2147483648 �` 2147483647" << endl;
	cout << "float = 3.4E-38�`3.4E+38\n" << "double = 1.7E-308�`1.7E+308" << endl;

	//���4
	cout << "\n���4" << endl;
	cout << "�@�ł�" << endl;

	//���5
	cout << "\n���5" << endl;
	cout << "34��" << endl;

	//���6
	cout << "\n���6" << endl;
	cout << "100��ł�" << endl;

	//���7
	cout << "\n���7" << endl;
	cout << "4 , 5�ł�" << endl;

	//���8
	cout << "\n���8" << endl;
	cout << "20�ł�" << endl;

	//���9
	cout << "\n���9" << endl;
	cout << "void�ł�" << endl;

	//���10
	cout << "\n���10" << endl;
	cout<<Distance(5, 10);
}

int Distance(int a, int b)
{
	int _dis = 0;
	if (a > b)
	{
		_dis = a - b;
	}
	else
	{
		_dis = b - a;
	}
	return _dis;
}
