/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nation.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:11:28 by bkas              #+#    #+#             */
/*   Updated: 2024/06/06 16:23:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NATION_HPP
#define NATION_HPP

#include <iostream>
using namespace std;

/*
	Burada yaptigim sey, bir adet kisi sinifi tanimlayip
	kisi sinifini miras aldirip, ulkelerine gore
	birbirlerini karsilastirip, ayni ulkedenlerse kendi
	dillerinde merhaba demelerini, farkli ulkelerdense
	ingilizce olarak Hi demelerini saglamaktir.
	
	virtual nation ve virtual sayHi kullanmamin sebebi
	mainde bir pointer array kullandim ve upcasting islemi yaptim.
	Fonksiyonlarim virtual oldugu icin, kendileri hangi class'tan
	uretildilerse, o classtaki fonksiyonu cagirdim. Yani bir nevi
	function override yaptim.
*/

class Person {
   private:
    string name;

   public:
    Person(string name);
    string getName() const;
    virtual string getNation() const;
    virtual void sayHi(Person &person);
};

class Deutsche : public Person {
   public:
    Deutsche(string name);
    string getNation() const;
    void sayHi(Person &person);
};

class Turkish : public Person {
   public:
    Turkish(string name);
    string getNation() const;
    void sayHi(Person &person);
};

#endif