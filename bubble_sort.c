#include<stdio.h>
#include<conio.h>
void bubbleSort(int arr[], int n);
int main()
{
    int arr[100], n, i;
    printf("How many element that has to be sorted ? ");
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter value for element no.%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printf("\n\nFinally sorted array is:\n");
    for(i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void bubbleSort(int arr[], int no)
{
    int i, j, temp;
    for(i=no-2; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
