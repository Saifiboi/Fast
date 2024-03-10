#include <iostream>
#include <string>

class Administrator {
private:
    int adminID;
    std::string name;
    std::string contactInfo;

public:
    // Constructor to initialize the administrator object
    Administrator(int id, const std::string& adminName, const std::string& contact) {
        adminID = id;
        name = adminName;
        contactInfo = contact;
    }

    // Getter methods to access private member variables
    int getAdminID() const {
        return adminID;
    }

    std::string getName() const {
        return name;
    }

    std::string getContactInfo() const {
        return contactInfo;
    }

    // Setter methods to modify private member variables
    void setName(const std::string& adminName) {
        name = adminName;
    }

    void setContactInfo(const std::string& contact) {
        contactInfo = contact;
    }

    // Display administrator information
    void displayInfo() const {
        std::cout << "Administrator ID: " << adminID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Contact Info: " << contactInfo << std::endl;
    }
};

int main() {
    // Create an Administrator object
    Administrator admin1(1, "Admin User", "admin@example.com");

    // Display administrator information
    std::cout << "Administrator Information:" << std::endl;
    admin1.displayInfo();

    // Modify and display updated information
    admin1.setName("New Admin");
    admin1.setContactInfo("newadmin@example.com");

    std::cout << "\nUpdated Administrator Information:" << std::endl;
    admin1.displayInfo();

    return 0;
}
