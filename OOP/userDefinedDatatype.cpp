#include <bits/stdc++.h>
using namespace std;

class Student { // New datatype user defind
public: 
     string name;
     int rollnumb ;
     float gpa;  

};

int main () {
     Student k;
     k.name = "Krishhna";
     k.rollnumb = 110;
     k.gpa = 8.8;

     cout<<k.name<<endl;
     cout<<k.rollnumb<<endl;
     cout<<k.gpa<<endl;

}