#include <iostream>

using namespace std;

int main()
{
	int point = 5;
	int * pt = &point;

	cout << "Value of point: " << point << " Address of point: " << &point << endl;

	cout << "Value of *pt: " << *pt << " Address of point: " << pt << endl;

	return 0;
}

