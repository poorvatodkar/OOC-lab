#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void getdata()
    {
        cout << "\n-----------------------------------------";
        cout << "\nEnter Roll No. : ";
        cin >> roll;

        cout << "Enter Student Name : ";
        cin >> ws;
        getline(cin, name);
    }

    void putdata()
    {
        cout << "\n-----------------------------------------";
        cout << "\n********** Student Marklist **********";
        cout << "\n-----------------------------------------";
        cout << "\nRoll No. : " << roll;
        cout << "\nStudent Name : " << name << endl;
    }
};

class StudentExam : public Student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;

    void accept_data()
    {
        getdata();

        cout << "Enter Marks for Subject 1 : ";
        cin >> sub1;

        cout << "Enter Marks for Subject 2 : ";
        cin >> sub2;

        cout << "Enter Marks for Subject 3 : ";
        cin >> sub3;

        cout << "Enter Marks for Subject 4 : ";
        cin >> sub4;

        cout << "Enter Marks for Subject 5 : ";
        cin >> sub5;

        cout << "Enter Marks for Subject 6 : ";
        cin >> sub6;
    }

    void display_data()
    {
        putdata();

        cout << "Marks of Subject 1 : " << sub1 << endl;
        cout << "Marks of Subject 2 : " << sub2 << endl;
        cout << "Marks of Subject 3 : " << sub3 << endl;
        cout << "Marks of Subject 4 : " << sub4 << endl;
        cout << "Marks of Subject 5 : " << sub5 << endl;
        cout << "Marks of Subject 6 : " << sub6 << endl;
    }
};

class StudentResult : public StudentExam
{
public:
    void calculate()
    {
        int total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;

        per = total / 6.0;

        cout << "\nTotal Marks : " << total << " / 600";
        cout << "\nTotal Percentage : " << per << "%";
        cout << "\n-----------------------------------------\n";
    }
};

int main()
{
    int cnt;

    cout << "Enter No. of Students You Want? : ";
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        StudentResult str;

        str.accept_data();
        str.display_data();
        str.calculate();
    }

    return 0;
}