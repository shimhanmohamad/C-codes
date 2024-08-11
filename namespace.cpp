#include <iostream>
using namespace std;

namespace first_name{
    void func(){
        cout<<"Inside firstnmaespace"<<endl;
    }
}

namespace second_name{
    void func(){
        cout<<"Inside second namespace"<<endl;
    }
}

using namespace second_name;
int main(){
    func();
    first_name::func();
}