/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:14:42 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 10:40:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

int main() {
    Student studentArr[] = {
        Student("Batuhan", "Kas", 789), Student("Mehmet", "Ali", 234),
        Student("Mauro", "Icardi", 9), Student("Melih", "Yildiz", 10)};

    int arrSize = sizeof(studentArr) / sizeof(studentArr[0]);
    cout << "ARRSIZE1: " << arrSize << endl;
    for (int i = 0; i < arrSize; i++) {
        studentArr[i].setStudentGrade(ft_rand(1, 100));
        // studentArr[i].display();
    }
    Teacher t1("ali", "deniz", "New York");
    t1.passFailStatus(studentArr, arrSize);
    t1.display();
    t1.printStudentInformation(studentArr, arrSize);
}