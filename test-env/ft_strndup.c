#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*copy;

	if (n > strlen(s))
		n = strlen(s);
	copy = (char *) malloc((n) * sizeof(char));
	if (!copy)
		return (NULL);
	n--;
	copy[n] = '\0';
	while ((int)n >= 0)
	{
		printf("%c\n", s[n]);
		copy[n] = s[n];
		n--;
	}
	return (copy);
}


int main(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n%s\n", ft_strndup(s, 3), strndup(s, 3)); 
}
