// write a c++ program to print HELLO WORLD.

// #include <iostream>

// using namespace std;

// int main()
// {
//     cout<<"HELLO WORLD";
// }

// write a c++ program to evaluate the given expression p = x^3+(y+z)-(p/q)+r.

// #include <iostream>

// using namespace std;

// int main()
// {
//     float x,y,z,p,q,r;

//     cout<<"Enter the values of x,y,z,p,q,r: ";
//     cin>>x>>y>>z>>p>>q>>r;

//     cout<<"To evaluate the given expression";

//     p = x*x*x+(y+z)-(p/q)+r;

//     cout<<"p = "<<p<<endl;

//     return 0;
// }

// write a c++ program to read and display the array of subject codes and subject names as well as continuous assessment marks.

// #include <iostream>

// using namespace std;

// int main()
// {
//     char name[3][50];

//     char reg_no[3][15];

//     char sub_code[3][10];

//     float sub_marks[3];

//     cout<<"Enter the Subject Names, Codes, Cummulative Marks:\n";
//     for(int i = 0;i<3;i++)
//     {
//         cin>>name[i]>>reg_no[i]>>sub_code[i]>>sub_marks[i];
//     }
//     for(int i = 0;i<3;i++)
//     {
//         cout<<name[i]<<" "<<reg_no[i]<<" "<<sub_code[i]<<" "<<sub_marks[i]<<" "<<endl;
//     }
    
//     return 0;
// }

// write a c++ program to apply matrix additon.

#include <iostream>

using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout<<"Enter values for first matrix:"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cin>>a[i][j];
    }
    cout<<"Enter values for second matrix:"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        cin>>b[i][j];
    }
    cout<<"Resultant Matrix: "<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}