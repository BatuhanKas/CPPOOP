/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_cast.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:15:52 by bkas              #+#    #+#             */
/*   Updated: 2024/06/24 17:54:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/*
    dynamic_cast;

    dynamic_cast, çalışma zamanında tür kontrolü yapar
    ve yalnızca geçerli tür dönüşümlerine izin verir.
    Genellikle polymorphism (çok biçimlilik) ile çalışırken,
    yani bir sınıf hiyerarşisi içinde nesnelerin türlerini
    dinamik olarak kontrol etmeniz gerektiğinde kullanılır.
    dynamic_cast, başarısız olursa null işaretçi (pointer) döner
    ve bu sayede dönüşümün geçerliliğini kontrol edebilirsiniz.

    Eğer bir temel sınıf işaretçisinin hangi türetilmiş sınıfa
    ait olduğunu çalışma zamanında kontrol etmeniz gerekiyorsa
    veya dönüşümün geçerli olup olmadığından emin değilseniz,
    dynamic_cast kullanmalısınız.
    Bu, daha güvenlidir çünkü geçersiz dönüşümleri önler
    ve dönüşüm başarısız olduğunda null işaretçi döner.
*/

void dynamicCast() {
    base *b = new derived();  // Base sınıfından bir nesne

    b->setx(1);

    derived *d = dynamic_cast<derived *>(b);

    d->sety(2);
    d->display();
}