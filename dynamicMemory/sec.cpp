/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sec.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:25:03 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 22:31:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.hpp"

int main() {
    // int *ptr;
    // ptr = new int;

    // Example *e1;
    // Bu satirda yeni nesne olusturuyoruz
    // Bu yuzden contructor calisiyor.
    // e1 = new Example;

    // e1->x = 15;
    // e1->y = 7;
    // e1->display();

    // *ptr = 10;
    // cout << *ptr << endl;
    // delete ptr;
    // Bu satirda nesneyi destroy ediyoruz,
    // Bu yuzden destructor calisiyor.
    // delete e1;

    int *ptr = new int[5];
    Example *ea = new Example[5];

    for (int i = 0; i < 5; i++) {
        ea[i].x = i;
        ea[i].y = i * i;
        ea[i].display();
    }

    delete[] ptr;
    delete[] ea;
}