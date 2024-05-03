/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:21:12 by bkas              #+#    #+#             */
/*   Updated: 2024/05/03 13:41:42 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "studentClass.hpp"
#include <iomanip>

int main() {
    Ogr ogrenci1;
    Ogr ogrenci2;
    Ogr ogrenci3("Maksut", "Kocaman", 4242);
    Ogr ogrenci4;
    Ogr ogrenci5(ogrenci3);

    ogrenci1.setName("Batuhan");
    ogrenci1.setSurname("Kas");
    ogrenci1.setNumber(42);

    string name = ogrenci1.getName();
    string surname = ogrenci1.getSurname();
    int number = ogrenci1.getNumber();

    cout << "Ogrenci ismi : " << setw(20) << name << endl;
    cout << "Ogrenci Soyismi : " << surname << endl;
    cout << "Ogrenci Numarasi : " << number << endl << endl;

    ogrenci2.setInformation("Melih", "Yıldız", 5142);

    ogrenci2.displayInformation();
    ogrenci3.displayInformation();
    ogrenci4.displayInformation();
    ogrenci5.displayInformation();

    return 0;
}
