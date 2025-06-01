#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;

	nstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	if(!nstr)
		return ((char *) NULL);
	ft_strlcat(nstr,s1,ft_strlen(s1)+ft_strlen(s2));
	ft_strlcat(nstr,s2,ft_strlen(s1)+ft_strlen(s2));
	return (nstr);
}
