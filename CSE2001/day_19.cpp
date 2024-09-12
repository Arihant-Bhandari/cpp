// write a c++ program to demonstrate difference between runtime and compiletime polymorphism as static and dynamic binding using classes x and y and functions f1 and f2 in both classes , use pointer to the object and arrow member access operator to represent runtime polymorphism

// #include <iostream>
// using namespace std;

// class x
// {
//     public:
//     virtual void f1()
//     {
//         cout<<"xf1"<<endl;
//     }
//     virtual void f2()
//     {
//         cout<<"xf2"<<endl;
//     }
// };
// class y : public x
// {
//     public:
//     void f1()
//     {
//         cout<<"yf1"<<endl;
//     }
//     void f2()
//     {
//         cout<<"yf2"<<endl;
//     }
// };
// int main()
// {
//     x a;
//     a.f1();
//     a.f2();

//     y b;
//     b.f1();
//     b.f2();

//     x *p = &a;

//     p->f1();
//     p->f2();

//     x *pb = &b;
//     pb->f1();
//     pb->f2();
//     return 0;
// }

// write a c++ program to use runtime polymorphism by

#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void display()
    {
        cout<<"Base"<<endl;
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"Derived"<<endl;
    }
};
int main()
{
    Base x;
    Derived y;

    x.display();
    y.display();

    Base *ptr = &y;
    ptr->display();
    return 0;
}