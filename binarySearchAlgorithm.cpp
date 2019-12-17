/*
Time complexity : log2(n)
Space Complexity : O(1)
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int [],int,int);
int main()
{
	int n,item,i,ar[10] = {2,3,5,6,8,9,11,15,20,24};
	n = 10, item = 2;
	i = binarySearch(ar,n,item);
	if(i == -1)
		printf("Not found...\n");
	else
		printf("Found item Position : %d\n",i+1);
	return 0;
}

//Binary-Search-Algorithm...........
int binarySearch(int ar[], int n, int item)
{
	int low,high,mid;
	low = 0, high = n-1;
	mid = (low+high)/2;
	while(low<=high)
	{
		if(ar[mid] == item)
			return mid;
		else if(ar[mid]<item)
			low = mid+1;
		else if(ar[mid]>item)
			high = mid-1;
		mid = (low+high)/2;
	}
	return -1;
}
