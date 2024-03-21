#include<iostream>
using namespace std;

template <class T>

void array(T arr[],int n)
{	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int n,choice;
	int str[n];
	float str1[n];
	
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter 1 for int and 2 for float : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Enter int array elements: ";
	          for(int i=0;i<n;i++)
	           {
		          cin>>str[i];
	           }
	           array(str,n);
	           
	        cout<<"After sorting int array: ";
	
	          for(int i=0;i<n;i++)
	           {
		          cout<<str[i]<<"\t";
	           } 
	           break;
	    case 2:
		    cout<<"Enter float array elements: ";
	          for(int i=0;i<n;i++)
	           {
	          	  cin>>str1[i];
	           }     
	           array(str1,n);
	           
	        cout<<"After sorting float array: ";
	          for(int i=0;i<n;i++)
	           {
	        	 cout<<str1[i]<<"\t";
	           }   
			   break;
		default:
			cout<<"Invalid choice";     
	}
	
			
	return 0;
}
