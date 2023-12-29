#include <stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int isEmpty(struct Node* top) {
    return top == NULL;
}
void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to the stack.\n", data);
}
int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack is empty!\n");
        exit(1);
    }
    struct Node* temp = *top;
    int data = temp->data;
    *top = (*top)->next;
    free(temp);
    return data;
}
int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        exit(1);
    }
    return top->data;
}
void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        return;
    }
    struct Node* temp = top;
    printf("Elements in the stack: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    printf("Top element: %d\n", peek(top));

    printf("Popped element: %d\n", pop(&top));

    display(top);

    return 0;
}
