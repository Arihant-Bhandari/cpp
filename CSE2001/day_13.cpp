// write a c++ program to demonstrate single inheritance between 2 classes worker and manager: worker has age and name while manager is inherited from base class worker

// #include <iostream>
// using namespace std;

// class Worker
// {
//     public: 
//     int age;
//     string name;
//     void get()
//     {
//         cout<<"Enter Name and Age: ";
//         cin>>name>>age;
//     }
// };

// class Manager:public Worker
// {
//     public: int teamNo;
//     Manager(int member)
//     {
//         teamNo = member;
//     }
//     void show()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"The Manager handles: "<<teamNo<<" members";
//     }
// };
// int main()
// {
//     int n;
//     cout<<"Enter no. of workers under the manager: ";
//     cin>>n;
//     Manager m(n);
//     m.get();
//     m.show();
//     return 0;
// }

// write a c++ program to create multiple inheritance using base class worker , derived class manager subderived class CEO

#include <iostream>
using namespace std;

class Worker {
public: 
    int age;
    string name;
    void get() {
        cout << "Enter Name and Age: ";
        cin >> name >> age;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Manager : public Worker {
public: 
    int teamNo;
    Manager(int member) : teamNo(member) {}
    void show() {
        Worker::show(); // Call the show method from the Worker class
        cout << "The Manager handles: " << teamNo << " members" << endl;
    }
};

class CEO : public Manager {
public: 
    int noManager;
    CEO(int n) : Manager(0), noManager(n) {} // Initialize Manager with 0 since CEO does not handle workers directly
    void show() {
        Manager::show(); // Call the show method from the Manager class
        cout << "The CEO handles: " << noManager << " managers" << endl;
    }
};

int main() {
    int n, b;
    cout << "Enter no. of workers under the manager: ";
    cin >> n;
    Manager m(n);
    m.get();
    m.show();
    
    cout << "Enter no. of Managers under the CEO: ";
    cin >> b;
    CEO c(b);
    c.get();
    c.show();
    return 0;
}