/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:14:47 by bkas              #+#    #+#             */
/*   Updated: 2024/05/24 00:46:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

/**
 * @brief Person Class Functions down below
 */

Person::Person(string name, string surname) {
    setPersonName(name);
    setPersonSurname(surname);
    cout << "Person Const Worked" << endl;
    cout << "-------------------" << endl;
}

void Person::setPersonName(string name) { personName = name; }

void Person::setPersonSurname(string surname) { personSurname = surname; }

string Person::getPersonName() const { return personName; }

string Person::getPersonSurname() const { return personSurname; }

void Person::display() {
    cout << "Person Name: " << personName << endl;
    cout << "Person Surname: " << personSurname << endl;
}

/**
 * @brief Student Class Functions Down Below
 */

Student::Student(){};

Student::Student(string name, string surname, int id) : Person(name, surname) {
    // Person(name, surname);
    setStudentID(id);
    passOrFail = true;
    cout << "Student Const Worked" << endl;
    cout << "-------------------" << endl;
}

void Student::setStudentID(int id) { studentID = id; }

void Student::setStudentGrade(int grade) { studentGrade = grade; }

void Student::setPassOrFail(int x) {
    // something happens right here we'll see.
    passOrFail = x;
}

int Student::getStudentID() const { return studentID; }

int Student::getStudentGrade() const { return studentGrade; }

int Student::getPassOrFail() const { return passOrFail; }

void Student::display() {
    Person::display();
    cout << "Student ID: " << studentID << endl;
    cout << "Student Grade: " << studentGrade << endl;
    cout << "Student Passed or Failed?: " << endl;
    passOrFail == true ? cout << "-PASSED-" << endl
                       : cout << "-FAILED-" << endl;
}

/**
 * @brief Teacher Class Functions Down Below
 */

Teacher::Teacher(string name, string surname, string dep) {
    setPersonName(name);
    setPersonSurname(surname);
}

void Teacher::setDepartment(string dep) { department = dep; };

string Teacher::getDepartment() const { return department; }

/**
 * @brief Random Number Generator
 * Coded by Teoman Deniz lot of thanks for him
 *
 * @param min
 * @param max
 * @return int
 */

int ft_rand(int min, int max) {
    static unsigned long address;
    static int seed;
    char pointer[8192];
    t_cast cast;

    seed = seed + 0;
    if (!seed) {
        cast.ptr = &pointer[seed];
        address =
            cast.integer +
            ((unsigned long long)__TIME__[0] * (unsigned long long)__TIME__[1] +
             (unsigned long long)__TIME__[3] * (unsigned long long)__TIME__[4] +
             (unsigned long long)__TIME__[6]) *
                (unsigned long long)__TIME__[7];
    }
    address = (++seed, (address * 1103515245ULL + 12345ULL) & 0X7FFFFFFF);
    return (min + (int)((double)address / (0X7FFFFFFF / (max - min + 1))));
}