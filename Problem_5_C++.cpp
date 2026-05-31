#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
    cin >> N;

	if (2 <= N && N <= 100) {
		vector<int> values(N); /* Read N integers into the vector.*/
		for (int n = 0; n < N; n++) {
			cin >> values[n];
            if (-1000 > values[n] || values[n] > 1000) {
                return 0; /* Exit the program if any input integer is out of bounds.*/
            }
		}
            /*Traverse from the end of the list toward the beginning.*/
        for (int n = N - 1; n >= 0; n--) {
            /*Check if the current number is even using modulo.*/
            if (values[n] % 2 == 0) {
                cout << values[n] << " ";
            }
        }
        cout << endl;     
	}
    else {
        return 0; /*Exit the program if N is out of bounds.*/
    }
}
