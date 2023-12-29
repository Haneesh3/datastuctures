#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    char items[MAX_SIZE];
};
void initialize(struct Stack* stack) {
    stack->top = -1;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
void push(struct Stack* stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = item;
}
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}
int areParenthesesBalanced(char expr[]) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            push(&stack, expr[i]);
        } else if (expr[i] == ')' || expr[i] == ']' || expr[i] == '}') {
            if (isEmpty(&stack)) {
                return 0; 
            }
            char popped = pop(&stack);
            if ((expr[i] == ')' && popped != '(') ||
                (expr[i] == ']' && popped != '[') ||
                (expr[i] == '}' && popped != '{')) {
                return 0; 
            }
        }
    }

    return isEmpty(&stack); 
}

int main() {
    char expr[MAX_SIZE];
    printf("Enter an expression: ");
    scanf("%s", expr);

    if (areParenthesesBalanced(expr)) {
        printf("Parentheses are balanced\n");
    } else {
        printf("Parentheses are not balanced\n");
    }

    return 0;
}
