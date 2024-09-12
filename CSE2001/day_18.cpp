// write a c++ program to demonstrate virtual funtiosn using classes x and y 

// #include <iostream>
// using namespace std;

// class x
// {
//     public:
//     void z()
//     {
//         cout<<"x"<<endl;
//     }
// };
// class y : public x
// {
//     public:
//     void z()
//     {
//         cout<<"y"<<endl;
//     }
// };
// int main()
// {
//     y y1;
//     x x1;
//     x1.z();
//     y1.z();

//     x *p = &x1;
//     p->z();

//     p = &y1;
//     p->z();
//     return 0;
// }

// write a c++ program to illustrate virtual function concept in base class x and derived class y, call the functions in the main function and illustrate function overriding

// #include <iostream>
// using namespace std;

// class x
// {
//     public:
//     virtual void z()
//     {
//         cout<<"x"<<endl;
//     }
// };
// class y : public x
// {
//     public:
//     void z()
//     {
//         cout<<"y"<<endl;
//     }
// };
// int main()
// {
//     y y1;
//     x x1;
//     x1.z();
//     y1.z();

//     x *p = &x1;
//     p->z();

//     p = &y1;
//     p->z();
//     return 0;
// }

// write a c++ program to illustrate runtime polymorphism by creating function overriding concept by having same function in both base and derived classes using the base class Animal and derived class cat and dog

// #include <iostream>
// using namespace std;

// class Animal
// {
//     public:
//     virtual void sound()
//         {
//         cout<<"Roar"<<endl;
//     }
// };
// class Dog : public Animal
// {
//     public:
//     void sound()
//         {
//         cout<<"Bhow Bhow"<<endl;
//     }
// };
// class Cat : public Animal
// {
//     public:
//     void sound()
//     {
//         cout<<"Meow Meow"<<endl;
//     }
// };
// int main()
// {
//     Dog myDog;
//     Cat myCat;

//     myDog.sound();
//     myCat.sound();
//     return 0;
// }

// write a cpp program to illustrate function overriding using classes base and derived , by overriding function named display which displays appropriate message

// #include <iostream>
// using namespace std;

// class Base
// {
//     public:
//     virtual void display()
//     {
//         cout<<"Base Class"<<endl;
//     }
// };
// class Derived : public Base
// {
//     public:
//     void display()
//     {
//         cout<<"Derived Class"<<endl;
//     }
// };
// int main()
// {
//     Derived d;
//     d.display();

//     return 0;
// }

// write a c++ program to override a gear change function for two classes such that if the gear is greater than 5 it is upodated in sports car else in base class

// #include <iostream>
// using namespace std;

// class Car
// {
//     public: int gear;
//     virtual void gearChange(int gear)
//     {
//         gear++;
//         cout<<gear;
//     }
// };
// class SportsCar : public Car
// {
//     public:
//     void gearChange(int gear)
//     {
//         if(gear>5)
//         {
//             gear++;
//             cout<<gear<<endl;
//         }
//         Car::gearChange(gear);
//     }
// };
// int main()
// {
//     SportsCar s;
//     s.gearChange(6);
//     return 0;
// }

// write a c++ program to illsutrate the virtual function and overriding concepts using base class and derived class and create virtual function is base class.

#include <iostream>
using namespace std;

class B
{
    public:
    virtual void display()
    {
        cout<<"Base class"<<endl;
    }

};
class D : public B
{
    public:
    void display()
    {
        cout<<"Derived class"<<endl;
    }
};
int main()
{
    B b;
    D d;

    B *ptr ;
    ptr = &b;
    ptr->display();

    ptr = &d;
    ptr->display();
    return 0;
}