/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:02:33 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 21:37:06 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "upcasting.hpp"

int main() {
    /**
     * @brief UPCASTING STARTS HERE
     */
    Employee *emp1;
    Manager m1("Batuhan", "Kas", 1300, "Software");

    emp1 = &m1;

    /**
     * @brief Upcasting islemi yukarida yaptigim islemdir.
     *
     * Miras aldigimiz bir siniftan turetecegim bir nesneyi,
     * Ana sinifimin pointeri ile yonetme islemidir.
     *
     * UPCASTING yaptigim zaman SADECE Ana sinifimin uyelerine erisebilirim !
     * SADECE ve SADECE UST SINIFTA olan uyelere erisebilirim.
     */

    emp1->display();

    /**
     * @brief Display HK
     * eger virtual function kullanmazsak ( BILMIYORUM ) ve gidipte
     * display func cagirirsak, kendi display funcini calistirir.
     *
     */

    /**
     * @brief DOWNCASTING STARTING RIGHT HERE !!
     */
}