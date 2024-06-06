/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vehicle.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:33:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 17:04:21 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vehicle.hpp"

// Constructor Right Here.

Vehicle::Vehicle(double v_price, string v_brand) {
    price = v_price;
    brand = v_brand;
    state = false;
    speed = 0;
    gearNum = 0;
    cout << "Vehicle Constructor Worked" << endl;
}

// Get Functions Down Below

bool Vehicle::isgetwork() const { return state; }

int Vehicle::getSpeed() const { return speed; }

int Vehicle::getGearNum() const { return gearNum; };

double Vehicle::getPrice() const { return price; };

string Vehicle::getBrand() const { return brand; };

// Set Functions Down Below.

void Vehicle::setState(bool s) { state = s; };

void Vehicle::setBrand(string b) { brand = b; };

void Vehicle::setSpeed(int s) { speed = s; };

void Vehicle::setGearNum(int n) { gearNum = n; };

void Vehicle::setPrice(double p) { price = p; }

// Start Engine

void Vehicle::startEngine() {
    state = true;
    gearNum = 1;
}

void Vehicle::stopEngine() {
    state = false;
    gearNum = 0;
}
