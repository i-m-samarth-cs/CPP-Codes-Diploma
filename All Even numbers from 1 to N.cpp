#include<iostream>
using namespace std;

int main()
{
	int n,i;
	//Accept
	cout<<"\n\n Enter The Value of n: ";
	cin>>n;
	
	//Display
	cout<<"\n\n Displaying All Even Numbers Between 1 to"<<n<<"\n\n";
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<" ";//(used " " for Space)
		}
	}
	return 0;
}
