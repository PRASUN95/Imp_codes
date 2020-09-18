#include<stdio.h>
void func()
{
		int x=0;
	static int y=0;
	x++;y++;
	printf("%d -- %d\n",x,y);
}
int main()
{
	int _=10;int __=5;
	int ___;
	___=_-__;
	printf("%i\n",___);
	int i=4;
	int x=6;
int z=x/i;
	printf("z=%.2f\n",z);
/*	int x=10,y=20;
	if(!(!x) && x)
	{
		printf("x = %d\n",x);
	}
	else
	printf("y = %d\n",y);
	return 0; */
	func();
	func();
	return 0;
}
