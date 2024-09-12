// write a c++ program to open a input and output file.

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main ()
// { 
//     ifstream fsIn;
//     ofstream fsOut; 

//     fsIn.open("prog1.txt");
//     fsOut.open("prog2.txt");

//     fsIn.close();
//     fsOut.close();
//     return 0; 
// }

// write a c++ program to open a input and output file and append data into it, then close it.

// #include <fstream>
// #include <iostream>
// using namespace std;

// int main() 
// {
//     ifstream fsIn;
//     ofstream fsOut;

//     fsIn.open("prog1.txt");
//     fsOut.open("prog2.txt");

//     if (fsIn.is_open() && fsOut.is_open()) 
//     {
//         int num;
//         while (fsIn >> num) 
//         {
//             num *= 2;

//             fsOut << num << " ";
//         }

//         fsIn.close();
//         fsOut.close();
//         cout << "Data manipulation complete." << endl;
//     } 
//     else 
//     cout << "Error opening files." << endl;

//     return 0;
// }

// write a c++ program to append an output file.

// #include <fstream>
// #include <iostream>
// using namespace std;

// int main()
// {
//     ofstream OUTfile;

//     OUTfile.open("number.txt",ios::app);

//     if(! OUTfile.is_open())
//     cout<<"error in opening file.";
//     else
//     {
//         for(int i = 0; i < 1000; i += 200)
//         OUTfile<<i<<endl;

//         cout<<"Done editing."<<endl;
//     }
//     return 0;
// }

// write a c++ program to illustrate reading lines of data from a file using ifstream

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ifstream INfile;
//     INfile.open("number.txt");

//     string line;

//     while(! INfile.eof())
//     {
//         getline(INfile,line);

//         cout<<line<<endl;
//     }

//     INfile.close();

//     cout<<"\nCompleted Demonstration."<<endl;

//     return 0;
// }

// write a c++ program to 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    
    return 0;
}