/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:15:20 by bkas              #+#    #+#             */
/*   Updated: 2024/05/14 13:29:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "date.hpp"

int main() {
    Date mainDate(19, 5, 1999);
    // cout << "day; " << mainDate.getDay() << "month:" << mainDate.getMonth()
    //      << "year: " << mainDate.getYear() << endl;
    // cout << mainDate.getMonth() << endl;
    // cout << mainDate.getYear() << endl;

    // mainDate.setDate(28,9,1998);
    // mainDate.setDay(30);
    Date secondDate = mainDate;

    secondDate.setDate(31, 12, 2024);

    Date thirdDate = secondDate;

    // secondDate.setDate(24,10,2024);

    // secondDate.compareDate(thirdDate);
    secondDate.displayDate();
    secondDate.increaseDay();
    secondDate.displayDate();
    // secondDate.compareDate(thirdDate);
    // mainDate.displayDate();
    // thirdDate.displayDate();
}