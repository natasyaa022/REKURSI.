#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int s;
    int v;
    double srad;
    double jarak;

    cout << "Menghitung Jarak Horizontal Terjauh" << endl;
    cout << "Masukan nilai s" << endl;
    cin >> s;
    cout << "Masukan nilai V" << endl;
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad);
    cout << jarak << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

