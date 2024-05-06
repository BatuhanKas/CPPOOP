/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complexNumber.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:02:49 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 17:00:18 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

#include <iostream>
using namespace std;

class complexNumber {
   private:
    int real, img;

   public:
    complexNumber(int r = 0, int i = 0);
    ~complexNumber();
    complexNumber(complexNumber &oth);
    int getReal();
    int getImag();
    void setValue(int r = 0, int i = 0);
    void displayComplexNumbers();
    complexNumber addComplex(complexNumber &oth);
};

#endif