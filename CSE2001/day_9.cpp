// write a c++ program to illustrate copy constructor , and overloading constructors

#include <iostream>
using namespace std;

class Cube
{
    private: double x;
    public:
    Cube()
    {
        x = 0;
    }
    Cube(double side)
    {
        x = side;
    }
    Cube(const Cube &c)
    {
        x = c.x;
    }
    double area()
    {
        return x*x*x;
    }
    ~Cube()
    {
        cout<<"Object Destroyed."<<endl;
    }
};
int main()
{
    double side;
    cout<<"Enter side of a Cube: ";
    cin>>side;
    Cube c1,c2(side),c3 = c2;

    cout<<"Default constructor: "<<c1.area()<<endl;
    cout<<"Parameterized constructor: "<<c2.area()<<endl;
    cout<<"Copy constructor: "<<c3.area()<<endl;
    return 0;
}

//  write a c++ program to illustrate constructors and destructors of an class using a class called File.

// #include <iostream>
// #include <fstream>
// #include <stdexcept>
// using namespace std;

// class File
// {
// private: ifstream file;
// public:
//     File(const string & filename) : file(filename.c_str()) 
//     {
//         if (!file)
//             throw runtime_error("Failed to open");
//     }    
//     void displayContent() 
//     {
//         string line;
//         while (getline(file, line)) {
//             cout << line << endl;
//         }
//     }
//     ~File() 
//     {
//         file.close();
//     }
// };

// int main() 
// {
//     try 
//     {
//         File myFile("test.txt");
//         myFile.displayContent();
//     } 
//     catch (const runtime_error & e) 
//     {
//         cout << "Error: " << e.what() << endl;
//     }
    
//     return 0;
// }

// write a c++ program to illustrate the role of student class which has variables string name and roll no. 

// #include <iostream>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int rollNo;
//     Student(string n, int r)
//     {
//         name = n;
//         rollNo = r;
//         cout<<"Object Constructed."<<endl;
//     }
//     ~Student()
//     {
//         cout<<"Objects Terminated."<<endl;
//     }
// };
// int main()
// {
//     string name;
//     int rollno;
//     cout<<"Enter Name nad roll no. of student: ";
//     cin>>name>>rollno;

//     Student s(name,rollno);

//     return 0;
// }

// // write a c++ program to desmonstrate the use of copy constructor using a class called BankAcc.

// #include <iostream>
// using namespace std;

// class BankAcc
// {
//     public:
//     long account;
//     double balance;
//     BankAcc(long a , double b)
//     {
//         account = a;
//         balance = b;
//     }
//     BankAcc(const BankAcc &bank)
//     {
//         account = bank.account;
//         balance = bank.balance;
//     }
// };
// int main()
// {
//     long ac;
//     double bal;
//     cout<<"Enter Account no. and Balance: ";
//     cin>>ac>>bal;
//     BankAcc acc1(ac,bal),acc2 = acc1;

//     cout<<"First Account's Balance: "<<acc1.balance<<endl;
//     cout<<"Second Account's Balance: "<<acc2.balance;
//     return 0;
// }

// demonstrate the copy constructor by class callet point with x and y coordinates copy the value of  old object into new object through copy constructor

// #include <iostream>
// using namespace std;

// class Point
// {
//     public:
//     float x,y;
//     Point(float X, float Y)
//     {
//         x = X;
//         y = Y;
//     }
//     Point(const Point &p)
//     {
//         x = p.x;
//         y = p.y;
//     }
// };
// int main()
// {
//     float xa,ya;
//     cout<<"Enter Coordinates: ";
//     cin>>xa>>ya;
//     Point p(xa,ya);

//     return 0;
// }