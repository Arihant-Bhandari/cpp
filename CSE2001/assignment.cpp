// 1 Write a C++ Program to find largest element in an array of given 11 Numbers.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the amount of elements to compare: ";
//     cin>>n;

//     int number[n];

//     cout<<"Enter elements: ";
//     for(int i = 0;i<n;i++)
//     {
//         cin>>number[i];
//     }   

//     int great = 0;

//     for(int i = 0;i<n;i++)
//     {
//         if(great<number[i])
//             great = number[i];
//         else
//             continue;
//     }

//     cout<<"Greatest number: "<<great;

//     return 0;
// }

// 2 Write a C++ Program to find out the cube sum of first n natural numbers.

// #include <iostream>
// using namespace std;

// int cube_sum(int n)
// {
//     int sum = 0;

//     for(int i = 1;i<=n;i++)
//     {
//         sum += i*i*i;
//     } 
//     return sum;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the number for Cubed Sum: ";
//     cin>>n;

//     cout<<"Result: "<<cube_sum(n);
//     return 0;
// }

// 3 Write a c++ Program to accept a string in upper case and print it by lower case.

// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cout<<"Enter a String in Uppercase to convert to Lowercase: ";
//     cin>>s;

//     for(int i = 0; i<s.length();i++)
//     {
//         s[i] = char(int(s[i]) + 32);
//     }
    
//     cout<<"Resultant String: "<<s;
//     return 0;
// }

// 4 Write C++ Program to calculate and print the sum of even and odd integers of the first n natural numbers.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number for Odd and Even Sum: ";
//     cin>>n;

//     int odd = 0,even = 0;

//     for(int i = 1;i<=n;i++)
//     {
//         if(i%2==0)
//             even = even + i;
//         else
//             odd = odd + i;
//     }

//     cout<<"The sum of Odd elements: "<<odd<<" and Even elements: "<<even;
//     return 0;
// }

// 5 Write C++ Program to Remove Spaces From String

// #include <iostream>
// using namespace std;

// int main()
// {
//     string str = "Arihant Bhandari";
    
//     string s = "";

//     for(int i = 0;i<str.length();i++)
//     {
//         if(str.at(i) == ' ')
//         continue;
//         else
//         s += str.at(i);
//     }

//     cout<<s;
//     return 0;
// }

// 6 Write a C++ Program to find Compound Interest.

// #include <iostream>
// #include <cmath>
// using namespace std;

// double compoundInterest(int p, int t, int n, double r)
// {
//     return p * pow(1 + r / n, n * t);
// }
// int main()
// {
//     int principal,time,compoundingLength;
//     double interestRate;

//     cout<<"Enter principal, time, compoundingLength, interestRate: ";
//     cin>>principal>>time>>compoundingLength>>interestRate;

//     cout<<"Result: "<<compoundInterest(principal,time,compoundingLength,interestRate);
//     return 0;
// }

// 7 Write a C++ Program to swap two numbers using call by reference function.

// #include<iostream>
// using namespace std;

// void swapNumbers(int &a, int &b) 
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() 
// {
//     int num1, num2;

//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << endl;

//     cout << "Before swapping: \n" << endl;
//     cout << "First number: " << num1 << "\n";
//     cout << "Second number: " << num2 << "\n" << endl;

//     swapNumbers(num1, num2);

//     cout << "After swapping: \n" << endl;
//     cout << "First number: " << num1 << "\n";
//     cout << "Second number: " << num2 << "\n"<<endl;

//     return 0;
// }

// 8 Write a C++ Program to Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it.

// #include <iostream>
// using namespace std;

// int main()
// {
//     char roll_no[15];
//     cout<<"Enter roll no.: ";
//     cin>>roll_no;

//     cout<<"Enter marks: ";
//     int marks[3];
//     for(int i = 0;i<3;i++)
//         cin>>marks[i];

//     int total = 0;
//     double average = 0.0;
//     for(int i = 0;i<3;i++)
//         total = total + marks[i];

//     average = total/3;

//     cout<<"The Total marks scored by "<<roll_no<<" are "<<total<<"/300 and the average marks for these subjects: "<<average;
//     return 0;
// }

// 9  Write a C++ program to sort a list of numbers in ascending order.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter number of elements to be sorted: ";
//     cin>>n;

//     int num[n];
//     cout<<"\nEnter elements in any order: ";
//     for(int i = 0; i<n; i++)
//     {
//         cin>>num[i];
//     }

//     int temp = 0;

//     for(int i = 0;i<n-1;i++)
//     {
//         for(int j = 0; j<n-1-i;j++)
//         {
//             if(num[j+1]<num[j])
//             {
//                 temp = num[j+1];
//                 num[j+1] = num[j];
//                 num[j] = temp;
//             }
//         }
//     }

//     cout<<"\nthe sorted elements are: ";

//     for(int i = 0; i<n; i++)
//     {
//         cout<<num[i]<<" ";
//     }

//     return 0;
// }

// 10 Write a C++ Program to Find ASCII value of a character.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character to find ASCII value: ";
    cin>>ch;

    cout<<"Resulting ASCII value: "<<int(ch);
    return 0;
}