#include <stdio.h>
#include <stdlib.h>
#define N 10




void merge(int arr[], int low, int mid, int high){
    int i, k;
    int *tmp = (int *)malloc((high-low+1)*sizeof(int));
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;

    for(k=0; left_low<=left_high && right_low<=right_high; k++){  
        if(arr[left_low]<=arr[right_low]){
            tmp[k] = arr[left_low++];
        }else{
            tmp[k] = arr[right_low++];
        }
    }

    if(left_low <= left_high)
	{ 
    for(i=left_low;i<=left_high;i++)
        tmp[k++] = arr[i];
    }

    if(right_low <= right_high)
	{
        for(i=right_low; i<=right_high; i++)
            tmp[k++] = arr[i];
    }

    for(i=0; i<high-low+1; i++)
        arr[low+i] = tmp[i];
    free(tmp);
    return;
}

void merge_sort(int arr[], unsigned int first, unsigned int last){
    int mid = 0;
    if(first<last){
        mid = (first+last)/2; 
        merge_sort(arr, first, mid);
        merge_sort(arr, mid+1,last);
        merge(arr,first,mid,last);
    }
    return;
}

int main(){
    int i;
    int a[N]={45,34,65,28,57,85,13,56,58,48};

    printf ("����ǰ \n");
    for(i=0;i<N;i++)
        printf("%d\t",a[i]);

    merge_sort(a,0,N-1);  

    printf ("\n ����� \n");
    for(i=0;i<N;i++)
        printf("%d\t",a[i]); printf("\n");

    system("pause");
    return 0;
}
