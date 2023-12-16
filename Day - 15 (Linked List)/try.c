#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head, int data) {
    if (head == NULL) {
        head = (struct Node*)malloc(sizeof(struct Node));
        head->data = data;
        head->next = NULL;
    } else {
        struct Node* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = (struct Node*)malloc(sizeof(struct Node));
        curr->next->data = data;
        curr->next->next = NULL;
    }
    return head;
}

void display(struct Node* head) {
    struct Node* start = head;
    while (start != NULL) {
        printf("%d ", start->data);
        start = start->next;
    }
}

int main() {
    struct Node* head = NULL;
    int N, ele;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ele);
        head = insert(head, ele);
    }

    printf("Linked List: ");
    display(head);

    return 0;
}
