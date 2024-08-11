#include <iostream>
using namespace std;

class Shape{
    private:
    int radius;
    int length;
    int breadth;

    public:
    Shape(int r){
        radius = r;
    }
    Shape(int l,int b){
        length = l;
        breadth = b;
    }
    double Area(int r){
         return 3.14 * r * r;
    }
    
    double Area(int b,int l){
        return l * b;
    }
};

int main(){
    int length,breadth,radius;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    cout<<"Entr the length of the rectangle : ";
    cin>>length;
    cout<<endl<<"Entr the breadth of the rectangle : ";
    cin>>breadth;
    Shape circle(radius);
    Shape rectangle(length,breadth);
    cout<<"Area of the circle : "<<circle.Area(radius)<<endl;
    cout<<"Area of the rectangle : "<<rectangle.Area(length,breadth);
    return 0;
}