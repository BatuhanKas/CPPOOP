/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classCon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:56:13 by bkas              #+#    #+#             */
/*   Updated: 2024/04/30 16:45:25 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "studentClass.hpp"

int main() {

    Student student1;
    Student student2;

    student1.setName("Batuhan");
    student1.setSurname("Kaş");
    student1.setNumber(789);
    student1.displayInformation();

    student2.setName("Melih");
    student2.setSurname("Yıldız");
    student2.setNumber(5241);
    // student2.displayInformation();

    string name = student2.getName();
    string surname = student2.getSurname();
    int number = student2.getNumber();
    
    cout << "Student Name : " << name << endl;
    cout << "Student SurName : " << surname << endl;
    cout << "Student Number : " << number << endl << endl;

    return 0;
}

/**
 * @brief Class Public olsaydı;
 * 
 * int main() {

    Student student1;
    Student student2;

    student1.studentName = "Batuhan";
    student1.studentSurname = "Kaş";
    student1.studentNumber = 789;
    student1.displayInformation();

    student2.studentName = "Melih";
    student2.studentSurname = "Yıldız";
    student2.studentNumber = 5241;
    student2.displayInformation();

    return 0;
}
 * 
 */