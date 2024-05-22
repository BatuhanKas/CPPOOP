/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:07:10 by bkas              #+#    #+#             */
/*   Updated: 2024/05/22 11:21:25 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inherit.hpp"

int main() {
    int ret;

    baseClass c1;

    c1.setval(5);
    ret = c1.getint();
    cout << ret << endl << endl;

    c1.setx(10);
    ret = c1.getx();
    cout << ret << endl << endl;

    c1.printx(); 

    derivedClass d1;
    d1.setx(20);
    d1.printx();
}