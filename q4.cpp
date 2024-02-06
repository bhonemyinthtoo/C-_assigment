#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    double marks;
public:
    Student(const std::string& n, const std::string& sClass, int roll, double m) 
        :     name (n), studentClass(sClass), rollNumber(roll), marks(m) {}


    char calculateGrade() const {
        if (marks >= 80) {
            return 'A';
        } else if (marks >= 60) {
            return 'B';
        } else if (marks >= 40) {
            return 'C';
        } else if (marks >= 20) {
            return 'D';
        } else {
            return 'F';
        }

    }

    void displayInfo() const {
        std::cout << "  " << std::endl;
        std::cout << "Student Information...." << std::endl;
        std::cout << "Name : " << name << std::endl;
        std::cout << "Class : " << studentClass << std::endl;
        std::cout << "Roll Number : " << rollNumber << std::endl;
        std::cout << "Marks : " << marks << std::endl;
        std::cout << "Grade : " << calculateGrade() << std::endl;
    }
    
};

int main () {
    std :: string name,stuClass;
    int rollnumber,marks;
    std::cout << "info"<< '\n';
    std::cout << "Name : ";
    std::getline (std :: cin,name);
    std::cout << "Class :";
    std::getline (std :: cin ,stuClass);
    std::cout << "Roll_numbers :";
    std::cin >> rollnumber;
    std::cout << "Marks :";
    std::cin >> marks;
    Student student1(name,stuClass,rollnumber,marks);
    student1.displayInfo();

return 0;
}