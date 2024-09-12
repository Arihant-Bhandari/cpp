#include <iostream>
using namespace std;

class Student
{ 
    protected:
    string name, regNum, dept;
    string subjects[7]; 
    int marks[7][2];

    public:
    void getDetails()
    {
        cout<<"\nEnter details of Student in following format separated by whitespace (Name, Registration number, Department): ";

        cin>>name>>regNum>>dept;

        cout<<endl;
    }
    void getSubjects()
    {
        cout<<"Enter the Course Code of Subjects (MAX 7) {Enter NULL if no further subjects}: ";
        for(int i = 0; i<7; i++)
            cin>>subjects[i];

        cout<<endl;
    }
    void getMarks()
    {
        cout<<"Enter the Marks obtained: "<<endl;

        for(int i = 0; i<7; i++)
        {
            if(subjects[i].compare("NULL") != 0)
            {
                cout<<"For "<<subjects[i]<<" separated by whitespace (CA marks{40} and TEE marks{100}): ";
                cin>>marks[i][0]>>marks[i][1];
            }
            else
            {
                marks[i][0] = 0;
                marks[i][1] = 0;
            }       
        }

        cout<<endl;
    }
};

class Report : public Student
{
    private:
    char grade[7];
    float gpa;

    public:
    void fitGrade()
    {
        float res;
        for(int i = 0; i<7; i++)
        {
            res = marks[i][0] + (((marks[i][1])*60)/100);

            if(res>90 && res<=100)
                grade[i] = 'S';
            else if(res>80 && res<=90)
                grade[i] = 'A';
            else if(res>70 && res<=80)
                grade[i] = 'B';
            else if(res>60 && res<=70)
                grade[i] = 'C';
            else if(res>50 && res<=60)
                grade[i] = 'D';
            else if(res>40 && res<=50)
                grade[i] = 'E';
            else if(res>0 && res<40)
                grade[i] = 'F';
            else
                grade[i] = 'N';
        }
    }
    void calcGPA()
    {
        float res = 0;
        int count = 0;
        for(int i = 0; i<7; i++)
        {
            if(subjects[i].compare("NULL") != 0)
                count+=1;

            if(grade[i] == 'S')
                res += 10;
            else if(grade[i] == 'A')
                res += 9;
            else if(grade[i] == 'B')
                res += 8;
            else if(grade[i] == 'C')
                res += 7;
            else if(grade[i] == 'D')
                res += 6;
            else if(grade[i] == 'E')
                res += 5;
            else
                res += 0;
        }
        gpa = res/count;
    }
    void display()
    {
        cout<<"Name of the Student: "<<name<<endl<<endl;
        cout<<"Registration Number of the Student: "<<regNum<<endl<<endl;
        cout<<"Department of the Student: "<<dept<<endl<<endl;

        cout<<"Subject : CA Marks TEE Marks : Grade obtained"<<endl;
        for(int i = 0; i<7; i++)
        {
            if(subjects[i].compare("NULL") != 0)
                cout<<subjects[i]<<" : "<<marks[i][0]<<" "<<marks[i][1]<<" : "<<grade[i]<<endl;
        }
        cout<<endl;
        cout<<"GPA of the Student: "<<gpa<<endl<<endl; 
    }
};

int main()
{
    Report report;

    report.getDetails();
    report.getSubjects();
    report.getMarks();
    report.fitGrade();
    report.calcGPA();
    report.display();
    return 0;
}