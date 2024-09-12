// #include <iostream>

// using namespace std;

// int max(int num1, int num2)
// {
//     if(num1 > num2)
//         return num1;
//     else
//         return num2;
// }
// int main()
// {
//     int num1, num2;
//     cout<<"Enter First number: ";
//     cin>>num1;
//     cout<<"Enter Second number: ";
//     cin>>num2;

//     cout<<"The greater number: "<<max(num1,num2);
// }

// write a c++ program to swap two numbers.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter First number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;
    
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<num1<<" "<<num2;
}