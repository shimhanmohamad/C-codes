#include <iostream>
using namespace std;

class Complex{
    int real;
    int imagi;
    public:
       Complex(){
        int real = 0;
        int imagi = 0;
        cout<<"Inside the constructor"<<endl;
       }
       Complex(int r,int i){
        real = r;
        imagi = i;
       }
       Complex(Complex &c){
        real = c.real;
        imagi = c.imagi;
       }
       Complex operator +(Complex &c){
          Complex tempc;
          tempc.real = real + c.real;
          tempc.imagi = imagi + c.imagi;
          return tempc;
       }

       Complex operator -(Complex &c){
        Complex tempc;
        tempc.real = real - c.real;
        tempc.imagi = imagi - c.imagi;
        return tempc;
       }

       void display(){
        if(imagi < 0 ){
            cout<<"Complex number : "<<real<<imagi<<"i"<<endl;
        }
        else{
            cout<<"Complex Number : "<<real<<"+"<<imagi<<"i"<<endl;
        }
       }
};


int main(){
    Complex c1(4,5);
    Complex c2(2,3);
    c1.display();
    c2.display();
    c2 = c2-c1;
    Complex c3=c2;
    c3.display();
    c1 = c1+c2;
    Complex c4=c1;
    c4.display();
    

    return 0;
}