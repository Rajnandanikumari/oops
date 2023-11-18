#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;
class Rectangle
{
    public:
    int l;
    int b;
    void get(){
    cout<<"Enter the length\n";
    cin>>l;
    cout<<"Enter the bredth\n";
    cin>>b;
    print();
    }
    void print(){
        cout<<"Area of rectangle : "<<l*b<<"\n";
        cout<<"Perimeter of rectangle : "<<2*(l+b)<<"\n";
    }
};
    int main()
    {
        Rectangle R1;
        R1.get();
        // R1.print();
        Rectangle R2;
        R2.get();
        // R2.print();
        return 0;
    }