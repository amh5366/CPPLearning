// PluarlFiles.cpp : Defines the entry point for the console application.
//
/*
 STEAM I/O
 Input/Output
  - Keyboard/screen
  - Files
  - Other sourcres/targets that support streaming
 Other-
 Record Based or Fixed I/O
  - Database
  - One line in the middle of a file

  Stream I/O operators 
   - >> Sends something to a stream
   - << Reads something from a stream

*/
#include "stdafx.h"
#include <iostream> //Allows for I/O in the Standard Library (STD is a namespace namespace)
using namespace std; // instructs the compiler to put the namespace in front of things it defines. 

//int main()
//{	
//	//STD is needed because we are not including the standard library in the header.
//	// endl means new line.
//	std::cout << "Hello World!" << std::endl;
//	std::cout << 2 + 2 << "\n";
//
//    return 0;
//}

//int main()
//{
//	//STD is needed because we are not including the standard library in the header.
//	// endl means new line.
//	std::cout << "What is up Jerome" << std::endl;
//	std::cout << 2 % 2 << "\n" << 3.2 * 3 << std::endl
//		<< 3.2 * 3.0 << std::endl;
//
//	return 0;
//}

/*
 Local Variables
  Variables have a type 

   - String, number, date, Employee, etc.
   - Some types are built into the language
   - Some are User defined
     - Some "users" are actually library writers. 

   Variables must be defined before they can be used.
    - definition -> initialization. 
	- they will contain junk from memory before initialized.

	compiler enforces rules related to the type. 

*/


int main(void) 
{
	cout << "Hello!" << endl << 2.2;
	cout << endl << endl;

	// Two ways to define and initialize variables. 
	int i; 
	i = 3;
	cout << i << endl;

	int j = 5;
	cout << 5 << endl;

	int j = 5/2;
	cout << j << endl; // C++ will truncate numbers that are declared int but the expression would result in a double.


	float f = 5.8;
	cout << f << endl;

	f = 9 / 5; // 1, rule if both numbers in expression are ints, it will cast this to an interger. 
	cout << f << endl;

	f = 9.0 / 5; //1.8, since 1 of the numbers is a float, this will be cast into float or double. 
	cout << f << endl;

	auto z = 9 / 5;
	return 0;
}



