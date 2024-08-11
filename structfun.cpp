#include <iostream>
using namespace std;

struct date{
    int day;
    char month[10];
    int year;
};

int main(){
    date today = {6,"october",2023};
    cout<<"Day : "<<today.day
        <<"Month : "<<today.month
        <<"Year : "<<today.year<<endl;

    return 0;
}