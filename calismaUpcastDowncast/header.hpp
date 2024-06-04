/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:23:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/04 17:55:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

class Employee {
   public:
    string empName, empSur;
    double empSalary;
    Employee(string name, string surname, double salary);
    // virtual void display();
    // virtual ~Employee() { cout << "Employe virtual dest-worked" << endl; };
    ~Employee() { cout << "Employe-worked" << endl; };
    void display();
};

class Manager : public Employee {
   public:
    string mngDep;
    Manager(string name, string surname, double salary, string dep);
    ~Manager() { cout << "Manager dest-worked" << endl; }
    void display();
    void increaseSalary() { empSalary += 200; }
};
// reference
void df1(Employee &oth);
// pointer
void df2(Employee *oth);
// value
void df3(Employee oth);

#endif