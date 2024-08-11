#include <iostream>
using namespace std;

class Room{
    int len;
    int wid;
    int bre;
    public:
       Room(int l,int b,int w){
        len = l;
        wid = w;
        bre = b;
       }
       int Area(int w,int l){
        int a;
        a = w * l;
        return a;
       }

       int Volume(int l,int b,int w){
        int v;
        v = l* b * w;
        return v;
       }

       void display(){
        cout<<"Area : "<<Area(wid,len)<<endl;
        cout<<"Volume : "<<Volume(len,bre,wid)<<endl;
       }
};

int main(){
    int l,w,b;
    cout<<"Enter the len : "
    Room r1(2,3,4);
    r1.display();
    return 0;
}