/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:10:09 by bkas              #+#    #+#             */
/*   Updated: 2024/05/16 12:14:39 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bankAcc.hpp"

int main() {
    bankAcc acc1("Batuhan", "Kas", 5000, 1231231231);

    acc1.displayProfile();
}