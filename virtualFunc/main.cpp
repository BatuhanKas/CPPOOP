/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:02:33 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 13:19:07 by bkas             ###   ########.fr       */
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
     * @brief UPCASTING'IN DEVAMI YAZDIGIM KISIM BURADA !!!

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
    
        // virtual yazsak bile, Referans ya da Pointer ile cagirmazsak,
        // Fonksiyon duzgun calismayacaktir. Daha detayli asagida.

     */

    /**
     * @brief SON VALUE KISMINDA OLAN BITEN
     *
     * Sen virtual fonksiyon kullansan bile, eger degerle cagri
     * yaparsan bunlar kendi ozelliklerini gosteremeyecekler.
     *
     * Ne demek istiyorum, yani Virtual Functionlar Sadece ve Sadece
     * Pointer ve Reference kullanirsak DOGRU bir sekilde calisirlar.
     */

    /**
     * @brief Upcasting islemi yaptigimiz zaman silme isleminde sikinti cikiyor.
     */

    /*
        Manager *newptr = new Manager("batuhan", "kas", 13500, "software");
        Employee *emp = newptr;

        emp->display();

        // Employee *p1 = new Manager("kanka", "batu", 123, "pc");

        delete emp;
        // delete p1;
    */

    /**
     * @brief Silme isleminde cikan sorunun detayli aciklamasi;
     *
     * Eger biz virtual Destructor kullanmazsak ve sadece emp'yi
     * delete edersek, emp Sadece Employee class'ina isaret ettigi icin,
     * kendi destructorunu cagiracaktir ve sadece kendisini freeleyecektir.
     * Bu dogru bir kullanim degildir cunku Biz burada upcasting islemi yaptik.
     * Bir alt class'i isaret ediyoruz ve alt class'in pointerini henuz
     * freelemedik.
     *
     * Bunun 2 adet cozum yontemi var:
     *
     * 1.yontem: Takibi iyi yapip direkt olarak asil pointer hangisi ise onu
     * freelemek olacaktir. Yani burada upcasting yaptigimiz pointer degil
     * (*newptr) pointerini freelemek olacaktir. Cunku asil heap'te yer acilan
     * pointer o'dur.
     *
     * 2.yontem: Burada ise isin kolayina kacmak oluyor bu yontem, Miras veren
     * Class'imizin Destructorunun basina "virtual" keywordunu eklemek
     * olacaktir. Cunku Virtual Keyword'u Sen Hangi class'tan olustuysan, git
     * onun destuctorunu cagir anlamina gelmektedir. Bu sayede upcasting islemi
     * yapsak dahi, destructorumuzun basinda virtual keyword'u olursa, takip
     * yapmadan upcasting yapilmis bir pointeri free'lesen dahi, dogru bir
     * sekilde freeleme islemi yapilacaktir. Bu sayede takip yapma isleminden
     * kurtulmus olursun.
     *
     */

    pureVirtualFunc();
}