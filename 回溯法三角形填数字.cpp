
#include "stdio.h"

int main()
{
	int i,k,g,s;
	int m1,m2,m3,a[10];
	a[1]=1,i=1,g=1,s=0;

	while(1)
	{
		g=1;
		for(k=i-1;k>0;k--)
			if(a[k]==a[i])
			{g=0;
			break;
			}
			if(i==9&&g==1&&a[1]<a[3]&&a[3]<a[6]&&a[1]<a[6])
			{
				m1=a[1]+a[2]+a[3];
				m2=a[3]+a[4]+a[5];
				m3=a[5]+a[6]+a[1];
				if(m1==m2&&m2==m3&&m3==m1)
				{
					s++;
					printf("%d%d%d%d%d%d",a[1],a[2],a[3],a[4],a[5],a[6]); 
					printf("\n");
				}
				
			}
			if(i<9&&g==1)
			{i++;
			a[i]=1;
			continue;
			}
			while(a[i]==9&&i>1)i--;	

			if(a[i]==9 && i==1) break;
		
			else a[i]++;
	}
	printf("ÓÐ%d¸ö½â",s);
}

 

