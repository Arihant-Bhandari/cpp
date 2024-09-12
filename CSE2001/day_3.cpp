// write a c++ program to evaluate the expression: x+y+z+w

// #include <iostream>

// using namespace std;

// float exp(float x,float y,float z,float w)
// {
//     return x+y+z+w;
// }
// int main()
// {
//     float x, y, z, w;
//     cout<<"input values for x, y, z and w: ";
//     cin>>x>>y>>z>>w;

//     cout<<"Result: "<<exp(x,y,z,w)<<endl;
    
//     return 0;
// }

// write a c++ program to evaluate the expression (x+y)^3 as x^3+y^3+3yx^2+3xy^2

// #include <iostream>

// using namespace std;

// inline float cube(float x, float y)
// {
//     return x*x*x + y*y*y + 3*x*y*y + 3*x*x*y;
// }
// int main()
// {
//     float x, y;
//     cout<<"Enter the values for x and y to find (x+y)^3: ";
//     cin>>x>>y;

//     cout<<"Result: "<<cube(x,y);

//     return 0;
// }

// write a c++ program to evaluate the expression x*y-z+p%v

// #include <iostream>

// using namespace std;

// inline float exp(float x, float y, float z, float p, float v)
// {
//     return x*y-z+p%v;
// }
// int main()
// {
//     float x, y,z,p,v;
//     cout<<"Enter the values for x,y,z,p,v: ";
//     cin>>x>>y>>z>>p>>v;

//     cout<<"Result: "<<exp(x,y,z,p,v);

//     return 0;
// }

// write a c++ program to find GCD
// #include <iostream>

// using namespace std;

// inline int GCD(int n, int m)
// {
//     int r = n%m;
//     n = m;
//     m = r;
// }
// int main()
// {
//     float x, y;
//     cout<<"Enter the values for x and y to find GCD: ";
//     cin>>x>>y;

//     cout<<"Result: "<<GCD(x,y);
//     return 0;
// }

// write a c++ program to display the address location of the variable called name wherein the name variables stores the user's name

#include <iostream>

using namespace std;

// int main()
// {
//     char name[40];

//     cout<<"Enter Name: ";
//     cin>>name;

//     cout<<"Address of Name: "<<&name;

//     return 0;
// }

int main()
{
    char c;
    char name[25]={'w','e'};
   

    int a= 10;
    char *ptr= name;
    int *p= &a;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<&ptr<<endl;
    cout<<p;
}