#include <iostream>
using namespace std;

int add(int a,int b,int c){
    return a+b+c;
}

int add(int d ,int e){
    return d+e;
}

int main(){
    cout<<"add two numbers : "<<add(3,4);
}