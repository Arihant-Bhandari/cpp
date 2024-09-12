// write a cpp program to create a Complex structure , with real and complex part of floating point type and perform addition of two complex numbers

// #include <iostream>
// using namespace std;

// struct Complex
// {
//     float real;
//     float imaginary;
// };
// int main()
// {
//     Complex s1,s2;

//     cout<<"Enter First Complex number: ";
//     cin>>s1.real>>s1.imaginary;

//     cout<<"Enter First Complex number: ";
//     cin>>s2.real>>s2.imaginary;
//     cout<<"\nFirst Complex no.: "<<s1.real<<" + "<<s1.imaginary<<"i"<<endl;
//     cout<<"\nSecond Complex no.: "<<s2.real<<" + "<<s2.imaginary<<"i"<<endl;

//     cout<<"\nAdding these, we get: "<<s1.real+s2.real<<" + "<<s1.imaginary+s2.imaginary<<"i"<<endl;
//     cout<<"\nSubtracting these, we get: "<<s1.real-s2.real<<" + "<<s1.imaginary-s2.imaginary<<"i\n"<<endl;
    
//     return 0;
// }

// write a cpp program to create a Complex strucutre with real and imaginary part and subtract two complex numbers.

// #include <iostream>
// using namespace std;

// struct Complex
// {
//     float real;
//     float imaginary;
// };
// int main()
// {
//     Complex s1,s2;

//     cout<<"Enter First Complex number: ";
//     cin>>s1.real>>s1.imaginary;

//     cout<<"Enter First Complex number: ";
//     cin>>s2.real>>s2.imaginary;

//     cout<<"Adding these, we get: "<<s1.real-s2.real<<" + "<<s1.imaginary-s2.imaginary<<"i";
//     return 0;
// }

// write a c++ program to read in and display name salary department and ID using structures

// #include <iostream>
// using namespace std;

// struct Employee
// {
//     string name,empID,department;
//     int salary;
// };
// int main()
// {
//     Employee e1;
//     cout<<"Enter the Name,employee ID,department and salary of employee: ";
//     cin>>e1.name>>e1.empID>>e1.department>>e1.salary;

//     cout<<"Employee Name: "<<e1.name<<endl;
//     cout<<"Employee employee ID: "<<e1.empID<<endl;
//     cout<<"Employee Department: "<<e1.department<<endl;
//     cout<<"Employee salary: "<<e1.salary<<endl;
//     return 0;
// }

// write a c++ program to read in and display name salary department and ID using sgtructures

// #include <iostream>
// using namespace std;

// struct Student
// {
//     string name,regNo,department;
//     int year,sem;
//     char subject[6][50];
// };
// int main()
// {
//     Student s1;
//     cout<<"Enter the Name, Registration no., Department, year and semester of Student: ";
//     cin>>s1.name>>s1.regNo>>s1.department>>s1.year>>s1.sem;

//     cout<<"Enter Subject names: ";
//     for(int i = 0; i < 3;i++)
//     cin>>s1.subject[i];

//     cout<<"Student name: "<<s1.name<<endl;
//     cout<<"Student Registration no.: "<<s1.regNo<<endl;
//     cout<<"Student Department: "<<s1.department<<endl;
//     cout<<"Student Year: "<<s1.year<<endl;
//     cout<<"Student Semester: "<<s1.sem<<endl;

//     for(int i = 0; i < 6;i++)
//     cout<<s1.subject[i]<<" ";    
//     return 0;
// }

// write a c++ program to create a Car class for car brand, model and year of manufacturing ; rea dand display using objects

// #include <iostream>
// using namespace std;

// class Car
// {
//     public:
//     string brand,model;
//     int year;

//     void read()
//     {
//         cout<<"Enter the car Brand, Model and Year: ";
//         cin>>brand>>model>>year;
//     }
//     void display()
//     {
//         cout<<"The car Brand: "<<brand<<", Model: "<<model<<", and Year of manufacturing: "<<year;
//     }
// };
// int main()
// {
//     Car c1;
//     c1.read();
//     c1.display();
//     return 0;
// }

// write a c++ program to create a class Wall with two variables and functions

#include <iostream>
using namespace std;

class Wall
{
    private: double length,height;
    public:
    Wall(double len,double hgt)
    {
        length = len;
        height = hgt;
    }
    double area()
    {
        return length*height;
    }
    ~Wall()
    {
        cout<<"Object destroyed.";
    }
};
int main()
{
    float l,b;
    cout<<"Enter Length and Breadth of Wall for Surface Area: ";
    cin>>l>>b;
    Wall wall(l,b);
    cout<<"Area: "<<wall.area()<<endl;
    return 0;
}