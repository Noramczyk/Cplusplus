#include <iostream>

using namespace std;

int main()
{
	int *ptr1 = new int(28);
	//ptr1 = new int;

	float *ptr2 = new float(29.29);
	int *ptr3 = new int[25];
	//*ptr1 = 28;

	cout << "Pointer #1 Value: " << *ptr1 << endl;
	cout << "Pointer #2 Value: " << *ptr2 << endl;

	if(!ptr3)
		cout << "Allocation failed .... " << endl;
	else
	{
		for (int i = 10; i < 15; i++)
			ptr3[i] = i + 1;
			cout << "Value Store in memory block" << endl;
		for(int i = 10; i < 15; i++)
			cout << ptr3[i] << " ";
	}

	delete ptr1;
	delete ptr2;
	delete[] ptr3;

	return 0;
}
	
