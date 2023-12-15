/* The purpose of this program is to display two clocks, one in 12-hour format
*  and the other in 24-Hour format. It first takes an initial time provided
*  by the user in a 24-Hour format (00:00:00), and then allows the user to
*  increment the hour, minute, or second value by one.
* 
*  Author: Willie Carranza
*  Date: November 19, 2023
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "./ClockFcts.h"
#include "./PrintFcts.h"
using namespace std;

int main() {
	int hour, minute, second;
	char userAction;
	bool timeValidity = false;

	while (!timeValidity) {
		cout << "Enter the time (24-hour format):" << endl;

		cout << "Hour:" << endl;
		cin >> hour;
		if (hour < 0 || hour > 23) {
			cout << "Invalid hour: Enter a number 0-23." << endl;
			continue;
		}

		cout << "Minute:" << endl;
		cin >> minute;
		if (minute < 0 || minute > 59) {
			cout << "Invalid minute: Enter a number 0-59." << endl;
			continue;
		}

		cout << "Second:" << endl;
		cin >> second;
		if (second < 0 || second > 59) {
			cout << "Invalid second: Enter a number 0-59." << endl;
			continue;
		}

		timeValidity = true;
	}

	do {
		PrintMenu();
		cin >> userAction;

		switch (userAction) {
			case '1':
				AddTime(hour, minute, second, "hour");
				PrintTime(hour, minute, second);
				break;
			case '2':
				AddTime(hour, minute, second, "minute");
				PrintTime(hour, minute, second);
				break;
			case '3':
				AddTime(hour, minute, second, "second");
				PrintTime(hour, minute, second);
				break;
			case '4':
				break;
			default:
				cout << "Error: Invalid user action." << endl;
				break;
		}
	} while (userAction != '4');

	cout << "Program terminated. Goodbye!" << endl;

	return 0;
}