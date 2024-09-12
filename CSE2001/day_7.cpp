// write a cpp program to declare the access specifiers as public private and protected and create a class a to evaluate the following expression

// #include <iostream>
// #include <cmath>
// using namespace std;

// class Expression
// {
//     private: int X, Y, Z;
//     public:
//         void setValues(int x, int y, int z)
//         {
//             X = x;
//             Y = y;
//             Z = z;
//         }
//         float evaluateExpression()
//         {
//             return pow(X, 3) + pow(Y, 2) + (X * Y * Z) + X - Y + (Z / Y);
//         }
// };
// int main()
// {
//     Expression a;

//     a.setValues(10, 50, 20);

//     cout << "Result: " << a.evaluateExpression() << endl;

//     return 0;
// }


// write a cpp program to illustrate class access specifiers to read and display integer and floating point numbers using the member functions getInt and getFloat using 2 objects;

// #include <iostream>
// using namespace std;

// class Sample
// {
//     private:
//     int n;
//     float f;
//     public:
//     int getInt()
//     {
//         cout<<"Enter an Integer: ";
//         cin>>n;
//         return n;
//     }
//     float getFloat()
//     {
//         cout<<"Enter a Floating-point number: ";
//         cin>>f;
//         return f;
//     }
// };
// int main()
// {
//     Sample obj,obj1;

//     cout<<obj.getInt()<<endl;
//     cout<<obj1.getFloat();
//     return 0;
// }

// write a cpp program to swap two numbers using classes

// #include <iostream>
// using namespace std;

// class Swap
// {
//     private:
//     int a,b;
//     public:
//     void getData();
//     void swapValues();
//     void display();
// };
// void Swap::getData()
// {
//     cout<<"Enter 2 numbers: ";
//     cin>>a>>b;
// }
// void Swap::swapValues()
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void Swap::display()
// {
//     cout<<"Swapped numbers: "<<a<<" "<<b;
// }
// int main()
// {
//     Swap s;
//     s.getData();
//     s.swapValues();
//     s.display();
//     return 0;
// }

// write a cpp program to create a structure point to display x and y coordinates of a point

// #include <iostream>
// using namespace std;

// struct point
// {
//     int x;
//     float y;
// };
// int main()
// {
//     point p = {10, 20.5};

//     cout << "Structure coordinates: " << p.x << " " << p.y << endl;

//     return 0;
// }


// write a cpp program to create a strucutre point and class circle to calculate and print area of circle

// #include <iostream>
// #define pi 3.142
// using namespace std;

// class Test
// {
//     public: int a;
//     void display(int a);
// };
// void Test::display(int a)
// {
//     cout<<"Result: "<<a;
// }
// int main()
// {
//     int radius;

//     cout<<"Enter Radius of Circle: ";
//     cin>>radius;
    
//     cout<<"The Area is: "<<pi*radius*radius;
//     return 0;
// }

// 

#include <iostream>
using namespace std;

class Crectangle
{
    private: int length, breadth;
    public:
    void setvalues(int a, int b)
    {
        length = a;
        breadth = b;
    }
    float area()
    {
        return length*breadth;
    }
};
int main()
{
    Crectangle rect;

    int l,b;
    cout<<"Enter Length and Breadth of Rectangle: ";
    cin>>l>>b;

    rect.setvalues(l,b);

    cout<<"Area of the Rectangle: "<<rect.area();
    return 0;
}
