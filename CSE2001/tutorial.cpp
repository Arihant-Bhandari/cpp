// 1. C++ Program operator Overloading Binay Operator+ using Vector Addition
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// class Vector 
// {
//     private: int x, y;
//     public:

//     Vector(int x = 0, int y = 0) : x(x), y(y) {}

//     Vector operator+(const Vector& other)
//     {
//         return Vector(x + other.x, y + other.y);
//     }

//     void display() const 
//     {
//         cout << "(" << x << ", " << y << ")\n";
//     }
// };

// int main() 
// {
//     float a1,a2,b1,b2;
//     cout<<"Enter First Vector (Ai + Bj): ";
//     cin>>a1>>b1;
//     cout<<"Enter Second Vector (Ai + Bj): ";
//     cin>>a2>>b2;
//     Vector v1(a1,b1);
//     Vector v2(a2,b2);

//     Vector result = v1 + v2;

//     cout << "Resultant vector: ";
//     result.display();

//     return 0;
// }

// 2. C++ Program operator Overloading Binary + using Complex Number Addition of objects.
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// class Complex 
// {
//     private: double real, imag;
//     public:

//     Complex(double real = 0, double imag = 0) : real(real), imag(imag) {}

//     Complex operator+(const Complex& other) 
//     {
//         return Complex(real + other.real, imag + other.imag);
//     }

//     void display()
//     {
//         cout << real << " + " << imag << "i\n";
//     }
// };

// int main() 
// {
//     float r1,r2,i1,i2;
//     cout<<"Enter First Complex number: ";
//     cin>>r1>>i1;
//     cout<<"Enter Second Complex number: ";
//     cin>>r2>>i2;

//     Complex c1(r1,i1);
//     Complex c2(r2,i2);

//     Complex result = c1 + c2;

//     cout << "Resultant complex number: ";
//     result.display();

//     return 0;
// }

// 3. Simple C++ program that demonstrates overloading the binary `-` operator:
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// class MyNumber 
// {
//     private: int value;
//     public:
//     MyNumber(int val) : value(val) {}

//     MyNumber operator-(const MyNumber& other)
//     {
//         return MyNumber(value - other.value);
//     }
//     int getValue()
//     {
//         return value;
//     }
// };

// int main() 
// {
//     int n1, n2;
//     cout<<"Enter 2 numbers: ";
//     cin>>n1>>n2;
//     MyNumber num1(n1);
//     MyNumber num2(n2);

//     MyNumber result = num1 - num2;

//     cout << "num1 - num2 = " << result.getValue() << endl;

//     return 0;
// }

// 4. Example C++ Program for Overloading the `>` binary operator.
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// class Number
// {
//     private: int value;
//     public:
//     Number(int val) : value(val) {}

//     bool operator>(const Number& other)
//     {
//         return value > other.value;
//     }
// };

// int main()
// {
//     int n1, n2;
//     cout<<"Enter 2 numbers: ";
//     cin>>n1>>n2;

//     Number num1(n1);
//     Number num2(n2);

//     if (num1 > num2) 
//         cout << "num1 is greater than num2" << endl;
//     else 
//         cout << "num1 is not greater than num2" << endl;

//     return 0;
// }

// 5. C++ Program operator Overloading the operator ~
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

#include <iostream>
using namespace std;

class MyNumber 
{
    private: int value;
    public:
    MyNumber(int val) : value(val) {}

    MyNumber operator~()
    {
        return MyNumber(~value);
    }

    int getValue()
    {
        return value;
    }
};

// int main() 
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     MyNumber num(n);
//     MyNumber result = ~num;

//     cout << "Original value: " << num.getValue() << endl;
//     cout << "Bitwise NOT value: " << result.getValue() << endl;

//     return 0;
// }

