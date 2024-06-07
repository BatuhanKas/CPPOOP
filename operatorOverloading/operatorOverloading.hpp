/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorOverloading.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:49:55 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 20:39:58 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOROVERLOADING_HPP
#define OPERATOROVERLOADING_HPP

#include <iostream>
using namespace std;

class Person {
   private:
    string name, surname;
    int age;

   public:
    Person(string name = "", string surname = "", int age = 0);
    void display();
    bool operator==(Person &oth);
    void operator--();
    void operator--(int);
    // Detayli aciklama main.cpp'de.
    // Asagidaki fonksiyon Prefix (++p1)
    void operator++();
    // Asagidaki fonksiyon Postfix (p1++)
    void operator++(int);
};

#endif