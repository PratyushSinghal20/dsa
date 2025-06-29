#include<iostream>
using namespace std;




  /*

 char ch = 'q';
 cout << sizeof(ch) << endl;

 char *c = &ch;
 cout << sizeof(c) << endl;


 */



 int getsum(int *arr, int n) {

  int sum = 0;
  for(int i = 0; i < 5; i++) {
    sum += arr[i];
  }
  return sum;
 }

 int main()   {

 int n ;
 cin>> n;


 int *arr = new int[5];

 for (int i = 0; i < 5; i++) {
   cin>> arr[i];

  }

  int ans = getsum(arr , n);

  cout << "answer" << ans << endl;

  while(true) {

    int i = 5;
  }

  while (true)  {

    int *p = new int;
  }


  return 0;
}