#include <iostream>
using namespace std;
class hello{
    string name;
    public:
       hello();
       hello(string );
       void display();
       ~hello(){
          cout<<"Destructor is called: "<<name<<endl;
       }
};

hello::hello(){
    name=" ";
}

hello::hello(string n){
    name = n;
}
void hello::display(){
    cout<<"constructor is called and initialized the variable to : "<<name<<endl;
}

int main(){
    hello h1,h2("my name");
    hello h3=h2;
    h1.display();
    h2.display();
    h3.display();
    h2.display();
}