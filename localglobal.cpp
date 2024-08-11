#include<iostream>
using namespace std;

int a=3;
void func(int x){
    int b,a=100;
    b=x;
    cout<<"Calling from the func function : "<<endl;
    cout<<"variable a is "<<a<<endl;
    cout<<"variable b is "<<b<<endl;
}

int main(){
    int a=0;
    cout<<"value of the variable a in main : "<<a<<endl;
    cout<<"Value of the global variable a : "<<::a<<endl;
    func(67);
    return 0;
}