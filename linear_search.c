#include<stdio.h>

int main()
{
    int arr[20],i,x,n;
    printf("Enter length of array? ");
    scanf("%d",&n);

    printf("\nEnter array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);

    printf("\nEnter element for search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i<n)
        printf("Element %d found at index %d",x,i);
    else
        printf("Element not found");

    return 0;
}
