#include <iostream>
using namespace std;

int main(){
    // struct student{
    //     string name;
    //     int age;
    //     float height;
    //     float weight;
    // };

    // student s = {"Kumar",21,1.34,65.23};
    // cout<<"Name : "<<s.name<<"\n";
    // cout<<"Age : "<<s.age<<"\n";
    // cout<<"height : "<<s.height<<"\n";
    // cout<<"Weight : "<<s.weight<<"\n";
    struct date{
        int day;
        char month[24];
        int year;
    };
     date today = {6,"December",2023};
     cout<<"Day : "<<today.day
                 <<"  Month  : "<<today.month
                 <<"  Year : "<<today.year<<endl;
     return 0;
}
