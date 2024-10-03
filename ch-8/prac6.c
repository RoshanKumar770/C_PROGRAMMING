#include <stdio.h> //infix to postfix
#include <ctype.h> // For isdigit() function

int stack[20];
int top = -1;

void push(int x)
{
  stack[++top] = x;
}

int pop()
{
  return stack[top--];
}

int main()
{
  char exp[20];
  char *e;
  int n1, n2, n3, num;

  printf("Enter the expression :: ");
  scanf("%s", exp); // This is fine for a small input like postfix expression

  e = exp;
  while (*e != '\0')
  {
    if (isdigit(*e))
    {                 // Check if the character is a digit
      num = *e - '0'; // Convert character digit to integer
      push(num);      // Push it onto the stack
    }
    else
    {
      // Pop the top two operands from the stack
      n1 = pop();
      n2 = pop();

      // Perform the operation based on the operator
      switch (*e)
      {
      case '+':
        n3 = n2 + n1;
        break;
      case '-':
        n3 = n2 - n1;
        break;
      case '*':
        n3 = n2 * n1;
        break;
      case '/':
        n3 = n2 / n1;
        break;
      default:
        printf("Invalid operator encountered!\n");
        return -1;
      }
      // Push the result of the operation back onto the stack
      push(n3);
    }
    e++;
  }
  // treee
  //  The final result should be the only value left in the stack
  printf("\nThe result of expression %s = %d\n\n", exp, pop());
  return 0;
}