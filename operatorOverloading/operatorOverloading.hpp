/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorOverloading.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:49:55 by bkas              #+#    #+#             */
/*   Updated: 2024/06/08 18:28:05 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOROVERLOADING_HPP
#define OPERATOROVERLOADING_HPP

#include <iostream>
#include <list>
using namespace std;

class Person {
   private:
    string name, surname;
    int age;

   public:
    Person(string name = "", string surname = "", int age = 0);
    string getName() { return name; };
    string getSurname() { return surname; };
    int getAge() { return age; };
    void display();
    bool operator==(const Person &oth) const;
    void operator--();
    void operator--(int);
    // Detayli aciklama main.cpp'de.
    // Asagidaki fonksiyon Prefix (++p1)
    void operator++();
    // Asagidaki fonksiyon Postfix (p1++)
    void operator++(int);
    /*
        integer gibi veri yapilarinin kopyalanmasi kolaydir fakat
        vector, string, list, use defined data type gibi yapilar
        kopyalanmasi kolay degildir. Bu yuzden bu tarz yapilari
        kopyalamak yerine referans aliriz.
    */
    // void operator<<(ostream &o, Person &p);
};

// Detayli aciklama notion hesabimda!
// void operator<<(ostream &o, Person &p);
ostream &operator<<(ostream &o, Person &p);

class Collection {
   public:
    list<Person> persons;
    void operator+=(Person &p);
    void operator-=(Person &p);
    // void print();
};

ostream &operator<<(ostream &o, Collection &c);

#endif