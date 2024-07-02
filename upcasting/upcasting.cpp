/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upcasting.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:46:46 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 16:05:36 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "upcasting.hpp"

void df1(Employee &oth) { oth.display(); }

void df2(Employee *oth) { oth->display(); }

void df3(Employee oth) { oth.display(); }

Employee::Employee(string name, string surname, double salary) {
    empName = name;
    empSur = surname;
    empSalary = salary;
}

void Employee::display() {
    cout << "-----------" << endl;
    cout << "Name: " << empName << endl;
    cout << "SurName: " << empSur << endl;
    cout << "Salary: " << empSalary << endl;
}

Manager::Manager(string name, string surname, double salary, string dep)
    : Employee(name, surname, salary) {
    mngDep = dep;
}

void Manager::display() {
    Employee::display();
    cout << "Department: " << mngDep << endl;
    cout << "-----------" << endl;
}