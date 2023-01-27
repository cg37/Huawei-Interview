#include <stdio.h>

void uptodown(int *arr, int len) {
    for (int i = len-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
} 
void downtoup(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int num=0, i, j;
    int arr[1000];
    int flag = 0;
    int tmp;

    scanf("%d\n", &num);
    for(int i = 0; i < num; i++) {
        scanf ("%d", &arr[i]);
    }
    for(i=0;i<num-1;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i] > arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    scanf("%d", &flag);
    flag == 1?uptodown(arr, num):downtoup(arr, num);
}