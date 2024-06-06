/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nation.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:11:28 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 12:53:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NATION_HPP
#define NATION_HPP

#include <iostream>
using namespace std;

class Person {
   private:
    string name;
    string nation;

   public:
    Person(string name, string nation = "Empty!");
    string getName() const;
    virtual string getNation();
    virtual void sayHi(Person &person);
};

class Deutsche : public Person {
    public:
        Deutsche(string name, string nation);
};

#endif