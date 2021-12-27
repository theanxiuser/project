#include<string>
class User{
    int user_id;
    static int id;
    std::string first_name;
    std::string middle_name;
    std::string last_name;
    std::string address;
    std::string email;
    char phone[10];
    std::string gender;
    std::string department;
    public:
    User();
    void addUser();
    void updateUser();
    void removeUser();
    void displayUser();
};
