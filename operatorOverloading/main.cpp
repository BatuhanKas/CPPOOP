/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:51:28 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 11:18:33 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operatorOverloading.hpp"

int main() {
    /**
     * @brief ++ OPERATORU HAKKINDA
     *
     * Bizim arttirma islemlerimizde Bir Prefix, Birde Postfix
     * olacak sekilde 2 adet arttirma islemlerimiz var.
     *
     * Bizim asagida yaptimiz islem bir PREFIX arttirma islemidir.
     *     void Person::operator++() { this->age += 1; };
     *     ++p1;
     *
     * Yani biz Prefix islemlerin operatorunu overload etmis olduk.
     * Egerki biz ++ operatorunu basta degilde sonra kullanmak istiyorsak
     * yani p1++ yapmak istiyorsak, bunu da overload etmemiz gerekiyor.
     * Aksi halde hata aliriz.
     *
     *
     * PREFIX = Once arttirma islemi yapar, daha sonra return eder.
     * POSTFIX = ilk once return eder, daha sonra arttirma islemi yapar.

        // Asagidaki fonksiyon Prefix (++p1)
        void operator++();
        ++p1;
        // Asagidaki fonksiyon Postfix (p1++)
        void operator++(int);
        p1++;

        Postfix'in icerisine (int) almasinin sebebi su;

        ++p1' de yani prefix'te ++ parametresinin onunde aldigi
        herhangi bir yas degeri yok. Bu yuzden direkt olarak yas degerini
        arttiriyor.

        Fakat p1++ yani postfix'te ++ operatorunun onunde bir p1 objesi var,
        p1 objesinin yas degeri var. Bu yuzden icerisine bir adet int degeri
        aliyor. Bu int degerini alip islem yapiyor.

        Ikisinin arasindaki farkta bu zaten. Overload ederken her ikisinide
        overload ederken bunlara dikkat etmemiz gerekiyor.

        BUTUN OPERATORLERIN ALDIGI PARAMETRELERI OGREN VE PRATIK YAP
        BU YAZDIKLARIMI NOTION'A AKTARMAYI UNUTMA
        YARIN OPERATOR OVERLOADING ILE EGZERSIZ YAPACAGIM.

     */

    /*
    Person p1("batuhan", "kas", 20);
    Person p2("muhammet", "mutlu", 26);

    p1 == p2 ? cout << "Same person" << endl
             : cout << "Different Person" << endl;

    ++p1;
    p1++;

    ++p2;
    p2++;

    p1--;
    --p1;

    cout << p1 << p2;

    p1.operator++();
    operator<<(cout, p1);

    // p1.operator++();
    // p1.display();
    // p2.display();

    */

    Person p1("tayyip", "keles", 123);
    Person p2("enes", "ates", 433);

    Collection collection;
    collection += p1;
    collection += p2;

    collection -= p2;

    cout << collection;
}