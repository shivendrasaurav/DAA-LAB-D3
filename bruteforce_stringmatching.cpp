#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef long long int limit;
limit j,i,k;
char str[99],sstr[9];

void replaceall(){
	char newstr[10];
	printf("\n\nEnter String To Replace : ");
	scanf("%s",newstr);
	limit m=strlen(sstr),n=strlen(str),k;
	for(i=0;i<n;i++){
		j=0;
		while(j<m&&str[i+j]==sstr[j])
		    j++;
		if(j==m){
			for(k=0;k<strlen(newstr);k++){
			str[i+k]=newstr[k];
			}
		}
	}
	printf("\n\nNew String : %s",str);	    

}

void string_match(){
	char newstr[10],a;
	limit m=strlen(sstr),n=strlen(str),k;
	for(i=0;i<n;i++){
		j=0;
		while(j<m&&str[i+j]==sstr[j])
		    j++;
		if(j==m){
		    printf("\nPattern Found At Position : %d",i);
		}
	    printf("\nDo You Want To Replace All The Instances (Y/N) : ");
	    scanf("%c",&a);
		if(a=='Y'||a=='y'){
			replaceall();
			}
		}
	}


int main(){
	float st=clock();
	srand(time(0));
	for(i=0;i<99;i++){
		str[i]=rand()%(102 + 1 - 97) + 97;
		}
	for(i=0;i<3;i++){
		sstr[i]=rand()%(102 + 1 - 97) + 97;
	}
	printf("%s",str);
	printf("\n%s",sstr);
	string_match();	
}

