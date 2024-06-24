/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:31:32 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 10:36:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "personToEmployee.hpp"

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

Person::Person(string name, string surname, string dep, string pos, int salary,
               int year) {
    setName(name);
    setSurname(surname);
    setDepartment(dep);
    setPosition(pos);
    setSalary(salary);
    setYear(year);
}

void Person::setName(string name) { personName = name; }

void Person::setSurname(string surname) { personSurname = surname; }

void Person::setDepartment(string dep) { personDep = dep; };

void Person::setPosition(string pos) { personPos = pos; };

void Person::setID(string id) { personID = id; }

void Person::setSalary(int salary) { personSalary = salary; }

void Person::setYear(int year) { personYear = year; }

string Person::getName() { return personName; }

string Person::getSurname() { return personSurname; }

string Person::getDepartment() { return personDep; }

string Person::getPosition() { return personPos; }

string Person::getID() { return personID; }

int Person::getSalary() { return personSalary; }

int Person::getYear() { return personYear; }

void Person::display() {
    cout << "---------------------------------" << endl;
    cout << "Person Name: " << personName << endl;
    cout << "Person Surname: " << personSurname << endl;
    cout << "Person Department: " << personDep << endl;
    cout << "Person Position: " << personPos << endl;
    cout << "Person ID: " << personID << endl;
    cout << "Person Salary: " << personSalary << endl;
    cout << "Person Year: " << personYear << endl;
}
