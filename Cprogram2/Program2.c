/*
 * Program2.c
 *
 *  Created on: Feb 12, 2023
 *      Author: g658k761
 */

#include <stdio.h>
#include <stdlib.h>

int possibleCombos(int n)
{

    int numWays = 0;
    int td = 0; //6
    int fg = 0; //3
    int s = 0; //2
    int td_2 = 0; //8
    int td_1 = 0; //7
    int num = 0;

    for(td_2 = 0; td_2 <= n/8; td_2++)
    {
        for(td_1 = 0; td_1 <= n/7; td_1++)
        {
            for(td = 0; td <= n/6; td++)
            {
                for(fg = 0; fg <= n/3; fg++)
                {
                   for(s = 0; s < n/2; s++)
                    {
                	   num = n - (td_2 * 8 + td_1 * 7 + td * 6 + fg * 3 + s * 2);
                	   if(num == 0)
                	   {
                           numWays += 1;
                           printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety \n", td_2, td_1, td, fg, s);
                	   }

                    }
                }
            }
        }
    }


return numWays;

}



int main()
{
	int num = 2;

	while(num != 1 && num != 0)
	{
		printf("Please enter a score: ");
		scanf("%d", &num);

		if(num == 0 || num == 1)
		{
			printf("Invalid Score");
			return 0;
		}

		possibleCombos(num);


	}



return 0;
}
