/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:02:33 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 17:49:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "personToEmployee.hpp"

Manager::Manager(string name, string surname, string dep, string pos,
                 int salary, int year)
    : Employee(name, surname, dep, pos, salary, year) {
    int random = ft_rand(1000, 9999);
    string str = to_string(random);
    setID("MNG" + str);
    managerBonus = 200 * year;
};

void Manager::display() {
    Person::display();
    cout << "\033[1;37mManager Bonus: \033[0m" << managerBonus << endl;
    cout << "\033[1;37mManager Final Salary: \033[0m"
         << getSalary() + (getYear() * managerBonus) << endl;
    cout << "---------------------------------" << endl;
}

void Manager::extractEmployees(Employee arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i].getDepartment() == getDepartment()) {
            arr[i].display();
        }
    }
}