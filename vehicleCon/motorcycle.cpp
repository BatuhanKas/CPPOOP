/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motorcycle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:59:28 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 19:13:12 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vehicle.hpp"

// Motorcycle Constructor
Motorcycle::Motorcycle(double m_price, string m_brand)
    : Vehicle(m_price, m_brand) {
    cout << "Motorcycle Const Worked" << endl;
}

// Motorcycle Increase Speed
void Motorcycle::increaseSpeed() {
    if (isgetwork()) {
        int spd = getSpeed();
        if (spd <= 90) {
            setSpeed(spd + 20);
            int gnum = getGearNum();
            if (gnum < 6) {
                setGearNum(gnum + 1);
            }
        }
    } else {
        cout << "---You should start engine first---" << endl;
    }
}

// Motorcycle Decrease Speed
void Motorcycle::decreaseSpeed() {
    if (isgetwork()) {
        int spd = getSpeed();
        if (spd >= 20) {
            setSpeed(spd - 20);
            int gnum = getGearNum();
            if (gnum > 1) {
                setGearNum(gnum - 1);
            }
        }
    } else {
        cout << "---You should start engine first---" << endl;
    }
}

void Motorcycle::display() {
    cout << "--------- Motorcycle Information ---------" << endl;
    Vehicle::display();
}