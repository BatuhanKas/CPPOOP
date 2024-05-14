/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:04:21 by bkas              #+#    #+#             */
/*   Updated: 2024/05/14 12:41:03 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
#define DATE_HPP

#include <array>
#include <iostream>
#include <string>
using namespace std;

class Date {
   private:
    int year, month, day;
    static const array<int, 12> monthDays;
    static const array<string, 12> monthString;

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