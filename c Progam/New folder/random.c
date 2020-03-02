#include<stdlib.h>
#include<stdio.h>

int party ( int n );

main()
{
  int a, b, c, trial;



  printf("Enter trial amount: \n");
  scanf("%d", &trial);

  printf("The number of guests: \n");
  scanf("%d", &a);

  if ( a > 30 )
  {
	  printf("Guests are limited to 30 people! \n");

  }


  for (c = 0; c < trial; c++)
  {
	b = party ( a );
  }

  srand ( time (NULL) );

 printf("If '1' then two people have the same birthdays,\n otherwise the outcome would result in a '0' \n");

 printf(" \n");

  printf(" %d \n", b);

  }

  int party ( int n )
  {
	int person1, person2, counter, prob;
	int array[30] = {0};

	person1 = 1 + rand() % 364;
	person2 = 1 + rand() % 364;


	for ( counter = 0; counter <  n; ++counter)
	{

	  if ( person1 == person2 )
	  {
		array[counter] = person1;

		return 1;

	   }

	 else if ( person1 != person2)
	   {
		   return 0;

	  }




  }



  }
