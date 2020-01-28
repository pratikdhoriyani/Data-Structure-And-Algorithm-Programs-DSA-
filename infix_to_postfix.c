#include<stdio.h>
#include<conio.h>

int top=-1,get=0,put=0;
char stack[10];

int priority(char c)
{
    if(c == '#')
    {
        return 0;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    else if(c == '*' || c == '/')
    {
        return 2;
    }
    else if(c == '^')
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

int rank1(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void push(char x)
{
    top = top + 1;
    stack[top] = x;
}

char pop()
{
    return stack[top--];
}


int main()
{
    int i;
    char arr[] = {'a','+','b','-','c','#'};
    printf("Given Expression : \n");
    for(i=0;i<(sizeof(arr)/sizeof(char))-1;i++)
    {
        printf("%c ",arr[i]);
    }
    push('#');
    char polish[20];
    int rank = 0;
    char next = arr[get++];
    while(next != '#')
    {
        while((priority(next)) <= (priority(stack[top])))
        {
            polish[put] = pop();
            rank = rank + rank1(polish[put]);
            put++;
        }
        push(next);
        next = arr[get++];
    }

    while(stack[top] != '#')
    {
        polish[put] = pop();
        rank = rank + rank1(polish[put]);
        put++;
    }
    polish[put]='\0';
    if(rank==1)
    {
        printf("\n\nPolish form :  %s",polish);
        printf("\nRank : %d",rank);
    }
    else
    {
        printf("Something Problem in Conversion...");
    }

    return 0;
}





