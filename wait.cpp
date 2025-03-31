#include <iostream>
using namespace std;

int main() {
    for (int n = 2; n <= 20; n++) {
        bool isPrime = true;
        for (int k = 2; k * k <= n; k++) {  // Check up to sqrt(n)
            if (n % k == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << "\t";
        }
    }
    return 0;
}
