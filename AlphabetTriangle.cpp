#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter no of lines";
     cin>>n;
     int a=1;
     for(int i=1;i<=n;i++){
          int d =a+64;
          char ch = (char)d;
          for(int j=1;j<=i;j++){
               cout<< ch;
               a++;
          }
         cout<<endl;    
     }
}