#include <iostream>
#include <cassert>
using namespace std;

class List{
    private:
       int length;
       int *array;

    public:
       List();
       List(int size);
       ~List();

       void displayList();
       void SetList(int a);
};
List::List(){
    length=5;
    array = new int[length];
    assert(array !=0);
    for(int i=0;i<length;i++){
        array[i] = 0;
    }
}
List::List(int size){
    length = size;
    if(length <=0){
        array = 0;
    }else{
        array = new int[length];
        assert(array !=0);
        for(int i=0;i<length;i++){
            array[i]= 3;
        }
    }
}

void List::displayList(){
    
    for (int i = 0; i < length; i++){ 
        cout<<array[i]<<",";
    }
    cout<<endl;
}
void List::SetList(int a){
    
    for(int i=0;i<length;i++){
        array[i] = i+a;
    }
}

List::~List(){
    delete [] array; 
    cout<<"Called the destruct"<<endl;
}
int main() {
    cout<<"START"<<endl;
    List ll;
    ll.displayList();
    ll.SetList(2);
    ll.displayList();
        List l2(3);
        l2.displayList();
}
