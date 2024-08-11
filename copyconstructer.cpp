#include <iostream>
using namespace std;

class Box {
    int length;
    int width;
public:
    Box() {
        length = 0;
        width = 0;
    }

    Box(int w, int l) {
        width = w;
        length = l;
    }
    Box(const Box &oldvalue){
        length = oldvalue.length;
        width = oldvalue.width;
    }

    void print() {
        cout << "length: " << length << endl;
        cout << "width : " << width << endl;
    }
};

int main() {
    Box box1(10, 20);
    cout << "Box details : " << endl;
    box1.print();
    Box box2(box1);
    box2.print();

    return 0;
}
