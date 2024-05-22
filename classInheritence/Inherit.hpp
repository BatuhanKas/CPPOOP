/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inherit.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:27:18 by bkas              #+#    #+#             */
/*   Updated: 2024/05/22 11:28:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INHERIT_HPP
#define INHERIT_HPP

#include <iostream>
using namespace std;

class baseClass {
   protected:
    int x;

   public:
    int asd;
    int getint() { return asd; };
    int getx() { return x; };
    void setval(int n) { asd = n; };
    void setx(int v) { x = v; };
    void printx() { cout << "x: " << x << endl; };
};

class derivedClass : public baseClass {};

#endif