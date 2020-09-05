/*my first cpp*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[20]="i=50;j=10;k=66";
	char *token=strtok(a,"=;");
	while(token!=NULL)
	{
		cout<<token<<endl;
		token=strtok(NULL,"=;");
	}
	return 0;
}
