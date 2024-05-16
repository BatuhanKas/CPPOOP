/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankAcc.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:44:13 by bkas              #+#    #+#             */
/*   Updated: 2024/05/16 12:12:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANKACC_HPP
#define BANKACC_HPP

#include <iostream>
using namespace std;

class bankAcc {
   private:
    float accountBalance;
    string personName, personSurname;
    int personPhone;

   public:
    bankAcc(string name, string surname, float balance = 0, long int phoneNum = 0);
    bankAcc(const bankAcc &oth);
    ~bankAcc();
    bool controlNameSurname(string name);
    bool controlPhoneNumber(int num);
    void displayProfile();
    void credit(float balance);
    void withdraw(float balance);
    void sendMoney(bankAcc &oth, float amount);
    void setPersonName(string name);
    void setPersonSurname(string surname);
    void setPersonPhone(int phoneNum);
    void setPersonBalance(float balance = 0);
    string getPersonName() const;
    string getPersonSurname() const;
    int getPersonPhone() const;
    int getPersonBalance() const;
};

#endif