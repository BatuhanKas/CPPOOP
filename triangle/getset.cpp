/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getset.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:25:46 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 13:14:04 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "triangle.hpp"

float Triangle::getSideA() { return sideA; }

float Triangle::getSideB() { return sideB; }

float Triangle::getSideC() { return sideC; }

void Triangle::setValue(float a, float b, float c) {
    while (!isTriangle(a, b, c)) {
        cout << "Please enter a b c sides" << endl;
        cin >> a >> b >> c;
    }
    sideA = a;
    sideB = b;
    sideC = c;
}

bool Triangle::isEquilateral() {
    if (sideA == sideB && sideB == sideC) {
        return true;
    }
    return false;
}

bool Triangle::isIsosceles() {
    if ((sideA == sideB) || (sideA == sideC) || (sideB == sideC)) {
        return true;
    }
    return false;
}

bool Triangle::isScalene() {
    if (sideA != sideB && sideB != sideC) {
        return true;
    }
    return false;
}

void Triangle::triangleType() {
    if (isEquilateral()) {
        cout << "Eskenar Ucgendir" << endl;
    } else if (isIsosceles()) {
        cout << "Ikizkenar bir ucgendir" << endl;
    } else if (isScalene()) {
        cout << "Cesitkenar bir ucgendir" << endl;
    } else {
        cout << "Wrong Input!" << endl;
    }
    return;
}
