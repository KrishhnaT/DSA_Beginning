#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     int arr[5]={1,4,5,6,4};
     for(int i=0;i<5;i++){
          for(int j=i+1;j<5;j++){
               if(arr[i]==arr[j]){
                    cout<<"Duplicate found of "<<arr[i]<<" on index:"<<j;
               }
          }
     }
}