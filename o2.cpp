#include<iostream>
#include<stdio.h>
#include<stdio.h>
using namespace std;
class Rectangle
{
    public:
    int l;
    int b;

    void print(){
        cout<<"Area of rectangle : "<<l*b<<"\n";
        cout<<"Perimeter of rectangle : "<<2*(l+b)<<"\n";
    }
};
    int main()
    {
        Rectangle R1;
        R1.l=4;
        R1.b=5;
        R1.print();
        Rectangle R2;
        R2.l=4;
        R2.b=5;
        R2.print();
       // Perimeter.print();
       return 0;

    }


