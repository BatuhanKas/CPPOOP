/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:43:42 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 14:54:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nation.hpp"

// MAIN KISMI

// Bir pointer arrayde diger turetilmis classlarimdan urettigim
// objeleri tutuyorum. Herkesin birbirine merhaba demesini sagliyorum.

int main() {
    Person *pArr[] = {new Turkish("Batuhan"), new Turkish("Ali"),
                      new Deutsche("Frank"), new Deutsche("Reus")};

    size_t nop = sizeof(pArr) / sizeof(pArr[0]);

    for (size_t i = 0; i < nop; i++) {
        if (i == 3) {
            pArr[i]->sayHi(*pArr[i - nop + 1]);
            break;
        } else {
            pArr[i]->sayHi(*pArr[i + 1]);
        }
    }
}