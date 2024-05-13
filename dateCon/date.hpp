/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:04:21 by bkas              #+#    #+#             */
/*   Updated: 2024/05/13 16:52:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
using namespace std;

class Date {
   private:
    int year, month, day;
    const int monthDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const string monthString[12] = {
        "January", "February", "March",     "April",   "May",      "June",
        "July",    "August",   "September", "October", "November", "December"};

   public:
    Date(int d = 1, int m = 1, int y = 1900);
    Date(const Date &oth);
    ~Date();
    void setDate(int d = 1, int m = 1, int y = 1800);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void increaseDay();
    void compareDate(const Date &oth);
    void displayDate();
};

#endif