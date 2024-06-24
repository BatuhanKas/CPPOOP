/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpret_cast.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:50:47 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 19:04:51 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void reinterpretCast() {
    int a = 5;

    void *ptr = reinterpret_cast<void *>(&a);
    int *ptr2 = reinterpret_cast<int *>(ptr);
    cout << *ptr2 << endl;
}