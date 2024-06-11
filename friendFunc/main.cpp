/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:19:44 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 12:30:32 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "friend.hpp"

int main() {
    Triangle t1;

    t1.setLen(3);
    t1.calculate();
    // Fonksiyona direkt objeyi gonderiyorum.
    // display(t1);

    Friend f1;
    f1.display(t1);
}