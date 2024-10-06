#include <iostream>
#include <climits>
using namespace std;

// int main() {
//     int maxInt = INT_MAX; //it is 2^31-1
//     int minInt = INT_MIN; // it is -2^31 - 1

//     cout << "Maximum Integer Value: " << maxInt  << endl;
//     cout << "Minimum Integer Value: " << minInt  << endl;

//     return 0;
// }

int main() {
    int maxInt = INT_MAX;
    int minInt = INT_MIN;

    // Check if a user-entered number is within the valid integer range
    int userNumber;
    cout << "Enter an integer: ";
    cin >> userNumber;

    if (userNumber < minInt || userNumber > maxInt) {
        cout << "The entered number is outside the valid integer range." << std::endl;
    } else {
        cout << "The entered number is within the valid integer range." << std::endl;
    }

    // Perform some arithmetic using INT_MAX and INT_MIN
    int sum = maxInt + minInt;
    int difference = maxInt - minInt;

    std::cout << "Sum of INT_MAX and INT_MIN: " << sum << std::endl;
    std::cout << "Difference between INT_MAX and INT_MIN: " << difference << std::endl;

    return 0;
}

