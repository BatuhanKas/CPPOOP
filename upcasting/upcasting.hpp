/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upcasting.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:23:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 21:01:29 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UPCASTING_HPP
#define UPCASTING_HPP

#include <iostream>
using namespace std;

class Employee {
   public:
    string empName, empSur;
    double empSalary;
    Employee(string name, string surname, double salary);
    void display();
};

class Manager : public Employee {
   public:
    string mngDep;
    Manager(string name, string surname, double salary, string dep);
    void display();
    void increaseSalary() { empSalary += 200; }
};

#endif