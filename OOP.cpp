#include <iostream>
#include <string>
#include "class_setup.h"

using namespace std;

class book
{
	private:
		string title;
	public:

		book(){
			title = "Strings and stuff";
		}


		void print_book()
		{
			cout <<  title << "\n"; 
		}
		void set_title(string x)
		{
			title = x;
		}
};

int main()
{
	book hi;
	
	hi.print_book();
	return 0;
}