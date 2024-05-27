/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:21:15 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 16:02:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "personToEmployee.hpp"

int main() {
    Employee arr[] = {
        Employee("Batuhan", "Kas", "Colorado", "Software Dev.", 1500, 2),
        Employee("Melih", "Yildiz", "Colorado", "Software Dev.", 1700, 2),
        Employee("Maksut", "Bigman", "Chicago", "Cleaner", 1000, 0)};

    Manager m1("Cody", "Rhodes", "Colorado", "Manager", 5000, 5);
    Manager m2("CM", "Punk", "Chicago", "Manager", 7500, 2);

    /**
     * @brief There's another way to define array list down below
     *
    Employee e1("Batuhan", "Kas", "Colorado", "Software Dev.", 1500, 2);
    Employee e2("Batuhan", "Kas", "Colorado", "Software Dev.", 1500, 2);

    Employee a1[] = {e1, e2};
     */

    int size = sizeof(arr) / sizeof(arr[0]);

    m1.extractEmployees(arr, size);
    m1.display();

    m2.extractEmployees(arr, size);
    m2.display();
}