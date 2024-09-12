// write a cpp program to find a given number form an array using sequntial search

// #include <iostream>
// using namespace std;

// void search(int arr[],int key, int num)
// {
//     for(int i = 0; i < num ; i++)
//     {
//         if(key == arr[i])
//         cout<<"Found Key at: "<< i <<" index or at the "<< i+1 <<"th posiition.";
//     }
// }
// int main()
// {
//     int num;
//     cout<<"Enter no. of elements: ";
//     cin>>num;

//     int arr[num];

//     for(int i = 0; i < num;i++)
//     {
//         cout<<"Enter element: ";
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter Key to search: ";
//     cin>>key;

//     search(arr,key,num);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter no. of elements: ";
//     cin>>num;

//     int arr[num];

//     for(int i = 0; i < num;i++)
//     {
//         cout<<"Enter element: ";
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter Key to search: ";
//     cin>>key;

//     cout<<find(arr[0],arr[num-1],key);

//     return 0;
// }

// write acpp program to create a linked list to store given 5 numbers and add a number 6 at the position 3 using STL list

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> arr;

//     int num;
//     cout<<"Enter number of elements: ";
//     cin>>num;

//     int element;
//     for(int i = 0; i < num; i++)
//     {
//         cout<<"Enter element: ";
//         cin>>element;
//         arr.push_back(element);
//     }

//     auto it = next(arr.begin(), 3);
//     arr.insert(it, 6);

//     for (int i : arr) 
//     {
//         cout << i << ' ';
//     }

//     return 0;
// }

// write a cpp program to create linked list with 5 elements called list1 , add/delete element from list1, create a new list list2 , merge list1 and list2 now sort list2.

// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> list1;

//     int num;
//     cout<<"Enter number of elements: ";
//     cin>>num;

//     for(int i = 0; i < num; i++)
//     {
//         list1.push_back(rand()/100);
//     }


//     cout<<endl;

//     list<int> list2;

//     for(int i = 0; i < num; i++)
//     {
//         list2.push_back(rand()/100);
//     }

//     list2.merge(list1);

//     list2.sort();

//     for (int i : list2) 
//     {
//         cout << i << ' ';
//     }

//     return 0;
// }

// write a cpp program to create a container map entering key-value pairs

// #include <iostream>
// using namespace std;

// int main()
// {
//     map<string,int> mapper;
//     return 0;
// }

// write a cpp program to make a STL vector

#include <iostream>
using namespace std;

int main()
{
    vector<int> vect;


    return 0;
}