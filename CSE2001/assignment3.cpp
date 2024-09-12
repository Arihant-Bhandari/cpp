// Develop  a  program  to  sort  a  file  consisting  of  books’  details  in  the alphabetical order of author names.
// The details of books include book_id, author_name, price, no_of_pages, publisher, year_of_publishing

// #include <iostream>
// using namespace std;

// class Book
// {
//     private:
//     string book_id, author_name, publisher;
//     int no_of_pages, year_of_publishing;
//     float price;

//     public:
//     Book()
//     {
//         book_id = "NULL";
//         author_name = "NULL";
//         publisher = "NULL";
//         no_of_pages = 0;
//         year_of_publishing = 0;
//         price = 0;
//     }
//     void setter()
//     {
//         cout<<"Enter the Book ID and Author's Name: ";
//         cin>>book_id>>author_name;
//         cout<<"Enter the Price of the Book: ";
//         cin>>price;
//         cout<<"Enter the no. of pages in the Book: ";
//         cin>>no_of_pages;
//         cout<<"Enter the Publisher's Name: ";
//         cin>>publisher;
//         cout<<"Enter the Year of Publishing of the Book: ";
//         cin>>year_of_publishing;
//     }
//     friend void authorSort(Book books[],int n);
// };
// void authorSort(Book books[],int n)
// {
//     int pos;
//     Book temp;

//     for(int i = 0; i < n-1; i++)
//     {
//         pos = i;
//         for(int j = i + 1; j < n; j++)
//         {
//             if(books[j].author_name < books[pos].author_name)
//                 pos = j;
//         }

//         temp = books[i];
//         books[i] = books[pos];
//         books[pos] = temp;
//     }

//     cout<<endl;

//     cout<<"Sorted Author Names: "<<endl;
//     for(int i = 0; i < n; i++)
//     {
//         cout<<books[i].author_name<<endl;
//     }
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number of books to store: ";
//     cin>>n;

//     Book books[n];

//     for(int i = 0l; i<n ; i++)
//     {
//         books[i].setter();
//         cout<<endl;
//     }

//     authorSort(books,n);
//     return 0;
// }

// Design a class template by name Vector and perform the following:
// Find the smallest of the element in the Vector
// Search for an element in the Vector
// Find the average of the element in the array

// #include <iostream>
// #include <vector>
// using namespace std;

// template <typename T>
// class Vector
// {
//     private:
//     vector<T> vect;
//     int length;

//     public:
//     void getVals()
//     {
//         cout<<"Enter number of elements: ";
//         cin>>length;

//         T temp;
//         for(int i = 0; i<length; i++)
//         {
//             cout<<"Enter element: ";
//             cin>>temp;
//             vect.push_back(temp);
//         }
//         cout<<endl;
//     }
//     T smallest()
//     {
//         int pos = 0;
//         for (int i = 0; i < length; i++)
//         {
//             if (vect.at(i) < vect.at(pos))
//                 pos = i;
//         }
//         return vect.at(pos);
//     }
//     T search()
//     {
//         T key;
//         cout<<"Enter value to be searched: ";
//         cin>>key;
//         for (int i = 0; i < length; i++)
//         {
//             if (vect.at(i) == key)
//                 return i;
//         }
//         return -1;
//     }
//     T average()
//     {
//         T avg = 0;
//         for (int i = 0; i < length; i++)
//         {
//             avg += vect.at(i);
//         }

//         return avg / length;
//     }
// };

// int main()
// {
//     Vector<int> v;
//     v.getVals();
//     cout << "Smallest element: " << v.smallest() << endl;
//     cout << v.search()+1 << " posiiton." << endl;
//     cout << "Average of elements: " << v.average() << endl;
//     return 0;
// }

// Design a generic function for finding the largest of three numbers.

#include <iostream>
using namespace std;
template <typename Greatest>

Greatest max(Greatest a, Greatest b, Greatest c)
{
    return (a>b && a>c)?a:((b>a && b>c)?b:c);
}
int main()
{
    float a,b,c;
    cout<<"Enter Three Numbers: ";
    cin>>a>>b>>c;
    cout<<"Greatest element of the three: "<<max(a,b,c)<<endl<<endl;
    int x,y,z;
    cout<<"Enter Three Numbers: ";
    cin>>x>>y>>z;
    cout<<"Greatest element of the three: "<<max(x,y,z)<<endl;
    return 0;
}