// Lab 8 - Task 9: Student enrollment management
// Allows adding students to courses and displays enrolled students per course

#include <iostream>
using namespace std;

int main() {
    const int courses = 3;
    const int maxStudents = 5;
    string courseNames[courses] = {"Math", "Physics", "Chemistry"};
    string students[courses][maxStudents];
    int studentCount[courses] = {0}; // keeps track of number of students in each course

    int option;
    do {
        cout << "\nMenu:\n1. Add Student\n2. Display Students\n3. Exit\nChoose: ";
        cin >> option;

        if(option == 1){
            int c;
            cout << "Select Course (0-Math, 1-Physics, 2-Chemistry): ";
            cin >> c;
            if(studentCount[c] >= maxStudents){
                cout << "Course full!\n";
                continue;
            }
            cout << "Enter student name: ";
            cin >> students[c][studentCount[c]];
            studentCount[c]++;
        }
        else if(option == 2){
            for(int i=0; i<courses; i++){
                cout << "\nCourse: " << courseNames[i] << endl;
                if(studentCount[i]==0){
                    cout << "No students enrolled.\n";
                } else {
                    for(int j=0; j<studentCount[i]; j++)
                        cout << students[i][j] << "  ";
                    cout << endl;
                }
            }
        }

    } while(option != 3);

    cout << "Exiting Program.\n";
}

