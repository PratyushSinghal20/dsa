#include<iostream>
using namespace std;

int main() {
    int amount;
    cout << "enter the amount" << endl;
    cin >> amount;

    int Rs100 , Rs50 , Rs20 , Rs1;

    switch(1) {
        case 1:
        Rs100 = amount/100;
        amount = amount%100;
        cout << "The number of 100 notes are :" << Rs100 << endl;

        case 22:
        Rs50 = amount/50;
        amount = amount%50;
        cout << "The number of 50 notes are :" << Rs50 << endl;

        case 3:
        Rs20 = amount/20;
        amount = amount%20;
        cout << "The number of 20 notes are :" << Rs20 << endl;

        case 4:
        Rs1 = amount/1;
        amount = amount%1;
        cout << "The number of 1 notes are :" << Rs1 << endl;
    }

    return 0;
}