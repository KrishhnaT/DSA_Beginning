#include <iostream>
using namespace std;
int main(){
     int n,m;
     cout<<"enter number of rows "<<endl;
     cin>>n;
     cout<<"enter number of columns "<<endl;
     cin>>m;
     for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
               cout << i ;
          }
          cout<<endl;
     }
}
//Outer loop is always the row-number
//Inner loop is always the column number