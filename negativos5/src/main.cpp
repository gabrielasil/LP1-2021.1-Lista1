#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
	int vector[SIZE];
	int counter = 0;
	for (int i = 0; i<SIZE; i++) {
		cin >> vector[i];
		if (vector[i]<0) {
		counter++;
		}
	}
	cout<<counter;
    return 0;
}
