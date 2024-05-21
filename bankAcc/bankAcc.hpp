/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankAcc.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:44:13 by bkas              #+#    #+#             */
/*   Updated: 2024/05/21 10:32:48 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANKACC_HPP
#define BANKACC_HPP

#include <iostream>
#include <limits>
#include <sstream>
#include <string>
using namespace std;

class bankAcc {
   private:
    float accountBalance;
    string personName, personSurname, personPhone;
    //     __int128 castedPhon e;

   public:
    bankAcc(string name, string surname, float balance = 0,
            string phoneNum = "0");
    bankAcc(const bankAcc &oth);
    ~bankAcc();
    bool controlNameSurname(string name);
    bool controlPhoneNumber(string num);
    void displayProfile();
    void credit(float balance);
    void withdraw(float balance);
    void sendMoney(bankAcc &oth, float amount);
    void setPersonName(string name);
    void setPersonSurname(string surname);
    void setPersonPhone(string phoneNum);
    void setPersonBalance(float balance = 0);
    string getPersonName() const;
    string getPersonSurname() const;
    string getPersonPhone() const;
    int getPersonBalance() const;
};

#endif