#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {5,4,3,2,1};
     int n = sizeof(arr)/sizeof(arr[0]);
     //Bubble Sort
     for(int i=0;i<n-1;i++){
          for(int j=0;j<n-1;j++){
               if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
               }
          }

     }

     //printin sorted arr
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" , ";
     }
}