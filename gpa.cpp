#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <map>

using namespace std;

vector<float> marks;
string courses[] = {"APPLIED MATH","CIVICS/LOGIC","C++","WRITTING SKILL","TD","EMERGING TECH"};
map<string, float> students;
void calculateGrade(int,int);
vector<float> total;

int w;
int x = 0;
int main()
{
    do
    {
        x = x + 1;
        float t = 0;
        int mark;
        cout <<"I AM HERE TO CALCULATE YOUR GPA"<<endl;
        for (int i = 0; i < 6; i++)
        {
            cout <<"enter your "<<setw(-14)<<courses[i]<<" mark out of 100: "<<endl;
            cin >>mark;
            marks.push_back(mark);
        }
        for(int i = 0; i < 6; i++)
        {
            students[courses[i]] = marks[i];
        }
        for(int i = 0; i < 6; i++)
        {
            if (students[courses[i]] == marks[0] && courses[i] == "APPLIED MATH")
            {
                calculateGrade(4,i);
            }
            else
            {
                calculateGrade(3,i);
            }
        }
        for (int i = 0; i<6; i++)
        {
            t = t + total[i];
        }
        cout <<"\nYOUR GPA IS: "<<setprecision(3)<<t/19<<endl;
        total.clear();
        marks.clear();
        cout <<"\nIF YOU WANT TO CONTINUE PRESS  \'1\' else enter anything: ";
        cin >>w;
    }
    while(w == 1);

    return 0;

}

void calculateGrade(int c,int i)
{
    if(students[courses[i]] <= 100 && students[courses[i]] > 84)
    {
        total.push_back(4*c);
    }
    else if(students[courses[i]] <= 84 && students[courses[i]] > 79)
    {
        total.push_back(3.75*c);
    }
    else if(students[courses[i]] <= 79 && students[courses[i]] > 74)
    {
        total.push_back(3.50*c);
    }
    else if(students[courses[i]] <= 74 && students[courses[i]] > 69)
    {
        total.push_back(3.25*c);
    }
    else if(students[courses[i]] <= 69 && students[courses[i]] > 64)
    {
        total.push_back(3.00*c);
    }
    else if(students[courses[i]] <= 64 && students[courses[i]] > 59)
    {
        total.push_back(2.75*c);
    }
    else if(students[courses[i]] <= 59 && students[courses[i]] > 49)
    {
        total.push_back(2.50*c);
    }
    else if(students[courses[i]] <= 49 && students[courses[i]] > 44)
    {
        total.push_back(2.00*c);
    }
    else if(students[courses[i]] <= 44 && students[courses[i]] > 39)
    {
        total.push_back(1.00*c);
    }
    else if (students[courses[i]] <= 39 && students[courses[i]] > 100)
    {
        total.push_back(0);
    }
}
