



#include "../libft.h"



char	*ft_strdup(const char *s)
{
	int	size;
	char *dup;
	int	i;

	i = 0;
	size = ft_strlen(s);
	dup = (char *) malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while(s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
