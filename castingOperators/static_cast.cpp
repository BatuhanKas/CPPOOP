/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_cast.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:50:34 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 17:51:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void staticCast() {
    /**
     * @brief Static Cast Acikliyorum.
     *
     * Static Cast genellikle guvenli ve acik bir donusum
     * yapmak icin kullanilir. Veri kaybi olasiligi olan
     * donusumler icin uyari verir.
     *
     */

    int x = 15;
    double a = 0;

    a = static_cast<double>(x);
    cout << a << endl;

    base *b = new base();

    b->setx(15);
    b->display();

    derived *d;
    d->setx(10);
    d->sety(20);
    d->display();

    /*
        Asagida her iki cast isleminide yazdim.

        C stili donusum;
        Hataya acik bir donusum stilidir.
        Derleyici daha az seçici davranir.
        Derlese bile, hatali sonuc alma ihtimaliniz vardir.

        Static Cast;
        Derleyici runtime sirasinda compile ederek herhangi bir
        hata durumu oldugu sirada uyari verir.
        Daha guvenli bir cast islemi yapilmasini saglar.
        Hatalari yakalama sansi daha yuksektir.
        Sadece belirli ve geçerli dönüşümlere izin verir
        (örneğin, bir temel sınıf işaretçisini türetilmiş sınıf
        işaretçisine dönüştürme).
    */

    derived *d2 = static_cast<derived *>(b);
    // derived *d3 = (derived *)b;
    d2->display();
}