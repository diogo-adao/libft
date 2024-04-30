#include "libft.h"

int 	ft_lstsize(t_list *lst)
{
    int count;
    t_list *ptr;

    if (!lst)
        return (0);
    ptr = lst;
    count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return (count);
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

    int n = ft_lstsize(head);
    printf("There is %d nodes", n);
    return (0);
} */