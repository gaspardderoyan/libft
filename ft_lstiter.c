#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *cursor;

	cursor = lst;
	while (cursor)
	{
		f(cursor->content);
		cursor = cursor->next;
	}
}
