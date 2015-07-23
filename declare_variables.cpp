#include <iostream>

using namespace std;


void print_something();//declares program before main, otherwise you need to write the method before the main


int main(){
	int x = 5;	
	/*
	int y = 3;
	int input;
	cin >> input;
	cout << "Your number is: " << input << "\n";
	cout << x + y << "\n" << "hi \n";
	*/

	cout << &x << "\n";

	print_something();

	return 0;
}


void print_something(){
	cout << "hello \n";
}