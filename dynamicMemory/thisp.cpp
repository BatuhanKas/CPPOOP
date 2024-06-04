/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thisp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:37:03 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 11:56:05 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.hpp"

/**
 * @brief This bizim nesnemizin adresini tutuyor,
 * Degeri diyerek nesnemizi return ediyoruz.
 * Kendi nesnemi return ediyoruz cagirdigim nesneyi degil.
 *
 * @param oth
 * @return Example
 */

Example Example::addSum(Example &oth) {
    this->x += oth.x;
    this->y += oth.y;
    return *this;
}

Example::Example(int mx, int my) {
    this->x = mx;
    this->y = my;
    this->display();
    cout << "Const Worked" << endl;
}

int main() {
    Example e1(5, 5), e2(4, 4);

    Example e3 = e1.addSum(e2);
    e3.display();
}