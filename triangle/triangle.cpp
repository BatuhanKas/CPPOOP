/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:58:44 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 16:12:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "triangle.hpp"

Triangle::Triangle(float a, float b, float c) {
    while (!isTriangle(a, b, c)) {
        cout << "Lutfen Dogru degerler giriniz. (a-b-c)" << endl;
        cin >> a >> b >> c;
    }
    sideA = a;
    sideB = b;
    sideC = c;
    cout << "Constuctor Created. // Ucgen olusturuldu" << endl;
}

Triangle::~Triangle() { cout << "Triangle Destroyed." << endl; }

Triangle::Triangle(Triangle &oth) {
    sideA = oth.sideA;
    sideB = oth.sideB;
    sideC = oth.sideC;
    cout << "Copy Constructor Copied Succesfully." << endl;
}

bool Triangle::isTriangle(float a, float b, float c) {
    // side A : |b-c|<a<b+c
    // side B : |a-c|<B<a+c
    // side C : |a-b|<C<a+b

    if (!(abs(b - c) < a && a < b + c)) {
        cout << "Invalid A" << endl;
        return false;
    }
    if (!(abs(a - c) < b && b < a + c)) {
        cout << "Invalid B" << endl;
        return false;
    }
    if (!(abs(a - b) < c && c < a + b)) {
        cout << "Invalid C" << endl;
        return false;
    }
    return true;
}
