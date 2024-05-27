/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:21:15 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 13:35:02 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "personToEmployee.hpp"

int main() {
    Employee arr[] = {
        Employee("Batuhan", "Kas", "Colorado", "Software Dev.", 1500, 2),
        Employee("Melih", "Yildiz", "Colorado", "Software Dev.", 1700, 2),
        Employee("Maksut", "Bigman", "Philedelphia", "Cleaner", 1000, 0)};

    Manager m1("Cody", "Rhodes", "Colorado", "Manager", 5000, 5);

    int size = sizeof(arr) / sizeof(arr[0]);

    m1.extractEmployees(arr, size);
}