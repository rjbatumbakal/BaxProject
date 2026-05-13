#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    double average;
    cin >> a >> b >> c;
    if (a > 0 && a <= 20 && b > 0 && b <= 20 && c > 0 && c <= 20) { 
        average = (a + b + c) / 3.0; /* calculates the average of the three integers by summing them and dividing by 3, and stores the result in the variable average*/
    cout << fixed << setprecision(2) << average << endl; /* outputs the average of the three integers to the user*/
    }
    else {
        return 0; /* exits the program if any input integer is out of bounds*/
    }

}
