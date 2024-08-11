#include <iostream>
using namespace std;

class Employee{
    private:
    int hours;
    int salary;
    public:
    void getinfo(int s,int h){
        salary = s;
        hours = h;
    }
    int  addsal(){
        if(salary < 500){
            salary = salary + 10;
        }
        return salary;
    }

    int addwork(){
        if(hours > 6){
            salary = salary + 5;
        }
        return salary;
    } 
    void display(){
        cout<<"Final salary : $"<<salary<<endl;
    }
};

int main(){
    Employee employee;
    int s,h;
    cout<<"Enter the salray : ";
    cin>>s;
    cout<<"ENter the hours of working : ";
    cin>>h;
    employee.getinfo(s,h);
    employee.addsal();
    employee.addwork();
    employee.display();
    return 0;
}

