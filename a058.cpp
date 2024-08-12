#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count_3_r0 = 0, count_3_r1 = 0, count_3_r2= 0;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        if (number % 3 == 0) {
            count_3_r0++;
        } else if (number % 3 == 1) {
            count_3_r1++;
        } else {
            count_3_r2++;
        }
    }

    cout << count_3_r0 << " " << count_3_r1 << " " << count_3_r2 << endl;
}