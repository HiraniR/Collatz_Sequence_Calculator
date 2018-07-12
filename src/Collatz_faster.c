#include <stdio.h>
#include <stdlib.h>

ulong limit = 0;														// must be global for recursion to work

#define Number  100000000												// Number
#define CollatzSeq Number												// max number to init on cache

typedef unsigned long ulong;											// use cache to store sequence
ulong cache[CollatzSeq] = {0};

ulong recuring_function(ulong num)
{
	int seq;
	
	if(num == 1) 
		return 1;
	if(num < limit && cache[num]) 
		return cache[num];
	
	seq = 1 + recuring_function((num & 1) ? 3 * num + 1 : num / 2);		// if (1 + recuring_function((num & 1)) is true : then do (3 * num + 1) else do (num / 2)
	if( num < limit) cache[num] = seq;
	return seq;
}

int main()
{
	int count = 0;
	int iter = 0;
	int len = 0;
	int initial = 0;
	
	printf("Enter number: ");
	scanf("%ld",&limit);												// insert limit							
	
	for(count = 1; count < limit; count++)
	{
		if ((iter = recuring_function(count)) > len)
		{
			len = iter;
			initial = count;
		} // end if
	} // end for
	printf("Maximun sequence size below %ld: %d, with Length %d", limit, initial, len);
	return 0;
}
