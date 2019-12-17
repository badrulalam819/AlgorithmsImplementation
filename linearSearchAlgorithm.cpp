/*
Worst-Time-Complexity : O(n)
Best-Time-Complexity : O(1)
Space Complexity : O(1)
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int linearSearch(int [],int,int);
int main()
{
	printf("Linear Search\n");
	int n,searchItem,i,ar[10] = {3,1,7,10,5,2,9,6,8,4};
	searchItem = 10, n = 10;
	i = linearSearch(ar,n,searchItem); //Calling the linearSearch
	if(i == -1)
	{
		printf("Not found the item\n");
	}
	else{
		printf("Found item position: %d\n",i+1);
	}
	return 0;
}
//Linear-Search-Algorithm
int linearSearch(int ar[],int n,int element)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(ar[i] == element)
		return i;
	}
	i = -1;
	return i;
}
