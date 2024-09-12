// write a c++ program to illustrate whether a candidate is eligible for voting or not.

// #include <iostream>

// using namespace std;

// inline void check(int age)
// {
//     if(age>=18)
//         cout<<"Eligible.";
//     else
//         cout<<"Ineligible.";
// }

// int main()
// {
//     int age;
//     cout<<"Enter Age: ";
//     cin>>age;

//     check(age);

//     return 0;
// }

// write a c++ program to illustrate zero division error using exception handling

// #include <iostream>
// #include <stdexcept>

// using namespace std;

// int main() {
//     float a, b, c;

//     cout << "Enter a and b for a/b: ";

//     try {
//         cin >> a >> b;

//         if (b == 0) 
//             throw runtime_error("Division by zero is not allowed.");
//         c = a / b;

//         cout << "Result of a/b: " << c;
//     } 
//     catch (const exception& e)
//     {
//         cerr<< "Exception caught: " << e.what() << endl;
//     }
//     return 0;
// }

// write a c++ program to check Voting elib=gibility using exception error.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout<<"Enter Age: ";
//     try
//     {
//         cin>>age;
//         if(age<18)
//             throw runtime_error("Age below Eligibility: ");
//         cout<<"Eligible.";
//     }
//     catch(const exception& e)
//     {
//         cerr << "Error: " << e.what() << "Ineligible." << '\n';
//     }
//     return 0;
// }

// write a c++ program to print values and addresses of variables to show call by reference.

#include <iostream>
using namespace std;

int main()
{
    int i;
    double d;
    int &a = i;
    double &b = d;

    cout<<"Enter values of i and d: ";
    cin>>i>>d;

    cout<<"Values: i = "<<i<<" d = "<<d<<endl;
    cout<<"addresses: i = "<<&a<<" d = "<<&b;
    return 0;
}