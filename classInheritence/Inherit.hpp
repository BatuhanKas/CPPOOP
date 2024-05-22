/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inherit.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:27:18 by bkas              #+#    #+#             */
/*   Updated: 2024/05/22 13:44:37 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INHERIT_HPP
#define INHERIT_HPP

#include <iostream>
using namespace std;

class baseClass {
   public:
    int a;

   protected:
    int x;
    int getx() { return x; };
    void setx(int v) { x = v; };
    void printx() {
        cout << "x: " << x << endl;
        cout << "----" << endl;
    };
};

class derivedClass : protected baseClass {
   public:
    int y;
    void sety(int x) { y = x; };
    int gety() { return y; };
    void ds(int num) {
        setx(num);
        printx();
    };
    void printy() {
        cout << "y: " << y << endl;
        cout << "----" << endl;
    };
};

#endif