// write a c++ program to swap the given two numbers using function template that can take different types of datatypes like float, int, char

// #include <iostream>
// using namespace std;

// template <class Swap>

// void swapVal(Swap &i, Swap &j)
// {
//     Swap k = i;
//     i = j;
//     j = k;
// }
// int main()
// {
//     int a,b;
//     float x,y;
//     char e,f;

//     cout<<"Enter 2 Integers: ";
//     cin>>a>>b;
//     swapVal(a,b);
//     cout<<a<<" "<<b<<endl<<endl;
//     cout<<"Enter 2 Floating-point Integers: ";
//     cin>>x>>y;
//     swapVal(x,y);
//     cout<<x<<" "<<y<<endl<<endl;
//     cout<<"Enter 2 Characters: ";
//     cin>>e>>f;
//     swapVal(e,f);
//     cout<<e<<" "<<f<<endl<<endl;
//     return 0;
// }

// 

// #include <iostream>
// using namespace std;

// template <class Sort>
// void swapVal(Sort &i, Sort &j)
// {
//     Sort k = i;
//     i = j;
//     j = k;
// }

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1]) // Corrected condition for ascending order
//                 swapVal(arr[j], arr[j + 1]);
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter dimensions: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element: ";
//         cin >> arr[i];
//     }

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// max

// #include <iostream>
// using namespace std;

// template <class Sort>

// Sort maxElement(Sort arr[], int n)
// {
//     Sort max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(max < arr[i])
//         max = arr[i];
//     }

//     return max;
// }

// int main()
// {
//     int n;
//     cout << "Enter dimensions: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element: ";
//         cin >> arr[i];
//     }

//     cout<<"Max Element in array: "<<maxElement(arr, n);
//     return 0;
// }

// bubble

// #include <iostream>
// using namespace std;

// template <class Sort>

// void bubbleSort(Sort arr[], int n)
// {
//     Sort temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1]) // Corrected condition for ascending order
//                 {
//                     temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
//                 }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter dimensions: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element: ";
//         cin >> arr[i];
//     }

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// generic pair

#include <iostream>
using namespace std;

template <class Sort>

class Pair
{
    private: int x,y;
};

int main()
{
    int n;
    cout << "Enter dimensions: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}