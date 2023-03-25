#include <stdio.h>

int main()
{
    int n,m;
    int arr1[n];
    int arr2[m];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
        
    }
    int arr3[n+m];
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int i=n;i<n+m;i++){
        arr3[i]=arr2[i-n];
    }
    for(int j=0;j<n+m;j++){
        printf("%d ",arr3[j]);
    }
    printf("\n");
    for(int j=0;j<n+m-1;j++){
        for(int i=0;i<n+m-j-1;i++){
            if(arr3[i]>arr3[i+1]){
                int temp=arr3[i];
                arr3[i]=arr3[i+1];
                arr3[i+1]=temp;
            }
        }
    }
    for(int j=0;j<n+m;j++){
        printf("%d ",arr3[j]);
    }
    printf("\n");
    
    
    return 0;
}
