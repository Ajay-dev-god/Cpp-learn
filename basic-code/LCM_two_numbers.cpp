#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    long long x = a, y = b;
    long long hcf = 1;

    for (int i = 2; i <= x && i <= y; i++) {
        while (x % i == 0 && y % i == 0) {
            hcf *= i;
            x /= i;
            y /= i;
        }
    }

    long long lcm = (a * b) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
