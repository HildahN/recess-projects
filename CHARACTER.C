#include <stdio.h>
#include <conio.h>
#include<time.h>
int main()
{
	int A[7][4]={0,0,0,0,0,1,1,0,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1};
	int B[7][4]={1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0};
	int C[7][4]={0,1,1,0,1,0,0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,1,1,0};
	int D[7][4]={1,1,0,0,1,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,0,1,1,0,0};
	int E[7][4]={1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1};
	int F[7][4]={1,1,1,1,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0};
	int G[7][4]={0,0,1,1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,1,1,1};
	int H[7][4]={1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1};
	int I[7][4]={0,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,1,1};
	int J[7][4]={1,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,1,1,0};
	int K[7][4]={1,0,0,1,1,0,1,0,1,1,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1};
	int L[7][4]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1};
	int M[7][4]={1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1};
	int N[7][4]={1,0,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1};
	int O[7][4]={0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0};
	int P[7][4]={1,1,1,0,1,0,0,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0};
	int Q[7][4]={0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,1,0,1,0,1};
	int R[7][4]={1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,0,1,0,1,0,0,1,1,0,0,1};
	int S[7][4]={0,1,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,0};
	int T[7][4]={0,1,1,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0};
	int U[7][4]={1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1};
	int V[7][4]={1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0};
	int W[7][4]={1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1};
	int X[7][4]={1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1};
	int Y[7][4]={0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0};
	int Z[7][4]={1,1,1,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,1,1,1,0,0,0,0};
	int raw[7][4];
	int x,y,i,h=1;
	//int z=1;
	int n;
	double count=0.00;
	double averageScore,total=0;
	time_t start,finish,now;
	struct tm*ptr;
	char *c;
	double duration;
	start = time(0);
	time(&now);
	ptr= localtime(&now);
	c=asctime(ptr);
	puts(c);
	//getc(stdin);
	//printf("HOW MANY LETTERS ARE YOU GOING TO ATTEMPT,n=");
	//scanf("%d",&n);
	puts("Enter the letters that you have  to attempt");
	char letter[7];
	for(i=0;i<8;i++)
	{
		scanf("%c", &letter[i]);	
	}
	
	// printf("Enter the values for:\n"); 
	 for(i=0;i<8;i++)
	 {
	  printf("Enter the values for:\n");
       int z=1;
	  printf("%c\n",letter[i]);
	
	 /*printf("Enter the characters:\n");*/
	 if(letter[i]=='A')
	 {
	 	float has;
	 	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==A[x][y]){
	
				count+=1;
				has+=1;
			}
		}
	 }
	float per=(has/28)*100;
	 printf("percentage = %.2f\n",per);
	 }
	 else if(letter[i]=='B')
	 {
	 	float k;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==B[x][y]){
				k+=1;
				count+=1;
			}
		}
	 }
	 double q=(k/28)*100;
	 printf(" you scored %.2f\n",q);
	 //printf(" you scored %.2f /28\n",count);
	 //printf("percentage = %.2f\n",has);
	   }
	 
	 else if(letter[i]=='C')
	 {
	 	float op;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==C[x][y]){
				op+=1;
				count+=1;
			}
		}
	 }
	 double kin=(op/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",kin);
	   }
	 
	 else if(letter[i]=='D')
	 {
	 	float kok;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==D[x][y]){
				kok+=1;
				count+=1;
			}
		}
	 }
	  double had=(kok/28)*100;
	 //printf(" you scored %.2f\n",has);
	// printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",had);
	   }
	 
	 else if(letter[i]=='E')
	 {
	 	float as;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==E[x][y]){
				as+=1;
				count+=1;
			}
		}
	 }
	  double kid=(as/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",kid);
	   }
	 
	 else if(letter[i]=='F')
	 {
	 	float man;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==F[x][y]){
				man+=1;
				count+=1;
			}
		}
	 }
	 double bond=(man/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",bond);
	   
	 }
	 else if(letter[i]=='G')
	 {
	 	float mnj;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==G[x][y]){
				mnj+=1;
				count+=1;
			}
		}
	 }
	 double mon=(mnj/28)*100;
	 //printf(" you scored %%/2f\n",count);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",mon);
	   
	 }
	 else if(letter[i]=='H')
	 {
	 	float bhj;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==H[x][y]){
				bhj+=1;
				count+=1;
			}
		}
	 }
	 double drat=(	bhj/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",drat);
	
	 }
	 else if(letter[i]=='I')
	 {
	 	float hol;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==I[x][y]){
				hol+=1;
				count+=1;
			}
		}
	 }
	 double spi=(hol/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",spi);
	
	 }
	 else if(letter[i]=='J')
	 {
	 	float jes;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==J[x][y]){
				jes+=1;
				count+=1;
			}
		}
	 }
	double chi=(jes/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",chi);
	   }
	
	 else if(letter[i]=='K')
	 {
	 	float yes;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==K[x][y]){
				yes+=1;
				count+=1;
			}
		}
	 }
	 double das=(yes/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",das);
	   
	 }
	 else if(letter[i]=='L')
	 {
	 	float cas;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==L[x][y]){
				cas+=1;
				count+=1;
			}
		}
	 }
	 double dad=(cas/28)*100;
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",dad);
	   
	 }
	 else if(letter[i]=='M')
	 {
	 	float res;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==M[x][y]){
				res+=1;
				count+=1;
			}
		}
	 }
	  double she=(res/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",she);
	   
	 }
	 else if(letter[i]=='N')
	 {
	 	float bed;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==N[x][y]){
				bed+=1;
				count+=1;
			}
		}
	 }
	 double wife=(bed/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",wife);
	   
	 }
	 else if(letter[i]=='O')
	 {
	 	float son;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==O[x][y]){
				son+=1;
				count+=1;
			}
		}
	 }
	 double dau=(son/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",dau);
	   
	 }
	 else if(letter[i]=='P')
	 {
	 	float sys;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==P[x][y]){
				sys+=1;
				count+=1;
			}
		}
	 }
	double bru=(sys/28)*100;
	// printf(" you scored %.2f\n",has);
	//printf(" you scored %.2f /28\n",count);
	printf("percentage = %.2f\n",bru);
	  }
	 else if(letter[i]=='Q')
	 {
	 	float qwe;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==Q[x][y]){
				qwe+=1;
				count+=1;
			}
		}
	 }
	 double cha=(qwe/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",cha);
	   
	 }
	 else if(letter[i]=='R')
	 {
	 	float med;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==R[x][y]){
				med+=1;
				count+=1;
			}
		}
	 }
	  double bok=(med/28)*100;
	// printf(" you scored %.2f\n",has);
	//printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",bok);
	   
	 }
	 else if(letter[i]=='S')
	 {
	 	float siu;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==S[x][y]){
				siu+=1;
				count+=1;
			}
		}
	 }
	 double sui=(siu/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",sui);
	   }
	 
	 else if(letter[i]=='T')
	 {
	 	float rty;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==T[x][y]){
				rty+=1;
				count+=1;
			}
		}
	 }
	 double ytr=(rty/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",ytr);
	 }
	 else if(letter[i]=='U')
	 {
	 	float oip;
	 	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==U[x][y]){
				oip+=1;
				count+=1;
			}
		}
	 }
	 double pio=(oip/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",oip);
	   	
	 }
	 else if(letter[i]=='V')
	 {
	 	float zxc;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==V[x][y]){
				zxc+=1;
				count+=1;
			}
		}
	 }
	 double vbn=(zxc/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",vbn);
	 }
	 else if(letter[i]=='W')
	 {
	 	float fgh;
	 	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==W[x][y]){
				fgh+=1;
				count+=1;
			}
		}
	 }
	 double jkl=(fgh/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",jkl);
	   }	
	 
	 else if(letter[i]=='X')
	 {
	 	float xcv;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==X[x][y]){
			xcv+=1;
				count+=1;
			}
		}
	 }
	 double you=(xcv/28)*100;
	 //printf(" you scored %.2f\n",has);
	 //printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",you);
	   }
	 
	 else if(letter[i]=='Y')
	 {
	 	float hjk;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==Y[x][y]){
				hjk+=1;
				count+=1;
			}
		}
	 }
		 double lop=(hjk/28)*100;
	// printf(" you scored %.2f\n",has);
	//printf(" you scored %.2f /28\n",count);
	 printf("percentage = %.2f\n",lop);
	   }
	 
	 else if(letter[i]=='Z')
	 {
	 	float dfg;
	 		 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			printf("enter the 1 or 0 in cell %d:",z);
			scanf("%d",&raw[x][y]);
			z++;
		}
	 }
	 puts("\n\nSummary of attempt");
	 for(x=0;x<7;x++)
	 {
		for(y=0;y<4;y++)
		{
			if(raw[x][y]==1){
			printf("*");
			}
			else if(raw[x][y]==0){
				printf("");
			}
		}
		printf("\n");
	 }
	

	 for(x=0;x<7;x++){
		for(y=0;y<4;y++){
			if(raw[x][y]==Z[x][y]){
				dfg+=1;
				count+=1;
			}
		}
	 }
	 	 double ert=(dfg/28)*100;
	// printf(" you scored %.2f\n",has);
	//printf(" you scored %.2f /28\n",count);
	printf("percentage = %.2f\n",ert);
	
	   }
	   else 
	   {
	   	printf("invalid character\n");	
	   }
	   
	 }
	 finish=time(0);
	time(&now);
	ptr= localtime(&now);
	c=asctime(ptr);
	puts(c);
	 duration= difftime(finish,start);
	 
	 total=(count/224)*100;
	 printf("your overall score was %.2f\n",count);
	 printf("your  average percentage score is %.2f\n",total);
	 printf("DURATION= %f seconds",duration);
	 getch();
	return 0;
}


