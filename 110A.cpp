#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    int lucky_count = 0;  // To count the digits that are 4 or 7
 
    // Loop through all digits of the number
    while (n > 0) {
        int last_digit = n % 10;  // Get the last digit of the number
        if (last_digit == 4 || last_digit == 7) {
            lucky_count++;  // Count digits that are 4 or 7
        }
        n = n / 10;  // Remove the last digit
    }
 
    // Now check if the count itself is a lucky number
    if (lucky_count == 4 || lucky_count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
