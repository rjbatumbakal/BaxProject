#include <iostream>
#include <iomanip>
using namespace std; 

int main(){
    int array [10];
    for (int i = 0; i < 10; i++){
        cin >> array[i]; // stores the input integers in an array
        if (array[i] <= 0 || array[i] >= 101) {
            return 0; // returns 0 if integer is out of bounds
        }
    }
    int seventh_number = array[6]; // retrieves the seventh number from the array (index 6) and stores it in the variable seventh_number
    float weekly_allowance = seventh_number * 2.75; // calculates Lulu's weekly allowance by multiplying the seventh number by 2.75 and stores the result in the variable weekly_allowance
    cout << "The multiplier is " << seventh_number << "! Lulu's allowance is $ " << fixed << setprecision(2) << weekly_allowance << "!" << endl;
}