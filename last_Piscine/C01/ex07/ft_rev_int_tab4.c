/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harumoren2507 <kuroshiro0725@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:59:43 by harumoren25       #+#    #+#             */
/*   Updated: 2024/01/20 23:08:44 by harumoren25      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
     
    i = 0;

    int temp;

    while (tab[i] < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // テストする配列
    int size = sizeof(arr) / sizeof(arr[0]);  // 配列のサイズを計算

    // 配列を逆順にする前の状態を出力
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 配列を逆順にする
    ft_rev_int_tab(arr, size);

    // 逆順にした後の配列を出力
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
