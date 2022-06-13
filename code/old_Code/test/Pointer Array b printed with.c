#include<stdio.h>

void main()
{
	int i,offset,b[]={10,20,30,40};
	int *bptr=b;
	
	printf("Array b printed with :\n"
			"Array subscript notation\n");
	//1
	for(i=0;i<4;i++)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}

	//2
	for(i=0;i<4;i++)
	{
		printf("b[%d] = %d\n",i,*bptr);
		bptr++;
	}
	
	//3
	for(offset=0;offset<4;offset++)
	{
		printf("*(b + %d) = %d\n",offset,*(b+offset));
	}
	
	//4
	/*for(i=0;i<4;i++)
	{
		printf("bPtr[%d] = %d\n",i,bptr[i]);
	}*/
}
