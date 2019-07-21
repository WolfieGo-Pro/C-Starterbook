/*  CONTINUATION OF THE INTERACTIONAL CONDITIONAL STATEMENTS
if(....) {
.........}
else{
.........}
ITS THAT E A S Y!
This is where some of my ASCII code sets are gonna change
set_9 == \t ; set_7 == \a
................................LET'S GOO

WILL NEED TO UPGRADE THE QUALITY OF THIS CODE BY USING 'If... elseif...'
*/

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int ifelse()
{
	char set_10 = 10; char set_7 = 7;  // Setting values from the ACII Character Set

	// Just wrapping up the 'ifs' . (If-Else) section I've learnt

	cout << "1.) \t First Name : " << flush; 
	string Fname;
	cin >> Fname;
    cout << set_10 << endl;
	
	cout << "2.) \t Surname : " << flush; 
	string Sname;
	cin >> Sname;
	cout << set_10 << endl;

	cout << "3.) \t Age : " << flush; // This 'age' would be better set as a class
	int age;
	cin >> age;
	cout << set_10 << endl;

	cout << "4.) \t Gender : " << flush; // Better I  make the 'Gender' types as classes
	string gender;
	cin >> gender;
	cout << set_10 << endl;
	
	if (gender == "male" || "Male")
	{
		cout << "\t So " << Fname << ',' << " You're " << age << " right ? " << flush;
		string respuesta; // means 'answer' in spanish
		cin >> respuesta;
		cout << set_10 << endl;

		if (age < 17)
		{
		    cout << "\t So that means you're yet to get laid right?" << set_10 << endl;
			cout << "\t (if you type 'yes' , then from a person's perspective, you're probably still a wheeny.. lol) : " << flush;
			cin >> respuesta;
			cout << set_10 << endl;

			if (respuesta == "yes")
			{
				cout << "\t Yep!.. W H E E N Y" << set_10 << endl;
			}
			else
			{
				cout << "\t Oh, alright sir " << Fname << ".. I can imagine the performance on bed..lol" << endl;
			}
		}
		else if (age > 17)
		{
			cout << "\t So that means you've got yourself a girlfriend right?" << set_10 << endl;
			cout << "\t (FYI, if you type 'no' , then from a person's perspective, you're looser) So have you? : " << flush;
			cin >> respuesta;
			cout << set_10 << endl;

			if (respuesta == "yes")
			{
				cout << "\t hmm.. Nice going lad .. I gotta say. But one more thing.. Shack her well.. alright? : " << flush;
				cin >> respuesta;
				cout << set_10 << endl;
				cout << "\t FYI, the 'shack' in this context means to perform well..  on bed. lol" << endl;
			}
			else
			{
				cout << "\t YEP!.. a looser.  Like is it because of your small d!cK or what? " << endl;
				cout << "\t But remember, that's from a person's perspective.. " << flush;
				cout << "\t An ignorant person's perspective we can say" << endl;
			}
		}
	}
	else if (gender == "female" || "Female")
	{
		cout << "\t So " << Fname << "," << "you're " << age << " of age right? : " << flush;
		string ans;
		cin >> ans;
		cout << set_10 << endl;
	}
	system("pause");

	return 0;
}
