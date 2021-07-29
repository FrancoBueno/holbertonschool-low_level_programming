#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: takes in a string
 * Return: i, string length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * add_node_end - add node to the end
  * @head: pointer to a pointer
  * @str: takes in a string
  * Return: pointer to the end
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *list;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(str);
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	list = *head;
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
