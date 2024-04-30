#include <iostream>

using namespace std;

/**
 * @brief ERİŞİM BELİRLEYİCİLER
 * 
 * Class oluşturduğumuzda herhangi bir erişim belirleyici belirtmezsek,
 * varsayılan olarak private tanımlanmış olur.
 * 
 * private -> Sadece sınıfın içerisinden erişilebilir. (Default)
 * Main kısımdan erişilemez.
 * 
 * protected -> Sadece Class içerisinden ve Miras alan Class'lardan erişilebilir.
 * Main kısımdan erişilemez.
 * 
 * public -> Her yerden erişilebilir.
 */

class Student {
private:
    /**
     * @brief Member Variables
     */
    string studentName;
    string studentSurname;
    int studentNumber;

    /**
      * @brief Member Functions
     */
public:
    Student();
    Student(string, string, int);
    void displayInformation();
    void setName(string name) {
        studentName = name;
    }
    void setSurname(string surname) {
        studentSurname = surname;
    }
    void setNumber(int number) {
        studentNumber = number;
    }
    // Ya da daha pratik olacak şekilde aşağıdaki gibi
    // yapabilirim.
    void setInformation(string name, string surname, int number) {
        studentName = name;
        studentSurname = surname;
        studentNumber = number;
    }
    string getName() {
        return studentName;
    }
    string getSurname() {
        return studentSurname;
    }
    int getNumber() {
        return studentNumber;
    }
};

Student::Student() {
    cout << "Default Constructor Worked." << endl;
    studentName = "NULL";
    studentSurname = "NULL";
    studentNumber = 0;
}

Student::Student(string name, string surname, int number) {
    cout << "Constructor Worked." << endl;
    studentName = name;
    studentSurname = surname;
    studentNumber = number;
}

void Student::displayInformation() {
    cout << "Student Name : " << studentName << endl;
    cout << "Student SurName : " << studentSurname << endl;
    cout << "Student Number : " << studentNumber << endl << endl;
}
