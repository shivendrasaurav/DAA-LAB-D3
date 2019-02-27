#include<stdio.h>
int ne=1,min,mincost,cost[10][10],visited[10];
int main(){
	int n,i,j,a,b,u,v;
	printf("Enter no of vertices : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter Cost At (%d,%d)",i+1,j+1);
			scanf("%d",&cost[i][j]);
		}
	}
	if(cost[i][j]==0)
		cost[i][j]=999;
	printf("Edges of spanning tree are: \n\n");
	visited[1]=1;
	while(ne<n){
		for(i=0;min=999,i<n;i++){
			for(j=0;j<n;j++){
				if(cost[i][j]<min){
					if(visited[i]=0)
						continue;
					else{
						min=cost[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}
		}
		if(visited[v]==0){
			printf("\n%d Edge (%d,%d) = %d\n",ne++,a,b,min);
			mincost+=min;
			visited[b]=1;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\n\nMin Cost : %d",mincost);
}
