/*
  Just Checking My C++ Skills
  ////////////////////////////
  Author - Wilfred Russel Odere
  E-mail - freddykool6@outlook.com 
  No. - +34 631 070 059
  
*/

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
	char set_10 = 10;

	cout << "\t\t\t Hello and Welcome :)" << set_10 << endl;
	cout << "\t\t\t Let's start by knowing your name : " << flush;

	string name;
	cin >> name;

	cout << set_10 << endl;
	cout << "\t\t\t Alright " << name << ", " << "let's begin..." << set_10 << endl;
	cout << "\t\t\t New Record  (N) " << set_10 << endl;
	cout << "\t\t\t Add Record  (A) " << set_10 << endl;
	cout << "\t\t\t Import Record  (I) " << set_10 << endl;
	cout << "\t\t\t Edit Record  (E) " << set_10 << endl;
	cout << "\t\t\t Export Record  (X) " << set_10 << endl;
	cout << "\t\t\t Save Record  (S) " << set_10 << endl;
	cout << "\t\t\t Save As Record  (C) " << set_10 << endl;
	cout << "\t\t\t Delete Record  (D) " << set_10 << set_10 << endl;
	cout << "\t\t\t Type the letter to select : " << flush;

	string ans;
	cin >> ans;

	int i = 1;  // 'i' in this case, is the counter.

	while (i < 2) { // Want The Option to be available again and again if the user types an invalid option.

		if (ans != "X", "D", "C", "S", "E", "I", "A", "N" || ans != "x", "d", "c", "s", "e", "i", "a", "n") {
			cout << "\n\t\t\t You didn't select any Valid option, Try again: " << flush;

			cin >> ans;
		}

		i++;
	}

		if (ans == "N" || ans == "n") {
			cout << "\t\t\t Creating New Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", Your New Record has been created!" << endl;
		}
		else if (ans == "A" || ans == "a") {
			cout << "\t\t\t Adding Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", A Record has been added!" << endl;
		}
		else if (ans == "I" || ans == "i") {
			cout << "\t\t\t Importing Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", Your Record has been imported!" << endl;
		}
		else if (ans == "X" || ans == "x") {
			cout << "\n\t\t\t Exporting Record..." << endl;

			cin.get();

			cout << "\t\t\t " << name << ", Your Record has been exported!" << endl;
		}
		else if (ans == "E" || ans == "e") { // Misplaced The arrangement here
			cout << "\t\t\t Editing Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", Your Record has been edited!" << endl;
		}
		else if (ans == "S" || ans == "s") {
			cout << "\t\t\t Saving Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", Your Record has been Saved!" << endl;
		}
		else if (ans == "C" || ans == "c") {
			cout << "\t\t\t Re-Saving Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", Your Record has been re-saved!" << endl;
		}
		else if (ans == "D" || ans == "d") {
			cout << "\t\t\t Deleting Record..." << set_10 << endl;

			cin.get();

			cout << "\t\t\t " << name << ", A Record has been deleted!" << endl;
		}
		else {
			cout << "\a\n\t\t\t You typed the incorrect option thrice. Sorry, " << name << ", but the program will have to Shut Down now" << endl;
		}

	cout << set_10 << endl;

	system("pause");

	exit(10);

	return 0;

}
	/*
	bool delete_record = (ans == "D" || ans == "d");
	cout << "You selected delete option" << endl;
	(WILL DO THE BOOLEAN VERSION OF CONDITIONS IN ANOTHER PROJECT/ITEM)


	... Did it on Thursday - 02/08/2018. ANd is not as good as the 'condition' Version
	
	... Finally had the job done on Monday - 06/08/2018  (Sophie's birthday)
	
	*/
