#include <stdio.h>


int main()
{
    int array[100],i,j,k,n,temp;

    while(scanf("%d",&n) != EOF){
        for(i=0; i<n; i++){
        scanf("%d",&array[i]);
        }

        for(i=0; i<n-1; i++){
            for(j=i+1; j<n; j++){
                if(array[i] > array[j]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }

            }
        }
        for(i=0; i<n; i++){
                    printf("%d\n",array[i]);

                }
                printf("\n");
    }


    return 0;
}
