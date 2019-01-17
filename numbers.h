#include<stdio.h>
#include<conio.h>
#include<math.h>
//A Prime no. is a number which is divisible by 1 and itself.for eg 2,3,5,etc.
void prime(int n)
{
	int i,flag=0;
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	flag=flag+1;
	}
	if(flag==1)
	printf("Prime Number=%d",n);
	else
	printf("Not Prime Number=%d",n);
}
//A number is perfect no.if sum of its factors including 1 and excluding itself is equal to number.
//for eg 6=(1+2+3) where 1,2,3 are its factors
void perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	sum=sum+i;
	}
	if(sum==n)
	printf("Perfect Number=%d",n);
	else
	printf("Not Perfect Number=%d",n);
}
//A number is palindrome if reads from reverse is same as itself.for eg 151,3443.
void palindrome(int n)
{
	int p,d,r=0;
	p=n;
	while(p>0)
	{
	d=p%10;
	r=r*10+d;
	p=p/10;
	}
	if(n==r)
	printf("Palindrome Number=%d",n);
	else
	printf("Not Palindrome Number=%d",n);
}
//A number is said to beneon if sum of the digits of square of a number is equal to itself.
// for eg input=9
// 9*9=81   
//(8+1)=9
void neon(int n)
{
	int q,sum=0,d;
	q=n*n;
	while(q>0)
	{
	d=q%10;
	sum=sum+d;
	q=q/10;
	}
	if(n==sum)
	printf("Neon Number=%d",n);
	else
	printf("Not Neon Number=%d",n);
}
//A number is said to be armstrong is sum of cubes of its digits is equal to the original number.
//153=(1*1*1)+(5*5*5)+(3*3*3)
void armstrong(int n)
{
	int sum=0,p,d;
	p=n;
	while(p>0)
	{
	d=p%10;
	sum=sum+d*d*d;
	p=p/10;
	}
	if(sum==n)
	printf("Armstrong Number=%d",n);
	else
	printf("Not Armstrong Number=%d",n);
}
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
	f=f*i;
	}
	return f;
}
int reverse(int n)
{
	int d,r=0;
	while(n>0)
	{
	d=n%10;
	r=r*10+d;
	n=n/10;
	}
	return r;
}
//A number is siad to be magic if sum of all the digits of the number is equal to 1 and te no. is single digit.
//for eg 289=(2+8+9)=(19)=(1+9)=(10)=(1+0)=1
void magic(int n)
{
	int a,b,c,s,k;
	s=n;
	k=n;
	while(s>9)
	{
	n=s;
	s=0;
	while(n>0)
	{
	a=n/10;
	b=a*10;
	c=n-b;
	s=s+c;
	n=a;
	}
	}
	if(s==1)
	printf("Magic Number=%d",k);
	else
	printf("Not Magic Number=%d",k);
}
