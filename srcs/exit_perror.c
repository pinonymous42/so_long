/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_perror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohmatsu <kohmatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:24:24 by hnoguchi          #+#    #+#             */
/*   Updated: 2023/01/16 12:53:17 by kohmatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "libft.h"

void	exit_perror(char *subject)
{
	printf("%s, %d\n", __FILE__, __LINE__);
	ft_putstr_fd("Error\nso_long: ", STDERR_FILENO);
	perror(subject);
	exit(EXIT_FAILURE);
}
