#include <iostream>
#include <fstream>
using namespace std;



int main() {
	ofstream fout ("friday.out");
	ifstream fin ("friday.in");
	int N;
	int daysOfWeek [7] = {0, 0, 0, 0, 0, 0, 0};
	int startDay = 1; //0-Sun 1-Mon ...
	int startYear = 1900;
	int currentDay = startDay - 1;
	int currentYear = 1900;
		
	fin >> N;
	
	currentDay += 13;
	
	while (currentYear <= startYear + N - 1) {
		
		++daysOfWeek[currentDay % 7];
		
		//Janaury
		currentDay += 31;
		++daysOfWeek[currentDay % 7];
		
		//February
		if ((not(currentYear % 4) and currentYear % 100) or not(currentYear % 400)) {
			currentDay += 29;
			++daysOfWeek[currentDay % 7];
		} else {
			currentDay += 28;
			++daysOfWeek[currentDay % 7];
		}
		
		//March
		currentDay += 31;
		++daysOfWeek[currentDay % 7];
		
		//April
		currentDay += 30;
		++daysOfWeek[currentDay % 7];
		
		//May
		currentDay += 31;
		++daysOfWeek[currentDay % 7];
		
		//June
		currentDay += 30;
		++daysOfWeek[currentDay % 7];
		
		//July
		currentDay += 31;
		++daysOfWeek[currentDay % 7];
		
		//August
		currentDay += 31;
		++daysOfWeek[currentDay % 7];
		
		//September
		currentDay += 30;
		++daysOfWeek[currentDay % 7];
		
		//October
		currentDay += 31;
		++daysOfWeek[currentDay % 7];
		
		//November
		currentDay += 30;
		++daysOfWeek[currentDay % 7];
		
		//December
		currentDay += 31;
		
		++currentYear;
	}
	
	fout << daysOfWeek[6] << " " << daysOfWeek[0] << " " << daysOfWeek[1] << " " << daysOfWeek[2] << " ";
	fout << daysOfWeek[3] << " " << daysOfWeek[4] << " " << daysOfWeek[5];
	return 0;
}