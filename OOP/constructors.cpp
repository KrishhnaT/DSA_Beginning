#include <bits/stdc++.h>
using namespace std;
class Student{
     public:
          string name;
          int rno;
          float gpa;


          Student(string s, int r, float g){
                    name = s;
                    rno = r;
                    gpa = g;
          }    
};

 int main() {
   Student s1("Krishhna",110,5.7);
   cout << s1.name << endl;
}