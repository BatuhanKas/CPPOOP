/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nation.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:11:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 15:16:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nation.hpp"

// PERSON CLASS

Person::Person(string name) { this->name = name; }

string Person::getName() const { return this->name; }

string Person::getNation() const { return "Empty!"; };

void Person::sayHi(Person &person) {
    cout << name << " says Hi[EN] to " << person.getName() << endl;
}

// DEUTSCHE CLASS

Deutsche::Deutsche(string name) : Person(name) {}

string Deutsche::getNation() const { return "Deutsche"; };

void Deutsche::sayHi(Person &person) {
    if (!getNation().compare(person.getNation())) {
        cout << getName() << " says Hallo[GER] to " << person.getName() << endl;
    } else {
        Person::sayHi(person);
    }
}

// TURKISH CLASS

Turkish::Turkish(string name) : Person(name) {}

string Turkish::getNation() const { return "Turkish"; }

void Turkish::sayHi(Person &person) {
    if (!getNation().compare(person.getNation())) {
        cout << getName() << " says Merhaba[TR] to " << person.getName()
             << endl;
    } else {
        Person::sayHi(person);
    }
}