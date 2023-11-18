
#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;
class Employee
{
    public:
    string name;
    int id;
    double salary;
    void get(){
        cout<<"Enter the Name\n";
        cin>>name;
        cout<<"Enter the Id\n";
        cin>>id;
        cout<<"Enter the salary\n";
        cin>>salary;
        print();
    }
    void print(){
        cout<<"Name of Employee : "<<name<<"\n";
        cout<<"Id of employee : "<<id<<"\n";
        cout<<"Salary of employee : "<<salary<<"\n";
    }
    
};
    int main()
    {
        Employee E1;
        E1.get();
        // R1.print();
        //Rectangle R2;
       // R2.get();
        // R2.print();
        return 0;
    }