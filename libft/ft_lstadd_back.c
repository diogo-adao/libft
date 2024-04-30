#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (!lst || !new)
        return ;
    ptr = *lst;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new;
}

/* int main()
{
    int data = 1;
    int data2 = 2;
    int data3 = 3;

    t_list *head = malloc(sizeof(t_list));
    head->content = (int *)data;
    head->next = NULL;

    t_list *ptr = malloc(sizeof(t_list));
    ptr->content = (int *)data2;
    ptr->next = NULL;

    head->next = ptr;

    t_list *new = malloc(sizeof(t_list));
    new->content = (int *)data3;
    new->next = NULL;

    ft_lstadd_back(&head, new);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->content);
        ptr = ptr->next;
    }
    return (0);
} */