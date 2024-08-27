#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int num;

public:
    // Constructor to initialize the number
    PrimeChecker(int n) : num(n) {}

    // Function to check if the number is prime
    bool isPrime() {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    // Function to get the number
    int getNumber() {
        return num;
    }
};

int main() {
    int start, end;
    cout << "Enter the start of the series: ";
    cin >> start;
    cout << "Enter the end of the series: ";
    cin >> end;

    cout << "Prime numbers in the range [" << start << ", " << end << "] are:" << endl;
    for (int i = start; i <= end; i++) {
        PrimeChecker primeChecker(i);
        if (primeChecker.isPrime()) {
            cout << primeChecker.getNumber() << " ";
        }
    }

    cout << endl;
    return 0;
}