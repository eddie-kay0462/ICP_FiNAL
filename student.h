#include "user.h";
#include <string>
using namespace std;

class Student: public User{
    public:
        string studentID;
        string dateOfBirth;
        string picture;
        string major;
        string enrollmentDate;

        //student contructor
        Student(
            string sId, string dob, string pic, string maj, string edate,
            string uId, string fName, string lName, string email, string password
            ): User(uId, fName, lName, email, password),
            studentID(sId), dateOfBirth(dob), picture(pic),
            major(maj), enrollmentDate(edate) {}


        bool enrollInCourse(string courseId);
        bool viewGrades();

};