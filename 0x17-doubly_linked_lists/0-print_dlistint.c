#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    unsigned int c;

    for (c = 0 ; h != NULL ; c++)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
    return (c);
}
