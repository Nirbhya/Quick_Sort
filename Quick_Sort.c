// Program based on quick sort technique ( Written By Nirbhay Kaushik )

#include<stdio.h>
void quick_sort(int arr[50],int low, int high);		      	//Function Declaration
int count;						                          	// Global Variable
void main()
{
	int a[50],l=0,n,i;			                      // Variable Declaration
	printf("Enter, how many elements do you want to sort : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
		scanf("%d",&a[i]);			          // Array Input
	}
	count++;
	quick_sort(a,l,n-1);			        // Function Calling
	
	printf("Order of Sorted elements: ");
	for(i=0;i<n;i++)	
	{	
		printf("%d\n",a[i]);	        	//Sorted Array Output
	}
	printf("\nCount = %d",count);
}
//------------------------------------------------------------------

void quick_sort(int arr[50],int low,int high)			      // Function Definition
{
	int i,j,pivot,temp=0;
	count++;
	if(low<high)
	{	
		pivot=low;
		i=low;
		j=high;
		count+=3;
			count++;
			while(i<j)
			{
				count++;				
				while(arr[i]<=arr[pivot]&&i<high)
				{
					i++;
					count++;
				}									            // LOGIC
				count++;
				count++;
				while(arr[j]>arr[pivot])
				{				
					count++;					
					j--;
				}
				count++;
				count++;
				if(i<j)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					count+=3;
				}
			count++;			
			}
	
			
			temp=arr[pivot];
			arr[pivot]=arr[j];
			arr[j]=temp;
			quick_sort(arr,low,j-1);	          	//Recursive Calling Of Function
			quick_sort(arr,j+1,high);
			count+=5;
		}
}
