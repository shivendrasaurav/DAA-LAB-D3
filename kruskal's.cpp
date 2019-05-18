#include<stdio.h>

int a,b,u,v,i,j,k,min,mincost=0,cost[10][10],parent[10]={0},ne=1,n,sorter[100],temp;

int main(){
	printf("Enter Size Of Graph : ");
	scanf("%d",&n);
	
	printf("\nEnter Graph Values : n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	
	while(ne<n){
		for(i=0,min=999;i<n;i++)
			for(j=0;j<n;j++)
				if(cost[i][j]<min)
					if(parent[i]==0){
						min=cost[i][j];
						a=u=i;
						b=v=j;
					}
					if(parent[u]==0||parent[v]==0){
						printf("Edge %d(%d,%d) Cost : %d",ne++,a,b,min);
						mincost+=min;
						parent[b]=1;
					}
				cost[i][j]=cost[j][i]=999;
	}
	printf("\nMincost : %d",mincost);
}
