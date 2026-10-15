








#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*obj = malloc (count * size);
	return (ft_memset(obj,0,count * size));
}
