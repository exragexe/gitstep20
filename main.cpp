
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char * argv[]) {
	
	string pathone = argv[1];//or "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex3.txt";
	fstream fin,fout;
	string pathtwo = argv[2];//or "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex3.1.txt";
	fin.open(pathone, ios::in);
	fout.open(pathtwo, ios::out);
	string line;
	if (!fin.is_open() && !fout.is_open() ) {
		cout << "Error opening file" << endl;
		return 1;
	}
	else {
		while (getline(fin, line)) {
			
			fout << line << endl;
		}
	}
	
	fin.close();
	fout.close();
	return 0;
}
