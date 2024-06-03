/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upcasting.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:46:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 21:00:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "upcasting.hpp"

Employee::Employee(string name, string surname, double salary) {
    empName = name;
    empSur = surname;
    empSalary = salary;
}

void Employee::display() {
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
}