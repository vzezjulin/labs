#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float arr[3][5]={{0.1,-0.04,-0.13,-0.15,0},
			   {-0.04,0.34,0.05,0.31,0},
			   {-0.13,0.05,0.63,0.37,0}};
void vivod(){
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<4;j++)
			{
				printf("%.2f ",arr[i][j]);
			}
			printf("\n");
		}
}			


void coercion(){

		for(int j=0; j<4;j++)
		{
		arr[2][j]/=4;
		arr[0][j]+=arr[2][j];
		arr[2][j]*=4;
		}
	vivod();
}	


void shodimost(){
float buf;
		for(int i=0;i<3;i++)
		{
			buf=arr[i][i];
			for(int j=0;j<4;j++)
			{
			arr[i][j]/=buf*(-1);
			if(j==3){
				arr[i][j]*=(-1);
			}
			}
			arr[i][i]=0;
		}
		vivod();
		
		buf=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				buf+=arr[i][j]*arr[i][j];
			
			}
		}
		if(sqrt(buf)<1){
			printf("Sist ud");
		}
		else 
		{
				printf("Sist ne ud");	
				exit(1);
		}
}	

void approximation()
{
	float d[3]={0,0,0};
	float max=0;
	
	do  
	{
		for (int i=0;i<3;i++)
		{
			d[i]=arr[i][4];
		
		}	
		
		for (int i=0;i<3;i++)
		{
		arr[i][4]=arr[i][0]*d[0]+arr[i][1]*d[1]+arr[i][2]*d[2]+arr[i][3];
		printf("%f ",arr[i][4]);
		}	
		printf("\n");
		
		
			for (int i=0;i<3;i++)
		{
		
			d[i]=fabs(arr[i][4]-d[i]);
		
		}	
		
		
		max=d[0];
		
		if (d[1]>max)
		max=d[1];	
		
		if (d[2]>max)
		max=d[2];
		
	}
	while(max>0.01);
}
		
main(){
setlocale(LC_ALL,"Russian");
coercion();
printf("\n");
shodimost();
printf("\n");
approximation();
printf("x1=%.2f\nx2=%.2f\nx3=%.2f\n",arr[0][4],arr[1][4],arr[2][4]);
}
