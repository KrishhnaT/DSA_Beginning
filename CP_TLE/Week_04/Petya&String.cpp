#include <bits/stdc++.h>
using namespace std;

int main() {
     string s; cin >> s;
     string t; cin >> t;

     for(int i =0 ;i < s.size() ;i++ ){
          s[i] = tolower(s[i]);
     }
     for(int i =0 ;i < t.size() ;i++ ){
          t[i] = tolower(t[i]);
     }

     if(s == t){
          cout << 0 << endl;
     } else if (s < t){
          cout << -1 << endl;
     } else {
          cout << 1 << endl;
     }

    return 0;
}