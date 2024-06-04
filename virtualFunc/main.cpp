/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:02:33 by bkas              #+#    #+#             */
/*   Updated: 2024/06/04 16:02:21 by bkas             ###   ########.fr       */
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


    /**
     * @brief 
     * 

    // referans kisimi
    Employee yeni("Ali", "Kefal", 3152);
    Manager mngr("Usman", "Aga", 6666, "CicekTaksi");
    cout << endl << "Reference Parameters: " << endl;
    df1(yeni);
    df1(mngr);
    // pointer kisimi
    cout << endl << "Pointer Parameters: " << endl;
    Employee *ptr = new Employee("Sinan", "Kaya", 3131);
    Manager *ptr2 = new Manager("Maraz", "Ali", 9999, "Belali");
    df2(ptr);
    df2(ptr2);
    // value kisimi
    cout << endl << "Value : " << endl;
    df3(yeni);
    df3(mngr);
    
     */

    /**
     * @brief SON VALUE KISMINDA OLAN BITEN
     *
     * Sen virtual fonksiyon kullansan bile, eger degerle cagri
     * yaparsan bunlar kendi ozelliklerini gosteremeyecekler.
     *
     * Ne demek istiyorum, yani Virtual Functionlar Sadece ve sadece
     * Pointer ve Reference kullanirsak DOGRU bir sekilde calisirlar.
     *
     */

    /**
     * @brief Upcasting islemi yaptigimiz zaman silme isleminde sikinti cikiyor.
     */

    Manager *newptr = new Manager("batuhan", "kas", 13500, "software");
    Employee *emp = newptr;

    emp->display();

    Employee *p1 = new Manager("kanka","batu",123,"pc");

    delete emp;
    delete p1;
}