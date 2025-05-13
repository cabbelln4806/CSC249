// CSC 249
// Nia Cabbell
// 5/13//2025

#include <iostream>
using namespace std;

int main() {
    // problem 1
    int a, b, c;
    cout << "Enter three integers separated by spaces" << endl;
    cin >> a >> b >> c;
    cout << "a=" << a << " b=" << b << " c=" << c << endl;

    if ( (a < b) && (a < c) ) {
        cout << "a is smallest" << endl;
    }
    if ( (b < a) && (b < c) ) {
        cout << "b is smallest" << endl;
    }
    if ( (c < a) && (c < b) ) {
        cout << "c is smallest" << endl;
    }
}

int main2() {

    const int SIZE = 6;
    int values[SIZE] = {1, 4, 7, 5, 3, 4};

    int current;
/*
    for (int i=0; i < SIZE; i++) {
        cout << "Value[" << i << "]: ";
        cin >> values[i];
    }
    cout << endl;
*/
    int current_max = values[0];

    cout << "V=";
    for (int i=0; i < SIZE; i++) {
        cout << values[i] << " ";
    }
cout << endl;
    cout << "Now finding maximum n in V" << endl;

    for (int i=0; i < SIZE; i++) {
        current = values[i];
        cout << current << endl;
        if (current > current_max) {
            current_max = current;
            cout << "\t" << "current_max now: " << current_max << endl;
        }
    }

    cout << "Largest value in V is: " << current_max << endl;
}
//cout << "V=";