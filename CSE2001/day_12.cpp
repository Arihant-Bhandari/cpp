// write a c++ program to create dynamic objects using new operator and create objects during runtime

// #include <iostream>
// using namespace std;

// class greeting
// {
//     int *ptr;
//     public:
//     greeting(int data)
//     {
//         ptr = new int;
//         *ptr = data;
//     }
//     void display()
//     {
//         cout<<"object data: "<<*ptr<<endl;
//     }
//     ~greeting()
//     {
//         delete ptr;
//     }
// };
// int main()
// {
//     int data;
//     cout<<"Enter Data for object: ";
//     cin>>data;
//     greeting obj(data);
//     obj.display();
//     return 0;
// }

// write a c++ program to dynamically create an object book for the class Book using arrow operator to access dynamic objects

// #include <iostream>
// using namespace std;

// class Book
// {
//     public:
//     string title,author;
//     Book(string t, string a) : title(t),author(a){}
// };
// int main()
// {
//     Book *book = new Book("Tempest","Shakespeare");
//     cout<<"Book: "<<book->title<<endl;
//     cout<<"Author: "<<book->author;
//     delete book;
//     return 0;
// }

// write a c++ program to implement container class using classes class first and second wherein class first is container and class second is containee class

// #include <iostream>
// using namespace std;

// class First
// {
//     public:
//     First()
//     {
//         cout<<"Hello from Container."<<endl;
//     }
// };
// class Second
// {
//     public:
//     First f;
//     Second()
//     {
//         cout<<"Hello from Containee."<<endl;
//     }
// };
// int main()
// {
//     Second s;
//     return 0;
// }

#include <iostream>
using namespace std;

class A 
{
public:
    int data;
    A(int d) : data(d) {}
};

class B 
{
public:
    int value;
    A a;
    B(): a(100) 
    {
        value = a.data;
    }
};

int main()
{
    B b;
    cout <<"Data: "<< b.value;
    return 0;
}