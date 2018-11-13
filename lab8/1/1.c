#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "windows.h"
 
struct sotrudnik 
{ 
char fio[20];
char doljnost[20];
  int year; 
  int wages;
}; 
 
struct sotrudnik  sotrudniks[20]; 
struct sotrudnik  buffer; 

int i,j,n,menu,k,x,year1,wages1,z=0,y,r, s;
	char fio1[20],doljnost1[20];


int main() 
{ setlocale(LC_ALL,"Russian");
 SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
printf("Vvedite skolko studentov: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
    printf("Student  ¹%d\n", i+1); 
    
    puts("Vvedite F.I.O.: "); 
    fflush(stdin); 
    gets(sotrudniks[i].fio);


    puts("Domashnii adress: "); 
    fflush(stdin); 
    gets(sotrudniks[i].doljnost); 
    
    puts("Vvedite nomer telefona: "); 
    scanf("%d", &sotrudniks[i].year); 
    
    puts("Vvedite reiting: "); 
    scanf("%d", &sotrudniks[i].wages); 

  } 	printf("\n\n");

while(1)
	{
	 printf("\nOperaciia: "); 
	 printf("\nSort-1 ");
	 printf("\nPoisk-2 ");
	 printf("\nIzmenenie-3 ");
	 printf("\nUdalenie-4 ");
	 printf("\nSpisok-5 ");
	 printf("\nVihod-6 \n");
	 scanf("%d",&menu);
	 switch(menu)
	{
		case 1:
		{ 	
		printf("\nKriterii sort:\n");
			printf("1-fio\n");
			printf("2-dom adress\n");
			printf("3-gruppa\n");
			printf("4-reiting\n");
			printf("0-vihod iz kriteria\n");
			printf("Vibor kriteria ");
			scanf("%d",&x);
	
			switch(x){
				case 0:break;
				case 1:{
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if(strcmp(sotrudniks[i].fio,sotrudniks[j].fio)>0){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
				printf("\n\n");
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
			   }
			break;
			}
			case 2:{
				for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (strcmp(sotrudniks[i].doljnost,sotrudniks[j].doljnost)>0){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
			printf("\n\n");
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
			   }
			break;
			}
			case 3:{
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (sotrudniks[i].year>sotrudniks[j].year){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
			printf("\n\n");
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
			   }
			break;
			}
			case 4:{
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (sotrudniks[i].wages>sotrudniks[j].wages){  
							    buffer=sotrudniks[i]; 
							    sotrudniks[i]=sotrudniks[j]; 
							    sotrudniks[j]=buffer; 
			   } 
			   
			   for(i=0;i<n;i++)
			   {
			printf("\n\n");
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
			   }
			break;
			}
			
	    	} 
		break;
	   }
case 2:
		{
			while(1)
			{
				printf("\nKriterii sort:\n");
			printf("1-fio\n");
			printf("2-dom adress\n");
			printf("3-gruppa\n");
			printf("4-reiting\n");
			printf("0-vihod iz kriteria\n");
			printf("Vibor kriteria ");
			 scanf("%d",&x);
			switch(x)
			{
				case 0:break;
				case 1:
				{
					z=0;
					printf("vvedite fio: ");
					fflush(stdin);
					gets(fio1);
					for(i=0;i<n;i++)
					{
						if(strcmp(fio1,sotrudniks[i].fio)==0)
						{
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
				            z++;
						}						
					}
					if(z==0)
					printf("ne naideno\n");
					break;
				}
				case 2:
				{
					 z=0;
                     printf("dom adress: ");
					 fflush(stdin);
					 gets(doljnost1);
					 for(i=0;i<n;i++)
					 {
						if(strcmp(doljnost1,sotrudniks[i].doljnost)==0)
						{
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
				            z++;
						}						
					}
					if(z==0)
					printf("ne naiden\n");					
					break;
				}
				case 3:
				{
					z=0;
					printf("Gruppa: ");
					fflush(stdin);
					scanf("%d",&year1);
					for(i=0;i<n;i++)
					{
						if(year1==sotrudniks[i].year)
						{
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
				            z++;
						}						
					}
					if(z==0)
					printf("Ne naiden\n");
					break;
				}
				case 4:
				{
					 z=0;
					 printf("Reiting: ");
					 fflush(stdin);
					 scanf("%d",&wages1);
				 	 for(i=0;i<n;i++)
					{
						if(wages1==sotrudniks[i].wages)
						{
				printf("student ¹%d\n",i+1);
				printf("fio: %s ",sotrudniks[i].fio);
				printf("dom adress: %s ",sotrudniks[i].doljnost);
				printf("gruppa: %d ",sotrudniks[i].year);
				printf("reiting: %d ",sotrudniks[i].wages);
				            z++;
						}						
					}
					if(z==0)
					printf("Ne naiden\n");
					break;
				}
              
			}
		    if(x==0)
		    break;
			continue;
		    }
			break;
		}
case 3:
		{
			while(1)
			{
			  printf("\nVvedite ¹ studenta kogo izmenit ");
		scanf("%d",&r);
			  printf("\nvvedite kriterii \n1-fio \n2-dom adress \n3-gruppa \n4-reiting  \n0-vihod \n");
			  scanf("%d",&y);
		  	  switch(y)
			{
				case 0:break;
				case 1:{
					printf("novaia familia: ");
					fflush(stdin);
					gets(fio1);
					strcpy(sotrudniks[r-1].fio,fio1);
					break;
				}
				case 2:
				{
					printf("nov dom adress: ");
					fflush(stdin);
					gets(doljnost1);
					strcpy(sotrudniks[r-1].doljnost,doljnost1);
					break;
				}
				case 3:
				{
					printf("nov gruppa: ");
					scanf("%d",&year1);
				sotrudniks[r-1].year=year1;
					break;
				}
				case 4:
				{
					printf("nov reiting: ");
				scanf("%d",&wages1);
				sotrudniks[r-1].wages=wages1;
					break;
				}
				
			}
			if(y==0)
		    break;
			continue;
		    }
			break;
		}
case 4:
		{
			printf("Vvedite ¹ stud kogo udalit ");
			scanf("%d",&s);
			s--;
				printf("\n\n");
				printf("stud ¹%d udalen\n",s+1);
				printf("fio: %s ",sotrudniks[s].fio);	
				printf("dom adress: %s ",sotrudniks[s].doljnost);
				printf("gruppa: %d ",sotrudniks[s].year);
				printf("Reiting: %d ",sotrudniks[s].wages);
			
				for(s;s<=n;s++)
			{
				strcpy(sotrudniks[s].fio, sotrudniks[s+1].fio);
				strcpy(sotrudniks[s].doljnost, sotrudniks[s+1].doljnost);
				sotrudniks[s].year = sotrudniks[s+1].year;
				sotrudniks[s].wages = sotrudniks[s+1].wages;
			}
			n--;
			break;
		}
		case 5:
		{
			for(i=0;i<n;i++)
			{
				printf("\n\n");
				printf("fio: %s \n",sotrudniks[i].fio);
				printf("dom adress: %s \n",sotrudniks[i].doljnost);
				printf("gruppa: %d \n",sotrudniks[i].year);
				printf("reiting: %d \n",sotrudniks[i].wages);
			}
			break;
	    }
  case 6:exit(1);
	}
	continue;
}
	return 0;
}















 
