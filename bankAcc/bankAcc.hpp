/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bankAcc.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:44:13 by bkas              #+#    #+#             */
/*   Updated: 2024/05/14 17:09:34 by bkas             ###   ########.fr       */
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
    bankAcc(string name, string surname, float balance = 0, int phoneNum = 0);
    bankAcc(const bankAcc &oth);
    ~bankAcc();
    bool controlNameSurname(string nameOrSurname);
    bool controlPhoneNumber(int phoneNum);
    void displayProfile();
    void credit(float);
    void withdraw(float);
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