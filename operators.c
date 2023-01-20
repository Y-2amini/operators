/*
#include<stdio.h>
int main()
{
	int a=63;
	int b=91;
	printf("a=%d b=%d\n",a,b);
	a++;                                 //post-increment
	++b;                                 //pre-increment   
	printf("a=%d b=%d\n",a,b);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	char p=107;
	char y=49;
	printf("p=%d y=%d\n",p,y);
	p--;                                   //post-decrement
	--y;                                   //pre-increment
	printf("p=%d y=%d\n",p,y);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	float p=13.5;
	double y=11.5;                         
	p==y?printf("p=%f\n",p):printf("y=%f\n",y); //conditional
	return 0;
}*/



//Bitwise

/*
#include<stdio.h>
int main()
{
	int a=11;                                 //11 = 01011
						  //17 = 10001
	int b=17,c;                               //     =1
	c=a&b;                                   //AND(&)
	printf("c=%d&%d ,c=%d\n",a,b,c);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=5;                                //5 = 0101
						//3 = 0011
	int b=3,c;                              //   4+2+1=7
	c=a|b;                                  //Or(|)
	printf("c=%d|%d	c=%d\n",a,b,c);
	return 0;
}*/


/*
#include<stdio.h>
int main()
{                                              //15 = 01111
					       //17 = 10001 
	int a=15;                              //     16+8+4+2=30
	int b=17,c;
	c=a^b;                                   //(^)
	printf("c=%d^%d c=%d\n",a,b,c);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int a=20,c;
	c=a>>2;                                //(<<)
	printf("c=%d\n",c);
	int b=20,d;
	d=c<<3;                                //(>>)
	printf("d=%d\n",d);
	return 0;

	
}*/








