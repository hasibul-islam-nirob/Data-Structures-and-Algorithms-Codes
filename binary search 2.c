#include <stdio.h>


int main()
{
    int array[100],start,mid,end,key,i,n;

    printf("Enter total Array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter Fine key : ");
    scanf("%d",&key);

    start = 0;
    end = n-1;

    do{
        mid = (start+end)/2;

        if(array[mid]==key){
            printf("Find : %d\n",mid+1);
            break;
        }
        else if(array[mid] > key){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }
    while(start <= end);





    return 0;
}
