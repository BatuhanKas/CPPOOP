/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:44:42 by bkas              #+#    #+#             */
/*   Updated: 2024/06/04 17:54:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/**
 * @brief Upcasting - Downcasting Calisma
 *
 * @return int
 */

int main() {
    // Upcasting Ornegi.
    /*
        Employee *e1;
        Manager mng("a", "b", 1, "c");

        e1 = &mng;
        e1->display();
    // Employee *e1 = new Manager("a", "b", 12, "c");
    Manager mng("a", "b", 1, "c");
    Employee *e1 = (Employee *)&mng;
    e1->display();
    */

    cout << "--" << endl;
    // Downcasting Ornegi.
    /*
        Manager *m = (Manager *)e1;
        m->display();
    */

    /**
    // Her yonetici bir calisandir fakat
    // her calisan bir yonetici degildir.
     * @brief Hatali kod ornegi down below
     *
        e2 = new Employee("x","y",2);
        Manager *m2 = (Manager *)e2;
        m2->display();

        Yonetici olmayan bir kisiyi yonetici
        yaparsan, hatalara sebep olursun.
     */

    /**
     * @brief Virtual Display Func Asagida gosterdim.
     * header'da display func
     * virtual void display(); seklinde tanimli olmali.
     * Base class'ta tabiiki. Miras veren classta
     * bu sekilde olmali.
     */
    /*
        Employee *e3 = new Employee("q", "w", 3);

        e3->display();

        Manager *m1 = (Manager *)e3;
        m1->display();
    */

    /**
     * @brief Virtual Display Func su ise yarar.
     * Sen hangi class'tan uretildiysen
     * git o class'in display functionunu calistir demek
     * Daha detayli aciklamalar notion.so hesabimda!
     * virtualFunc isimli klasordede vardir.
     */

    /**
     * @brief Virtual Destruction'u gosterme vakti.
     *
     * Asagida gordugunuz gibi e1'i freeledim. e1
     * sadece Employee sinifini isaret eden bir pointer
     * olmasina ragmen destructorum virtual bir
     * destructor oldugu icin Dogru bir sekilde
     * freeleme(parcalama) islemi yapti.
     * buradaki virtual keywordu ise sen hangi objeden
     * uretildiysen, o objeye gore freeleme islemi
     * yap demek.
     */

    Manager *m = new Manager("a", "b", 1, "c");
    Employee *e1 = m;
    e1->display();
    delete m;
}