#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int a[100];
	int i,n=0,op;
	do{
		system("cls");
		system("cls");
		system("color B");
		cout<<"==============Menu=============="<<endl;
		cout<<"\t1. =>Input"<<endl;
		cout<<"\t2. =>Output"<<endl;
		cout<<"\t3. =>Search"<<endl;
		cout<<"\t4. =>Sort"<<endl;
		cout<<"\t5. =>Remove"<<endl;
		cout<<"\t6. =>Insert"<<endl;
		cout<<"==============================="<<endl;
		cout<<"==>Please Choose One = ";cin>>op;
		switch(op)
		{
			case 1:{
				cout<<"\tInput N= "; cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"\n\t\tInput Number of Array = " ; cin>>a[i];
				}
			}break;
			case 2:{
				for(i=0;i<n;i++)
				{
					cout<<"\n\t\tNumber of Array = "<<a[i];
					cout<<endl;
				}
			}break;
			case 3:{
				int sid,b=0;
				cout<<"\nt\tInput Number to Search= ";cin>>sid;
				for(i=0;i<n;i++)
				{
					if(a[i]==sid)
					{
						cout<<"\n\t\tNumber of Array = "<<a[i];
						b=1;
						cout<<endl;
					}
				}
				if(b==0)
				{
					cout<<"\n\t\tSearch Not Found ";
					cout<<endl;
				}
			}break;
			case 4:{
				int t,j;
				for(i=0;i<n-1;i++)
				{
					for(j=i+1;j<n;j++)
					{
						if(a[i] > a[j])
						{
							t= a[i];
							a[i]= a[j];
							a[j]= t;
						}
					}
				}
				cout<<"\n\t\tSort Small to Big Complete!!!\n"<<endl;
			}break;
			case 5:{
				int dvalue,j,b=0;
				cout<<"Input Number of Array tp Remove = "; cin>>dvalue;
				for(i=0;i<n;i++)
				{
					if(a[i] == dvalue)
					{
						for(j=i;j<n;j++)
						{
							a[j] = a[j+1];
						}
						b=1;
						n = n-1;
						cout<<dvalue<<"Was Remove.";
						cout<<endl;
					}
				}
				if(b==0)
				{
					cout<<"Search not Found!";
					cout<<endl;
				}
			}break;
			case6:{
				int invalue;
				cout<<"Input N to Insert = ";cin>>invalue;
				for(i=n;i<n+invalue;i++)
				{
					cout<<"Input Number of Array = ";cin>>a[i];
				}
				n = n+ invalue;
			}break;
		}
		cout<<"\n\t\t\tPress Enter to Continue."<<endl;
	}while(getch()==13);
}
