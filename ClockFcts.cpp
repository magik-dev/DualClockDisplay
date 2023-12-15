#include <string>
#include <string>
using namespace std;

void AddTime(int& hour, int& minute, int& second, string timeUnit) {
	if (timeUnit == "hour") {
		hour += 1;
	}
	else if (timeUnit == "minute") {
		minute += 1;
	}
	else if (timeUnit == "second") {
		second += 1;
	}

	if (second == 60) {
		second = 0;
		minute += 1;
	}
	if (minute == 60) {
		minute = 0;
		hour += 1;
	}
	if (hour == 24) {
		hour = 0;
	}
}