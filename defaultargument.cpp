#include <iostream>
using namespace std;

class Numbers{
    int num;
    public:
       Number(int a):num(a){}
       void display(){
        cout<<"Number variable: "<<num<<endl;
       }

       void operator-(){
        this->num =-num;
       }
};
int main(){
    Number mynum1(6);
    -mynum1;
    mynum1.display();
    return 0;
}
