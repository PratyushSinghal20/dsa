#include<iostream>
using namespace std;  


bool is even (int num)  {

  if (num%2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main ()    {

  int num;
  cin>> num;


 if (is even(num)) {
   cout<< "Even" << endl;
 }

  return 0;
}

//bekr h yeh code