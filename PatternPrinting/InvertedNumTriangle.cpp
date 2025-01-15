#include <bits/stdc++.h>
using namespace std;
int main (){
     int n;
     cout<<"enter number of rows "<<endl;
     cin>>n;
     for(int i=1;i<=n;i++){
          for(int j=1;j<=n-i+1;j++){
               cout << j;
          }
               cout<<endl;
                 }

}
//Logic: i:-No of Rows , j:-No of Columns
// i+j=n+1
//j<=n-i+1
