#include <iostream>
#include <string>
#include <vector>

class Teacher {
private:
    int teacherID;
    std::string name;
    std::string contactInfo;
    std::vector<std::string> subjectsTaught;

public:
    // Constructor to initialize the teacher object
    Teacher(int id, const std::string& teacherName, const std::string& contact, const std::vector<std::string>& subjects) {
        teacherID = id;
        name = teacherName;
        contactInfo = contact;
        subjectsTaught = subjects;
    }

    // Getter methods to access private member variables
    int getTeacherID() const {
        return teacherID;
    }

    std::string getName() const {
        return name;
    }

    std::string getContactInfo() const {
        return contactInfo;
    }

    std::vector<std::string> getSubjectsTaught() const {
        return subjectsTaught;
    }

    // Setter methods to modify private member variables
    void setName(const std::string& teacherName) {
        name = teacherName;
    }

    void setContactInfo(const std::string& contact) {
        contactInfo = contact;
    }

    void addSubjectTaught(const std::string& subject) {
        subjectsTaught.push_back(subject);
    }

    // Display teacher information
    void displayInfo() const {
        std::cout << "Teacher ID: " << teacherID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Contact Info: " << contactInfo << std::endl;
        std::cout << "Subjects Taught: ";
        for (const std::string& subject : subjectsTaught) {
            std::cout << subject << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a Teacher object
    std::vector<std::string> subjects;
    subjects.push_back("Mathematics");
    subjects.push_back("Science");
    Teacher teacher1(101, "John Smith", "john.smith@example.com", subjects);

    // Display teacher information
    std::cout << "Teacher Information:" << std::endl;
    teacher1.displayInfo();

    // Modify and display updated information
    teacher1.setName("Jane Doe");
    teacher1.setContactInfo("jane.doe@example.com");
    teacher1.addSubjectTaught("English");

    std::cout << "\nUpdated Teacher Information:" << std::endl;
    teacher1.displayInfo();

    return 0;
}
