#include<iostream>
using namespace std;

void update ( int **p2) {

  //p2 = p2  + 1;
  // kuch change hoga??     // no 

  //*p2 = *p2 + 1;
  // kuch change hoga?? 

  **p2 = **p2 + 1;
  // kuch change hoga??
}



int main() {

   int i = 5;
   int*p = &i;
   int **p2 = &p;



  /*


   cout << endl << endl << "sb shi chl rha h " << endl << endl;

   cout << "printing p" << p << endl;
   cout << " adress of p " << &p << endl;
   
   cout << *p2 << endl;

   cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;


  */

    cout <<endl << endl;
    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;

    update(p2);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;



  return 0;
}