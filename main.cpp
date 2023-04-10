
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string pathone = "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex4.txt";
    string pathtwo = "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex4.1.txt";
    string paththree = "C:\\Users\\yaros\\source\\repos\\Project8\\Project8\\ex4.2.txt";
    fstream fir(pathone, ios::in);
    fstream sec(pathtwo, ios::in);
    fstream three(paththree, ios::out);
    string firline,secline;
    if (!fir.is_open() && !sec.is_open()&& !three.is_open()) {
        cout << "Error opening file"<< endl;
        return 1;
    }
    else {
        while (getline(fir, firline) && getline(sec, secline)) {
            three << firline << endl;
            three << secline << endl;

        }
    }

    fir.close();
    sec.close();
    three.close();

    return 0;
}
