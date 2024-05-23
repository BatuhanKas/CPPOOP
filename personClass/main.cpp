/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:14:42 by bkas              #+#    #+#             */
/*   Updated: 2024/05/24 00:43:37 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

int main() {
    Student studentArr[] = {{"Batuhan", "Kas", 789},
                            {"Mehmet", "Ali", 123},
                            {"Mauro", "Icardi", 9}};

    for (int i = 0; i < 3; i++) {
        studentArr[i].setStudentGrade(ft_rand(0, 100));
        studentArr[i].display();
    }
}