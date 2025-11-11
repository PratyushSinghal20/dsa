#include<iostream>
using namespace std;

SetBitsA(int n) {

    int count = 0;
    while(n!=0) {
        if(n&1) {
            count++
        }
        n >>1;
    }
    return count;
}


SetBitsB(int m) {

    int count = 0;
    while(m!=0) {
        if(m&1) {
            count++
        }
        m >>1;
    }
    return count;
}


int main() {

    int n ,m;
    cout << "enter the values of a and m" ;
    cin >> n >> m;
    int ans1 = SetBitsA;
    int ans2 = SetBitsB;

    int ans3 = ans1 + ans2;
    cout << "Number of 1 are " << ans3 << endl;

    return 0;
}