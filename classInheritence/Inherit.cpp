/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inherit.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:28:05 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 22:47:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inherit.hpp"

baseClass::baseClass(int mainx) {
    x = mainx;
    cout << "---Base Const worked.---" << endl;
}

baseClass::~baseClass() { cout << "---Base Dest Worked---" << endl; }

baseClass::baseClass(baseClass &oth) {
    x = oth.x;
    cout << "---Base Copy Const worked.---" << endl;
}

int baseClass::getx() { return x; }

void baseClass::setx(int v) { x = v; }

void baseClass::printx() {
    cout << "x: " << x << endl;
    cout << "----" << endl;
}

void derivedClass::sety(int x) { y = x; };

int derivedClass::gety() { return y; }

void derivedClass::ds(int num) {
    setx(num);
    printx();
}

void derivedClass::printy() {
    cout << "y: " << y << endl;
    cout << "----" << endl;
}

derivedClass::derivedClass(int mainx, int mainy) : baseClass(mainx) {
    y = mainy;
    cout << "---Derived Const worked.---" << endl;
}

void derivedClass::setx(int a) { x = a; };

void derivedClass::printx() {
    baseClass::printx();
    cout << "ASD:" << x << endl;
    cout << "----" << endl;
};

derivedClass::~derivedClass() { cout << "---Derived Dest worked.---" << endl; }

derivedClass::derivedClass(derivedClass &oth) {
    x = oth.x;
    y = oth.y;
    cout << "---Derived Copy Const worked.---" << endl;
}