#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*dest;

	dest = (char *)malloc(sizeof (char) * (ft_strlen(s1) + 1));
	if (dest == NULL)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		dest[a] = s1[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
