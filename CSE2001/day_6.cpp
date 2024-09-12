// #include <iostream>
// using namespace std;

// class myname
// {
//     public:
//     string name = "";
//     void printname()
//     {
//         cout<<"Enter Name: ";
//         cin>>name;
//         cout<<"Hello, my name is "<<name;
//     }
// };
// int main()
// {
//     myname m;
//     m.printname();
//     return 0;
// }

// 

// #include <iostream>
// using namespace std;

// class Friend
// {
//     public:
//         char name[50];
//         void names()
//         {
//             cout << "Enter name of friend: ";
//             cin >> name;
//         }
//         void print_name()
//         {
//             cout << "I have a friend named: " << name << endl;
//         }
// };
// int main()
// {
//     Friend f1,f2,f3;
    
//     f1.names();
//     f1.print_name();
//     f2.names();
//     f2.print_name();
//     f3.names();
//     f3.print_name();
//     return 0;
// }

// 

// #include <iostream>
// using namespace std;

// class Counter
// {
//     public:
//         int number;
//         Counter()
//         {
//             number = 0;
//         }
//         void increment()
//         {
//             number++;
//         }
//         int display()
//         {
//             return number;
//         }
// };
// int main()
// {
//     Counter count;
//     cout<<count.display()<<endl;
//     for(int i = 0;i<5;i++)
//     {
//         count.increment();
//         cout<<"Current count: "<<count.display()<<endl;
//     }
//     return 0;
// }

// 

#include <iostream>
using namespace std;

class Employee
{
    protected: string emp_ID;
    private: double salary;
    public:
        string name, department;
        Employee()
        {
            name = "NULL";
            emp_ID = "#000u/#";
            salary = 10000;
        }
        void display()
        {
            cout<<"Employee name: "<<name<<endl;
            cout<<"Employee ID: "<<emp_ID<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
        }
        void update()
        {
            cout<<"Enter Name of Employee: ";
            cin>>name;
            cout<<"Enter Employee ID of Employee: ";
            cin>>emp_ID;
            cout<<"Enter Department of Employee: ";
            cin>>department;
            cout<<"Enter Salary of Employee: ";
            cin>>salary;
        }
};
int main()
{
    Employee emp;
    emp.update();
    emp.display();
    return 0;
}