#include<iostream>

using namespace std;

int Distance(int a, int b);

int main() 
{
	//問題1
	cout << "問題1" << endl;
	cout << "1011 + 0101 = 10000"<<endl;
	cout << "110100 + 11011 = 1001111" << endl;
	cout << "1011 + 110011 = 111110" << endl;

	//問題2
	cout << "\n問題2" << endl;
	cout << "FF + FF = 1FE" << endl;
	cout << "ed + 10 = fd" << endl;
	cout << "563 + cd = 630" << endl;

	//問題3
	cout << "\n問題3" << endl;
	cout << "char = -128〜127\n" << "int = -2147483648 〜 2147483647" << endl;
	cout << "float = 3.4E-38〜3.4E+38\n" << "double = 1.7E-308〜1.7E+308" << endl;

	//問題4
	cout << "\n問題4" << endl;
	cout << "?@です" << endl;

	//問題5
	cout << "\n問題5" << endl;
	cout << "34回" << endl;

	//問題6
	cout << "\n問題6" << endl;
	cout << "100回です" << endl;

	//問題7
	cout << "\n問題7" << endl;
	cout << "4 , 5です" << endl;

	//問題8
	cout << "\n問題8" << endl;
	cout << "20です" << endl;

	//問題9
	cout << "\n問題9" << endl;
	cout << "voidです" << endl;

	//問題10
	cout << "\n問題10" << endl;
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
