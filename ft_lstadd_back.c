#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!new)
		return;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		if (last)
			last->next = new;
	}
}
