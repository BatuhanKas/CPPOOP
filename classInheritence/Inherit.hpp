/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inherit.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:27:18 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 10:26:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INHERIT_HPP
#define INHERIT_HPP

#include <iostream>
using namespace std;

class baseClass {
   public:
    int x;
    int getx();
    void setx(int v);
    void printx();
    baseClass(int mainx = 0);
    ~baseClass();
    baseClass(baseClass &oth);
};

class derivedClass : public baseClass {
   public:
    int y;
    void setx(int a);
    void sety(int x);
    int gety();
    void ds(int num);
    void printx();
    void printy();
    derivedClass(int mainx = 0, int mainy = 0);
    ~derivedClass();
    derivedClass(derivedClass &oth);
};

#endif