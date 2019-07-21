/*
  Wilfred Russel Odere
  freddykol6@outlook.com
  03/08/2018 - Paris, France.
  ******************************
  'WHILE' LOOPS - Allows you to repeatedly execute a particular statement how many times u want in programming.
 */

#include <iostream>
#include <string>

using namespace std;

int while_loops() {
	char set_10 = 10; // Setting values from the ASCII Character Set. ORR just substitute it by using '\n'
	
	cout << "\n\t\t\t Wanna know what this ASCII character set does." << endl;
	cout << "n\t\t\t Wadup peeps!" << endl;

	int i = 1; // I'm using 'i' as my counter var

	while (i <= 7) { // with a '<' sign, the statements in the loop will be exec. but lesser than the value put by the coder
		           // And with a '<=' sign, the statements in the loop will be exec. but equal to the value put by the coder
		          // But, It's Flexible, so u can use which ever u want and still get the same result

		cout << "\n\t\t\t I LUV Y'all !!" << i << endl;
		i++;  // Try decrementing this statement here (put i-- instead) , and see what happens!
	}
    // Infinite Loop, but configured to not be one.

	cout << "\n\t\t\t Amount of Love given : Exceded." << endl;


	cin.get();

	return 0;
}