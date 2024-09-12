// write a c++ program to handle exceptional handling process during the division prrocess while dividing by 0 by throwing exception

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter 2 numbers to divide: ";
//     cin>>a>>b;
//     try
//     {
//         if(b!=0)
//         {
//             cout<<"Result: "<<a/b;
//         }
//         else
//         {
//             throw(b);
//         }
//     }
//     catch(int i)
//     {
//         cout<<"Exception: ZeroDivisionException.";
//     }
    
//     return 0;
// }

// write a c++ program to generate user defined exceptions using divide function by calling itin main program that generates exceptions.

// #include <iostream>
// using namespace std;

// void divide(int x, int y, int z)
// {
//     cout<<"We are inside the function: "<<endl;
//     if((x-y)!=0)
//     {
//         int res = z/(x-y);
//         cout<<"Result: "<<res<<endl;
//     }
//     else
//         throw(x-y);
// }
// int main()
// {
//     try
//     {
//         divide(10,20,30);
//         divide(10,10,10);
//     }
//     catch(int i)
//     {
//         cout<<"Error.";
//     }
    
//     return 0;
// }

// write a c++ progrqam to validate if a cadidate is eligible to vote or not.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;

//     cout<<"Enter Age: ";
//     cin>>age;

//     try
//     {
//         if(age>=18)
//         cout<<"Eligible to vote.";

//         else
//         throw(age);
//     }
//     catch(int i)
//     {
//         cout<<"Ineligible.";
//     }
    
//     return 0;
// }

// write a c++ to handle any type of exceptions for above problem

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;

//     cout<<"Enter Age: ";
//     cin>>age;

//     try
//     {
//         if(age>=18)
//         cout<<"Eligible to vote.";

//         else
//         throw 505;
//     }
//     catch(...)
//     {
//         cout<<"Ineligible.";
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

class Sort
{
    int num[10];

    public:
        void getData()
        {
            for(int i = 0;i<10;i++)
            {
                cout<<"Enter element: ";
                cin>>num[i];
            }
        }
        void display()
        {
            for(int i = 0;i<10;i++)
            {
                cout<<num[i];
            }
        }
        void sort()
        {
            int temp = 0;

            for(int i = 0;i<9;i++)
            {
                for(int j = i+1;j<10;j++)
                {
                    if(num[i]>num[j])
                    {
                        temp = num[i];
                        num[i] = num[j];
                        num[j] = temp;
                    }
                }
            }
        }
};
int main()
{
    Sort s;

    s.getData();
    s.sort();
    s.display();
    return 0;
}