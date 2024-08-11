#include <iostream>
using namespace std;

class B{
    public:
      virtual void f(){
        cout<<"The base class function is called.\n";
      }
};

class D:public B{
    public:
      void f(){
        cout<<"The derived class function is called.\n";
      }
};

int main(){
    B base;
    D derived;

    B *baseptr = &base;
    baseptr -> f();
    baseptr = &derived;
    baseptr->f();
    return 0;
}