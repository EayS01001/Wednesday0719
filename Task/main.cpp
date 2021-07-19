#include<iostream>

using namespace std;

int Distance(int a, int b);

int main() 
{
	//–â‘è1
	cout << "–â‘è1" << endl;
	cout << "1011 + 0101 = 10000"<<endl;
	cout << "110100 + 11011 = 1001111" << endl;
	cout << "1011 + 110011 = 111110" << endl;

	//–â‘è2
	cout << "\n–â‘è2" << endl;
	cout << "FF + FF = 1FE" << endl;
	cout << "ed + 10 = fd" << endl;
	cout << "563 + cd = 630" << endl;

	//–â‘è3
	cout << "\n–â‘è3" << endl;
	cout << "char = -128`127\n" << "int = -2147483648 ` 2147483647" << endl;
	cout << "float = 3.4E-38`3.4E+38\n" << "double = 1.7E-308`1.7E+308" << endl;

	//–â‘è4
	cout << "\n–â‘è4" << endl;
	cout << "‡@‚Å‚·" << endl;

	//–â‘è5
	cout << "\n–â‘è5" << endl;
	cout << "34‰ñ" << endl;

	//–â‘è6
	cout << "\n–â‘è6" << endl;
	cout << "100‰ñ‚Å‚·" << endl;

	//–â‘è7
	cout << "\n–â‘è7" << endl;
	cout << "4 , 5‚Å‚·" << endl;

	//–â‘è8
	cout << "\n–â‘è8" << endl;
	cout << "20‚Å‚·" << endl;

	//–â‘è9
	cout << "\n–â‘è9" << endl;
	cout << "void‚Å‚·" << endl;

	//–â‘è10
	cout << "\n–â‘è10" << endl;
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
