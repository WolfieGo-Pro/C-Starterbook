//                       CHAR and BOOL

//                       BOOL - BOOLEAN
//                 brought up by - George Bool

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int charbool()
{
	bool trooly = true;  // True = 1 , False = 0
	bool fooly = false;

	cout << (trooly) << endl; // We get a number instead of the function actually printing 'true' or 'false'
	cout << "*************************************" << endl; // THIS ENDS NOW AND FOREVER. #learntnewstyle
	cout << "                                     " << endl; // THIS ENDS NOW AND FOREVER TOO. #learntnewstyle

 //                      CHAR - CHARACTER

	
	char set_9 = 9; char set_W = 87; char set_I = 73; char set_L = 76; char set_Y = 89; char set_160 = 160; char set_10 = 10; char set_7 = 7; // ASCII Character Sets (Text)
	
	cout << set_9 << set_W << set_I << set_L << set_L << set_Y << "!" << set_10 << endl;  // Just checking out The ASCII ... hmm .. but how cool is this?
    cout << set_9 << set_160 << "nimo" << set_7 << set_10 << endl; // And Again.. this time, mixing with vocales espanyoles

	char charly = '7';

	cout << set_9 << (int)charly << endl; /* Guess what - it will output '7' because the value in 'charly' is quoted... 
	                                       (also because its being printed out with 'int' at its side) -- And
	                                       will output 55 if it isn't.
	                                       Reason being that "CHAR is partly intended to represent SINGLE CHARACTERS from 'ASCII CHARACTER SET' */
	
//                       WCHAR_T - CHARACTER	
	
	wchar_t set_X = 'u'; // This variable type doesn't need to be casted to '(int)' for its posicion in the ASCII Set to show
	
	cout << (char)set_X << endl;
	cout << sizeof(wchar_t) << endl;

	/* To be honest, NOT gonna be using The wchar_t Variable.
	From here, came the 1.5 version of Math Magic App*/
	
	
	cin.get();

	return 0;
}



//Date Finished :  9/06/2018