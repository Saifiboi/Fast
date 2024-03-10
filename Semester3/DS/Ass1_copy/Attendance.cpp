#include <iostream>
#include <string>
#include <vector>
#include <map>

class Attendance {
private:
    int attendanceID;
    std::string date;
    std::map<int, std::string> studentAttendance; // Maps student IDs to attendance status (e.g., "Present" or "Absent")

public:
    // Constructor to initialize the attendance object
    Attendance(int id, const std::string& attendanceDate) {
        attendanceID = id;
        date = attendanceDate;
    }

    // Getter methods to access private member variables
    int getAttendanceID() const {
        return attendanceID;
    }

    std::string getDate() const {
        return date;
    }

    // Mark a student as present
    void markPresent(int studentID) {
        studentAttendance[studentID] = "Present";
    }

    // Mark a student as absent
    void markAbsent(int studentID) {
        studentAttendance[studentID] = "Absent";
    }

    // Get attendance status for a specific student
    std::string getStudentAttendanceStatus(int studentID) const {
        auto it = studentAttendance.find(studentID);
        if (it != studentAttendance.end()) {
            return it->second;
        }
        return "Not Recorded";
    }

    // Display attendance information
    void displayInfo() const {
        std::cout << "Attendance ID: " << attendanceID << std::endl;
        std::cout << "Date: " << date << std::endl;
        std::cout << "Student Attendance:" << std::endl;
        for (const auto& entry : studentAttendance) {
            std::cout << "  Student ID: " << entry.first << ", Status: " << entry.second << std::endl;
        }
    }
};

int main() {
    // Create an Attendance object
    Attendance attendance1(1, "2023-09-15");

    // Mark students as present or absent
    attendance1.markPresent(101);
    attendance1.markAbsent(102);
    attendance1.markPresent(103);

    // Display attendance information
    std::cout << "Attendance Information:" << std::endl;
    attendance1.displayInfo();

    // Check attendance status for a specific student
    int studentIDToCheck = 102;
    std::string status = attendance1.getStudentAttendanceStatus(studentIDToCheck);
    std::cout << "\nAttendance Status for Student ID " << studentIDToCheck << ": " << status << std::endl;

    return 0;
}
