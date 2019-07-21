          // Author : Wilfred Russel Odere
         //  Class  : 4 ESO - A
        //   Year   : May 9th, 2018
       //    Reason : I was bored N*gga.........So I decided to test what I'd learned about 'float types'

	  // Just checking 
     //  It also needs to be checked again tho

#include <iostream>
#include <string>
#include <iomanip>

	  using namespace std;
	  
	  int trance()
	  {

		  cout << " Hi, and welcome to NumberTrance!" << endl;
		  cout << "                               " << endl;
		  cout << " The app that converts Ordinary" << flush;
		  cout << " Numbers to Scientific Notations!" << endl;
		  cout << "                               " << endl;
		  cout << "*******************************" << endl;
		  cout << " Let\'s start by first, knowing" << flush;
		  cout << " your name : " << flush;

		  string User_Name;
		  cin >> User_Name;

		  cout << "*******************************" << endl;
		  cout << "                               " << endl;
		  cout << " Alright " << User_Name << flush;
		  cout << " Let\'s Begin! ... " << endl;
		  cout << "*******************************" << endl;
		  cout << "                               " << endl;
		  cout << " What's the Ordinary Number? : " << flush;

		  double User_Input;
		  cin >> User_Input;

		  cout << "                               " << endl;
		  
		  char set_7 = 7;

		  cout << " That will be : " << flush;
		  cout << scientific << User_Input << " In " << flush;
		  cout << "Scientific Notation " << set_7 << endl;
		  cout << "*******************************" << endl;
		  cout << "                               " << endl;
		  cout << "                               " << endl;
		  cout << "                               " << endl;

		  system("pause");

		  return 0;

	  }