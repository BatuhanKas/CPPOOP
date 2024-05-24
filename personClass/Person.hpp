/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:52:26 by bkas              #+#    #+#             */
/*   Updated: 2024/05/24 11:33:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
using namespace std;

typedef union s_cast {
    const char *ptr;
    unsigned long long integer;
} t_cast;

class Person {
   protected:
    string personName, personSurname;

   public:
    Person(string name = "", string surname = "");
    string getPersonName() const;
    string getPersonSurname() const;
    void setPersonName(string name);
    void setPersonSurname(string surname);
    void display();
};

class Student : public Person {
   private:
    int studentID, studentGrade;
    bool passOrFail;

   public:
    Student();
    Student(string name, string surname, int id);
    int getStudentID() const;
    void setStudentID(int id);
    int getStudentGrade() const;
    void setStudentGrade(int grade);
    int getPassOrFail() const;
    void setPassOrFail(bool x);
    void display();
};

class Teacher : public Person {
   private:
    string department;

   public:
    Teacher(string name, string surname, string dep);
    string getDepartment() const;
    void setDepartment(string dep);
    void display();
    void passFailStatus(Student *studentArr, int arrSize);
    void printStudentInformation(Student *studentArr);
};

int ft_rand(int min, int max);

#endif