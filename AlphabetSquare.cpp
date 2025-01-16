#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number of rows";
     cin>>n;
     for(int i=1;i<=n;i++){
          int a=1;
          for(int j=1;j<=n;j++){
               int d = a+64;
               char ch = (char)d;
               cout<< ch << " ";
               a++;
          }
          cout<<endl;
     }
}  
/*Logic: Start
  Print "Enter the number of rows"
  Input n
  For i from 1 to n:
    Initialize a = 1
    For j from 1 to n:
      Calculate d = a + 64
      Convert d to character ch
      Print ch with a space
      Increment a
    End For
    Print a newline
  End For
End*/