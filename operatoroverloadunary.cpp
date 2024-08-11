#include <iostream>
using namespace std;

class Time{
    private:
       int hours;
       int minutes;
    public:
       Time(int h,int m){
        hours = h;
        minutes = m;
       }
       void operator ++(){ 
        minutes ++;
        if(minutes >= 60){
            hours++;
            minutes = minutes - 60;
        }
       }
       void operator ++(int){ 
        minutes ++;
        if(minutes >= 60){
            hours++;
            minutes = minutes - 60;
        }
       }

       void displaytime(){
        cout<<hours<<":"<<minutes<<endl;
       }
};

int main(){
    Time t1(6,20);
    ++t1;
    t1++;
    t1.displaytime();

}