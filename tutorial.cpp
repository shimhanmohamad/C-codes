#include <iostream>
using namespace std;

int main(){
    int var=20;
    int* ptr=&var;
    
    cout <<"Value at ptr : "<<ptr<<"\n";
    cout <<"VAlue at var : "<<var<<"\n";
    cout <<"Value of *ptr : "<<*ptr<<"\n"; 
    return 0;
}