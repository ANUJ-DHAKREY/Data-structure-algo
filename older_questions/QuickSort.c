#include<stdio.h>
int Input(int a[]){
	int max,i=0;
	printf("\nInput total number of elements:");
	scanf("%d",&max);  
	for(;i<max;++i){
		printf("Input a number[%d/%d]:",i+1,max);
		scanf("%d",&a[i]);
	}
return max;
}
void Print(int a[],int max){
	int i;
	for(i=0;i<=max;++i)
	printf("\t%d",a[i]);
}
void PrintQS(int a[],int low,int max){
	int i;
	printf("\n");
	for(i=0;i<low;++i)
	printf("   ");
	for(i=low;i<=max;++i)
	printf("  %d",a[i]);
	printf("\n");
}
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int Partition (int a[],int low,int high){
    // pivot (Element to be placed at right position)
    int i,j,pivot;
    pivot = a[high];
    printf("\n Pivot element = [ %d ]",pivot);
    i = (low - 1);  // Index of smaller element
    for (j = low; j <= high- 1; j++) {
        // If current element is smaller than or equal to pivot
        if (a[j] <= pivot) {
            i++;    // increment index of smaller element
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i + 1],&a[high]);
    return (i + 1);
}
void QuickSort(int a[],int low,int high){
    int p;
    if (low < high) {
        /* pi is partitioning index, arr[p] is now at right place */
        p=Partition(a,low,high);
       // printf("\nAfter partition(%d,%d) number %d is fixed at index[%d]:\t",low,high,a[p],p);
        PrintQS(a,low,high);
        QuickSort(a,low,p - 1);  // Before pivot
        QuickSort(a, p + 1, high); // After pivot
    }
}
int PartitionDisplay (int a[],int low,int high){
    // pivot (Element to be placed at right position)
    int i,j,pivot;
    pivot = a[high];
    printf("\n Pivot selected as %d",pivot);
    i = (low - 1);  // Index of smaller element
    for (j = low; j <= high- 1; j++) {
        // If current element is smaller than or equal to pivot
        //printf("\n Current Index [%d] \n",j);
        if (a[j] <= pivot) {
            i++;    // increment index of smaller element
            swap(&a[i],&a[j]);
            printf("\n At index [%d] swaped(%d ,%d):\t",j,a[j],a[i]);
            PrintQS(a,0,j);
        }
        else  printf("\n At index [%d] NO CHANGE",j);
    }
    swap(&a[i + 1],&a[high]);
    printf("\n Finally pivot placed at index[%d] swaped(%d ,%d):\t",i+1,a[high],a[i+1]);
    PrintQS(a,0,high);
    return (i + 1);
}
void Copy(int from_array[],int to_array[],int length){
    int i;
    for(i=0;i<=length;i++)
        to_array[i]=from_array[i];
}
int main(){
	//int a[]={14,17,16,13,11,18,19,20,10,12,15};
	//int a[]={2,8,7,1,3,5,6,4};
	int a[]={1,3,5,7,9,2,4,6,8};
	//int temp[11];
	int max=8;
	//Input(a);
	printf("\nList  of  elements:  ");
	Print(a,max);
	//printf("\nPARTITION Steps for list:   ");
	//Copy(a,temp,max);
    //Print(temp,max);
    //PartitionDisplay(temp,0,max);

	printf("\nQuick Sort  **START**");
	QuickSort(a,0,max);
	printf("\nQuick Sort    **END**");
	printf("\nSorted by Quick Sort:");
	Print(a,max);
	return 0;
}
