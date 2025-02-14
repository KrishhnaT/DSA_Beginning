#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[5];
     for(int i=0;i<=4;i++){
          cout<<"Enter the "<<i<<" th element:";
          cin>>arr[i];
     }
     for(int i=0;i<=4;i++){
          
          cout<<arr[i]<<" ";
     }
     int sum=0;
     for(int j=0;j<=4;j++){
          sum += arr[j];
     }
     cout<<"Sum of the elements in this array is:"<<sum;
}