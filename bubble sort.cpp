#include <iostream>
 using namespace std;
 
void BubbleSort (int arr[], int n)
{
	int a, b;
	for (a = 0; a < n; ++a)
	{
		for (b = 0; b < n-a-1; ++b)
		{
	     if (arr[b] > arr[b+1])
			{
				arr[b] = arr[b]+arr[b+1];
				arr[b+1] = arr[b]-arr[b + 1];
				arr[b] = arr[b]-arr[b + 1];
			}
		}
	}	
}	
 
int main()
{
	int n, a;
	cout<<"Enter the number of elements to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(a = 0; a < n; a++)
	{
		cout<<"Enter element "<<a+1<<": ";
		cin>>arr[a];
	}
 
	BubbleSort(arr, n);
 
	cout<<" The sorted data -> ";
	for (a = 0; a < n; a++)
        cout<<" "<<arr[a];
 
	return 0;
}
