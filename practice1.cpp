#include <iostream>
using namespace std;


    int r,i;
    int  add(int r1,int r2){
        int sum;
        sum = r1 + r2;
        return sum;
    }
    int dif( int r1,int r2){
        int dif;
        if(r1 > r2){
            dif = r1 - r2;
        }
        else{
            dif = r2 - r1;
        }
        return dif;
    }

    int main(){
        int r1,r2,i1,i2;
        cout<<"Enter the real number r1 : ";
        cin>>r1;
        cout<<"Enter the real number r2 : ";
        cin>>r2;
        cout<<"Engter the imagin number i1 : ";
        cin>>i1;
        cout<<"Enter the imagin number i2 : ";
        cin>>i2;

        int realsum = add(r1,r2);
        int imaginsum = add(i1,i2);
        int realdif = dif(r1,r2);
        int imagindif = dif(i1,i2);

        cout<<"Sum of the two complex number : "<<realsum<<"+"<<imaginsum<<"i"<<endl;
        cout<<"Different of two complex number : "<<realdif<<"+"<<imagindif<<"i";

    }
