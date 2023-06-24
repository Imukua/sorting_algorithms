#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list.
 * @list: A pointer to the head of the doubly linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2)
{
    (*node1)->next = node2->next;
    if (node2->next != NULL)
        node2->next->prev = *node1;
    node2->prev = (*node1)->prev;
    node2->next = *node1;
    if ((*node1)->prev != NULL)
        (*node1)->prev->next = node2;
    else
        *list = node2;
    (*node1)->prev = node2;
    *node1 = node2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using insertion sort algorithm.
 * @list: A pointer to the head of a doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *prev, *next;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;
    while (current != NULL)
    {
        prev = current->prev;
        next = current->next;

        while (prev != NULL && prev->n > current->n)
        {
            swap_nodes(list, &prev, current);
            print_list((const listint_t *)*list);
            prev = current->prev;
        }

        current = next;
    }
}
