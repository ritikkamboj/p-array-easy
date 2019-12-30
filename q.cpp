#include <bits/stdc++.h>
using namespace std;
int main()
{
int find=0;
int n, arr[n],x;
cout<<"array size ?";
cin>>n;

for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"element to be find from array";
cin>>x;

for(int i=0;i<n;i++)
{
	if(arr[i]==x)
		find=1;
		//break;
		
}	
if(find==0)
cout<<"no"<<endl;
else
{
	cout<<"yes"<<endl;
}






}

// why we not it works well when i uses break 
