#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_elem;
    void *content;

    while (lst)
    {
        content = f(lst->content);
        if (!content)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        new_elem = ft_lstnew(content);
        if (!new_elem)
        {
            del(content);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_elem);
        lst = lst->next;
    }
    return (new_list);
}

