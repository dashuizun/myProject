#include <stdlib.h>  
#include <stdio.h>

void showDrr(int *array,int len);   //展示
void bubbleSort(int *arr,int len);  //冒泡排序
void selectSort(int *arr, int len); //直接选择排序
void insertSort(int *arr, int len); //直接插入排序
void shellSort(int a[],int n);      //希尔排序
void cs(int *arr, int len);
int main ()
{
    int drr[]={1,5,9,2,4,6,3,8,7,10};
    int num = sizeof(drr) / sizeof(drr[0]);
    selectSort(drr, num);
    showDrr(drr, num);
    return 0;
}

void showDrr(int *array,int len){
    for(int i=0;i<len;i++){
        printf("%d",array[i]);
    }
}
//选择
void selectSort(int *arr, int len){
    int i,j,temp,min=0;
    for (i = 0; i < len; i++)
    {
        min = i;
        for (j = i+1; j < len; j++)
        {
            if (arr[j]<arr[min])
            {
                temp=arr[j];
                arr[j]=arr[min];
                arr[min]=temp;
            }
            
        }
        
    }
    
}
//插入
void insertSort(int *arr, int len){
    int i,j,temp;
    for (i = 1; i < len; i++)
    {
        j = i-1;
        while (arr[j]>arr[j+1] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    
}

//希尔
void shellSort(int *arr, int len){
    int dk,i,j,temp;
    for (dk = len/2; dk >= 1; dk/=2)
    {
        for (i = dk; i < len; i++)
        {
            if (arr[i] < arr[i-dk])
            {
                temp=arr[i];
                for (j = i-dk; j>=0 && arr[j]>temp; j-=dk)
                {
                    arr[j+dk]=arr[j];
                }
                arr[j+dk] = temp;
            }
            
        }
        
    }
    
}