#include<iostream>
using namespace std;


int partition(int arr[] , int s , int e) {

  int pivot = arr[s];

  int cnt = 0;
  for( int i = s+1 ; i< e ; i++)
{

  if(arr[i] <= pivot) {
    cnt++;
  }
}

//pivot at right place 
int pivotIndex = s + cnt;
swap(arr[s] , arr[pivotIndex]);

// left and right wala part shambal lete hain
int i = s;
int j = e;

while(i<=pivotIndex && j>=pivotIndex) {

  if(arr[i] <= pivot) {
    i++;
  } else if(arr[j] > pivot) {
    j--;
  } else {
    swap(arr[i] , arr[j]);
    i++;
    j--;
  }
}

return pivotIndex;

}





void quickSort(int arr[] , int s , int e) {

//base case

if(s>=e) {
  return;
}

  //partition krenge 
  int p = partition(arr , s , e);

  //left part sort
  quickSort(arr , s , p-1);

  //right part sort
  quickSort(arr , p+1 , e);
  

}


int main()   {


  int arr[5] = {2,5,1,6,9};
  int n = 5;
  
  quickSort(arr , 0 , n-1);

  for(int i = 0; i <n ;  i++) {
    cout << arr[i] << " ";
  }cout << endl;


 

  return 0;
}