#include <stdio.h>
//C PROGRAM FOR PERFORMMING LINEAR SEARCH......
int linearsearch(int a[],int val,int n){
    for(int i=0;i<n;i++)
    {
        if(a[i]==val){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[20];
    int val;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);  
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&val);
    int res=linearsearch(a,val,n);
    if(res==-1){
        printf("The value entered is not present in the list");
    }
    else{
        printf("The value entered is present at the %d",res);
    }
    return 0;
}
