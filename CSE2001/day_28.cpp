// write a cpp program to creatre a binary file, and write the student name and roll no. into the file

// #include <iostream>
// #include <fstream>
// using namespace std;

// struct Student
// {
//     string name;
//     int roll_no;
// };

// int main()
// {
//     ofstream wf("Student.dat", ios::out | ios::binary);

//     Student student[3];
//     student[0].name = "Aman";
//     student[0].roll_no = 1;

//     student[1].name = "Naman";
//     student[1].roll_no = 2;

//     student[2].name = "Muskaan";
//     student[2].roll_no = 3;

//     if(!wf)
//     {
//         cout<<"Cannot open file.";
//         return 1;
//     }
    
//     for(int i = 0; i < 3; i++)
//     {
//         wf<<"Name: "<<student[i].name<<", Roll No.: "<<student[i].roll_no<<endl;
//     }

//     wf.close();
//     return 0;
// }

// 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream wf("Student.dat", ios::out | ios::binary);

    return 0;
}