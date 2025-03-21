#include<iostream>
using namespace std;

void printArray()   {

}


int main ()  {


  int number[15];                                                                  
  

  cout << " value at 0 index is " << number[0] << endl;

  int second[3]  = {5,7,11};

  cout << " value at 2 index is " << second[2] << endl; 

  

   int third[15] = {2,7};

   int n = 15;

  cout << " printing the array " << endl;

  for (int i = 0; i < n; i++)  {

    cout << third[i] << " ";

  }

  int fourth[10] = {0};

  cout << " printing the array " << endl;

  for (int i = 0; i < 10; i++)  {

    cout << fourth[i] << " "; 

  }


  // int fifth[10] = {1};

  // int n = 10;
  // printArray(fifth, 10);


  cout << endl << " everything is fine" << endl;

  return 0;

}