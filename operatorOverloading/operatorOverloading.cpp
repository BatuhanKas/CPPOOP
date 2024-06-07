/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorOverloading.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:52:06 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 20:39:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operatorOverloading.hpp"

// Constructor
Person::Person(string name, string surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
}

// Display
void Person::display() {
    cout << "Person Name:" << name << endl;
    cout << "Person Surname:" << surname << endl;
    cout << "Person Age:" << age << endl << endl;
}

// Operator == Func
bool Person::operator==(Person &oth) {
    return (name == oth.name && surname == oth.surname);
}

// Asagidaki fonksiyon Prefix (++p1)
void Person::operator++() { age++; };

// Asagidaki fonksiyon Postfix (p1++)
void Person::operator++(int) { age++; };

void Person::operator--(int a) {
    a = 5;
    this->age -= a;
}

void Person::operator--() {
    age -= 10;
}