#include <iostream>
using namespace std;

double calculateGPA(int n, double &totalCreditThisSem) {
double gpa, sums = 0;
int credithour;
totalCreditThisSem = 0;

for(int i = 0; i < n; i++) {
    cout << "===========================================================" << endl;
    cout << "Enter GPA for subject #" << i+1 << ": ";
    cin >> gpa;

    cout << "Enter credit hour for subject #" << i+1 << ": ";
    cin >> credithour;

    sums += gpa * credithour;
    totalCreditThisSem += credithour;
}

cout << "===========================================================" << endl;
cout << "Total weighted score: " << sums << endl;
cout << "Total credit hours: " << totalCreditThisSem << endl;

return sums / totalCreditThisSem;

}

double calculateCGPA(int prevSemCount, double currentGPA, double currentCH) {
double prevGPA, prevCH;
double totalWeighted = currentGPA * currentCH;
double totalCH = currentCH;

for(int i = 0; i < prevSemCount; i++) {
    cout << "===========================================================" << endl;
    cout << "Enter GPA for semester #" << i+1 << ": ";
    cin >> prevGPA;

    cout << "Enter total credit hours for semester #" << i+1 << ": ";
    cin >> prevCH;

    totalWeighted += prevGPA * prevCH;
    totalCH += prevCH;
}

return totalWeighted / totalCH;

}

int main() {

int n, prevSem;

cout << "===========================================================" << endl;
cout << "Enter number of subjects this semester: ";
cin >> n;

double currentCH;
double gpa = calculateGPA(n, currentCH);

cout << "Estimated GPA for this semester: " << gpa << endl;
cout << "===========================================================" << endl;

cout << "Enter number of previous semesters you have completed: ";
cin >> prevSem;

double cgpa = calculateCGPA(prevSem, gpa, currentCH);

cout << "===========================================================" << endl;
cout << "Your updated CGPA is: " << cgpa << endl;
cout << "===========================================================" << endl;

return 0;

}