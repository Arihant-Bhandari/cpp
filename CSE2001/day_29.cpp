// write a cpp program to perform file functions 

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream myFile;

//     myFile.open("Data.txt",ios::out);

//     if(! myFile)
//     {
//         cout<<"The file could not be opened.";
//         exit(1);
//     }
//     else
//     {
//         cout<<"File opened successfully: "<<endl;
//         string str;
//         cout<<"enter string to be inserted: ";
//         cin>>str;
//         myFile << str;
//         myFile.close();
//     }

//     return 0;
// }

// write a cpp program to open and read data

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream myFile;

//     myFile.open("Data.txt",ios::in);

//     if(! myFile)
//     {
//         cout<<"The file could not be opened.";
//         exit(1);
//     }
//     else
//     {
//         char ch;
//         while(1)
//         {
//             myFile >> ch;
//             if(myFile.eof())
//             break;
//             cout<<ch;
//         }
//     }    
//     return 0;
// }

// write a c++ program to copy content from one file to another

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream inFile;
//     fstream outFile;
//     inFile.open("Data.txt",ios::in);
//     outFile.open("copy.txt",ios::out);
//     if(! inFile)
//     {
//         cout<<"The file could not be opened.";
//         exit(1);
//     }
//     else
//     {
//         char ch;
//         while(1)
//         {
//             inFile >> ch;
//             if(inFile.eof())
//             break;
//             outFile << ch;
//         }
//     }    
//     return 0;
// }

// write a c++ program to

