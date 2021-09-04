#include <iostream>

using namespace std;


void countDown(int n);


int main()
{
	countDown(4);
	cout << " Party Time!! \n";
	return 0;

}

void countDown(int n)
{
	
	cout << "Counting Down ..... " << n << " n @: " << &n << endl;

	if(n > 0)
		countDown(n-1);

}
