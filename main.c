/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/12 22:58:08 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t	*num_argv;
	size_t	i;

	/* ###エラーケース
	- 引数が整数のみではない(標準エラー出力に"ERROR\n"を出力)
	- 引数がない場合は何もせずにプロンプトを返す
	*/
	// 引数なし
	if (argc == 1)
		put_error_and_exit();
	num_argv = (size_t *)malloc(1000);
	i = argc;
	while (i-- >= 2)
	{
		num_argv[i] = ps_atoi(argv[i]);
		ft_printf("%d\n", num_argv[i]);
	}
	return (0);
}
