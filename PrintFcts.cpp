#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void PrintMenu() {
	cout << setfill('*') << setw(28) << '*' << endl;
	cout << left << setw(27) << setfill(' ') << "* 1 - Add One Hour" << "*\n" << endl;
	cout << setw(27) << "* 2 - Add One Minute" << "*\n" << endl;
	cout << setw(27) << "* 3 - Add One Second" << "*\n" << endl;
	cout << setw(27) << "* 4 - Exit Program" << '*' << endl;
	cout << setfill('*') << setw(28) << '*' << endl;
}

string Get24HrFormat(int hour, int minute, int second) {
	string hourStr = to_string(hour);
	string minuteStr = to_string(minute);
	string secondStr = to_string(second);
	string formattedStr;

	if (hour < 10) {
		hourStr = "0" + hourStr;
	}
	if (minute < 10) {
		minuteStr = "0" + minuteStr;
	}
	if (second < 10) {
		secondStr = "0" + secondStr;
	}

	formattedStr = hourStr + ":" + minuteStr + ":" + secondStr;
	return formattedStr;
}

string Get12HrFormat(int hour, int minute, int second) {
	string hourStr = to_string(hour);
	string minuteStr = to_string(minute);
	string secondStr = to_string(second);
	string timeOfDay = "A M";
	string formattedStr;
	int newHour = hour;

	if (hour >= 12) {
		timeOfDay = "P M";
	}
	if (hour > 12) {
		newHour = hour % 12;
		hourStr = to_string(newHour);
	}

	if (newHour < 10) {
		hourStr = "0" + hourStr;
	}
	if (minute < 10) {
		minuteStr = "0" + minuteStr;
	}
	if (second < 10) {
		secondStr = "0" + secondStr;
	}

	if (hour == 0) {
		hourStr = "12";
	}

	formattedStr = hourStr + ":" + minuteStr + ":" + secondStr + " " + timeOfDay;
	return formattedStr;
}

void PrintTime(int hour, int minute, int second) {
	cout << string(27, '*') + string(4, ' ') + string(26, '*') << endl;
	cout << '*' + string(6, ' ') + "12-Hour Clock" + string(6, ' ') + '*' + string(4, ' ') + '*' + string(6, ' ') + "24-Hour Clock" + string(5, ' ') + "*\n" << endl;
	cout << '*' + string(6, ' ') + Get12HrFormat(hour, minute, second) + string(7, ' ') + '*' + string(4, ' ') + '*' + string(8, ' ') + Get24HrFormat(hour, minute, second) + string(8, ' ') + '*' << endl;
	cout << string(27, '*') + string(4, ' ') + string(26, '*') << endl;
}