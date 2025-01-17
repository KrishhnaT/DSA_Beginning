#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={1,2,3,4,5,6,7,8,9,10};
     int mx =10;
     int smx = INT_MIN;

     for(int i=0;i<=9;i++){
          if(smx<arr[i] && arr[i]!=mx){
               smx =arr[i];
          }
     }
     cout<<smx<<": Is the second largest element in array"<<endl;


}