/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:23:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/04 16:02:48 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIRTUAL_HPP
#define VIRTUAL_HPP

#include <iostream>
using namespace std;

class Employee {
   public:
    string empName, empSur;
    double empSalary;
    Employee(string name, string surname, double salary);
    virtual ~Employee();
    virtual void display();
    // void display();
};

class Manager : public Employee {
   public:
    string mngDep;
    Manager(string name, string surname, double salary, string dep);
    ~Manager();
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