//Move all the negative elements to one side of the array

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    int i=-1;
     int pivot=0;
    for(int j=0; j<n; j++){
        if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
 
}
