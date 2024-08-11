#include <iostream>
using namespace std;

class Number{
    private:
    int num;
    public:
    Number(int n){
        num = n;
    }
    Number operator -(){
        return Number(-num);
    }
    int getnum(){
        return num;
    }
};

int main(){
    int n;
    cout<<"Enter the number you want to negate : ";
    cin>>n;
    Number myNum(n);
    cout<<"Negated number  : "<<-myNum.getnum();
    return 0;
}