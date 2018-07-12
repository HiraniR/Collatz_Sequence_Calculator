#include <stdio.h>

int seq(int startNum, int Length)
{
	int c = 0;
	int num = 0;
	num = startNum;
	
	while(num != 1)
	{	
		
		if(num % 2 == 0)
			num = num/2;
		else
			num = (3*num) + 1;
			
		printf("%d,",num);
		c++;
	}
return 0;
}

int main(void)
{	
	int num = 0;
	int count = 0;
	int length = 0;
	int limit = 0;
	int numLen = 0;
	int startNum = 0;
	
	printf("Enter number: ");
	scanf("%d",&limit);
	
	for(count = 2; count <= limit; count++)
	{
		length = 1;
		num = count;
		
		while(num != 1)
		{
			if(num % 2 == 0)
				num = num/2;
			else
				num = (num*3) + 1;
				
			length++;
		}
		
		if(length > numLen)
		{
			numLen = length;
			startNum = count;
		}
	}
	printf("Start @ : %d with length %d ",startNum, numLen);
	//seq(startNum,numLen);
	
	return 0;
}
