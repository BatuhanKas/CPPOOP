/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:32:28 by bkas              #+#    #+#             */
/*   Updated: 2024/06/07 13:42:23 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shape.hpp"

int main() {
    /*
        Upcasting islemi yapiyorum. Upcasting yaptigim icin,
        Mecburen benim freeleme yapacaksam virtual destructora
        ihtiyacim olacaktir. Cunku bunlar sadece pointer arrayde tutuluyor.

        kendi pointerlari olsaydi kendi destructorlarina gonderebilirdim
        Fakat upcastingin bir anlami olmazdi
    */
    Shape *s[] = {new Circle(3), new Rectangle(5, 10), new Circle(5.31),
                  new Rectangle(31, 31)};

    size_t size = sizeof(s) / sizeof(s[0]);

    for (size_t i = 0; i < size; i++) {
        s[i]->calculateArea();
        s[i]->calculatePerimeter();
        s[i]->display();
    }

    for (size_t i = 0; i < size; i++) {
        delete s[i];
    }
}