/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   friend.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:19:46 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 18:13:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "friend.hpp"

void Triangle::setLen(float len) { length = len; }

float Triangle::getLen() { return length; };

void Triangle::calculate() {
    int len = getLen();

    circumference = len * 3;
    area = (1.73 * len * len) / 4;
}
/**
 * @brief Normal Klasik bir display Fonksiyonu
 *
 * @param t
    void display(Triangle t) {
        cout << "Triangle len: " << t.length << endl;
        cout << "Triangle Circumference: " << t.circumference << endl;
        cout << "Triangle Area: " << t.area << endl;
    }
 */

void Friend::display(Triangle t1) {
    cout << "Triangle len: " << t1.length << endl;
    cout << "Triangle Circumference: " << t1.circumference << endl;
    cout << "Triangle Area: " << t1.area << endl;
}