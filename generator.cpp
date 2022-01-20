#include <iostream>
#include <stdio.h>
#include <ctime>


int startday = 29;
int startmon = 8;
int startyear = 2004;

using namespace std;

int main()
{
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << (tPtr->tm_mday) * (tPtr->tm_year) * startday * startmon * startyear << endl;
}
