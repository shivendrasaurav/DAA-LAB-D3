#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void merge(int a[],int low,int mid, int high){
	int c[20];
	int i=low,j=mid+1,k=low,x;
	while(i<=mid && j<=high){
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	if(i>mid){
		for(x=j;x<=high;x++)
			c[k++]=a[x];
	}
	else{
		for(x=i;x<=mid;x++)
			c[k++]=a[x];
	}
	for(i=low;i<=high;i++)
		a[i]=c[i];
}

void mergesort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

int main(){
	float start_t=clock();
	int max=10,i,j,temp;
	srand(time(0));
	int a[max];
	for(i=0;i<max;i++){
		a[i]=rand();
		printf("%d, ",a[i]);
	}
	mergesort(a, 0, max-1);
	printf("\n");
	for(i=0;i<max;i++){
		printf("%d, ",a[i]);
	}
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Sort : %f",total_t);
	return 0;
}