// 6. Simple C++ programs demonstrating function overloading:
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// int add(int a, int b) 
// {
//     return a + b;
// }
// float add(float a, float b) 
// {
//     return a + b;
// }
// int main() 
// {
//     int n1, n2;
//     cout<<"Enter 2 Integer numbers: ";
//     cin>>n1>>n2;
//     float f1,f2;
//     cout<<"Enter 2 Floating-point numbers: ";
//     cin>>f1>>f2;
//     cout << "Integer addition: " << add(n1,n2) << endl;
//     cout << "Float addition: " << add(f1,f2) << endl;
//     return 0;
// }

// 7. C++ Program Function Overloading Maximum of Three Numbers:
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// int max(int a, int b) 
// {
//     return (a > b) ? a : b;
// }
// int max(int a, int b, int c) 
// {
//     return max(max(a, b), c);
// }
// int main() 
// {
//     int n1, n2, n3;
//     cout<<"Enter 3 Integer numbers: ";
//     cin>>n1>>n2>>n3;
//     cout << "Maximum of "<<n1<<" and "<<n2<<": "<< max(n1, n2) << endl;
//     cout << "Maximum of "<<n1<<","<<n2<<","<<n3<<": "<< max(n1, n2, n3) << endl;
//     return 0;
// }

// 8. C++ Program Function Overloading Volume function Calculation
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// int volume(int length, int width, int height) 
// {
//     return length * width * height;
// }

// float volume(float radius) 
// {
//     return (4.0f / 3.0f) * 3.14f * radius * radius * radius;
// }

// int main() 
// {
//     cout << "Volume of a cube (2x2x2): " << volume(2, 2, 2) << std::endl;
//     cout << "Volume of a sphere (radius 3): " << volume(3.0f) << std::endl;
//     return 0;
// }

// 9. Simple C++ program demonstrating function overloading of add function using calculator class:
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// using namespace std;

// class Calculator 
// {
//     public:
//     // Function to add two integers
//     int add(int a, int b) 
//     {
//         return a + b;
//     }

//     // Function to add three integers
//     int add(int a, int b, int c) 
//     {
//         return a + b + c;
//     }

//     // Function to add two doubles
//     double add(double a, double b) 
//     {
//         return a + b;
//     }
// };

// int main() 
// {
//     Calculator calc;

//     int sum1 = calc.add(5, 10);
//     int sum2 = calc.add(5, 10, 15);
//     double sum3 = calc.add(3.5, 2.5);

//     cout << "Sum 1: " << sum1 << endl;
//     cout << "Sum 2: " << sum2 << endl;
//     cout << "Sum 3: " << sum3 << endl;

//     return 0;
// }

// 10. Simple C++ program demonstrating function overloading of students class information,
// by Overloading update function in each semester cgpa.
// Name: Arihant Bhandari
// Registration number: 22BCE11373
// Slot: B11-12-13

// #include <iostream>
// #include <string>

// class Student 
// {
//     private:
//     std::string name;
//     int age;
//     double gpa;

//     public:
//     // Constructors
//     Student() : name(""), age(0), gpa(0.0) {}
//     Student(std::string name, int age, double gpa) : name(name), age(age), gpa(gpa) {}

//     // Function to display student information
//     void display() 
//     {
//         std::cout << "Name: " << name << std::endl;
//         std::cout << "Age: " << age << std::endl;
//         std::cout << "GPA: " << gpa << std::endl;
//     }
//     // Function to update student information (overloaded)
//     void update(std::string newName) 
//     {
//         name = newName;
//     }
//     void update(int newAge) 
//     {
//         age = newAge;
//     }

//     void update(double newGpa) 
//     {
//         gpa = newGpa;
//     }
// };

// int main() 
// {
//     // Creating a student object
//     Student student("Alice", 20, 3.5);

//     // Displaying initial student information
//     std::cout << "Initial Student Information:" << std::endl;
//     student.display();
//     std::cout << std::endl;

//     // Updating student information
//     student.update("Bob");
//     student.update(21);
//     student.update(3.8);

//     // Displaying updated student information
//     std::cout << "Updated Student Information:" << std::endl;
//     student.display();

//     return 0;
// }