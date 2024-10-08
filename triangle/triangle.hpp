/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:58:55 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 14:02:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <iostream>
using namespace std;

class Triangle {
   private:
    float sideA;
    float sideB;
    float sideC;

   public:
    Triangle(float a, float b, float c);
    ~Triangle();
    Triangle(Triangle &oth);
    bool isTriangle(float a, float b, float c);
    float getSideA();
    float getSideB();
    float getSideC();
    void setValue(float a, float b, float c);
    bool isEquilateral();
    bool isScalene();
    bool isIsosceles();
    void triangleType();
};

#endif