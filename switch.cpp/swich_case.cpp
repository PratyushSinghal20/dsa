#include<iostream>
using namespace std;

// int main()   {

//     int num = 2;

//     cout<<endl;

//     switch (num)   {

//       case 1 : cout << "first" << endl;
//                break;

//       case 2 : cout << "second" << endl;
//                 break;

//       defailt :  cout<< " it is a default case" << endl;        
//     }

//     cout<<endl;
// }






// int main()   {

//     char ch = '1';

//     cout<<endl;

//     switch (ch)   {

//       case 1 : cout << "first" << endl;
//                break;

//       case '1' : cout << "second" << endl;
//                 break;

//       defailt :  cout<< " it is a default case" << endl;        
//     }

//     cout<<endl;
// }








int main()   {

    char ch = '1';
    int num = 1;


    cout<<endl;

    switch (ch)   {

      case 1 : cout << "first" << endl;
               break;

      case '1' : switch (num)   {

                    case 1 : cout << "second" << endl;
                             break;

                    case 2 : cout << "third" << endl;
                             break;

                    default :  cout<< " it is a default case" << endl;        
                  }
                break;

      defailt :  cout<< " it is a default case" << endl;        
    }

    cout<<endl;
}