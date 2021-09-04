#include <iostream>

void swapPoint(int * j, int * k);
void swapValue(int g, int h);

int main()
{
	using namespace std;
	
	int var1 = 500;
	int var2 = 1000;


	cout << "Var #1 = " << var1;
	cout << "Var #2 = " << var2 << endl;

	cout << "By Reference .... " << endl;
	swapReference(var1, var2);
	cout << "Var #1 = " << var1;
	cout << "Var #2 = " << var2 << endl;

	
	cout << "By Pointers .... " << endl;
	swapPoint(&var1, &var2);
	cout << "Var #1 = " << var1;
	cout << "Var #2 = " << var2 << endl;


	cout << "By Value .... " << endl;
	swapValue(var1, var2);
	cout << "Var #1 = " << var1;
	cout << "Var #2 = " << var2 << endl;

}

void swapReference(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


void swapPoint(int * j, int * k)
{
	int temp;
	temp = *j;
	*j = *k;
	*k = temp;
}


void swapValue(int g, int h)
{
	int temp;
	temp = g;
	g = h;
	h = temp;
}
