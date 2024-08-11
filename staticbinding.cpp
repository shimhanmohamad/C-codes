#include <iostream>
using namespace std;

class computeSum{
    public:
      int sum(int x,int y){
        return (x+y);
      }
      int sum(int x,int y,int z){
        return(x+y+z);
      }
};

int main(){
    computeSum obj;
    cout<<"Sum is "<<obj.sum(10,20)<<endl;
    cout<<"SUm is "<<obj.sum(10,20,30)<<endl;
}