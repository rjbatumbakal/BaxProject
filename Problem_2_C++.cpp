#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int N; //N indicating how many character sequences are in the input.
    cin >> N;
    if (1 <= N && N <= 100) {
        for (int i = 0; i < N; ++i) {
            int t; //Succeeding lines begin with an integer t indicating how many characters ch follow.
            cin >> t;
            if (1 <= t && t <= 100) {
                int uppercaseCount = 0; //initial counter of upercase count
                for (int j = 0; j < t; ++j) { //checks each input of ch if it is in uppercase
                    char ch;
                    cin >> ch; 
                    if (isupper(ch)) {// uppercase checker
                        uppercaseCount = uppercaseCount + 1;
                    }
                }
                cout << uppercaseCount << endl; 
            }
            else {
                return 0; // Exit the program if t is out of bounds.
            }
        }
    }
    else {
        return 0; // Exit the program if N is out of bounds.
    } 
}