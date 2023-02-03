#include<stdio.h>
main()
{
    int arr[]={3,4,-2,-8,9};
    int *j,*k;
    j=&arr[4];
    k=(arr+4);
    if(j==k)
    printf("same location");
    else
    printf("not same location");
}