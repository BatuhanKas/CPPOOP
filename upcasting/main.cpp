/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:02:33 by bkas              #+#    #+#             */
/*   Updated: 2024/07/02 18:11:25 by bkas             ###   ########.fr       */
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
     * eger virtual function kullanmazsak ve gidipte
     * display func cagirirsak, kendi display funcini calistirir.
     */

    cout << "----------------------------------" << endl;

    /**
     * @brief DOWNCASTING STARTING RIGHT HERE !!
     */

    /**
     * @brief DOWNCASTING NEDIR ?
     *
     * Bizim Base sinifimizin pointerini, miras alarak olusturdugumuz
     * sinifin pointeri haline cevirme islemidir.
     */

    Manager *m2 = (Manager *)(emp1);

    /**
     * @brief Yukarida yaptigim islem, emp1 pointerimi downcasting
     * yaparak, (Manager *) typecast ederek yeni bir turetilmis
     * Class'in pointerine atamis oldum. Bu isleme downcasting nedir.
     * Cunku Employee Benim Ana sinifim, Manager benim turetilmis Class'im.
     */

    m2->display();

    Employee e1("Kadir", "Soker", 17500);
    Employee *pe1 = &e1;

    Manager *m = (Manager *)pe1;

    m->display();
    cout << "--------" << endl;

    /**
     * @brief Yukarida yaptigim islem bir hatali islemdir.
     * Cunku her yonetici ayni zamanda bir calisandir.
     * Fakat, her calisan ayni zamanda bir yonetici DEGILDIR!
     * Bu yuzden UPCASTING islemi guvenlidir, fakat DOWNCASTING islemi
     * yapilirken dikkat edilmesi gerekir.
     *
     * Bu kisimda Kadir bir yonetici olmadigi icin, Department kismi
     * yanlis calisacaktir.
     */

    /**
     * @brief DOWNCASTING ORNEKLERI
     */

    Employee *emr;
    // Manager empa("emre", "can", 1000, "Cleaner");
    Employee empa("emre", "can", 1000);

    emr = &empa;

    emr->display();

    cout << "---" << endl;

    Manager *baba = (Manager *)emr;

    baba->display();

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
    // df1(yeni);
    // df1(mngr);

    // df2(&yeni);
    // df2(&mngr);

    // df3(yeni);
    // df3(mngr);

    // Devami virtualFunc'un icerisinde...
    // Kisaca: Referans ve pointerda duzgun calisir.
    // Value'ile call edersek yanlis calisir.
}