#include<stdio.h>
int main()
{
  	int math,physics,chemistry,biology;
  	float engg_cutoff,med_cutoff;
  	printf("enter the physics mark:");
  	scanf("%d",&physics);
  	printf("Enter chemistry Mark:");
  	scanf("%d",&chemistry);
  	printf("enter the maths mark:");
  	scanf("%d",&math);
  	printf("enter Biology marks:");
  	scanf("%d",&biology);
  	engg_cutoff=(math=chemistry=physics)/3;
  	med_cutoff=(biology+chemistry+physics)/3;
  	printf("\nEngineering cut off is %.2f",engg_cutoff);
  	printf("\nMedical cut off is %.2f",med_cutoff);
  	return 0;
}




