#include <iostream>
using namespace std;

class Shape{
    public:
    Shape(){
        cout<<"This is a shape"<<endl;
    }
};

class polygon:public Shape{
    public:
    polygon(){
        cout<<"This is a polygon"<<endl;
    }
};
class rectangle:public Shape{
    public:
    void print(){
        cout<<"Rectangle is a ppolygon"<<endl;
    }
};
class traingle:public Shape{
    public:
    void print(){
        cout<<"Traingle is a polygon"<<endl;
    }
};
class square:public rectangle{
    public:
    void print(){
        cout<<"Square is a rectangle"<<endl;
    }
};

int main(){
    polygon p1;
    return 0;
}