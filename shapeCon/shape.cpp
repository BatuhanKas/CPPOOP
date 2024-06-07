/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:32:56 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 11:01:01 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.hpp"

/**
 * @brief Shape Class Details Down Below
 */

// Get Functions;
double Shape::getArea() const { return shapeArea; }

double Shape::getCircumF() const { return shapeCircumference; }

// Set Functions;
void Shape::setArea(double sa) { shapeArea = sa; }

void Shape::setCircumF(double scf) { shapeCircumference = scf; }

// Virtuals;
void Shape::display() {
    cout << "Shape Area: " << shapeArea << endl;
    cout << "Shape Perimeter: " << shapeCircumference << endl;
}

/**
 * @brief Circle Class Details Down Below
 */

// Constructor;
Circle::Circle(double r) { radius = r; }

// Calculate Functions;
void Circle::calculateArea() {
    double area = 0;

    area = pi * pow(radius, 2);
    
}
