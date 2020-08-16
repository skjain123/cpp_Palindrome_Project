#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main() {
	string input = ""; //user input

	list<char> l; //list
	list<char> rl; //reverse list
	
	//getting input
	cout << "Please input something lower than 80 Characters:" << endl;
	getline(cin, input);

	//making sure that the user input is less than 80 characters
	while (input.length() > 80) {
		cout << "Please input something lower than 80 Characters:" << endl;
		getline(cin, input);
		cout << input << endl;
	}

	//converting the string input to lists and reverse lists
	for (char c : input) {
		if (!ispunct(c) && c != ' ') {
			l.push_back(c);
			rl.push_front(c);
		}
	}

	//printing a list
	string temp1 = "You Entered: ";
	for (char c : l) {
		temp1 += c;
	}
	temp1 += '.';
	cout << temp1 << endl;

	//printing a list
	string temp2 = "You Entered: ";
	for (char c : rl) {
		temp2 += c;
	}
	temp2 += '.';
	cout << temp2 << endl;

	//display if the input is a palindrome or not
	if (l == rl) {
		cout << "You entered a Palindrome!";
	}
	else {
		cout << "You did not enter a Palindrome!" << endl;
	}
}
