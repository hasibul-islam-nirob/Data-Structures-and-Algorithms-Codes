#include <stdio.h>


int main()
{
    int array[5]={9,8,6,7,4};
    int i,j,k,n,temp;
    n =5;
    i;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            for(k=0; k<n; k++){
                printf("%d",array[k]);

            }
            printf("\n");
        }
        printf("\n");

    }


    return 0;
}
