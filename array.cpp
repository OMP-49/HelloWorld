#include<bits/stdc++.h>
using namespace std;

int arr[6];
int first, last, inc;

void performOpera()
{
	for(int i=first;i<=last;i++){
		arr[i-1]=arr[i-1]+ inc;
	}
}

int main()
{
	int i;
	for(i=0;i<6;i++)
		cin >>arr[i];
	int t=0;
    while(t<2){
	 	cin >> first>>last>>inc;
		performOpera();
		++t;
	}
	
	for( int i=0;i<6;++i)
		cout<< arr[i]<<"\n";
	
	
	return 0;
	
}
