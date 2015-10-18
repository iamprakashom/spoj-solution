//============================================================================
// Name        : iterated-sum.cpp
// Author      : Om Prakash
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, sum = 0;
	cin>>a;
	cin>>b;
	for(int i = a; i <= b; i++)
	{
		sum = sum + i * i;
	}
	cout <<sum << endl; // prints
	return 0;
}
