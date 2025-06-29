//sum


#include <iostream>
using namespace std;

int main() {
    int n; int  sum;
    
    // Taking input from the user
    cout << "Enter a number: ";
    cin >> n;
    sum = 0;
    // Printing numbers from 1 to n
    for (int i = 1; i <= n; i++)

    sum = sum + i;
    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;

    return 0;

}