#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float m=a/x;//speed of chef
	    float n=b/y;//speed of chefina
	    if(m>n)
	    {
	        cout<<"Chefina"<<endl;
	    }
	    else if(m<n)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else 
	    {
	        cout<<"Both"<<endl;
	    }
	}
	return 0;
}
