#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i*i <= n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

  int n;
  cout<< "Enter the number: ";
  cin>>n;

  if(isPrime(n)) {

    cout<< "number is prime"; 
  } else{
    cout<< " number is not prime " ;
  }
  return 0;
  }
