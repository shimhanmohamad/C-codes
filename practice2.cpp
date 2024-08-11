#include <iostream>
using namespace std;

class volume{
    private:
    int lenght;
    int height;
    int breadth;

    public:
    volume(int l,int h,int b){
        lenght = l;
        height = h;
        breadth = b;
    }
    int vol(int l, int h,int b){
        int Volu;
        Volu = l * h * b;
        return Volu;
    }
};

int main(){
    int l,h,b;
    cout<<"Enter the lenght of the box : ";
    cin>>l;
    cout<<"Entr the height of the box : ";
    cin>>h;
    cout<<"Enter the breadth of the box : ";
    cin>>b;

    volume v(l,h,b);
    cout<<"Volume of the box : "<<v.vol(l,h,b);
    return 0;
}