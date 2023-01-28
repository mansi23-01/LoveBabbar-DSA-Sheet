//Merge 2 sorted arrays without using Extra space.
#include<bits/stdc++.h>
using namespace std;
int mergeArray(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0,j=0,k=0;
    //traverse i and store in arr3
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    //tranverse j and  store in arr3
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    //sort the whole arr3
    
    sort(arr3, arr3+n+m);
}
int main() {
    int n;
    int m;
      cin>>n>>m;
      
   int arr1[n];
   int arr2[m];

    
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }
     for(int i=0; i<m;i++){
        cin>>arr2[i];
    }

      int arr3[n+m];
    mergeArray(arr1,n,arr2,m,arr3);
    
    for(int i=0; i<n+m; i++){
        cout<<arr3[i]<<" ";
    }
    

    return 0;
}
