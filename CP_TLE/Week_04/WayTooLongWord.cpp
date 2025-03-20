#include <bits/stdc++.h>
using namespace std;

signed main() {
     int tc; cin >> tc;
     while(tc--){
          string s;
          cin>>s;
     
     int n = s.length();

     if(n > 10){
          cout << s[0] << n-2 << s[n-1]<<endl;
     }
     else{
          cout << s << endl;
     }
}

    return 0;
}