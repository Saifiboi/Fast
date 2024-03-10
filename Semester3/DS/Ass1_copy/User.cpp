#include <iostream>
#include <string>

class User {
private:
    int userID;
    std::string username;
    std::string password;
    std::string role;

public:
    // Constructor to initialize the user object
    User(int id, const std::string& uname, const std::string& pwd, const std::string& userRole) {
        userID = id;
        username = uname;
        password = pwd;
        role = userRole;
    }

    // Getter methods to access private member variables
    int getUserID() const {
        return userID;
    }

    std::string getUsername() const {
        return username;
    }

    std::string getPassword() const {
        return password;
    }

    std::string getRole() const {
        return role;
    }

    // Setter methods to modify private member variables
    void setUsername(const std::string& uname) {
        username = uname;
    }

    void setPassword(const std::string& pwd) {
        password = pwd;
    }

    void setRole(const std::string& userRole) {
        role = userRole;
    }

    // Display user information
    void displayInfo() const {
        std::cout << "User ID: " << userID << std::endl;
        std::cout << "Username: " << username << std::endl;
        std::cout << "Role: " << role << std::endl;
    }
};

int main() {
    // Create a User object
    User user1(1, "admin_user", "admin123", "admin");

    // Display user information
    std::cout << "User Information:" << std::endl;
    user1.displayInfo();

    // Modify and display updated information
    user1.setUsername("teacher_user");
    user1.setPassword("teacher456");
    user1.setRole("teacher");

    std::cout << "\nUpdated User Information:" << std::endl;
    user1.displayInfo();

    return 0;
}
