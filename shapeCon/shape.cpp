/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:32:56 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 14:21:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.hpp"

/**
 * @brief Shape Class Details Down Below
 */

Shape::~Shape() {}

// Get Functions;
double Shape::getArea() const { return shapeArea; }

double Shape::getCircumF() const { return shapeCircumference; }

// Set Functions;
void Shape::setArea(double sa) { shapeArea = sa; }

void Shape::setCircumF(double scf) { shapeCircumference = scf; }

// Virtuals;
void Shape::display() {
    cout << "Shape Area: " << shapeArea << endl;
    cout << "Shape Perimeter: " << shapeCircumference << endl << endl;
}

/**
 * @brief Circle Class Details Down Below
 */

// Constructor;
Circle::Circle(double r) { radius = r; }

// Calculate Functions;
void Circle::calculateArea() {
    double area;

    area = pi * (radius * radius);
    setArea(area);
}

void Circle::calculatePerimeter() {
    double perimeter = 0;

    perimeter = 2 * pi * radius;
    setCircumF(perimeter);
}

void Circle::display() {
    cout << "Shape: Circle" << endl;
    cout << "Radius val: " << radius << endl;
    Shape::display();
}

/**
 * @brief Rectangle Class Details Down Below
 */

// Construcotor;
Rectangle::Rectangle(double w, double h) { width = w, height = h; }

// Calculate Functions;
void Rectangle::calculateArea() {
    double area = width * height;

    setArea(area);
}

void Rectangle::calculatePerimeter() {
    double perim = 2 * (width + height);

    setCircumF(perim);
}

void Rectangle::display() {
    cout << "Shape: Rectangle" << endl;
    cout << "Width: " << width << " - Height: " << height << endl;
    Shape::display();
}