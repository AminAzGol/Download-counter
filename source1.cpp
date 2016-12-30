#include <conio.h>
#include <stdio.h>
 
int main()
{
	long int n,q;
	long int downloads[100000]={0};
	long ab[10000][2]={0};
	scanf("%ld",&n);
	for (long int i=1; i<=n ; i++)
	{
		long int a;
		scanf ("%ld",&a);
	downloads[i] = downloads[i-1] + a;
	}
	scanf("%ld", &q);
	for(long int i=0; i<q ; i++)
	{
	scanf ("%ld %ld",&ab[i][1],&ab[i][2]);
	}
	for (long int i=0; i<q ; i++)
	{
		printf("%ld\n",downloads[ab[i][2]] - downloads[ab[i][1]-1]);
	}
	getch();
}