#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
	{
		clrscr();
		int a[20],j=0,t=0,x,y,z;
		cout<<"Enter number of elements you want to enter(MAX 20):\t";
		cin>>x;
		for(int i=0;i<x;i++)  //for loop to get elements from user
			{
				cin>>a[i];
			}
		cout<<"The array entered is:\n";
		for(i=0;i<x;i++)  //for loop to display the array
			{
				cout<<"\n";
				cout<<a[i];
			}
		cout<<"\n\nEnter element you want to find and get location:";
		cin>>y;
		for(i=0;i<x;i++)   //for loop for scanning the array
		{	if(a[i]==y)  //checking the elements 1 by 1 using the loop
			cout<<"\t"<<i; //i is the location/address of the element we want to find

		}
		cout<<"\nEnter the element you want to delete:";
		cin>>z; //this is the element we want to delete
		for(i=0;i<x;++i)//scanning the array again
			{
				if(a[i]==z){  //checking to get the element
				for(j=i;j<(x-1);j++) //using another variable j to store new value of i
				{	a[j]=a[j+1];//now a[i] is getting new address with a[j] and increasing its value by 1 each time
				}
				t++;//variable to handle the user exception value i.e element that doesent exist
				break;	}  }
			if(t==0) //this part is to make the code more smart
			{ 	cout<<"Element not found!";
			}	else
				{
				cout<<"Element deleted succesfully!\n";
				}
				cout<<"The new Array is:\n";
				for(i=0;i<(x-1);i++)//displaying the array after deletion
				{	cout<<a[i]<<" ";
				}
getch();
}


