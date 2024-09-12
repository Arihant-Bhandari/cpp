//  write a c++ program using functions with arguments to find out the sum of forst ten natural numbers.

// #include <iostream>
// using namespace std;

// int sum_n(int n)
// {
//     int sum = n*(n+1)/2;
//     return sum;
// }

// int main()
// {
//     int n;

//     cout<<"Enter n for sum of n natural numbers: ";
//     cin>>n;

//     cout<<"Result: "<<sum_n(n);
//     return 0;
// }

// wrtie a c++ program to implement functions without arguments and without return values to find out the factorial of a given number.

// #include <iostream>
// using namespace std;

// void fact()
// {
//     int n;

//     cout<<"Enter n for factorial: ";
//     cin>>n;

//     int res = 1;

//     for(int i  = 1; i<=n;i++)
//     {
//         res*=i;
//     }

//     cout<<"Result: "<<res;
// }

// int main()
// {
//     fact();

//     return 0;
// }

// write a c++ program to swap two numbers using adresses.

// #include <iostream>
// using namespace std;

// void swap(int &num1, int &num2)
// {
//     int temp;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
// }
// int main()
// {
//     int num1, num2;
//     cout<<"Enter First number: ";
//     cin>>num1;
//     cout<<"Enter Second number: ";
//     cin>>num2;

//     cout<<"addresses: num1 = "<<&num1<<" num2 = "<<&num2<<endl;

//     swap(num1,num2);

//     cout<<"addresses: num1 = "<<&num1<<" num2 = "<<&num2<<endl;

//     cout<<"values: num1 = "<<num1<<" num2 = "<<num2;
    
//     return 0;
// }

// write a c++ program to illustrate pointers to show a variable and its address using pointer p

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter: ";
//     cin>>n;

//     int *p = &n;
//     int **g = &p;
//     cout<<p<<" "<<*p<<" "<<&g;   
//     return 0;
// }

// write a c++ program to reutnr the greatest number in an array using reference.

#include <iostream>
using namespace std;

int max(int arr[])
{
    int max = 0;
    for(int i = 0; i < 10; i++)
    {
        if(arr[max]<arr[i])
            max = i;
        else
            continue;
    }
    return max;
}

int main()
{
    int arr[10];
    cout<<"Enter: ";
    for(int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int great = max(arr);
    cout<<"max element: "<<arr[great];
    return 0;
}