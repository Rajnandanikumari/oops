//basic of oop //
#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;
class Student
{
    //private: //Private memeber variables 
    // are only accessible within the same class and
    //its subclasses(if any)
    public: 
    int roll;
    string name;
    float gpa;

    void print(){
        cout<<"Roll num is: "<<roll<<"\n";
        cout<<"Name is : "<<name<<"\n";
        cout<<"GPA is : "<<gpa<<"\n";
        cout<<"==============="<<endl;
    }
};
int main()
{
    //Class_name Object_name;
    Student ram;
    ram.roll=45;
    ram.name="ram";
    ram.gpa=45.85;
    Student shyam;
    shyam.roll=98;
    shyam.gpa=98.36;
    ram.print();
    shyam.print();

    //access class behaviour through pointer(*)
    //class_name *object = new class_name
    Student *krishna = new Student();
    krishna->roll = 69;
    krishna->name="krishna";
    krishna->gpa = 70.21;

    krishna->print();

    //cout<<krishan->name<<"\n";
    //cout<<krishna->roll<<"\n";
    //cout<<krishna->gpa<<"\n";

    //DRY:DONOT REPEAT YPURSELF
    //cout<<"Roll num is : "<<ram.roll<<"\n";
    //cout<<"Name is : "<<ram.name<<"\n";
    //cout<<"GPA is : "<<ram.gpa<<"\n";
    //cout<<"Roll num is : "<<ram.roll<<"\n";
    //cout<<"Name is : "<<ram.name<<"\n";
    //cout<<"GPA is : "<<ram.gpa<<"\n";
    return 0;
}

