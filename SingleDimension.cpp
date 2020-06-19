#include<iostream>
using namespace std;

int main() {
	int a = 2;
	int* p = &a;
	int** q = &p;
	std::cout << "Address of p : " << &p << endl;
	std::cout << "Value of a by dereferencing p :" << *p << endl ;
	std::cout << "Value of a by dereferencing q :" << **q;
	std::cout << "Value of *q :" << *q << endl;

}