#include <iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:
    Point(int xval,int yval){
        x = xval;
        y = yval;
    }

    Point operator +(Point p){
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }
    void display(){
        cout<<x<<endl<<y<<endl;
    }
};

int main(){
    Point p1(10,30);
    Point p2(30,40);
    Point p3 = p1 + p2;
    p3.display();
    return 0;
}