/*An  election  is  contested  by  5  candidates.  The  candidates  are  numbered  1 
to 5 and the voting is done by marking the candidate number on the ballot 
paper.  Write  a  C++  program  to  read  the  ballots  and  count  the  votes  cast 
for  each  candidate  using  an  array.  In  case,  a  number  read  is  outside  the 
range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the 
program should also count the number of spoilt ballots.*/

// #include <iostream>
// using namespace std;

// class Ballot
// {
//     private: int balCount = 0;

//     public:
//     void count() { balCount += 1; }
//     int display(){ return balCount;}
// };
// int main()
// {
//     Ballot ballot[6]; // 0 : spoilt ballot , else 1-5 valid ballot

//     int voters;
//     cout<<"Enter the number of votes: ";
//     cin>>voters;

//     cout<<endl;

//     int vote;
//     for(int i = 0;i<voters;i++)
//     {
//         cout<<"Enter vote: ";
//         cin>>vote;

//         switch(vote)
//         {
//             case 1:
//                 ballot[1].count();
//                 break;
//             case 2:
//                 ballot[2].count();
//                 break;
//             case 3:
//                 ballot[3].count();
//                 break;
//             case 4:
//                 ballot[4].count();
//                 break;
//             case 5:
//                 ballot[5].count();
//                 break;
//             default:
//                 ballot[0].count();
//         }
//     }

//     cout<<endl;

//     for(int i = 0;i<6;i++)
//     {
//         if(i!=0)
//             cout<<"Ballots in favour of Candidate " << i <<" : "<<ballot[i].display()<<endl<<endl;
//         else
//             cout<<"Spoilt Ballots: "<<ballot[0].display()<<endl<<endl;
//     }

//     return 0;
// }

/*Develop a program which will read a string and rewrite it in the 
alphabetical  order.  For  example,  the  word  STRING  should  be  written  as 
GINRST*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     string str;
//     cout<<"Enter a String to be alphabetically ordered: ";
//     cin>>str;

//     int arr[str.length()];

//     for(int i = 0 ; i< str.length() ; i++)
//         arr[i] = (int)str[i];

//     int temp;

//     for(int i = 0 ; i<str.length() ; i++)
//     {
//         for(int j = 0 ; j < str.length()-i ; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     string s = "";

//     for(int i = 0;i<str.length();i++)
//         s = s + (char)arr[i];

//     cout<<"Reversed String is: "<<s;
    
//     return 0;
// }

/*Create  a  class  by  name  date  with  the  member  data  day,  month  and  year. 
Perform the following: 

    Overload all relational operators <,<=,>,>=,==,!= 

    Overload ++ operator to increment a date by one day 

    Overload + to add given number of days to find the next date 

    Provide  the  necessary  function  to  use  the  statement  like  days=dt; 
    where days is an int variable and dt is an object of date class. The 
    statement  is  intended  to  assign  the  number  of  days  elapsed  in  the 
    current year of the date to the variable days. Note that this is a case 
    of conversion from derived type to basic type.*/

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Relational operators overloading
    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

    bool operator<=(const Date& other) const {
        return (*this < other) || (*this == other);
    }

    bool operator>(const Date& other) const {
        return !(*this <= other);
    }

    bool operator>=(const Date& other) const {
        return !(*this < other);
    }

    bool operator==(const Date& other) const {
        return (day == other.day) && (month == other.month) && (year == other.year);
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    // Overload ++ operator to increment a date by one day
    void operator++() {
        day++;
        changeDate();
    }

    // Overload + to add given number of days to find the next date
    Date operator+(int days) const {
        Date newDate = *this;
        newDate.day += days;
        newDate.changeDate();
        return newDate;
    }

    // Conversion function
    operator int() const {
        int totalDays = day;
        switch (month - 1) {
            case 11:
                totalDays += 30; // December
            case 10:
                totalDays += 31; // November
            case 9:
                totalDays += 30; // October
            case 8:
                totalDays += 31; // September
            case 7:
                totalDays += 31; // August
            case 6:
                totalDays += 30; // July
            case 5:
                totalDays += 31; // June
            case 4:
                totalDays += 30; // May
            case 3:
                totalDays += 31; // April
            case 2:
                totalDays += 28; // March
            case 1:
                totalDays += 31; // February
        }
        return totalDays;
    }
    void changeDate() 
    {
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
            day = 1;
            month++;
        } else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 32) {
            day = 1;
            month++;
        } else if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day == 30) {
            day = 1;
            month++;
        } else if (month == 2 && !((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day == 29) {
            day = 1;
            month++;
        } else if (day == 32) {
            day = 1;
            month = 1;
            year++;
        }
    }
    void display()
    {
        cout<<"Day: "<<day<<endl;
        cout<<"Month: "<<month<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

int main() {
    int d, m, y;
    cout << "Enter the Day, Month and Year: ";
    cin >> d >> m >> y;

    Date date(d, m, y);

    // Test relational operators
    Date otherDate(1, 1, 2024);
    if (date < otherDate)
        cout << "Date is earlier than otherDate\n";
    else
        cout << "Date is later than or equal to otherDate\n";

    // Test increment operator
    ++date;
    date.display();

    // Test addition operator
    Date nextDate = date + 10;
    nextDate.display();

    // Test conversion function
    int days = date;
    cout << "Days elapsed in the current year: " << days << endl;

    return 0;
}
