/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:11:42 by bkas              #+#    #+#             */
/*   Updated: 2024/05/06 13:11:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "triangle.hpp"

int main() {
    float a, b, c;

    cout << "Lutfen deger giriniz. (a-b-c)" << endl;
    cin >> a >> b >> c;
    Triangle triangle1(a, b, c);

    Triangle triangle2 = triangle1;
    Triangle triangle3(triangle1);

    cout << "-Triangle1-" << endl;
    cout << "Side A: " << triangle1.getSideA() << endl;
    cout << "Side B: " << triangle1.getSideB() << endl;
    cout << "Side C: " << triangle1.getSideC() << endl;
    cout << "Ucgenin Turu: ";
    triangle1.triangleType();

    cout << "-Triangle2-" << endl;
    triangle2.setValue(12, 16, 20);
    cout << "Side B: " << triangle2.getSideB() << endl;
    cout << "Side A: " << triangle2.getSideA() << endl;
    cout << "Side C: " << triangle2.getSideC() << endl;
    cout << "Ucgenin Turu: ";
    triangle2.triangleType();
}
