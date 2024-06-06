/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nation.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:11:28 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 12:15:39 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NATION_HPP
#define NATION_HPP

#include <iostream>
using namespace std;

class Person {
   private:
    string name;

   public:
    Person() { this->name = name; };
    string getName() const { return name; };
    
};

#endif