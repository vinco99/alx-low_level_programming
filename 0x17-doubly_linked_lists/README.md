				**0x17-doubly_linked_lists**

**0-print_dlistint.c** - a function that prints all the elements of a dlistint_t list.
			Prototype: size_t print_dlistint(const dlistint_t *h);
			Returns: the number of nodes

**1-dlistint_len.c** - a function that returns the number of elements in a linked dlistint_t list.
			Prototype: size_t dlistint_len(const dlistint_t *h);

**2-add_dnodeint.c** - a function that adds a new node at the beginning of a dlistint_t list.
			Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
			Returns: the address of the new element, or NULL if it failed

**3-add_dnodeint_end.c** - a function that adds a new node at the end of a dlistint_t list.
			Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
			Returns: the address of the new element, or NULL if it failed

**4-free_dlistint.c** - a function that frees a dlistint_t list.
			Prototype: void free_dlistint(dlistint_t *head);

**5-get_dnodeint.c** - a function that returns the nth node of a dlistint_t linked list.
			Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
			where index is the index of the node, starting from 0
			if the node does not exist, returns NULL

**6-sum_dlistint.c** -  a function that returns the sum of all the data (n) of a dlistint_t linked list.
			Prototype: int sum_dlistint(dlistint_t *head);
			if the list is empty, return 0

**7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c** -  a function that inserts a new node at a given position.
								Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
								where idx is the index of the list where the new node should be added. Index starts at 0
								Returns: the address of the new node, or NULL if it failed
								if it is not possible to add the new node at index idx, do not add the new node and return NULL

**8-delete_dnodeint.c** - a function that deletes the node at index index of a dlistint_t linked list.
			Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
			where index is the index of the node that should be deleted. Index starts at 0
			Returns: 1 if it succeeded, -1 if it failed
