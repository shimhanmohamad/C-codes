#include <iostream>
using namespace std;

class Date{
    int day;
    string month;
    int year;

    public:
        Date new;
        Date setDate(int D,string M,int Y){
            new.day = D;
            new.month = M;
            new.year = Y;
        }
        Date getDate(){
            return new;
        }
};

int main(){
    Date today;
    today.setDate(15,"December",2023);
    today.getDate();
    Date *ptrDate = &today;
    ptrDate -> getDate();
    return 0;
}