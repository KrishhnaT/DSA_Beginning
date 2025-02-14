#include <bits/stdc++.h>
using namespace std;
int main (){
     int arr[5]={1,2,3,4,100};
     int mx = arr[0];
     for(int i=0;i<=4;i++){
          if(arr[i]>mx){
               mx=arr[i];
          }
     }
     cout<<"Largest element in the array is "<<mx<<endl;
}
