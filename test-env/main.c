# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>
# include <limits.h>

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*copy;

	if (n > ft_strlen(s))
		n = ft_strlen(s);
	copy = (char *) malloc((n) * sizeof(char));
	copy[n] = '\0';
	n--;
	while (n >= 0)
	{
		write(1, &s[n], 1);
		copy[n] = s[n];
		n--;
	}
	return (copy);
}

int	ft_index_strchr(char const *s, char c)
{
	int	index;

	index = 0;
	while (*(s + index) != '\0')
	{
		if (*(s + index) == c)
			return (index);
		index++;
	}
	return (index);
}

int	ft_count_not_strchr(char const *s, char c)
{
	int	i;
	int	count;
	int	tracker;

	i = 0;
	count = 0;
	tracker = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			tracker = 0;
		if (s[i] != c && tracker == 0)
		{
			count++;
			tracker = 1;
		}
		i++;
	}
	return (count);
}



int main(void)
{
	char s1[] = "testctestctestctestctest";
	char c1 = 'c';
	int n1 = ft_count_not_strchr(s1, c1);	
	int i = 0;
	int j = 0;
	int size;

	printf("%d\n", n1);
	char **d1 = (char **) malloc ((n1 + 1) * sizeof(char *));
	while (s1[i] != '\0')
	{
		if (s1[i] == c1)
			i++;
		else
		{
			size =  ft_index_strchr(s1 + i, c1);
			d1[j] = ft_strndup(s1 + i, size);
			j++;
			i += size; 
		}
	}
	d1[j] = 0;
	i = 0;
	while(d1[i] != 0)
	{
		printf("%s\n", d1[i]);
		i++;
	}
	char s2[] = {"cccccccctestctestctestcte\rstctest"};
	char c2 = 'c';
	int n2 = ft_count_not_strchr(s2, c2);
	printf("%d\n", n2);	
	char s3[] = {"testctestctestcte\tstcte\vstccccccccc"};
	char c3 = 'c';
	int n3 = ft_count_not_strchr(s3, c3);
	printf("%d\n", n3);	
	char s4[] = {"testctestctestc  \ntestctest"};
	char c4 = 'c';
	int n4 = ft_count_not_strchr(s4, c4);
	printf("%d\n", n4);
	char s5[] = {"c\t\t\t\ttestctestctestctest\vctestcccc"};
	char c5 = 'c';
	int n5 = ft_count_not_strchr(s5, c5);
	printf("%d\n", n5);	
	char s6[] = {"c\t\ttestctestctestctestctest"};
	char c6 = 'c';
	int n6 = ft_count_not_strchr(s6, c6);
	printf("%d\n", n6);
}
