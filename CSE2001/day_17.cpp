// write a c++ program to create single inheritance , by creating derived class student from base class person , call base class variables and functions using derived class object

// #include <iostream>
// using namespace std;

// class Person
// {
//     public:
//     string name;
//     int age;
//     Person(string n, int a)
//     {
//         name = n;
//         age = a;
//     }
//     void display()
//     {
//         cout<<"The Name is: "<<name<<endl;
//         cout<<"The Age is: "<<age<<endl;
//     }
// };
// class Student : public Person
// {
//     public: int rollNo;
//     Student(string name,int age,int roll) : Person(name,age)
//     {
//         rollNo = roll; 
//     }
//     void displayStudent()
//     {
//         display();
//         cout<<"the Roll no. is: "<<rollNo<<endl;
//     }
// };
// int main()
// {
//     Student s("Arihant",19,25);
//     s.displayStudent();
//     return 0;
// }

// write a c++ program to create multiple inheritance using 2 base classes myClass and myOtherClass, and use the derived class myChildClass and create the object from myChildClass to use base class functions

// // #include <iostream>
// // using namespace std;

// // class myClass
// // {
// //     public:
// //     void myFunction()
// //     {
// //         cout<<"myClass function."<<endl;
// //     }
// // };
// // class myOtherClass
// // {
// //     public:
// //     void myOtherFunction()
// //     {
// //         cout<<"myOtherClass function."<<endl;
// //     }
// // };
// // class myChildClass : public myClass,myOtherClass
// // {
// //     public:
// //     void myChildFunction()
// //     {
// //         myFunction();
// //         myOtherFunction();
// //         cout<<"myChildClass function."<<endl;
// //     }
// // };
// // int main()
// // {
// //     myChildClass c;
// //     c.myChildFunction();
// //     return 0;
// // }

// // write a c++ program to illustrate multiple inheritance using two base classes and one derived class: create the derived class 

// #include <iostream>
// using namespace std;

// class Person
// {
//     public:
//     string name;
//     int salary;
//     Person(string n,int s)
//     {
//         name = n;
//         salary = s;
//     }
//     void displayPerson()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
// };
// class Employee
// {
//     public:
//     string empID;
//     Employee(string e)
//     {
//         empID = e;
//     }
//     void displayEmp()
//     {
//         cout<<"Employee ID: "<<empID<<endl;
//     }
// };
// class Programmer : public Person,Employee
// {
//     public:
//     string language;
//     Programmer(string n,int s,string e,string lang) : Person(n,s),Employee(e)
//     {
//         language = lang;
//     }
//     void displayProgram()
//     {
//         displayPerson();
//         displayEmp();
//         cout<<"Proficient in: "<<language<<endl;
//     }
// };
// int main()
// {
//     Programmer p("Arihant",25000,"#2001","JAVA");
//     p.displayProgram();
//     return 0;
// }

// write a c++ program to create multilevel inheritance using the base class myClass and the derived class myChild class and subderived class myGrandChildClass, create object for grandchild class and call parent class functions

// #include <iostream>
// using namespace std;

// class myClass
// {
//     public:
//     void DisplayClass()
//     {
//         cout<<"Base class."<<endl;
//     }
// };
// class myChildClass : public myClass
// {
//     public:
//     void DisplayChildClass()
//     {
//         DisplayClass();
//         cout<<"Derived class"<<endl;
//     }
// };
// class myGrandChildClass : public myChildClass
// {
//     public:
//     void DisplayGrandChildClass()
//     {
//         DisplayChildClass();
//         cout<<"Sub-Derived class"<<endl;
//     }
// };
// int main()
// {
//     myGrandChildClass g;
//     g.DisplayGrandChildClass();
//     return 0;
// }

// write a c++ program 

// #include <iostream>
// using namespace std;

// class myRelativeClass
// {
//     public:
//     void DisplayClass()
//     {
//         cout<<"Relative class."<<endl;
//     }
// };
// class myClass
// {
//     public:
//     void DisplayClass()
//     {
//         cout<<"Base class."<<endl;
//     }
// };
// class myChildClass : public myClass
// {
//     public:
//     void DisplayChildClass()
//     {
//         DisplayClass();
//         cout<<"Derived class"<<endl;
//     }
// };
// class myGrandChildClass : public myChildClass
// {
//     public:
//     void DisplayGrandChildClass()
//     {
//         DisplayChildClass();
//         cout<<"Sub-Derived class"<<endl;
//     }
// };
// int main()
// {
//     myGrandChildClass g;
//     g.DisplayGrandChildClass();
//     return 0;
// }

// write a c++ to create hybrid inheritance using the base class Shape, Draw, Colour, create a derived class called coloured circle and create object to call base class functions

#include <iostream>
using namespace std;

class Draw
{
    private:
    string shapeName;
    public:
    void drawShape(string shape)
    {
        shapeName = shape;
    }
    void displayDraw()
    {
        cout<<"The shape is a coloured "<<shapeName<<endl;
    }
};
class Shape
{
    private:
    string shapeName;
    public:
    void drawShape(string shape)
    {
        shapeName = shape;
    }
    void displayShape()
    {
        cout<<"The shape is: "<<shapeName<<endl;
    }
};
class Colour
{
    private: 
    string colourName;
    public:
    void fillColour(string colour)
    {
        colourName = colour;
    }
    void displayColour()
    {
        cout<<"The colour is: "<<colourName<<endl;
    }
};
class ColouredCircle : public Shape, public Colour, public Draw
{
    public:
    void draw(string shape, string colour)
    {
        Shape::drawShape(shape); // Specify the base class
        Draw::drawShape(shape); // Add this line
        fillColour(colour);
    }
    void display()
    {
        displayShape();
        displayColour();
        displayDraw();
    }
};

int main()
{
    ColouredCircle cshape;
    cshape.draw("Circle","Red");
    cshape.display();
    return 0;
}
