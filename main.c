/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/10 07:31:43 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t	i;
	size_t num_after_atoi;

	/* ###エラーケース
	- 引数が整数のみではない
	- 引数なしはエラー(標準エラー出力に"ERROR\n"を出力)
	*/

	// 引数なし
	if (argc == 1)
		return (0);


	while()
	if (argc == INT_MAX)
	i = 1;
	while (argv[i] != NULL)
	{
		num_after_atoi = ft_atoi(argv[i]);
		printf("%zu", num_after_atoi);
		i++;
	}
	return (0);
}
