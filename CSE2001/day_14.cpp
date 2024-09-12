// write a c++ program to demonstrate function overloading and compile time polymorphism using a class Shape and create morew than one function area with different arguments

// #include <iostream>
// #define pi 3.142
// using namespace std;

// class Shape
// {
//     public:
//     float area(int r)
//     {
//         return pi*r*r;
//     }
//     float area(int l , int b)
//     {
//         return l*b;
//     }
// };
// int main()
// {
//     int r,l,b;
//     cout<<"Enter radius , length and breadth: ";
//     cin>>r>>l>>b;
//     Shape s;
//     cout<<"Area of Circle: "<<s.area(r)<<endl;
//     cout<<"Area of Rectangle: "<<s.area(l,b);
//     return 0;
// }

// write a c++ program to illustrate function overloadfing using a class called rectangle and create more than one function called rectangel with arguements and without arguments to represent constructor function overloading

// #include <iostream>
// using namespace std;

// class Rectangle
// {
//     private: int length, breadth;
//     public:
//     Rectangle()
//     {
//         length = 0;
//         breadth = 0;
//     }
//     Rectangle(int l , int b)
//     {
//         length = l;
//         breadth = b;
//     }
//     void get(int l , int b)
//     {
//         length = l;
//         breadth = b;
//     }
//     void get()
//     {
//         cout<<"Enter length and breadth: ";
//         cin>>length>>breadth;
//     }
//     float getArea()
//     {
//         return length*breadth;
//     }
// };
// int main()
// {
//     int l,b;
//     cout<<"Enter Length and Breadth: ";
//     cin>>l>>b;
//     Rectangle r1,r2,r3(l,b);
//     r2.get(l,b);
//     cout<<"Default: "<<r1.getArea()<<endl;
//     cout<<"Overloaded Default: "<<r2.getArea()<<endl;
//     cout<<"parameterized: "<<r3.getArea();
//     return 0;
// }

// write a c++ program to demostrate operator overloading concept and overload the ++ operator using the overloaded operator ++ increment object value

// #include <iostream>
// using namespace std;

// class Increment
// {
//     private: int count = 10;
//     public:
//     Increment()
//     {
//         count = 10;
//     }
//     void operator ++()
//     {
//         count = count+1;
//     }
//     void display()
//     {
//         cout<<"Current count: "<<count;
//     }
// };
// int main()
// {
//     Increment in;
//     ++in;
//     in.display();
//     return 0;
// }

// wrie a c++ program to overload the unary operator ++ in prefix and postfix form using increment overloading function

#include <iostream>
using namespace std;

class Increment
{
    private: int count = 10;
    public:
    void operator ++()
    {
        ++count;
    }
    void operator ++(int)
    {
        count++;
    }
    void display()
    {
        cout<<"Current count: "<<count;
    }
};
int main()
{
    Increment in;
    in++;
    in.display();
    ++in;
    in.display();
    return 0;
}