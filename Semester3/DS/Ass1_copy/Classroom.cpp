#include <iostream>
#include <string>
#include <vector>

class Class {
private:
    int classID;
    std::string className;
    std::string classCode;
    std::vector<std::string> schedule;

public:
    // Constructor to initialize the class object
    Class(int id, const std::string& name, const std::string& code, const std::vector<std::string>& classSchedule) {
        classID = id;
        className = name;
        classCode = code;
        schedule = classSchedule;
    }

    // Getter methods to access private member variables
    int getClassID() const {
        return classID;
    }

    std::string getClassName() const {
        return className;
    }

    std::string getClassCode() const {
        return classCode;
    }

    std::vector<std::string> getSchedule() const {
        return schedule;
    }

    // Setter methods to modify private member variables
    void setClassName(const std::string& name) {
        className = name;
    }

    void setClassCode(const std::string& code) {
        classCode = code;
    }

    void setSchedule(const std::vector<std::string>& classSchedule) {
        schedule = classSchedule;
    }

    // Display class information
    void displayInfo() const {
        std::cout << "Class ID: " << classID << std::endl;
        std::cout << "Class Name: " << className << std::endl;
        std::cout << "Class Code: " << classCode << std::endl;
        std::cout << "Class Schedule:" << std::endl;
        for (const std::string& day : schedule) {
            std::cout << "  " << day << std::endl;
        }
    }
};

int main() {
    // Create a Class object
    std::vector<std::string> classSchedule = { "Monday: 9:00 AM - 11:00 AM", "Wednesday: 9:00 AM - 11:00 AM", "Friday: 9:00 AM - 11:00 AM" };
    Class class1(101, "Mathematics 101", "MATH101", classSchedule);

    // Display class information
    std::cout << "Class Information:" << std::endl;
    class1.displayInfo();

    // Modify and display updated information
    class1.setClassName("Mathematics 102");
    class1.setClassCode("MATH102");

    std::cout << "\nUpdated Class Information:" << std::endl;
    class1.displayInfo();

    return 0;
}
