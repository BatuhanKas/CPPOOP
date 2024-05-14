/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:16:04 by bkas              #+#    #+#             */
/*   Updated: 2024/05/14 16:21:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "date.hpp"

const array<int, 12> Date::monthDays = {31, 29, 31, 30, 31, 30,
                                        31, 31, 30, 31, 30, 31};
const array<string, 12> Date::monthString = {
    "January", "February", "March",     "April",   "May",      "June",
    "July",    "August",   "September", "October", "November", "December"};

Date::Date(int d, int m, int y) { setDate(d, m, y); }

Date::Date(const Date &oth) {
    day = oth.day;
    month = oth.month;
    year = oth.year;
    cout << "Copy Constructor Worked" << endl << endl;
}

void Date::setDay(int d) {
    /**
     * @brief monthDays aciklama ;
     *
     * Buranin olayi ilk Ay giriyoruz hoca cok sacma anlatmis.
    Ilk ay degeri giriyoruz. Girilen gun hangi aya denk geliyorsa
    O degerden kucuk olmali. Ornek verecek olursak;

    Ay degerini 3 girdik. 3. ay Marta denk geliyor fakat mart
    index hesabi yaptigimiz icin 2.index'te. Bu yuzden month -1 yapiyoruz.
    Girilen gun hangi ayda ise o aralikta olmak zorunda.
    Hoca bunu aciklayamadi yaziklar olsun.
     *
     */
    // cout << "monthdays yazdir: " << monthDays[month - 1] << "month:" <<
    //     month << "motndays elle: " << monthDays[4] << endl;
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

void Date::setDate(int d, int m, int y) {
    // cout << "day : " << d << "month: " << m << "year :" << y << endl;
    setMonth(m);
    setDay(d);
    setYear(y);
    cout << "Date Set" << endl << endl;
}

Date::~Date() {}

void Date::displayDate() {
    cout << day << " " << monthString[month - 1] << " " << year << endl;
}

void Date::increaseDay() {
    int flag = day == 28 && month == 2 && year % 4 == 0;
    int flag2 = day == 31 && month == 12;

    // cout << "flag" << flag << "year" << year % 4 << endl;
    if (flag) {
        day++;
    } else if (day < monthDays[month - 1]) {
        if (day == 28 && month == 2) return;
        // cout << "val:" << monthDays[month - 1] << endl;
        day++;
    } else {
        day = 1;
        flag2 ? month = 1 && year++ : month++;
    }
}

void Date::compareDate(const Date &oth) {
    long firstTotal = year * 365 + month * 30 + day;
    long othTotal = oth.year * 365 + oth.month * 30 + oth.day;

    firstTotal > othTotal
        ? cout << "First total Greater" << endl
        : (firstTotal < othTotal ? cout << "Second Total is greater" << endl
                                 : cout << "Equal" << endl);

    // day == oth.day &&month == oth.month &&year == oth.year
    //     ? cout << "Compared True" << endl
    //     : cout << "False Compare!" << endl;
}