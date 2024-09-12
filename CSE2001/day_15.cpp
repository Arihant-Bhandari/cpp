//  write a c++ program to illustrate function overloading by writing same name print() with integer argument and float argument

// #include <iostream>
// using namespace std;

// void print(int i)
// {
//     cout<<"Integer type: "<<i<<endl;
// }
// void print(float i) 
// {
//     cout<<"Float type: "<<i<<endl;
// }
// int main()
// {
//     print(10);
//     print(10.5f);
//     return 0;
// }

// write a c++ program to overload binary operator + and add 2 complex objects (real and imaginary parts) and display result

// #include <iostream>
// using namespace std;

// class Complex
// {
// public:
//     int real, imag;

//     Complex(int r, int i)
//     {
//         real = r;
//         imag = i;
//     }

//     int operator +(const Complex& other)
//     {
//         return real + other.real;
//     }
// };

// int main()
// {
//     Complex c1(2, 4), c2(4, 6);

//     cout << "Result: " << (c1.real+c2.real) << "+" << (c1.imag+c2.imag) << "i" << endl;

//     return 0;
// }

// write a c++ program to overload the binary operator using the class CGPA to compare CGPAs

#include <iostream>
using namespace std;

class CGPA
{
    public:
    float gpa;
    CGPA(float f)
    {
        gpa = f;
    }
    string operator >(const CGPA &self)
    {
        if(gpa>self.gpa)
            return "True";
        else
            return "False";
    }
};
int main()
{
    CGPA g1(8.5f),g2(9.25f);
    cout<<"Result: "<<(g2>g1);
    return 0;
}

// write a c++ program to overload the operator ++ as a friend function

// #include <iostream>
// using namespace std;

// class Number
// {
//     public: int num;
//     Number(int n)
//     {
//         num = n;
//     }
//     friend int operator ++(Number n);
// };
// int operator ++(Number n)
// {
//     return n.num+1;
// }
// int main()
// {
//     Number n(10);
//     cout<<++n.num;
//     return 0;
// }