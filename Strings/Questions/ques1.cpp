// USING STRINGS IN CLASSS
#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
    private:
        string courseName;
        string instructorName;
    public:
        void setData(string course, string instructor){
            courseName = course;
            instructorName = instructor;
        }

        void getData(){
            cout << "Welcome to the grade book for " << courseName << "!" << endl;
            cout << "This course is presented by : " << instructorName << endl;
    }
};

int main(){
    string course,instructor;
    getline(cin,course);
    getline(cin,instructor);

    GradeBook g;
    g.setData(course,instructor);
    g.getData();

    return 0;
}


// MIHIRR42
