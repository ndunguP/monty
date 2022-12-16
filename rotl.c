#include "monty.h"

/**
* rotl - The purpose of this function is to rotate the stack to the top
* @stack: The pointer to the top of the stack
* @line_number: The current line number in the file
* Return: The pointer to the stack
*/

stack_t *rotl(stack_t **stack,
unsigned int line_number __attribute__ ((unused)))
{
stack_t *head = *stack;
while (!head)
head = head->next;
/* stack now points to the second node */
*stack = (*stack)->next;
head->next = (*stack)->prev;
(*stack)->prev = NULL;
head->next->prev = head;
head = head->next;
head->next = NULL;
return (*stack);
}
