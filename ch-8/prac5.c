#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct {
    int top;
    char items[MAX];
} Stack;


void initStack(Stack *s) {
    s->top = -1;
}


int isEmpty(Stack *s) {
    return s->top == -1;
}


int isFull(Stack *s) {
    return s->top == MAX - 1;
}


void push(Stack *s, char elem) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
    } else {
        s->items[++(s->top)] = elem;
    }
}


char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return '\0';
    } else {
        return s->items[(s->top)--];
    }
}


char peek(Stack *s) {
    if (isEmpty(s)) {
        return '\0';
    } else {
        return s->items[s->top];
    }
}


int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^');
}


int precedence(char ch) {
    if (ch == '^') {
        return 3;
    } else if (ch == '*' || ch == '/' || ch == '%') {
        return 2;
    } else if (ch == '+' || ch == '-') {
        return 1;
    } else {
        return 0;
    }
}


void infixToPostfix(char infix[], char postfix[]) {
    Stack s;
    initStack(&s);
    int i = 0, j = 0;
    char ch;
    
    while (infix[i] != '\0') {
        ch = infix[i];


        if (isalnum(ch)) {
            postfix[j++] = ch;
        }

        else if (ch == '(') {
            push(&s, ch);
        }

        else if (ch == ')') {
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s); 
        }

        else if (isOperator(ch)) {
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(ch)) {
                postfix[j++] = pop(&s);
            }
            push(&s, ch);
        }
        i++;
    }
    

    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];
    
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    
    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);
    
    return 0;
}
