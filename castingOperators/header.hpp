/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:30:13 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 18:51:30 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
using namespace std;

class base {
   private:
    int x;

   public:
    base(){};
    base(int _x) : x(_x){};
    virtual ~base(){};
    void setx(const int _x) { x = _x; };
    int getx() const { return x; };
    void display() const {
        cout << "xval: " << getx() << endl;
        cout << "-" << endl;
    };
};

class derived : public base {
   private:
    int y;

   public:
    void sety(int _y) { y = _y; };
    void display() const {
        base::display();
        cout << "yval: " << y << endl;
        cout << "---" << endl;
    };
};

void staticCast();
void dynamicCast();
void constCast();
void reinterpretCast();

#endif