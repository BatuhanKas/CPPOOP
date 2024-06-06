/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nation.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:11:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 12:52:21 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nation.hpp"

// PERSON CLASS

Person::Person(string name, string nation) {
    this->name = name;
    if (!nation.compare("Empty!")) this->nation = nation;
}

string Person::getName() const { return this->name; }

string Person::getNation() { return this->nation; };

void Person::sayHi(Person &person) {
    cout << name << " says Hi[EN] to " << person.getName() << endl;
}

// DEUTSCHE CLASS

