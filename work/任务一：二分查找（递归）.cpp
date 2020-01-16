#include<stdio.h>
 
#define N 10    
int a[N]={1,2,3,4,5,6,7,8,9,10};    
 
 
int half(int low,int high,int key)  
{
	if(low<high)
	{	
		int mid=(low+high)/2;     
		if(a[mid]==key)       
			return mid;
		else if(a[mid]>key)    
			return half(low,mid-1,key);   
		else                            
			return half(mid+1,high,key);   
	}
	return -1;  
}
 
 
int main(void)
{
	int key;
	printf("����Ҫ���ҵĹؼ���: ");
	scanf("%d",&key);
	int pos=half(0,N-1,key);
	printf("ԭ���ݱ�:  ");
	for(int i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n\n");
	if(pos>=0)
		printf("���ҳɹ�,�ùؼ���λ������ĵ�%d��Ԫ��!\n",pos+1);
	else
		printf("����ʧ��!!!\n");
	return 0;
}


