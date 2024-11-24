#include <string>
using namespace std;

class Enrollment{
    public:
        string enrollmentID;
        string studentID;
        string courseID;
        string semester;
        string grade;

        Enrollment(string eID, string sID, string cID, string s, string g):
        enrollmentID(eID), studentID(sID), courseID(cID), semester(s), grade(g)
        {}

        void getEnrollmentDetails();
};