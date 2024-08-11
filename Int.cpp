#include <iostream>
using namespace std;

class Int{
    int value;
    public:
     Int(){
        value = a;
     }
     Int(int x){
        value = x;
     }

     void display(){
        cout<<value<<endl;
     }

     void add(int x,int y){
        value  = x.value + y.value;
     }
};

int main(){
    Int a(5),b(45);
    a.display();
}