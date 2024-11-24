#include "faculty.h";
#include "student.h";
#include <string>
using namespace std;

class Course{
    public:
        string courseID;
        string courseName;
        double credits;
        string schedule;

        Course(string cID, string cName, double c, string sch): 
        courseID(cID), courseName(cName), credits(c), schedule(sch)
        {}

        bool assignFaculty(Faculty f);
        bool registerStudent(Student s);
};