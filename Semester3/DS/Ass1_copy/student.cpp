#include <iostream>
#include <string>

class Student {
private:
    int studentID;
    std::string name;
    std::string dateOfBirth;
    std::string contactInfo;
    std::string enrollmentDate;

public:
    // Constructor to initialize the student object
    Student(int id, const std::string& studentName, const std::string& dob, const std::string& contact, const std::string& enrollmentDate) {
        studentID = id;
        name = studentName;
        dateOfBirth = dob;
        contactInfo = contact;
        this->enrollmentDate = enrollmentDate;
    }

    // Getter methods to access private member variables
    int getStudentID() const {
        return studentID;
    }

    std::string getName() const {
        return name;
    }

    std::string getDateOfBirth() const {
        return dateOfBirth;
    }

    std::string getContactInfo() const {
        return contactInfo;
    }

    std::string getEnrollmentDate() const {
        return enrollmentDate;
    }

    // Setter methods to modify private member variables
    void setName(const std::string& studentName) {
        name = studentName;
    }

    void setContactInfo(const std::string& contact) {
        contactInfo = contact;
    }

    void setEnrollmentDate(const std::string& date) {
        enrollmentDate = date;
    }

    // Display student information
    void displayInfo() const {
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Date of Birth: " << dateOfBirth << std::endl;
        std::cout << "Contact Info: " << contactInfo << std::endl;
        std::cout << "Enrollment Date: " << enrollmentDate << std::endl;
    }
};

int main() {
    // Create a Student object
    Student student1(1, "John Doe", "2000-05-15", "john.doe@example.com", "2023-09-01");

    // Display student information
    std::cout << "Student Information:" << std::endl;
    student1.displayInfo();

    // Modify and display updated information
    student1.setName("Jane Smith");
    student1.setContactInfo("jane.smith@example.com");
    student1.setEnrollmentDate("2023-09-15");

    std::cout << "\nUpdated Student Information:" << std::endl;
    student1.displayInfo();

    return 0;
}
