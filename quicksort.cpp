#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int partition(int a[],int l,int r){
	int pivot=a[l];
	int i=l+1,j=r,temp;
	while(i<=j){
		while(pivot>a[i] && i<=r)
		i++;
		while(pivot<a[j] && j>=l)
		j--;
		if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else{
			temp=a[l];
			a[l]=a[j];
			a[j]=temp;
			return j;
		}
	}
		
}

void quicksort(int a[], int low, int high){
	int s;
	if(low<high){
		s=partition(a,low,high);
		quicksort(a,low,s-1);
		quicksort(a,s+1,high);
	}
}

int main(){
	float start_t=clock();
	int max=21,i,j,temp;
	srand(time(0));
	int a[max];
	for(i=0;i<max;i++){
		a[i]=rand()%100;
		printf("%d, ",a[i]);
	}
	quicksort(a, 0, max-1);
	printf("\n");
	for(i=0;i<max;i++){
		printf("%d, ",a[i]);
	}
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Sort : %f",total_t);

}
