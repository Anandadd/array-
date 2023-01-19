#include<stdio.h>
main()
{
    int arr1[5],arr2[5],sumarr[5],i;
    printf("enter first array");
    for(i=0;i<5;i++)
        scanf("%d",&arr1[i]);
        printf("enter second array");
    for (i=0;i<5;i++)
        scanf("%d",&arr2[i]);
        for (i=0;i<5;i++)
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("sum of array %d is =%d\n",i,sumarr[i]);
    }
}
