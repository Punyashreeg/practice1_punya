#include <iostream>
using namespace std;

int main() {
	int n;
    unsigned long long factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
	    cout << "❌ Factorial of a negative number doesn't exist." << endl;
