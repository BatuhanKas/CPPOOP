/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:10:09 by bkas              #+#    #+#             */
/*   Updated: 2024/05/16 16:11:36 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bankAcc.hpp"

int main() {
    bankAcc acc1("Batuhan", "Kas", 1500);

    bankAcc acc3(acc1);

    bankAcc acc2("Kadir", "Soker", 0, "5313313131");
    acc1.displayProfile();
    acc2.displayProfile();
    acc1.credit(500);
    acc1.displayProfile();
    acc1.withdraw(250);
    acc1.displayProfile();

    acc1.sendMoney(acc2, 2250);
    acc2.displayProfile();
}