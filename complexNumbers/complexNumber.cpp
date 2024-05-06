/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complexNumber.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:08:37 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 17:08:24 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complexNumber.hpp"

complexNumber::complexNumber(int r, int i) {
    real = r;
    img = i;
    cout << "Complex Numbers Created." << endl;
}

complexNumber::~complexNumber() { cout << "Destruction Succesfull." << endl; }

complexNumber::complexNumber(complexNumber &oth) {
    real = oth.real;
    img = oth.img;
    cout << "Copy Constructor Created." << endl;
}

int complexNumber::getReal() { return real; }

int complexNumber::getImag() { return img; }

void complexNumber::setValue(int r, int i) {
    real = r;
    img = i;
}

void complexNumber::displayComplexNumbers() {
    if (img < 0) {
        cout << real << img << "i" << endl;
    } else {
        cout << real << "+" << img << "i" << endl;
    }
}

complexNumber complexNumber::addComplex(complexNumber &oth) {
    complexNumber retNum;
    retNum.real = real + oth.real;
    retNum.img = img + oth.img;
    return retNum;
}

// 4+5i 7-8i
// 11-3i