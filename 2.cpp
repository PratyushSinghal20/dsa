#include<iostream>
using namespace std;


int AP (int n) {
        int  ap = 3 * n +7;
        return ap;
    }

int main() {

    int answer;
    int n;
    int ap;
    cout << "enter the value of n " << endl;
    cin >> n;
    answer = AP(n);

    cout <<"answer is " << answer << endl;

    return 0;
}