#include <iostream>
using namespace std;

class date{
    private:
        int day;
        string month;
        int year;
    public:
        void setdate(int D,string M,int Y){
            day = D;
            month = M;
            year = Y;
        }

        int getdate(){
            return day;
        }
};

int main(){
    date d1;
    d1.setdate(12,"october",2020);
    cout<<"Expect date is  "<<d1.getdate()<<" october 2020"<<endl;
    return 0;
}
