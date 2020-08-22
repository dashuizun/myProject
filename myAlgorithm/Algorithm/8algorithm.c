#include <stdlib.h>  
#include <stdio.h>

void showDrr(int *array,int len);       //展示
void bubbleSort(int *arr,int len);      //冒泡排序
void selectSort(int *arr, int len);     //直接选择排序
void insertSort(int *arr, int len);     //直接插入排序
void shellSort(int a[],int n);          //希尔排序
void HeapSort(int *arr,int len);        //堆排序
void Adjust(int *arr,int start,int end);    //堆排序
void cs(int *arr, int len);
int man ()
{
    int drr[]={1,5,9,2,4,6,3,8,7,10};
    int num = sizeof(drr) / sizeof(drr[0]);
    HeapSort(drr, num);
    showDrr(drr, num);
    return 0;
}

void showDrr(int *array,int len){
    for(int i=0;i<len;i++){
        printf("%d",array[i]);
    }
}
//从小到大
//冒泡排序
void bubbleSort(int *arr,int len){
    int temp=0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    
}

//直接选择排序
void selectSort(int *arr, int len){
    int temp;
    int min=0;
    for (int i = 0; i < len; i++)
    {
        min = i;
        for (int j = i + 1; j < len; j++){
            if (arr[j]<arr[min])
            {
                temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
            
        }
        
    }
    
}

//直接插入
/*
65 27 59 64 58 （文中仅细化了第四次插入过程）
第1次插入: 27 65 59 64 58
第2次插入: 27 59 65 64 58
*/
void insertSort(int *arr, int len){
    int temp=0;
    for (int i = 1; i < len; i++)
    {
        temp=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
}

//希尔排序
void shellSort(int arr[], int len){
    int dk, i, j, temp;
    //小组的个数，小组的个数从n/2个，变成n/4，再变变变，越来越少，直到变成一个
    for (dk = len/2; dk >= 1; dk = dk/2) {
    	//因为这个小组的元素使隔了dk个，所以排的时候也要隔dk个
    	//有点像归并排序
        for (i = dk; i < len; i++) {
            if(arr[i] < arr[i-dk])
            {
                temp = arr[i];
                for (j = i-dk; j >= 0 && temp < arr[j]; j -= dk) {
                    arr[j+dk] = arr[j];
                }
                arr[j+dk] = temp;
            }
        }
    }
}

//堆排序
void Adjust(int *arr,int start,int end)
{
    assert(arr != NULL);
    int tmp = arr[start];
    for(int i = 2*start + 1;i <= end;i = 2*i+1)
    {
        if(i < end && arr[i] < arr[i + 1])//是否有右孩子
        {
            i++;//最大值的下标
        }
        if(arr[i] > tmp)
        {
            arr[start] = arr[i];
            start = i;
        }
        else
        {
            break;
        }
    }
    
    arr[start] = tmp;
}
void HeapSort(int *arr,int len)
{
    for(int i = (len - 1 - 1)/2;i >= 0;i--)
    {
        Adjust(arr,i,len - 1);
    }
    for(int i = 0;i <= len - 1;i++)
    {
        int tmp = arr[0];
        arr[0] = arr[len - 1 - i];
        arr[len - 1 - i] = tmp;
        Adjust(arr,0,len - 1 - 1 - i);
    }
}