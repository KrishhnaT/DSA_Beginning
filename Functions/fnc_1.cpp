#include <bits/stdc++.h>
using namespace std;
void prime (int a){
     if(a==1){
          cout<<"Neither Prime nor Composite"<<endl;
     }
     if(a==2){
          cout<<"Prime"<<endl;
     }
     for(int i=2;i<=a/2;i++){
          if(a%i==0){
               cout<<"Not a Prime Number"<<endl;
          }
          else{
               cout<<"Prime"<<endl;
          }
          break;
     }
}

int main(){
     int n;
     cout<<"Enter a number ";
     cin>>n;
     prime(n);
}
