//  INTEGER TYPES
//  "There're limits to how big an integer (data type) you can fit into an Object"

#include <iostream>  // Must write this Header file 1st before any other
#include <string>
#include <limits>

using namespace std;

int types()
{
	int value = (-3356);  // Juuust right (could be more tho), 
	                     // Also, a normal 'int' like this can be
	                     // positive or negative
    // int value = 5678940398476; --> Value is too big for this certain amount of computer memory.
	
	long int xtra = 567894039;  // Just right (could be a lil more tho)
	// long int xtra = 5678940398476; --> Value is too big for this certain amount of computer memory.
	
	long long lxtra = 5678940398476;  // Just right. Also, when using the different 
	                                 // integer types, the adjectives can be written 
	                                 // without having to indicate the 'int' 

	cout << "Normal int value : " << value << endl;  // Output = exact
	cout << "Normal 'long int' value : " << xtra << endl;  // Output = error
	cout << "                                       " << endl;
	cout << "But, Maximum Value to store in an int :" << INT_MAX << endl;  // prints the maximum value an 'int' can allocate
	cout << "And, Minimum Value to store in an int :" << INT_MIN << endl;  // prints the minimum value an 'int' can allocate
	cout << "                                       " << endl;
	cout << "Not related, but no. of bits in a 'char' object : " << CHAR_BIT << endl;
	cout << "****************************************************" << endl;
	cout << "                                                    " << endl;
	
	short small = (29345);  // For saving a small amount of storage

	cout << "For saving a small amount of storage/ for saving a value higher than the normal 'int' memory capacity: " << small << endl;
	cout << "*****************************************************" << endl;
	cout << "                    " << endl;
	cout << "Size of 'int' mem : " << sizeof(int) << endl;  // Using the 'sizeof' operator To find out how much memory the types/objects actually use
	cout << "Size of 'short' mem : " << sizeof(short) << endl;
	cout << "size of the 'long long' mem : " << sizeof(long long) << endl;
	cout << "*****************************************************" << endl;
	cout << "                                                     " << endl;

	unsigned uvalue = 9876545;  // 'signed int' can by default, store + & - number values  
	                           // 'unsigned int' can ONLY store positive numbers
	                          // In other words, 'signed int' = The Normal 'int' (with either + or - values)
	                          // And 'unsigned int' = The Normal 'int' but NO negative numbers
	
	signed long long okg = 11445678987656;  // Improvised --> Added greater capacity to the normal 'int'

	cout << "'unsigned' values must be positive.. Always --> " << uvalue << endl;
	cout << "Elongated memory storage because 'int' " << flush;
	cout << "has been added with 'long long' --> " << okg << endl;

	// Noticed that 'char' just stores The first letter of a value given
	// Integer types, as it's stated from its name, are used ONLY with 'int' memory allocation
	//  'signed, unsigned, long ++, short, ' are the int. types ONLY
	//  But 'signed' & 'unsigned' can be used with the 'char' memory allocation
	//  So, to this point, trying to elongate strings with int types = ERROR!  :)

	

	system("pause");

	return 0;
}