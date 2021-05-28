/* Name:      Final Project "Learn more about your horoscope sign"
 * Author:    Anna Khanzhina
 * Project:   Final Project
 * Problem statement:  Predictions of what your future will be like next year, calculation of your love compatibility, what are your birthstones, what colors are lucky for you, lucky numbers, are based on upon the astrological configuration that occurred at the time of the birth information provided.
 *
 * Algorithm:
 *   1.  Create abstract parent class Horoscope and 12 child classes for each Zodiac signs, which inheret and override all virtual functions:
 *   printSign(), description(), luckyNum(), prediction() and loveComp().
 *   2.  In main creat structure for the date of birth and class for Exception.
 *   3.  In main ask user for name, gender and date of birth. If date enter is not correct throw an exception and handle it. 
 *   4.  Create base class pointer.
 *   5.  According to the date of birth create new object of an appropriate child class and assign to pointer of parent class (upcasting).
 *   6.  Let user choose from the MENU what exactly he wants to know about his horoscope sign and print appropriate information.
 * Program include following items:
 *   1.  Inheritance
 *   2.  Polymorphism
 *   3.  Exceptions
 *   4.  An abstract class 
 */
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <exception>
#include "Horoscope.h"
using namespace std;
//structure to hold infomation about date of birth
struct birthdate {
	int year;
	int month;
	int day;
};
//new class for exceptions to throw
class Exception {
public:
	Exception(const string& msg) : msg_(msg) {}
	~Exception() {}
	string getMessage() const { return(msg_); }
private:
	string msg_;
};
int main()
{
	struct birthdate bd;  //create an object of structure
	string userName, gender;  //string to hold the answers of user
	int choice;
	cout << "Your Zodiac sign reflects the position of the sun when you were born. It has strong influence on your personality.";
	cout << "\nPress Enter if you want to know more about traits and secrets of your zodiac sign. "<<endl;
	cin.ignore(1000000000, '\n');  //continue if Enter was pressed
	cout << "REGISTRY DETAILS:" << endl;
	cout << "Enter your name: ";
	getline(cin, userName);  //read the name
	cout << "Enter your gender [F/M]: ";  
	getline(cin, gender);  //read gender
	string original;  //string to hold answer about date of birth
	try {
		cout << "Enter a date [in the format of mm/dd/yyyy]: ";
		getline(cin, original);  //read date of birth
		bd.month = atoi(original.substr(0, 2).c_str()); //convert string month to integer
		bd.day = atoi(original.substr(3, 2).c_str());   //convert string day to integer
		bd.year = atoi(original.substr(6, 4).c_str());  //convert string year to integer
		if (bd.day > 31 || bd.day < 1 || bd.month > 12 || bd.month < 1 || bd.year < 1920 || bd.year>2020)
		throw Exception("ERROR! Please make sure you enter a date in formate of mm/dd/yyyy"); //if date entering not correct throw an exception
	}
	//handle an exception 
    catch(Exception & e){
      cout<< e.getMessage()<<endl;
	  exit(0);
    }
	Horoscope* ptr;  // create base class pointer
	// checks month and date within the  
	// valid range of a specified zodiac sign 
	// create new object of child class (according to the date of birth) and assign to base pointer, which was created earlier
	if ((bd.month == 3 && bd.day >= 21) || (bd.month == 4 && bd.day <= 19))
		ptr=new Aries (userName, gender,bd.month,bd.day, bd.year);
	else if ((bd.month == 4 && bd.day >= 20) || (bd.month == 5 && bd.day <= 20))
		ptr = new Taurus (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 5 && bd.day >= 21) || (bd.month == 6 && bd.day <= 20))
		ptr = new Gemini (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 6 && bd.day >= 21) || (bd.month == 7 && bd.day <= 22))
		ptr = new Cancer (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 7 && bd.day >= 23) || (bd.month == 8 && bd.day <= 22))
		ptr = new Leo (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 8 && bd.day >= 23) || (bd.month == 9 && bd.day <= 22))
		ptr = new Virgo (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 9 && bd.day >= 23) || (bd.month == 10 && bd.day <= 22))
		ptr = new Libra (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 10 && bd.day >= 23) || (bd.month == 11 && bd.day <= 21))
		ptr = new Scorpio (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 11 && bd.day >= 22) || (bd.month == 12 && bd.day <= 21))
		ptr = new Saggitarius (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 12 && bd.day >= 22) || (bd.month == 1 && bd.day <= 19))
		ptr = new Capricorn (userName, gender, bd.month, bd.day, bd.year);
	else if ((bd.month == 1 && bd.day >= 20) || (bd.month == 2 && bd.day <= 18))
		ptr = new Aquarius (userName, gender, bd.month, bd.day, bd.year);
	else 
		ptr = new Pisces (userName, gender, bd.month, bd.day, bd.year);
	ptr->printSign();  //print sign and information about user
	cout << endl;
	cout << "MENU" << endl;
	cout << "1. Description\n2.Lucky numbers\n3.Prediction for 2021\n4.Love compatibility\n5.Exit" << endl;
	cout << "Enter your choice";
	cin >> choice; //read the user's choice
	do{
		if (choice == 1)
			ptr->description();  //print description of personality traits and basic information
		else if (choice == 2)
			ptr->luckyNum();  //print lucky numbers
		else if (choice == 3)
			ptr->prediction();  //print prediction for 2021
		else if (choice == 4)
			ptr->loveComp();  //print love compatibility with other Zodiac signs
		else
			exit(0);  //exit the program
		cout << "MENU" << endl;
		cout << "1. Description\n2.Lucky numbers\n3.Prediction for 2021\n4.Love compatibility\n5.Exit" << endl;
		cout << "Enter your choice";
		cin >> choice;
	}
	 while (choice <= 5 && choice >= 1);
	return 0;
}


