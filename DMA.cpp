#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enyer the size of the array : "<<endl;
    cin>>size;
    int *ptr = new int[size];
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"THE ARRAY IS :  "<<endl;
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }

    return 0;
}