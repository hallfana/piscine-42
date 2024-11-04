/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:53:34 by samberna          #+#    #+#             */
/*   Updated: 2024/09/17 17:44:24 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{

}*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	if (size <= size_dest)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && i < ft_strlen(src) && i < size - size_dest - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + ft_strlen(src));
}

#include<bsd/string.h>
#include<stdio.h>
/*int	main(void)
{
	char	string_src[] = "This text was added after strlcat";
	char	string_dest[150] = "This he initial text.";
	char	string_dest_bsd[150] = "This he initial text.";

	printf("%u\n", ft_strlcat(string_dest, string_src, 70));
	printf("%zu\n", strlcat(string_dest_bsd, string_src, 70));

	printf("Using ft function: %s\int	main(void)
{
	char	dest[50] = "Bonjour";
	char	src[] = "la ville";
	char	dest1[50] = "Bonjour";
	char	src1[] = "la ville";

	printf("Voici int vrai strlcat : %u\n", ft_strlcat(dest, src, 120));
	printf("Voici dest concat vrai strlcat : %s\n", dest);
	printf("Voici int vrai strlcat : %ld\n", strlcat(dest1, src1, 120));
	printf("Voici dest concat vrai strlcat : %s\n", dest1);
	return (0);
}
n", string_dest);
	printf("Using bsd function: %s\n", string_dest_bsd);
}*/

int	main(void)
{
	char	dest[50] = "Bonjour";
	char	src[] = "la ville";
	char	dest1[50] = "Bonjour";
	char	src1[] = "la ville";

	printf("Voici int vrai strlcat : %u\n", ft_strlcat(dest, src, 120));
	printf("Voici dest concat vrai strlcat : %s\n", dest);
	printf("Voici int vrai strlcat : %ld\n", strlcat(dest1, src1, 120));
	printf("Voici dest concat vrai strlcat : %s\n", dest1);
	return (0);
}

