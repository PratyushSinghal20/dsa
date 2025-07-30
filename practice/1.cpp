#include<iostream>
using namespace std;

double power ( double n , int p = 2) {

    double z = 1;

    for (int i = 1; i <= p ; i++) {

        z = z*n;

    }
    return z ;

}

int main() {

    double n ;
    int p;
    int result;


    cout << " enter the value of n" << endl;
    cin >> n;

    cout << " enter the value of p" << endl;
    cin>> p;

    result = power (n);

    cout << " the value of " << n << "to  the power " << p << "is " << result << endl;

    return 0;


}
