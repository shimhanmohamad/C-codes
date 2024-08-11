#include <iostream>
using namespace std;

class Shape{
    private:
    int radius;
    int lenght;
    int width;

    public:
    int area(int radius){
        return 3.14 * radius * radius;
    }
    int area(int lenght,int width){
        return lenght * width;
    }
};

int main(){
    Shape circle;
    Shape rectangle;
    int r,l,w;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"Enter the lenght of the ractangle : ";
    cin>>l;
    cout<<"Enter the width of the rectangle : ";
    cin>>w;

    cout<<"Area of the circle : "<<circle.area(r)<<endl;
    cout<<"Area of the Rectangle : "<<rectangle.area(l,w);

    return 0;
}