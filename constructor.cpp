#include <iostream>
using namespace std;
class rectangle{
    int width;
    int len;
    public: 
        rectangle(){
            width = 46;
            len = 12;
        }
        rectangle(int w,int l){
            width =10;
            len =15;
        }
        rectangle(int w){
            width = 20;
            len = 123;
        }
        ~rectangle(){
            cout<<"Destructor is called"<<endl;
            cout<<"Object with  "<<width<<" "<<len<<endl;
        }

        void getwl(){
            cout<<"width is "<<width<<endl;
            cout<<"len is "<<len<<endl;
        }
};



int main(){
    rectangle rec3;
      rec3.getwl();
    rectangle rec1(4);
      rec1.getwl();
    rectangle rec2(12,23);
      rec2.getwl();
    return 0;
}