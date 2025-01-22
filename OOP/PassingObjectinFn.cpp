#include <bits/stdc++.h>
using namespace std;

class Car { // New datatype user defind
public: 
     string name;
     int price;
     int seats;
     string type; 

};

void print(Car c){
cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
};

int main () {
     Car c1;
     c1.name = "Bwm m5";
     c1.price = 23600000;
     c1.seats = 5;
     c1.type = "Sports car";

     print(c1);

}