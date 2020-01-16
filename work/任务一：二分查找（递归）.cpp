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
	printf("输入要查找的关键字: ");
	scanf("%d",&key);
	int pos=half(0,N-1,key);
	printf("原数据表:  ");
	for(int i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n\n");
	if(pos>=0)
		printf("查找成功,该关键字位于数组的第%d个元素!\n",pos+1);
	else
		printf("查找失败!!!\n");
	return 0;
}


