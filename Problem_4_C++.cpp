#include <iostream>
using namespace std;

int main (){
	int a, b, c;
	cin >> a >> b >> c;
    if ( a >= -100 && a <= 100 && b >= -100 && b <= 100 && c >= -100 && c <= 100) {
        int x = a, y = b, z = c;
        /* Sort three values in ascending order through swaps*/
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }
        if (y > z) {
            int temp = y;
            y = z;
            z = temp;
        }
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }
        cout << x << " " << y << " " << z << "\n";
        cout << a << " " << b << " " << c << "\n";
    }
    else {
        return 0;
    }

}
