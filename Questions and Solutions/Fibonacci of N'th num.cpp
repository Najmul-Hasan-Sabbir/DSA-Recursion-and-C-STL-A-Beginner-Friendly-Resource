
#include <iostream>
using namespace std;


int fibonacci(int N) {
    if (N == 1) {
        return 0;  // F(1) = 0
    }
    if (N == 2) {
        return 1;  // F(2) = 1
    }
    // Recursive case
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N;
    cin >> N;

    cout << fibonacci(N) << endl;

    return 0;
}
