#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

int is_palindrome(listint_t **head) {
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *prev = NULL;
    listint_t *temp = NULL;

    while (fast && fast->next) {
        fast = fast->next->next;
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    if (fast) {
        slow = slow->next;
    }


    while (prev && slow) {
        if (prev->n != slow->n) {
            return 0;
        }
        prev = prev->next;
        slow = slow->next;
    }

    return (1); 
}

int main() {
    listint_t *head = NULL;

    int result = is_palindrome(&head);
    if (result) {
        printf("The linked list is a palindrome.\n");
    } else {
        printf("The linked list is not a palindrome.\n");
    }

    return (0);
}

