/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:14:25 by bkas              #+#    #+#             */
/*   Updated: 2024/05/13 12:27:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_func() {
    int *arr = (int *)malloc(sizeof(int) * 5);
    int x = 10;

    for (int i = 0; i < 5; i++) {
        arr[i] = x;
        x++;
    }

    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    free(arr);
}

int main() {

    ft_func();
}