// write a c++ porgram to create an abstract base class with few virtual functions and create object of derived class to call functions

// #include <iostream>
// using namespace std;

// class Base
// {
//     public:
//     virtual void function() = 0;
// };
// class Derived : public Base
// {
//     public:
//     virtual void function()
//     {
//         cout<<"Derived class"<<endl;
//     }
// };
// int main()
// {
//     Derived d;
//     d.function();

//     Derived *ptr = &d;
//     ptr->function();
//     return 0;
// }

// write a c++ program to create an abstract base class with few functions and derived class namely, shape and rectangle

// #include <iostream>
// using namespace std;

// class Shape
// {
//     protected: float x,y;
//     public:
//     void get()
//     {
//         cout<<"Enter dimensions: ";
//         cin>>x>>y;
//     }
//     virtual void area() = 0;
// };
// class Rectangle : public Shape
// {
//     public:
//     void area()
//     {
//         cout<<"Area of rectangle: "<<x*y<<endl;
//     }
// };
// int main()
// {
//     Rectangle rect;

//     rect.get();
//     rect.area();
//     return 0;
// }

// write a c++ program to impleemnt yearly binding using compile time polymorphism and late runtime , redifining the functions

#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout<<"Base print()"<<endl;
    }
    void show()
    {
        cout<<"Base show()"<<endl;
    }
};
class Derived : public Base
{
    public:
    void print()
    {
        cout<<"Derived print()"<<endl;
    }
    void show()
    {
        cout<<"derived show()"<<endl;
    }
};
int main()
{
    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->print();
    ptr->show();
    return 0;
}