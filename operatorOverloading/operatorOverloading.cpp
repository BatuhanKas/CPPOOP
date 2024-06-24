/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorOverloading.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:52:06 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 10:50:07 by bkas             ###   ########.fr       */
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
bool Person::operator==(const Person &oth) const {
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

void Person::operator--() { age -= 10; }

/**
 * @brief Cok detayli Aciklamalar Notion notlarimda!
 * https://alike-dirigible-d37.notion.site/CPP-Notlarim-86e5660b50d740b5bd6b8803c8ae99f0?pvs=4
 * @param o
 * @param p1
 *
 * Kisa ozet: Tek bir cout << p1; kullanacagim icin
 * Bu kisimda void kullandim ostream return etmedim.
 *
    void operator<<(ostream &o, Person &p1) {
        o << "Person Name:" << p1.getName() << endl;
        o << "Person Surname:" << p1.getSurname() << endl;
        o << "Person Age:" << p1.getAge() << endl << endl;
    }
 */

/**
 * @brief Cok detayli aciklama notion hesabimda!
 *
 * @param o
 * @param p
 * @return ostream&
 *
 * Kisa ozet: birden fazla cout kullanabilmek icin
 * ostream'i return etmem gerekiyor cunku
 * bu bir akis ve ben bu akisi surekli tetiklemek istiyorum.
 * Buna zincirleme akis operatoru "<<" deniyor.
 */
ostream &operator<<(ostream &o, Person &p) {
    o << "Person Name:" << p.getName() << endl;
    o << "Person Surname:" << p.getSurname() << endl;
    o << "Person Age:" << p.getAge() << endl << endl;
    return o;
}
