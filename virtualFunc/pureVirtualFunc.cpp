/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pureVirtualFunc.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:24:25 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 17:37:00 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "virtual.hpp"

void pureVirtualFunc() {
    /**
     * @brief Pure Virtual Function nedir?
     *
     * Pure virtual function syntax'i header dosyasinda yazdigim gibidir.
     * Eger bizim Class'imiz en az 1 tane pure virtual function'a sahipse,
     * o artik bir soyut sinif haline gelir, Soyut siniflardan nesne
     * olusturulamaz.
     *
     * Neden boyle bir seye ihtiyac duyuyoruz?
     * Birden fazla hayvani bir soyut sinif altinda topladigimizi dusunelim.
     * Kopek havlar, kedi miyavlar, ordek vaklar. Fakat hepsi kendine ozgu bir
     * sekilde iletisim kurar. Bu yuzden hepsini pure virtual function'da
     * topluyoruz, kodda daha iyi anlasilir olacaktir.
     *
     * Header dosyasina da bir kac aciklama yazacagim.
     */

    /*
        Cat *cat = new Cat();
        Dog *dog = new Dog();
        Duck *duck = new Duck();
    */

    // animal'dan obje uretemeyiz dedik, pointer kullanamayiz demedik.
    // Animal object;
    // Bir upcasting islemi yaptik. Detayli aciklama Header dosyasinda.
    Animal *ptr[] = {new Cat(), new Dog(), new Duck()};

    for (size_t i = 0; i < 3; i++) {
        ptr[i]->talk();
    }
}