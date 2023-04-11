
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string pathone = "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex7.txt";
	fstream filein;
	filein.open(pathone, ios::in);

	string line;
	int sharb = 0, dolar = 0, dog = 0, indicative = 0, star = 0, question = 0;
	if (!filein.is_open()) {
		cout << "Error opening file" << endl;
		return 1;
	}
	else {
		while (getline(filein, line)) {
			for (char x : line)
			{
				if (x == '#') {
					sharb += 1;
				}
				else if (x == '$') {
					dolar += 1;
				}
				else if (x == '@') {
					dog += 1;
				}
				else if (x == '!') {
					indicative += 1;
				}
				else if (x == '*') {
					star += 1;
				}
				else if (x == '?') {
					question += 1;
				}
			}
		}
		double all = sharb + dolar + dog + indicative + star + question;
		cout << "# - " << sharb <<" - " << (sharb / all) * 100 << "%" << endl;
		cout << "$ - " << dolar << " - " << (dolar / all) * 100 << "%" << endl;
		cout << "@ - " << dog << " - " << (dog / all) * 100 << "%" << endl;
		cout << "! - " << indicative << " - " << (indicative / all) * 100 << "%" << endl;
		cout << "* - " << star << " - " << (star / all) * 100 << "%" << endl;
		cout << "? - " << question << " - " << (question / all) * 100 << "%" << endl;
	}
	filein.close();


	return 0;
}
