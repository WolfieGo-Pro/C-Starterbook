// VARIABLES// --> Name of the Allocated Storage/Memory to store an Integer--> which can be Strings o Strings + Numbers Itself...//
// AND NOT Numbers + Strings//

// In C++ , bits of text (like "Hola") are called Strings

#include <iostream>
#include <string>  // I added this piece of file because I saw later that string variables don't 'normally' output like the rest.
using namespace std;

int var()
{
    int anyone = 15;  //The 'int' [In this case, not the int as a start up entry for apps in C++], but as a Command Statement. It's also an ...
                  //... acronym for 'Integer'. Its kinda like telling your Computer o C.P.U to "allocate me some / a bit of storage/memory...
                  //... to store an Integer [which are numbers that don't have decimals points]

             // Of course there are other ways of 'Stringing' your Variables..//

    int AnyOne = 15;  // This type of stringing is called 'Camel Casing'--> Where the variables are written by uppercasing the continuous ...
                  //... words of a text [Be it variable or not]

    int any_one = 15;  // 'Under-Score type of Variable --> Breaks the long strings by adding an under-score symbol //   [MY STYLE]

    int any8 = 45;  // Refer to the 1st Comment of this file.. But saving a Variable with a núm 1st like int 8any = 45; --> ERROR!
	
	
		// Last but not least.. When you use a method to store values (Integers), STICK WITH IT!

	cout << "They were " << any8 - any_one << " people" << " in that Ship." << " Although, " << flush;
	int newone = anyone - 5;
	any8 = any8 + 5;       // This statement was placed here just to see if it wud work with line 37 regarding Changes in Variables//
	
		cout << newone << " People had already gone." << endl;
	cout << "                               " << endl;
	cout << "Name   " << " Age   " << " Profession   " << endl;
	cout << "                                        " << endl;
	cout << "Steven " << " 17    " << " Student      " << endl;
	cout << "                                        " << endl;
	cout << "Obama   " <<     any8    << "     President    " << endl;
	cout << "                                        " << endl;
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Now let's try saving/storing texts --> Strings
    // Same rules apply from the 1st Comment in this Variable Chapter Down to the Last//

	string hello = "Hola! ";  // The 'string' meaning --> "Allocate me some storage/memory to store some text
	                       // In C++ tho, 'string' is technically a 'class'
	                       // And the name of the Variable/String is technically an Object.
    
	string cont = "How are you?";
	string intro = "My name is Russel, I'm 16 yrs old, I like to.... ";
	string pasó = "Quieres que te cuente todo lo que sucedió ? --> De acuerdo. ";  // Además, Watchout for outputting texts that've got tildes [marks above them]
	
	cout << hello << pasó << flush;  // Like this one (:
	cout << intro << "blah blah and blah. Enough introduction" << endl; // NOTE --> that if 'endl;' isn't  inserted here,
	                                                            // whatever text you write later will be 'flushed'..
	                                                            // with it [meaning that it won't break into another line]
	cout << "               " << endl;
	
	string converse = hello + cont;  // --> This is called 'Concatanate'...
	                                 // which is the act of adding strings to each other

	cout << converse << endl;
	
	// Strings in C++ isn't Standard. Someone might need to write it in a different way to get the compilers working.
	// También la persona puede anadir --> #include <string> if the string variables ain't working before. [just as mine wasn't]
	

	cin.get();
	
	return 0;
}