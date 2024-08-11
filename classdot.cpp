#include <iostream>

using namespace std;

class date{
    private:
        int day;
        string month;
        int year;

    public:
        date setdate(int D,string M,int Y){
            date newdate;
            newdate.day = D;
            newdate.month = M;
            newdate.year = Y;
            return newdate;
        }

        void getdate1(date newD){
            date D = newD;
            cout<<"Day : "<<D.day<<" Month: "<<D.month<<" year : "<<D.year<<endl; 
        }

        void getdate(int D,string M,int Y){
            cout<<"Day : "<<D<<" Month : "<<M<<" year : "<<Y<<endl;
        }
};

int main(){
    date today;
    today = today.setdate(6,"october",2021);
    today.getdate(2,"november",2021);
    cout<<"All Done"<<endl;
    today.getdate1(today);
}