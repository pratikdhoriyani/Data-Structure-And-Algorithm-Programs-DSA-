#include <stdio.h>

int MAXSIZE = 5;
int stack[5];
int top = -1;

int isempty()
{
   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull()
{
   if(top == MAXSIZE-1)
      return 1;
   else
      return 0;
}

int peek()
{
   return stack[top];
}

int pop()
{
   int data;
   if(!isempty())
    {
      data = stack[top];
      top = top - 1;
      return data;
    }
   else
    {
      printf("Stack is empty.\n");
    }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   }
   else
   {
      printf("Stack is full.\n");
   }
}

int main()
{
   push(56);
   push(34);
   push(9);
   push(1);
   push(2);
   push(153);

   printf("\nElement at top of the stack: %d\n" ,peek());

   pop();
   pop();
   pop();

   printf("\nElements: \n");

   int i;
   for(i=0;i<=top;i++)
   {
       printf("%d ",stack[i]);
   }

   return 0;
}
