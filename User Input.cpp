//                                    USER INPUT                                          //
// In this book, I'm gonna be learning How To Save What A User Has Written... [And Displaying it is a 'piece of cake' .. lol]
// cin [Character - In] --> An Object for inputting text BY THE USER into the program
// cout [Character - Out] --> An Object for outputting text

#include <iostream>
#include <string>

using namespace std;

int input()
{
	cout << "                                                     " << endl;
	cout << "Hello, Welcome to the Name Aseguration App....<prank>" << endl;
	cout << "                                                     " << endl;
	cout << "This piece of sh!t.. I mean This European Union Console Application " << flush;
	cout << "Makes sure that you\'ve inserted your name correctly ";
	cout << "into our sistema. " << endl;
	cout << "                                                     " << endl;  // '<<' --> Insertion Operator [For the Coder]

	cout << "So tell us, ..What's your First name? : " << flush;  // So as to enable the user to input text to the side ...
	                                                        // of the code statement //

	string name;  // En este caso, We're asking the C.P.U "to allocate some memory to the Variable/Object
	              // [in this case 'name', and since there's no '=' sign,

	cin >> name;  // This statement here extracts the bits of text written in by the user and places/stores it in the object [name]
	             // '>>' --> Extraction Operator [For the User]

	cout << "                                  " << endl;
	cout << "So you are called " << name << flush;
	cout << ". Alright " << name << ", Just give us a few seconds and your name ";
	cout << "will be registered with the EU" << endl;
	cout << "                                  " << endl;

	system("pause");  //Let's the program stay running a bit by absorbing the 1st Enter Button press,
	                  //And later closing the app by the 2nd press of any key --> Might need to create space
	                  //..If you don't want the "Press Any Key To Continue" output to be written too closely to your program
	return 0;
}

// Here, the statement 'int get();' o 'cin.get();' won't be applicable porque Este statement uses Enter button to close
// whereas, the Enter button is needed to confirm the user input. //


//****************************************************************************************************************************

//         BINARY NUMBERS AND MEMORY  (Brief Overview)  //

// Computer's memory is organized in series of CELLS
// Each cell is called a BIT
// Each bit has two possible state
// Bits are organised into BYTES in a computer memory