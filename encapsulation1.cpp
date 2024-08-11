#include <iostream>
using namespace std;

class car{
    private:
    string brand;
    int year;
    public:
    void SetBrand(const string &b){
        brand = b;
    }
    string getBrand()const{
        return brand;
    }
    void setYear(int year){
        year = y;
    }
    int getYear(){
        return year;
    }
};

void displayinfo() const{
    cout<<"Car brand : "<<brand<<", Year : "<<year<<endl;
}