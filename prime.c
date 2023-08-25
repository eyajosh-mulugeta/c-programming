#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void check_prime(int, int);

int main(void)
{
	int lower_bound = 0, upper_bound = 0;
	
	printf("Enter lower_bound number: ");
	scanf("%d %d", &lower_bound);

	printf("Enter upper_bound number: ");
	scanf("%d %d", &upper_bound);

	check_prime(lower_bound, upper_bound);
}

void check_prime(int lower_bound, int upper_bound)
{
	int sq = 0;
	bool flag;

	if(upper_bound > lower_bound)
	{
		while(lower_bound <= upper_bound)
		{
			flag = false;
			sq = sqrt(lower_bound);

			if(sq == 1 && lower_bound != 1)
			{
				flag = true;
			}

			for(int j = 2; j <= sq; j++)
			{
				if(lower_bound % j == 0)
				{
					flag = false;
					break;
				} 
				else
				{
					flag = true;
				}
			}

			if(flag)
				printf("\n%d", lower_bound);

			lower_bound++;
		}	
	}

}
