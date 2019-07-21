/*
Its 02/07/2018 here in Spain.
Continued with If-Else
Which is better than having to write if(..).. every time I wanna make a condition
It's actually muy facil.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int elseif()
{
	// The 'If-Else' is really suitable for Menu Options amongst other things.
	// So let's make an app that's got Choose-able Menu options

	char set_10 = 10; 
	
	cout << "\t\t\t Hello and Welcome to the App,  Men Madness!" << set_10 << set_10 << endl;
	cout << "\t\t\t The App that give mens sources to satisfy their biological needs " << flush;
	cout << "through the Internet" << set_10 << set_10 << endl;
	cout << "\t Please Select an Option:-" << set_10 << endl;
	cout << "1.)\t Watch Porn" << set_10 << endl;
	cout << "2.)\t Do Porn" << set_10 << endl;
	cout << "3.)\t Meet A Pornstar" << set_10 << endl;
	cout << "4.)\t Do it With a Pornstar" << set_10 << endl;
	cout << "5.)\t Get a Girlfriend on Tinder" << set_10 << endl;
	cout << "6.)\t Do it with the girl you got on Tinder" << set_10 << endl;
	cout << "\t Write the number you want and press Enter : " << flush;
	
	int ans;
	cin >> ans;
	
	cout << set_10 << endl;

	if (ans == 1)
	{
		cout << "\t Loading PornHub..." << flush;
		cout << "https://pornhub.com" << endl;
	}
	else if (ans == 2)
	{
		cout << "\t Loading Omegle..." << flush;
		cout << "https://omegle.com" << endl;
	}
	else if ((ans == 3) || (ans == 4))
	{
		cout << "\t Loading Brazzer Network..." << flush;
		cout << "https://www.brazzers.com/pornstars/" << endl;
	}
	else if (ans == 5 || ans == 6)
	{
		cout << "Loading Tinder..." << flush;
		cout << "https://tinder.com" << endl;
	}
	else
	{
		cout << "Man you didn't press any thing... Try again" << endl;
		cout << "And remember, Give it to her GOOD" << endl;
	}
	
	system("pause");

	return 0;

}