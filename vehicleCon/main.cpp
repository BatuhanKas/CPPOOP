/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:33:44 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 10:26:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vehicle.hpp"

int main() {
    // Motorcycle m1(75000, "Yamaha");
    // Car c1(123.45, "BMW");

    // Motorcycle *m1 = new Motorcycle(1234, "Kawasaki");
    // Car *c1 = new Car(777.77, "Honda");

    Vehicle *arr[] = {new Motorcycle(1175, "Yamaha"),
                      new Car(1900, "Honda Civic")};

    int which_veh;
    char state;
    do {
        fflush(stdin);
        cout << "Please Enter which vehicle and which input" << endl;
        cin >> which_veh >> state;

        switch (state) {
            case 'U':
                arr[which_veh]->increaseSpeed();
                arr[which_veh]->display();
                break;
            case 'D':
                arr[which_veh]->decreaseSpeed();
                arr[which_veh]->display();
                break;
            case 'S':
                arr[which_veh]->startEngine();
                arr[which_veh]->display();
                break;
            case 'C':
                arr[which_veh]->stopEngine();
                arr[which_veh]->display();
                break;
            default:
                cout << "Invalid Input!" << endl;
                break;
        }

    } while (which_veh != -1);
}