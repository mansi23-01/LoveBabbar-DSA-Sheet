//Write a program to cyclically rotate an array by one.

void rotate(int arr[], int n)
{
   
    int temp=arr[n-1];
    
    for(int i=n-1; i>=0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    
}

//////////////////////////

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
   for(int i=0; i<n;i++){
      cin>>arr[i];
  }
  //int arr[5]={3,2,5,4,1};

    int temp=arr[n-1];
  for(int i=n-1;i>=0;i--){
      arr[i]=arr[i-1];
  }
  arr[0]=temp;
  
  for(int i=0; i<n;i++){
      cout<<arr[i];
  }
}
