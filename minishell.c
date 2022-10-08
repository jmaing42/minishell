/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:54:55 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2022/10/09 00:01:29 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern char			**environ;

static char *const	g_argv[] = {NULL};

int	main(void)
{
	execve("/usr/sbin/local/sh", g_argv, environ);
	execve("/usr/bin/local/sh", g_argv, environ);
	execve("/usr/sbin/sh", g_argv, environ);
	execve("/usr/bin/sh", g_argv, environ);
	execve("/sbin/sh", g_argv, environ);
	execve("/bin/sh", g_argv, environ);
	return (EXIT_FAILURE);
}
