/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vehicle.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:33:47 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 17:02:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>
using namespace std;

class Vehicle {
   private:
    bool state;
    string brand;
    int speed, gearNum;
    double price;

   public:
    // constructor
    Vehicle(double v_price = 0.0, string v_brand = "NULL");
    
    // get functions
    bool isgetwork() const;
    int getSpeed() const;
    int getGearNum() const;
    double getPrice() const;
    string getBrand() const;
    
    // set functions
    void setState(bool s);
    void setBrand(string b);
    void setSpeed(int s);
    void setGearNum(int n);
    void setPrice(double p);

    // vehicle start stop
    void startEngine();
    void stopEngine();

    
    // setleri yaz tek tek. start stop engine yaz, display yaz.
};

class Car : public Vehicle {};

class Motorcycle : public Vehicle {};

#endif