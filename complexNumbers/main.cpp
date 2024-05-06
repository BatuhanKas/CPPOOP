/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:46:26 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 17:55:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complexNumber.hpp"

int main() {
    // complexNumber number1(4, 5);
    // cout << "Real: " << number1.getReal() << endl;
    // cout << "Imaginary: " << number1.getImag() << endl;
    // number1.displayComplexNumbers();
    //
    // complexNumber number2(3, -6);
    // cout << "Real: " << number2.getReal() << endl;
    // cout << "Imaginary: " << number2.getImag() << endl;
    // number2.displayComplexNumbers();

    complexNumber number3(5, -2);
    complexNumber number4(2, -3);
    complexNumber retObject;
    retObject = number3.addComplex(number4);
    retObject.displayComplexNumbers();
}