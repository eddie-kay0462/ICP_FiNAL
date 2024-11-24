#include "user.h";
#include <string>
using namespace std;

class Faculty: public User {
    public:
        string facultyID;
        string date_of_appointment;
        string department;
        string list_of_teaching_courses[];

        bool enterGrades();
        bool viewRoster();
};