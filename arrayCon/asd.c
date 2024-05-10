/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:28:55 by bkas              #+#    #+#             */
/*   Updated: 2024/05/10 16:28:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void arrayIslemleri(int capacity) {
    // capacity uzunluğunda bir int dizisi için bellek tahsis et
    int *data = (int *)malloc(capacity * sizeof(int));

    // Bellek tahsisinin başarılı olup olmadığını kontrol et
    if (data == NULL) {
        printf("Bellek tahsis edilemedi!\n");
        return;
    }

    // Diziyi başlangıç değerleriyle doldur
    for (int i = 0; i < capacity; i++) {
        data[i] = i * 2;
    }

    // Dizinin içeriğini yazdır
    printf("Dizi Elemanlari:\n");
    for (int i = 0; i < capacity; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Belleği serbest bırak
    free(data);
    printf("Bellek serbest bırakıldı.\n");
}

int main() {
    int capacity = 5;
    arrayIslemleri(capacity);
    return 0;
}
