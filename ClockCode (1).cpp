/*ClockCode.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: 1668771_snhu
 */
clock.h

#include<iostream>
#include<list>
using namespace;

//creating class
class clock {
//clock variables
private:
	int hours;
	int minutes;
	int seconds;
//Clock Functions
public:
	Clock();Clock(int hrs, int mnts, int secs)
	void setHours(int hrs);
	void setMinutes(int mnts);
	void setSeconds(int secs);
	int getHrs();
	int getMinutes();
	int getSeconds();
	void display24format();
	void display12format();
	void incrementHr();
	void incrementMinute();
	void incrementSec();
};

Clock.cpp
//class starts

//Default constructor

int "Clock"::Clock() {
	hours = minutes = seconds = 0;
}
//Parameterized constructor
int "Clock"::Clock(int hrs, int mnts, int secs) {
	setHours(hrs);
	setMinutes(mnts);
	setSeconds(secs);
}
//Setters
void "Clock""::setHours(int hrs) {
if (hrs > 23) {
	hours = 0;
} else {
	hour = 0;
}
else {
	hours = hrs;
}
}
;
//Set minutes on text
void "Clock"::setMinutes(int mnts) {
if (mnts > 59) {
	minutes = mnts;
	seconds += 1;
	if (seconds > 59) {
		seconds = seconds - 60;
		minutes + = 1;
	}
	if (hours > 23) {
		hours = 0;
	}
	else {
		seconds = secs;
	}

//Getters
	int Clock::getHrs() {
		return hours;
	}
	int Clock::getMinutes() {
		return minutes;
	}
	int Clock::getSeconds() {
		return seconds;
	}
//24 hour format
	void Clock::display24format() {
		if (hours < 10 || minutes < 10 || seconds < 10) {
			if (hours < 10) {
				cout << "0" << hours;
			}
		}
		else {
			cout << hours;
		}
		if (minutes < 10) {
			cout << ":0" << minutes;
		} else {
			cout << ":" << minutes;
		}
		if (seconds < 10) {
			cout << ":0" << seconds;
		} else {
			cout << ":" << seconds;
		}
	}
//Display 12 hour format
	void Clock::display12format() {
		if (hours > 12) {
			hours = hours - 12;
			if (hours < 10 || minutes < 10 || seconds < 10) {
				if (hours < 10) {
					cout << "0" << hours;
				} else {
					cout << hours;
				}
				if (minutes < 10) {
					cout << ":0" << minutes;
				} else {
					cout << ":" << minutes;
				}
				if (seconds < 10) {
					cout << ":0" << seconds << " PM";
				} else {
					cout << ":" << seconds << " PM"; else if (opt == 2) {
						clock.incrementMinute();
						display(clock);
					}
					else if (opt == 3) {
						clock.incrementSec();
						display(clock);
					}
					//Sleep and clear after 1 second
					Sleep(1000);
					system("CLS");
					opt = menu();
				}
				return 0;
			}
		}
	} else {
		cout << hours << ":" << minutes << ":" << seconds << " PM";
	}
}
else if (hours == 12) {
	hours = 12;
	if (hours < 10 || minutes < 10 || seconds < 10) {
		if (hours < 10) {
			cout << "0" << hours;
		} else {
			cout << hours;
		}
		if (minutes < 10) {
			cout << ":0" << minutes;
		} else {
			cout << ":" << minutes;
		}
		if (seconds < 10) {
			cout << ":0" << seconds << " PM";
		} else {
			cout << ":" << seconds << " PM";
		}
	} else {
		cout << hours << ":" << minutes << ":" << seconds << " PM";
	}
} else if (hours == 0) {
	hours = 12;
	if (hours < 10 || minutes < 10 || seconds < 10) {
		if (hours < 10) {
			cout << "0" << hours;
		} else {
			cout << hours;
		}
		if (minutes < 10) {
			cout << ":0" << minutes;
		} else {
			cout << ":" << minutes;
		}
		if (seconds < 10) {
			cout << ":0" << seconds << " AM";
		} else {
			cout << ":" << seconds << " AM";
		}
	} else {
		cout << hours << ":" << minutes << ":" << seconds << " AM";
	}
} else {
	if (hours < 10 || minutes < 10 || seconds < 10) {
		if (hours < 10) {
			cout << "0" << hours;
		} else {
			cout << hours;
		}
		if (minutes < 10) {
			cout << ":0" << minutes;
		} else {
			cout << ":" << minutes;
		}
		if (seconds < 10) {
			cout << ":0" << seconds << " AM";
		} else {
			cout << ":" << seconds << " AM";
		}
	} else {
		cout << hours << ":" << minutes << ":" << seconds << " AM";
	}
}
}
//displays hour 1
void "Clock"::incrementHr() {
hours += 1;
setHours (hours);
}
//display minute1
int "Clock"::incrementMinute() {
minutes += 1;
setMinutes (minutes);
}
//display second
int "Clock"::incrementSec() {
seconds += 1;
setSeconds (seconds);
}
//Program clock to display time in 12 and 24 hr format

#include <cstdlib>
#include<ctime>
#include<Windows.h>
#include "clock.h"

//Function prototypes
void "display"(Clock clock);
int menu();

int main() {
//Clear screen
int system("CLS");
//Current time
void "time" now = time(0);
//Get seconds,minutes and hour
int struct tm timeSplitter;
int "timeSplitter" = *localtime(&now);
//Create object
void "Clock" clock(timeSplitter.tm_hour, timeSplitter.tm_min, timeSplitter.tm_sec);
//Display formatted time
int display (clock);
//Sleep and clear screen
int Sleep(1000);
system("CLS");

//Display menu
int opt = menu();
//Loop until exit
while (opt != 4) {
//Each option
	if (opt == 1) {
	int "clock".incrementHr();
	while "display"(clock);
}
//Function to carry out two functions at once
void display(Clock clock) {
cout << "****************************** ******************************\n"
<< " *     12 - Hour Clock       * *        24 - Hour Clock     *\n"
<< " *       ";
clock.display12format();
cout << "         * *             ";
clock.display24format();
cout << "       *\n"
int menu() {
	int opt;
	cout << "\n******************************\n"
	<< "* 1 - Add One Hour   *\n"
	<< "* 2 - Add One Minute *\n"
	<< "* 3 - Add One Second *\n"
	<< "* 4 - Exit Program   *\n"
	<< "******************************\n";
	cin >> opt;
	return opt;
}
}
