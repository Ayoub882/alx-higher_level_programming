#include <stddef.h>

/**
 * Definition for singly-linked list.
 * struct listint_s {
 *     int n;
 *     struct listint_s *next;
 * };
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the head of the linked list.
 *
 * Return: 0 if not a palindrome, 1 if a palindrome.
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *prev = NULL, *temp;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;

	/*Reverse the first half of the linked list*/
	temp = slow->next;
	slow->next = prev;
	prev = slow;
	slow = temp;
	}

	/*If the number of nodes is odd, move slow one step forward*/
	if (fast != NULL)
		slow = slow->next;

	/*Compare the reversed first half with the second half*/
	while (prev != NULL && slow != NULL)
	{
		if (prev->n != slow->n)
			return (0);
		prev = prev->next;
		slow = slow->next;
	}

	return (1);
}

