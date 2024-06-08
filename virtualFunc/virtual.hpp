/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtual.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:23:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/08 18:27:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIRTUAL_HPP
#define VIRTUAL_HPP

#include <iostream>
using namespace std;

class Employee {
   public:
    string empName, empSur;
    double empSalary;
    Employee(string name, string surname, double salary);
    virtual ~Employee();
    virtual void display();
    // void display();
};

class Manager : public Employee {
   public:
    string mngDep;
    Manager(string name, string surname, double salary, string dep);
    ~Manager();
    void display();
    void increaseSalary() { empSalary += 200; }
};
// reference
void df1(Employee &oth);
// pointer
void df2(Employee *oth);
// value
void df3(Employee oth);

// pure virtual function
void pureVirtualFunc();

/**
 * @brief Animal class'i burada bir adet pure Virtual Function
 * icerdigi icin soyut class haline gelmistir.
 * Soyut class'lar sadece virtual function icermek zorunda degildir.
 * Kendi icerisinde degiskenler vs. olabilir.
 *
 * Buradaki Animal Class'inda yazan virtual keyword'u diger
 * Destructor ve Objelerde kullandigimiz virtual keyword'u ile ayni anlama
 * gelmektedir. Bir adet Pointer ya da Pointer Array olusturdugumuzda,
 * Ve alt class'lardan birer objeler uretildiginde, bu objeleri
 * tek bir cati altinda toplayip, Sen hangi Objeden olusturulduysan,
 * git onun Talk fonksiyonunu calistir demek icin yaptik.
 *
 * pureVirtualFunc.cpp'de kod kismi mevcut.
 */

class Animal {
   public:
    virtual void talk() = 0;
};

class Dog : public Animal {
   public:
    void talk() { cout << "Havhav" << endl; }
};

class Cat : public Animal {
   public:
    void talk() { cout << "Meow" << endl; }
};

class Duck : public Animal {
   public:
    void talk() { cout << "VakVak" << endl; }
};

#endif