/* 
   Date Started : 10/06/2018
   
   Now to make our programs Interactive.. oh yeah
   
   Starting with the If conditional statements -- one of my favs. in Coding
*/

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int Interactive_if()
{
	string User_keyword = "hello"; char set_9 = 9; char set_7 = 7; char set_10 = 10; // I've gotta make a header file for this
	
	cout << set_9 << "Please Enter Keyword : " << flush;
	
	string User_input;
	cin >> User_input;

	cout << set_10 << endl;
	cout << set_9 << setprecision(15) << "You've entered : " << "'" << User_input << "'" << set_10 << endl;

	if(User_input == User_keyword)  // This is were Math magic 2.0 will come from
	{
		cout << set_9 << "Keyword is correct, You are now logged in" << set_10 << endl;
	}
	if(User_input != User_keyword)
	{
		cout << set_9 << set_7 << "Keyword ain't right nig*a, Access Denied!" << set_10 << endl;
	}

	system("pause");

	return 0;
}

