//convert the upper case into lower by string using iterators:-
//This is good for practise code should give result
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string "<<endl;
	string t;
	getline(cin,t);
	//string::iterator it;
	//for(it=t.begin();it!=t.end();it++)
	for(int i=0;t[i]!='\0';i++)
	{
		if(t[i]>=97 && t[i]<=122) //why we are using this because of garbage value if in between we get cappital value
		t[i]-=32;
	}
	cout<<t[i]<<endl;
	return 0;
}
