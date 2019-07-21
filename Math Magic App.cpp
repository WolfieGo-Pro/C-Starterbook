//Best run as a program (.exe Executable file) Instead of running it in SoloLearn's Editor
// Author                 - Wilfred Odere Russel
// SoloLearn Username     - Willz
// Contact                - freddykool6@outlook.com
//*********************************************************************************************************************************//
//                                          Math Magic App
// --> Basically using a math trick that I know very well to show you the number you were...
//     ...thinking of without having to input a Thing!.
//*********************************************************************************************************************************//
//Things to change --> string to char: for an easier input of 'yes' for the users//

#include <iostream>
#include <string>

using namespace std;

int magic()
{
	cout << "## Best run as a program(.exe Executable file) Instead of running it in SoloLearn's Editor ##" << endl;
	cout << "                                                   " << endl;
	cout << "                                                   " << endl;
	cout << "                                                   " << endl;
	cout << "Welcome To this Little Console App I like to call.." << endl;
	cout << "                                                   " << endl;
	cout << "                           Math Magic" << endl;
	cout << "                                                   " << endl;
	cout << "This piece of sh!t.. I mean valuable piece of code, uses a Phenomenal Math Trick " << flush;
	cout << "(PMT if you may) to actually output the number you're thinking of ";
	cout << "Without ever having to input a number" << endl;
	cout << "                                                   " << endl;
	cout << "Don't believe me?.. All you have to do is follow the Instructions" << endl;
	cout << "                                                   " << endl;
	cout << "But first and foremost, let's know your First Name shall we : " << flush;

	string amigo;
	cin >> amigo;

	cout << "                                    " << endl;
	cout << "Alright " << amigo << " Let's Begin!" << endl;
	cout << "                                    " << endl;
	cout << "Step 1   -  Think of ANY POSITIVE WHOLE Number between 1 and 100 like 4, 65, 90 . [# NOT numbers with negative signs nor numbers with decimal points nor Fractional Numbers nor Irrational numbers like the square root of 2 --> NO ]" << endl;
	cout << "                                " << endl;
	cout << "Have you thought of the number? (Don't type the number. Instead, type 'yes') : " << flush;
	
	string answer;
	cin >> answer;

	cout << "                                    " << endl;
    cout << "Good. Now If you're thinking of ONE DIGIT Numbers like '6' '2' or '9' , Just hold on. BUT If you're thinking of TWO DIGIT Numbers like '10', '14' or '97' , ADD the Two Digits together so that we can have ONLY ONE value/digit. If you STILL have two digits, REPEAT the process. [For example, 97 -> 9 + 7 -> 16 -> 1 + 6 -> 7]" << endl;
	cout << "                                " << endl;
	cout << "Now this is were things get interesting... Ready? (type 'yes') : " << flush;
	
	cin >> answer;

	cout << "                                " << endl;
	cout << "Step 2 - Multiply the number you're thinking of by 5" << endl;
	cout << "                                " << endl;
	cout << "Step 3 - Now multiply by 2" << endl;
	cout << "                                " << endl;
	cout << "Step 4 - Now Minus 2 from the number" << endl;
	cout << "                                    " << endl;
	cout << "Step 5 - Pick the HIGHEST DIGIT of the number. For example: let's say I now have 47. I am going to pick the highest digit of the number -> which is 7." << endl;
	cout << "                                    " << endl;
	cout << "Have you picked the Highest digit? (type 'yes') : " << flush;
	
	
	cin >> answer;
	
	cout << "                                    " << endl;
	cout << "SO.. At this point, I think it's safe to say..." << endl;
	cout << "                                    " << endl;
	cout << "...That THE NUMBER YOU'RE THINKING OF...RIGHT NOW!.. IS..." << endl;
	cout << "See Number? (type 'yes') : " << flush;
	
	cin >> answer;

	cout << "                                    " << endl;
	cout << "                              8 " << endl;
	cout << "                                    " << endl;
	cout << "That's the number you had in your head right? (type 'yes' or 'no') : " << flush;

	cin >> answer;

	cout << "                                            " << endl;
	cout << "                Of Course It Was!           " << endl;
    
	cout << "                                            " << endl;
	cout << "                                            " << endl;
	
	cout << "# Thanks for staying till the end.. you're the Brave One" << endl;
	cout << "# Leave a like, Follow me & you may comment down below if this worked on you.. I wanna know" << endl;
	cout << "# This code will be improved on.. I assure you..in 2 years time..(joking)" << endl;
	cout << "                                                                         " << endl;
	cout << "                   HAPPY CODING!                          " << endl;

	system("pause");
    
	return 0;
}