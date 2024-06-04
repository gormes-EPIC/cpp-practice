#include <iostream>

int a;
int b;
int c;
int d {6}; // list initialization
int e = {8}; // copy list initization of original var height in e

int main()
{
	a = 10;
    b = 10;
    c = a * b; 
    std::cout << d;
    std::cout << "\n";
	return 0;
}