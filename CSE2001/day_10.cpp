// write a c++ program to demostrate the use of array of objects by creating object array of Student class for 3 students

// #include <iostream>
// using namespace std;

// class Student
// {
//     public: 
//     string Name;
//     int rollno;
// };
// int main()
// {
//     Student students[3];

//     for(int i = 0;i<3;i++)
//     {
//         cout<<"The Name of the Student is: ";
//         cin>>students[i].Name;
//         cout<<"and roll no.: ";
//         cin>>students[i].rollno;
//     }

//     for(int i = 0;i<3;i++)
//     {
//         cout<<"The Name of the Student is: "<<students[i].Name<<" and roll no.: "<<students[i].rollno<<endl;
//     }
//     return 0;
// }

// write a cpp program to illustrate the array of objects using class Book with variables book name and price of the book as well as member functions getdata and putdata

// #include <iostream>
// using namespace std;

// class Book
// {
//     public:
//     string bookName;
//     float price;
//     void getdata()
//     {
//         cout<<"The Name of the Book is: ";
//         cin>>bookName;
//         cout<<"and Price of the book is: ";
//         cin>>price;
//     }
//     void putdata()
//     {
//         cout<<"The Name of the Book is: "<<bookName<<" and Price of the book is: "<<price<<endl;
//     }
// };
// int main()
// {
//     Book books[3];
//     for(int i = 0; i<3; i++)
//     {
//         books[i].getdata();
//     }
//     for(int i = 0; i<3; i++)
//     {
//         books[i].putdata();
//     }
//     return 0;
// }

// write a c++ program to create a friend function using the keyword friend and illustrate the friend concept

#include <iostream>
using namespace std;

class Real 
{
    private:
    int real = 120;
    public:
    friend void display(Real r);
};

void display(Real r) 
{
    cout << "Number: " << r.real << endl;
}

int main()
{
    Real r;

    display(r);
    return 0;
}