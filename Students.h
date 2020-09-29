#include "rang.hpp"
using namespace std;
class Date
{
public:
    int day,month,year;
    bool
    NoValid()
    {
        return day < 1 || day > 32 || month < 1 || month > 13 || year < 1981 || year > 2021 ;
    }
    void print()
    {
        cout << rang::fg::green << "Current date is :" << year << " "  << " " << month << " " << day << endl;
    }

};
class Course
{
public:
    int credit;
    char Title[20];
    float Mark;
    void course()
    {
        cout << rang::fg::green << "\n.Title :" << Title << " , Credits :" << credit <<" , Mark :" << Mark << endl;
    }    
};
class Student
{
public:
    string name,username,address;
    int regstNum;
    Date date_Birth;
    Course * courseMark = new Course();
    Student( int r, string n, string u, string a, Course *c, Date d)
    {
        regstNum = r;
        name = n;
        username = u;
        address = a;
        courseMark = c;
        date_Birth = d;
    }
};
