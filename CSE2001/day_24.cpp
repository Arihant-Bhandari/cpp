// 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    cout<<"Elements: ";

    for(int i : numbers)
        cout<<i<<" ";
        
    return 0;
}