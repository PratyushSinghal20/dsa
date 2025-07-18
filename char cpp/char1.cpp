#include<iostream>
using namespace std; 

char toLowerCase(char ch) {

  if(ch >= 'a' && ch <= 'z') {
    return ch;
  }
  else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}


bool checkPalindrome(char a[], int n) {

  int s = 0;
  int e = n-1;

  while (s<e) {
    if(a[s] != a[e]) {
      
      return 0;
    }
    else {
      s++;
      e--;
    }
  }
  return 1;
}

void  reverse( char name[], int n) {

  int s = 0;
  int e = n-1;

  while (s<e) {
    swap(name[s++], name[e--]);
  }
}

int getLength(char name[]) {

  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main()  {

  char name[20];

   cout << "enter your name " << endl;
   cin >> name;
   //name[2] = '\0';

   cout << "Your name is: ";

   cout << name << endl;
   int len = getLength(name);

  //cout << "Length of your name is: " << getLength(name) << endl;
  cout << "length:" << len << endl;
  reverse(name, len);

  cout << "Your name is: ";

   cout << name << endl;

  cout << "palindrome or not : " << checkPalindrome(name, len) << endl;

  cout << "Lower case of first character is: " << toLowerCase(name[0]) << endl;

   return 0;
}