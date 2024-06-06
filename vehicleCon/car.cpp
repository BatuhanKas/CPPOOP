/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   car.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:37:40 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 19:13:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vehicle.hpp"

// Car Constructor
Car::Car(double c_price, string c_brand) : Vehicle(c_price, c_brand) {
    cout << "Car const worked" << endl;
};

// Car Display Func
void Car::display() {
    cout << "--------- Car Information ---------" << endl;
    Vehicle::display();
}

// Car Increase Speed
void Car::increaseSpeed() {
    if (isgetwork()) {
        int spd = getSpeed();
        if (spd <= 120) {
            setSpeed(spd + 30);
            int gnum = getGearNum();
            if (gnum < 6) {
                setGearNum(gnum + 1);
            }
        }
    } else {
        cout << "---You should start engine first---" << endl;
    }
}

// Car Decrease Speed
void Car::decreaseSpeed() {
    if (isgetwork()) {
        int spd = getSpeed();
        if (spd >= 30) {
            setSpeed(spd - 30);
            int gnum = getGearNum();
            if (gnum > 1) {
                setGearNum(gnum - 1);
            }
        }
    } else {
        cout << "---You should start engine first---" << endl;
    }
}