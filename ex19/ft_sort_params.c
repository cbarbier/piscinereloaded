/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:13:18 by cbarbier          #+#    #+#             */
/*   Updated: 2016/11/03 12:05:34 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putendl(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

void	ft_swap_params(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_params(int argc, char **argv)
{
	int start;
	int index;
	int min;

	min = 1;
	start = 1;
	index = 1;
	while (start < argc)
	{
		while (index < argc)
		{
			if (ft_strcmp(argv[min], argv[index]) > 0)
				min = index;
			index++;
		}
		ft_swap_params(&argv[min], &argv[start]);
		start++;
		index = start;
		min = start;
	}
}

int		main(int argc, char **argv)
{
	int index;

	if (argc < 2)
		return (0);
	index = 1;
	ft_sort_params(argc, argv);
	while (index < argc)
		ft_putendl(argv[index++]);
	return (0);
}
