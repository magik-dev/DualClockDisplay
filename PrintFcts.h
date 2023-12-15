#ifndef PRINTFCTS_H
#define PRINTFCTS_H

#include <string>
using namespace std;

void PrintMenu();

string Get24HrFormat(int hour, int minute, int second);

string Get12HrFormat(int hour, int minute, int second);

void PrintTime(int hour, int minute, int second);

#endif