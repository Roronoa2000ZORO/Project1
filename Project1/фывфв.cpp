//#include <iostream>
//#include <stdlib.h>
//#include <iomanip>
//#include <conio.h>
//
//
//
//
//
//using namespace std;
//
//
//
//
//
//class Student {
//private:
//    char name[21];
//    int marks[3];
//
//
//
//
//
//public:
//    Student(const char* studentName) {
//        setName(studentName);
//    }
//
//
//
//
//
//    const char* getName() {
//        return name;
//    }
//
//
//
//
//
//    int getMark(int index) {
//        return marks[index];
//    }
//
//
//
//
//
//    void setName(const char* studentName);
//    void setMark(int mark, int index);
//
//
//
//
//
//    double getAver();
//};
//
//
//
//
//
//int main()
//{
//
//
//
//    cout << "Student`s marks." << endl << endl;
//
//
//
//
//
//    Student student("Smith J.K.");
//    cout << "After contuctor callback" << endl;
//
//
//
//
//    student.setMark(10, 0);
//    student.setMark(10, 1);
//    student.setMark(9, 2);
//
// 
//
//
//
//    cout << "Средний балл " << student.getName() << " : "
//        << fixed << setprecision(2) << student.getAver() << endl;
//    system("PAUSE");
//    return 0;
//}