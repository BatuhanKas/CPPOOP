/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:04:32 by bkas              #+#    #+#             */
/*   Updated: 2024/05/03 11:05:37 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "studentClass.hpp"

void Ogr::setName(string name) {
    studentName = name;
}

void Ogr::setSurname(string surname) {
    studentSurname = surname;
}

void Ogr::setNumber(int number) {
    studentNumber = number;
}

void Ogr::setInformation(string name, string surname, int number) {
    studentName = name;
    studentSurname = surname;
    studentNumber = number;
}

string Ogr::getName() {
    return studentName;
}

string Ogr::getSurname() {
    return studentSurname;
}

int Ogr::getNumber() {
    return studentNumber;
}

Ogr::Ogr() {
    cout << "Default Constructor Worked." << endl;
    studentName = "NULL";
    studentSurname = "NULL";
    studentNumber = 0;
}

Ogr::Ogr(string name, string surname, int number) {
    cout << "3 parameter constructor Worked." << endl;
    studentName = name;
    studentSurname = surname;
    studentNumber = number;
}

Ogr::Ogr(Ogr &other) {
    cout << "Copy Constructor Worked." << endl;
    studentName = other.getName();
    studentSurname = other.getSurname();
    studentNumber = other.getNumber();
}

Ogr::~Ogr() {
    cout << "Destructor Worked." << endl;
}

void Ogr::displayInformation() {
    cout << "Ogrenci ismi : " << studentName << endl;
    cout << "Ogrenci Soyismi : " << studentSurname << endl;
    cout << "Ogrenci Numarasi : " << studentNumber << endl << endl;
}