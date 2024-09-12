// write a c++ program to illustrate the friend concept using class A and create a friend function called increment to increment the data member

// #include <iostream>
// using namespace std;

// class A
// {
// private: int data;
// public:
//     friend int increment(A obj);
//     void getdata()
//     {
//         cout<<"Enter value: ";
//         cin>>data;
//     }
// };

// int increment(A obj)
// {
//     return obj.data + 1;
// }

// int main()
// {
//     A obj;
//     obj.getdata();
//     cout << increment(obj);

//     return 0;
// }

// write a c++ program to demonstrate friend function concept using the class box with private data member length. return length of the box using friedn function

// #include <iostream>
// using namespace std;

// class Box
// {
//     private: int length;
//     public: 
//     friend void display(Box box);
//     void getdata()
//     {
//         cout<<"Enter length: ";
//         cin>>length;
//     }
// };
// void display(Box box)
// {
//     cout<<box.length;
// }
// int main()
// {
//     Box box;
//     box.getdata();
//     cout<<"The length of the box is: ";
//     display(box);
//     return 0;
// }

// write a c++ program to illustrate a friend function minimum which is friend to 2 classes A and B

// #include <iostream>
// using namespace std;

// class B;

// class A 
// {
//     private: int aValue;
//     public: 
//     friend void max(A a, B b);
//     void getdata() {
//         cout << "Enter value for A: ";
//         cin >> aValue;
//     }
// };

// class B 
// {
//     private: int bValue;
//     public: 
//     friend void max(A a, B b);
//     void getdata() {
//         cout << "Enter value for B: ";
//         cin >> bValue;
//     }
// };

// void max(A a, B b) {
//     if(a.aValue < b.bValue)
//     cout << "The maximum value is from class B: " << b.bValue << endl;    
//     else
//     cout << "The maximum value is from class A: " << a.aValue << endl;
// }

// int main() {
//     A a;
//     B b;
//     a.getdata();
//     b.getdata();
//     max(a, b);
//     return 0;
// }

// write a cpp program to demostrate the friend cncept using class A and class B by using class A object in class B

// #include <iostream>
// using namespace std;

// class A
// {
//     private: int data = 10;
//     public: friend class B;
// };
// class B
// {
//     public:
//     void display(A &a)
//     {
//         cout<<"the data: "<<a.data;
//     }
// };
// int main()
// {
//     A a;
//     B b;
//     b.display(a);
//     return 0;
// }

// write a cpp program to demosntrate friend concpet using 2 classes Counter and Printer 

// #include <iostream>
// using namespace std;

// class Counter
// {
//     private: int count;
//     public: friend class Printer;
//     Counter(int data)
//     {
//         count = data;
//     }
//     void counting()
//     {
//         count += 1;
//     }
// };
// class Printer
// {
//     public:
//     void printCount(Counter &c)
//     {
//         cout<<"the data: "<<c.count;
//     }
// };
// int main()
// {
//     int data;
//     cout<<"Enter Data: ";
//     cin>>data;
//     Counter c(data);
//     c.counting();
//     Printer p;
//     p.printCount(c);
//     return 0;
// }