/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:32:40 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 13:30:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
using namespace std;

#define pi 3.14159265358979

class Shape {
   private:
    double shapeArea, shapeCircumference;

   public:
    double getArea() const;
    double getCircumF() const;
    void setArea(double sa);
    void setCircumF(double scf);
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
    virtual void display() = 0;
    virtual ~Shape();
};

class Circle : public Shape {
   private:
    double radius;

   public:
    Circle(double r);
    void calculateArea();
    void calculatePerimeter();
    void display();
};

class Rectangle : public Shape {
   private:
    double width, height;

   public:
    Rectangle(double w, double h);
    void calculateArea();
    void calculatePerimeter();
    void display();
};

#endif