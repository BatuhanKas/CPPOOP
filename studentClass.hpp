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
 * protected -> Sadece Class içerisinde ve Miras alan Class'larda erişilebilir.
 * Main kısımdan erişilemez.
 * 
 * public -> Her yerden erişilebilir.
 */

class Student {
private:
    /**
     * @brief Member Variables
     * 
     */
    string studentName;
    string studentSurname;
    int studentNumber;

    /**
      * @brief Member Functions
     * 
     */
public:
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

void Student::displayInformation() {
    cout << "Student Name : " << studentName << endl;
    cout << "Student SurName : " << studentSurname << endl;
    cout << "Student Number : " << studentNumber << endl << endl;
}