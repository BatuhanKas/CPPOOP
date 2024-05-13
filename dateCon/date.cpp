/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:16:04 by bkas              #+#    #+#             */
/*   Updated: 2024/05/13 18:13:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "date.hpp"

Date::Date(int d, int m, int y) { setDate(d, m, y); }

Date::Date(const Date &oth) {
    day = oth.day;
    month = oth.month;
    year = oth.year;
    cout << "Copy Constructor Worked" << endl << endl;
}

void Date::setDay(int d) {
    if (d >= 1 && d <= monthDays[month - 1]) {
        day = d;
    } else {
        day = 1;
    }
}

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) {
        month = m;
    } else {
        month = 1;
    }
}

void Date::setYear(int y) {
    if (y >= 1900 && y <= 2050) {
        year = y;
    } else {
        year = 2024;
    }
}

int Date::getDay() const { return day; }

int Date::getMonth() const { return month; }

int Date::getYear() const { return year; }

void Date::setDate(int d = 1, int m = 1, int y = 1800) {
    setMonth(m);
    setDate(d);
    setYear(y);
    cout << "Date Set" << endl << endl;
}

Date::~Date() {}

void Date::displayDate() {}