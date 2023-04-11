
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {

	string pathone = "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex5.txt";
	fstream file;
	int largest_num = 0;
	file.open(pathone, ios::in);
	string line;
	if (!file.is_open() ) {
		cout << "Error opening file" << endl;
		return 1;
	}
	else {
		while (getline(file, line)) {
			stringstream ss(line); 
			int num;
			while (ss >> num) { 
				if (num > largest_num) {
					largest_num = num;
				}
			}
		}
	}
	file.close();
	cout << "The largest number in file is " << largest_num << endl;
	
	return 0;
}