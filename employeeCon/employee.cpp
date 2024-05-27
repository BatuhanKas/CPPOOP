/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   employee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:50:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 13:32:08 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "personToEmployee.hpp"

Employee::Employee(string name, string surname, string dep, string pos,
                   int salary, int year)
    : Person(name, surname, dep, pos, salary, year) {
    int random = ft_rand(1, 9999);
    string str = to_string(random);
    setID("EMP" + str);
    employeeBonus = 100 * year;
};

void Employee::display() {
    Person::display();
    cout << "Employee Bonus: " << employeeBonus << endl;
    cout << "Employee Final Salary : "
         << getSalary() + (getYear() * employeeBonus) << endl;
    cout << "---------------------------------" << endl;
}