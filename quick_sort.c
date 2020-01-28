#include<stdio.h>
void Q(int a[],int lb,int ub)
{
    int i,j,flag=1;
    int tt,k;

    if(lb<ub)
    {
        i=lb;
        j=ub+1;
        int key=a[lb];


        while(flag)
        {
            i=i+1;
            while(a[i]<key)
            {
                i=i+1;
            }
            j=j-1;
            while(a[j]>key)
            {
                j=j-1;
            }

            if(i<j)
            {
              int t;
              t=a[i];
              a[i]=a[j];
              a[j]=t;
            }
            else
                flag=0;
        }

        tt=a[j];
        a[j]=a[lb];
        a[lb]=tt;

        Q(a,lb,j-1);
        Q(a,j+1,ub);
    }
}
int main()
{
    int i,t,n;
    int arr[50];
    printf("How many element that has to be sorted ? ");
    scanf("%d", &n);
    printf("\n");
    for(t=0; t<n; t++)
    {
        printf("Enter value for element no.%d: ",t+1);
        scanf("%d",&arr[t]);
    }
    Q(arr,0,n-1);

    printf("\nSorted array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

}
