/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   studentClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:21:14 by bkas              #+#    #+#             */
/*   Updated: 2024/05/03 12:06:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
#define STUDENT_CLASS_HPP

#include <iostream>
using namespace std;

class Ogr {
private:
    string studentName;
    string studentSurname;
    int studentNumber;
public:
    Ogr();
    Ogr(string name, string surname, int number);
    Ogr(Ogr &other);
    ~Ogr();

    void setName(string name);
    void setSurname(string surname);
    void setNumber(int number);
    void setInformation(string name, string surname, int number);
    void displayInformation(); 
    string getName();
    string getSurname();
    int getNumber();
};

#endif
