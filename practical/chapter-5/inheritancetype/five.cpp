    // 5. Multiple Inheritance
    // Write a C++ program to create:
    //  Two base classes: AcademicRecord and SportsRecord.
    //  A derived class Student that inherits from both base classes and calculates the total performance.

#include<iostream>
using namespace std;

class AcademicRecord {
    protected:
        double academicMarks;
    public:
        AcademicRecord(double m = 0) {
            academicMarks = m;
        }

        void showAcademic() {
            cout<< "Academic marks: "<< academicMarks<< endl;
        }
};

class SportsRecord {
    protected:
        double sportsMarks;
    public:
        SportsRecord(double m = 0) {
            sportsMarks = m;
        }
        void showSports() {
            cout <<"Sport marks: "<<sportsMarks<<endl;
        }
};

class Student: public AcademicRecord, public SportsRecord {
    private:
        string studentName;
    public:
        Student(string name, double academic, double sports): AcademicRecord(academic), SportsRecord(sports) {
            studentName = name;
        }
        double calculateTotal() {
            return academicMarks + sportsMarks;
        }

        void showDetails() {
            cout <<"Student Name: "<< studentName<<endl;
            showAcademic();
            showSports();
            cout <<"Total performance: "<< calculateTotal() <<endl;
        }
};

int main() {
    Student s("Bishal", 89.5 , 95.0);
    s.showDetails();
    
    return 0;
}