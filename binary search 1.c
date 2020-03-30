#include <stdio.h>


int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int start,mid,end,key;
    start = 0;
    end = 9;
    key = 2;

    do{
        mid = (start+end)/2;

        if(array[mid]==key){
            printf("Find : %d",mid+1);
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
