/*
Time-Complexity : O(n2)
Space-Complexity : O(1)
*/
#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int [],int); //function prototype declaration

int main()
{
	int n,ar[10] = {25,10,5,20,2,9,6,15,11,1}; //input array
	n = 10;
	bubbleSort(ar,n); //calling function
	return 0;
}

//Bubble-Sort-Algorithm Implementation............................
void bubbleSort(int ar[], int n) //called function
{
	int i,j,tmp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(ar[j]>ar[j+1])
			{
				tmp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = tmp;
			}
		}
	}
	//Print the array after sorting............
	for(i=0; i<n; i++)
	{
		printf("%d  ",ar[i]);
	}
}
