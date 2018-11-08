/* Name: Juan Villa
* ID: 015909255
* Class: CECS 282 Sec 3
* Instructor: Minhthong Nguyen
* Date: 9 September 2018
* Purpose: This program is designed to convert integers to roman numerals
*/

//test change
//test

#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	//user input
	int userNumber;
	//used for creating roman numeral string
	string roman;

	//prompting for user input
	cin>>userNumber;
	
	if (userNumber < 0  || userNumber >= 4000){
		cout<<"Invalid Input"<<endl;
		exit(0);
	}
	
	//roman numerals 0-9 in ones, tens, hundreds, and thousands (0-3999)
    string m[] = {"", "M", "MM", "MMM"}; 
    string c[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; 
    string x[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}; 
    string i[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	
	//gives array position of each
	string thou = m[userNumber/1000]; 
    string hund = c[(userNumber%1000)/100]; 
    string ten = x[(userNumber%100)/10]; 
    string one = i[userNumber%10]; 
    
    //combines string
	roman = thou + hund + ten + one;
	
	//outputs roman numeral
	cout<<roman;
	
	return 0;
}

