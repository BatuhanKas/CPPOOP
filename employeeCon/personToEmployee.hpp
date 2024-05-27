/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   personToEmployee.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:24:11 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 13:32:31 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSONTOEMPLOYEE_HPP
#define PERSONTOEMPLOYEE_HPP

#include <iostream>
#include <string>

using namespace std;

typedef union s_cast {
    const char *ptr;
    unsigned long long integer;
} t_cast;

class Person {
   protected:
    string personName, personSurname, personDep, personPos, personID;
    int personSalary, personYear;

   public:
    Person(string name, string surname, string dep, string pos, int salary,
           int year);
    void setName(string name);
    void setSurname(string surname);
    void setDepartment(string dep);
    void setPosition(string pos);
    void setID(string id);
    void setSalary(int salary);
    void setYear(int year);
    string getName();
    string getSurname();
    string getDepartment();
    string getPosition();
    string getID();
    int getSalary();
    int getYear();
    void display();
};

class Employee : public Person {
   private:
    int employeeBonus;

   public:
    Employee(string name, string surname, string dep, string pos, int salary,
             int year);
    void display();
};

class Manager : public Employee {
   private:
    int managerBonus;

   public:
    Manager(string name, string surname, string dep, string pos, int salary,
            int year);
    void display();
    void extractEmployees(Employee arr[], int size);
};

int ft_rand(int min, int max);

#endif