#include "lists.h"

/**
 * check_cycle - checks linked list contns cycle
 * @list: linked list check
 *
 * Return: 1 if list has cycle, 0 if no
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;

if (!list)
return (0);

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
return (1);
}

return (0);
}
