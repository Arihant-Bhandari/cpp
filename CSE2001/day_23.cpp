// Class template for a generic Pair

// #include <iostream>
// using namespace std;
// template<typename T>
// class Pair
// { 
// private:
//  T first;
//  T second;
// public:
//  // Constructor
//  Pair(T f, T s) : first(f), second(s) {}
//  // Method to get the first element
//  T getFirst() const {
//  return first;
//  }
//  // Method to get the second element
//  T getSecond() const {
//  return second;
//  }
// };

// int main()
// {
//  // Create a Pair of integers
//  Pair<int> intPair(5, 10);
//  cout << "First: " << intPair.getFirst() << ", Second:" << intPair.getSecond() << endl;
//  // Create a Pair of doubles
//  Pair<double> doublePair(3.14, 6.28);
//  cout << "First: " << doublePair.getFirst() << ", Second: " << doublePair.getSecond() << endl;
//  return 0;
// }

// 2
// #include <iostream>
// using namespace std;

// template<class T1, class T2> 
// class Example
// {
//    T1 x;
//    T2 y;
// public:
//   Example(T1 a, T2 b)
//   {
//    x = a;
//    y = b;
//   }
//   void show()
//   {
//      cout << x << " and " << y << "\n";
//   }
// };

// int main()
// {
//    Example<float, int>test1(3.45, 345);
//    Example <int, char>test2(100, 'm'); 
//    test1.show();
//    test2.show(); 
//    return(0);
// }

// 3.
// #include <iostream>
// using namespace std;

// template<class T, class U>
// class example{
//    T x;
//    U y;
//    public:
//    example(){
//       cout<<"Constructor is called"<<endl;
//    }
//    void show(){
//       cout<<x <<" and "<<y<<endl; 
//    }
// };

// int main(){
//     example<char,char> a;
//     example<char,char> b;
//     return 0;
// }

// 4. class template with inheritence, the base class is of class template type
#include <iostream>
using namespace std;
// Template base class
template<typename T>
class Base {
protected:
 T data;
public:
 Base(T d) : data(d) {}
 void display() {
 cout << "Data: " << data << endl;
 }
};
// Derived class from Base template
class Derived : public Base<int> {
private:
 int value;
public:
 Derived(int d, int v) : Base<int>(d), value(v) {}
 void show() {
 cout << "Derived Data: " << data << ", Value: " << value << endl;
 }
};
int main() {
 // Create objects of Base and Derived classes
 Base<double> base(3.14);
 base.display();
 Derived derived(10, 20);
 derived.display(); // Accessing base class function
 derived.show(); // Accessing derived class function
 return 0;
}