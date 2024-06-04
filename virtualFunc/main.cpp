/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:02:33 by bkas              #+#    #+#             */
/*   Updated: 2024/06/04 14:47:02 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual.hpp"

int main() {
    /**
     * @brief VIRTUAL FUNC NEDIR?
     *
     * Virtual Keyword'u onune geldigi fonksiyonun siniflara ozgu
     * davranislar sergilemesini saglar.
     *
     * HANGI NESNE UZERINDEN CAGIRILIYORSA ONUN DISPLAY
     * FONKSIYONUNU CALISTIR DIYORUZ. SANIRIM EN IYI VE EN UYGUN TANIM BU.
     * SADECE BASE SINIFTA (MIRAS VEREN SINIFTA) VIRTUAL YAZACAGIZ.
     */

    Employee yeni("Ali", "Kefal", 3152);
    Manager mngr("Usman", "Aga", 6666, "CicekTaksi");
    cout << endl << "Reference Parameters: " << endl;
    df1(yeni);
    df1(mngr);
}