/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:02:05 by bkas              #+#    #+#             */
/*   Updated: 2024/05/27 21:24:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dmemory.hpp"

int main() {
    Example e1;
    Example *e1ptr;
    e1.x = 5;
    e1.y = 3;
    e1.display();

    /**
     * @brief im not gonna use that
     *
        (*e1ptr).x=15;
        (*e1ptr).y=15;
        (*e1ptr).display();
     */

    e1ptr->x = 39;
    e1ptr->y = 45;
    e1ptr->display();

}