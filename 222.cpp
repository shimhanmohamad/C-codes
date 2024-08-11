// #include <iostream>
// #include<string.h>

// using namespace std;
// struct date{
//     int day;
//     char month[10];
//     int year;
// }yesterday,d1;

// int main(){
//     yesterday.day = 5;
//     strcpy(yesterday.month,"october");
//     yesterday.year = 2023;

//     d1 = yesterday;
//     cout<<"Yesterday"<<endl
//     <<"day : "<<yesterday.day
//     <<"  month : "<<yesterday.month
//     <<"  year : "<<yesterday.year<<endl;

//     cout<<"YESTERDAY = D1"<<endl
//     <<"day : "<<d1.day
//     <<"  MOnth : "<<d1.month
//     <<"  year : "<<d1.year<<endl;

//     date today = {6,"october",2023};
//     cout<<"TODAY"<<endl
//     <<"Day : "<<today.day
//     <<"  Month :"<<today.month
//     <<"  year : "<<today.year<<endl;

//     d1 = today;
//     cout<<"D1 = Today"<<endl
//     <<"Day : "<<d1.day
//     <<"  Month :"<<d1.month
//     <<"  year : "<<d1.year<<endl;

// }
#include <iostream>
using namespace std;

struct date{
    int day;
    char month[10];
    private:
    int year;
};

int main(){
    date today = {4,"april",2023};
    cout<<"Day : "<<today.day
    <<"   month : "<<today.month;
    <<"    year : "<<today.year<<endl;
    return 0;
}