#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[5];

     bool flag = false;//Target not found
     for(int i=0;i<=5-1;i++){
          cout<<"enter the "<<i<<" element:";
          cin>>arr[i];
     }
     int x;
     cout<<"Enter Target :";
     cin>>x;     
     cout<<"Array : ";
     for(int j=0; j<=4;j++){
          cout<<arr[j]<<" ";
     }
     cout<<endl;
     for(int k=0;k<=4;k++){
          if(arr[k]==x){
               flag = true;//Target found 
               break;
          }
     
     }
     if(flag == false ){
          cout<<"Target not fiund in array";
     }
     else{
          cout<<"Target found"<<endl;
     }

}