//         FLOATING POINT TYPES
//  This is after The Integer Types
// FYI.. 'double' is the most used and is even 'recommended' by my compiler (VC++)

#include <iostream>
#include <string>
#include <iomanip>  // Sometimes, C-out can output numbers in Scientific Notation Form
                    // when dealing with Big Numbers. Buut, if you don't wanna see that,
                    // But wanna see the Normal Default Fixed Format of Outputting Numbers,
                    // Then you've got to include this pre-header. 
                    // Remember that is when you're dealing with HUUge numbers that it becomes important.

using namespace std;

int floaters()
{
	double no_of_apples = 2489.89;  //  Could also be 'int no_of_apples = 24;'
	                              // The variable names/object can also be inputted in brackets. (Kinda similar to python)
	double fake_no_of_apples = (no_of_apples - 10.5);

	cout << "Annd the Number of Apples are " << (no_of_apples) << endl;
	cout << "Buut the number of Fake apples are " << fake_no_of_apples << endl;
	cout << "***********************************" << endl;
	cout << "This is the current size of the Number of apples = " << sizeof(no_of_apples) << flush;
	cout << " . That's because we added an 'int' type (long) to the floating object variable (no_of_apples)" << endl;
	cout << "                                   " << endl;
	cout << "Meanwhile, " << sizeof(fake_no_of_apples) << " Is the default size of the float variable/object 'Fake Number Of apples" << endl;
	cout << "******************************************************************************************" << endl;
	
	double long_float = 123.456789876543210;

	cout << "Printed in Fixed Notation: " << setprecision(20) << fixed << (long_float) << endl; // This will obviously print out in FIXED notation
	                                                                                            // The 'setprecision(20)' function [from the <iomanip> header]...
	                                                                                            // ... allows us to print up to 20 significant figures [s.f] [after the decimal point]
	cout << "Printed in Scientific notation: " << scientific << (long_float) << "--> which means number x 10*m" << endl; // This will Still print out in scientific Notation.(and I know u know why :)
	cout << "********************************" << endl;

	// Now trying More Precision--> 'double' float type
	// Now add 'long' to the 'double' to get a MEGA precise value of our variable

    long double (doubled_no_of_apples) = 123.456789876543210; // 'long' can be added to 'double' also which, makes it MEGA-Accurate

	cout << setprecision(20) << fixed << (doubled_no_of_apples) << endl;

	
	system("pause");

	return 0;


}
