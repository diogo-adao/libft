#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    t_list *ptr;

    if (!lst)
        return ;
    ptr = lst;
    while (ptr->next != NULL)
        ptr = ptr->next;
    return (ptr);
}

/* int main()
{
    int data = 1;
    int data2 = 2;
    int data3 = 3;

    t_list *head = malloc(sizeof(t_list));
    head->content = (int *)data;
    head->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = (int *)data2;
    node2->next = NULL;

    head->next = node2;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = (int *)data3;
    node3->next = NULL;

    node2->next = node3;

    t_list *last = ft_lstlast(head);
    printf("%d", last->content);
    return (0);
} */