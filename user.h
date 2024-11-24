#include <string>
using namespace std;

//what makes this class abstract?s

class User {
    public:
        string  userID;
        string firstName;
        string lastName;
        string email;
        string password;

        User(string uId, string fName, string lName, string e, string passwd)
        : userID(uId), firstName(fName), lastName(lName), email(e), password(passwd) {}

        virtual bool login(string email, string password);
        virtual bool logout();
};