#include <stdio.h>
#include <stdlib.h>
#define year 360

int sum_of_days_of_year_of_birth(day, month)
{
	unsigned long long int days_spent = 0;
	int i;
	for(i=day; i <=30; i++)
	{
		days_spent = days_spent + 1;
	}

	for(i= (1+ month); i<=12; i++)
	{
		days_spent = days_spent + 30;
	}
	
	return days_spent;
}

int difference_between_two_dates_in_days()
{
	int day_birth, month_birth, year_birth;
	int day_current, month_current, year_current;
	unsigned int days_spent = 0;
	unsigned int i;

	do{
		scanf("%d", &day_birth);
	}while( day_birth <1 || day_birth > 30);

	do{
		scanf("%d", &month_birth);
	}while( month_birth <1 || month_birth > 12);
	
	do{
		scanf("%d", &year_birth);
	}while( year_birth <1 || year_birth >= 2020 );
	
	do{
		scanf("%d", &day_current);
	}while( day_current <1 || day_current > 30);
	
	do{
		scanf("%d", &month_current);
	}while( month_current <1 || month_current > 12);
	
	do{
		scanf("%d", &year_current);
	}while( ( year_current <1 || year_current >= 2020) || (year_current < (year_birth+1)) );

	if(month_current == month_current && day_current == day_birth)
	{
		for(i= year_birth; i< year_current; i++)
		{
			days_spent = days_spent + year;
		}
		
	}else
	{

		if(year_birth == year_current)
		{
			days_spent = sum_of_days_of_year_of_birth(day_birth, month_birth);
		}else
		{
			days_spent = sum_of_days_of_year_of_birth(day_birth, month_birth);
	
			for(i= (1+year_birth); i< year_current; i++)
			{
				days_spent = days_spent + year;
			}
		
			if( (month_current == month_birth) && (day_current == day_birth) )
			{
				days_spent = days_spent + year;
			}else
			{
	
				for(i = 1; i< month_current; i++)
				{
					days_spent = days_spent + 30;
				}
	
				for(i = 1; i< day_current; i++)
				{
					days_spent = days_spent + 1;
				}

			}
		}
	}
	return days_spent;
}

int main()
{
	printf("%d\n", difference_between_two_dates_in_days());
	
	return 0;
}
