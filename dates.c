/*
 ============================================================================
 Name        : Date
 Author      : Bobko Nikita
 Version     : 2.1.
 Copyright   : Copyright. All rights are reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define error printf ("Error!!! Incorrect information!!! ")

/*Структура даты*/
typedef struct
{
	int day;
	int month;
	int year;
	int day_of_week;
} date;




int fun_number(int day, int month, int visocosniy);
int fun1(void);
int fun4(void);
int fun5(void);
int fun2(void);
int fun24(void);
void fun7(void);
void fun10(void);
int correct_with_return(int day, int month, int year);//Определяет правильность даты, а также високосный ли год. Возвращает 0 или какое либо другое положительное число, если верно, и -1, если не верно.
int fun12(void);
int fun_number_reverse(int number, int visocosniy, int i);//Возвращает день и мемяц, зная порядковый номер дня в году.
void fun19(void);
void fun6(void);
int fun8(void);
int fun18(void);
void fun3(void);
int fun13(void);
int fun9(void);
int fun_holiday(int day, int month);//Определяет является ли день праздником.
int fun11(void);
int fun14(void);
void fun15(void);
int fun16(void);
date fun_next_date_2(date);
int fun_do_kontsa_month(int day, int month, int visocosniy);
void fun20(void);
int fun17(void);
int fun21(void);
int fun22(void);
int fun23(void);

int main(void)
{
        int zadanie, i;
        printf ("0=============================================================================0\n|================{             Program: \"Date\".              }================|\n|================{              Version: 2.1.                }================|\n|================{          Author: \"Bobko Nikita\".          }================|\n|================{     Copyright. All rights are reserved.   }================|\n0=============================================================================0");
        for (i = 1; i == 1;)
        {
        	printf ("\n\nEnter number of task (from 1 to 24) (enter 0- to exit): ");
        	scanf ("%d", &zadanie);
        	printf ("\n");
        	if(zadanie == 1)
        	{
        		fun1();
        		printf ("\n\n|=============================================================================|");
        	}
        	else if(zadanie == 5)
        	{
      	        fun5();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if(zadanie == 4)
        	{
       	        fun4();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 2)
        	{
       	        fun2();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 24)
        	{
        		fun24();
        	    printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 7)
        	{
       	        fun7();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 10)
        	{
       	        fun10();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 12)
        	{
       	        fun12();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 19)
        	{
       	        fun19();
       	        printf ("\n\n|=============================================================================|");
        	}
            else if (zadanie == 6)
        	{
       	        fun6();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 8)
        	{
       			fun8();
       			printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 18)
        	{
       			fun18();
       			printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 3)
        	{
       			fun3();
       			printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 13)
        	{
      	       	fun13();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 9)
        	{
       	        fun9();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 11)
        	{
        		fun11();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 14)
        	{
       			fun14();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 15)
        	{
       	        fun15();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 16)
        	{
       	        fun16();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 20)
        	{
       			fun20();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 17)
        	{
       	        fun17();
       	        printf ("\n\n|=============================================================================|");
        	}
        	else if (zadanie == 21)
        	{
       	        fun21();
       	        printf ("\n\n|=============================================================================|");
        	 }
        	 else if (zadanie == 22)
        	 {
       	        fun22();
       	        printf ("\n\n|=============================================================================|");
        	 }
        	 else if (zadanie == 23)
        	 {
       	        fun23();
       	        printf ("\n\n|=============================================================================|");
        	 }
        	 else if (zadanie == 0) i++;
        	 else
        	 {
        		 error;
        		 printf ("\n\n|=============================================================================|");
        	 }
        }
        return 0;
}

int fun1(void)//Задание 1.
{
	int day, month, year, visocosniy, n, otvet;						//n - порядковое число дня из 365 или 366.
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &year);
	printf ("\n");
	visocosniy = correct_with_return(day, month, year);
	n = fun_number(day, month, visocosniy);
	if (visocosniy != -1)
	{
		if(visocosniy == 0)
		{
			otvet = 366 - n;
			printf ("Result: %d. ", otvet);
		}
		else
		{
			otvet = 365 - n;
			printf ("Result: %d. ", otvet);
		}
	}
	else
	{
		error;
	}
	return EXIT_SUCCESS;
}

int fun2(void)
{
	int january1;
	date date;
	printf ("Enter \"i\" (day): ");
	scanf ("%d", &date.day);
	printf ("Enter \"j\" (month): ");
	scanf ("%d", &date.month);
	printf ("Enter \"k\" (year): ");
	scanf ("%d", &date.year);
	printf ("Enter day of the first January this year (1- Monday, 2- Tuesday... 7- Sunday): ");
	scanf ("%d", &january1);
	printf ("\n");
	int visocosniy = correct_with_return(date.day, date.month, date.year);
	if (visocosniy != -1 && january1 >= 1 && january1 <= 7)
	{
		int i;
		int number = fun_number(date.day, date.month, visocosniy);
		for (i = 2; i <= number; i++)
		{
			january1++;
		}
		for (i = 1; i == 1; i++)
		{
			if ((january1 + 6) % 7 == 0) printf ("Result: Monday. ");
			else if ((january1 + 5) % 7 == 0) printf ("Result: Tuesday. ");
			else if ((january1 + 4) % 7 == 0) printf ("Result: Wednesday.");
			else if ((january1 + 3) % 7 == 0) printf ("Result: Thursday. ");
			else if ((january1 + 2) % 7 == 0) printf ("Result: Friday. ");
			else if ((january1 + 1) % 7 == 0) printf ("Result: Saturday. ");
			else if (january1 % 7) printf ("Result: Sunday. ");
		}
		return 0;
	}
	else
	{
		error;
		return 0;
	}
}

void fun3(void)
{
	date date;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &date.day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &date.month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &date.year);
	printf ("Enter \"m\" (day of week %d.%d.%d) (Monday- 1, Tuesday-2... Sunday- 7): ", date.day, date.month, date.year);
	scanf ("%d", &date.day_of_week);
	printf ("\n");
	int visocosniy = correct_with_return(date.day, date.month, date.year);
	if (visocosniy != -1 && date.day_of_week >= 1 && date.day_of_week <= 7)
	{
		int result = 0;
		date.day--;
		date.day_of_week--;
		int month = date.month;
		while (month == date.month)
		{
			date = fun_next_date_2(date);
			date.day_of_week++;
			if (date.day_of_week % 7 == 0) result++;
			else result = result + 2;
		}
		if (date.day_of_week % 7 == 0)
		{
			result--;
			printf ("Result: %d. ", result);
		}
		else
		{
			result -= 2;
			printf ("Result: %d. ", result);
		}
	}
	else error;
}

int fun4(void)//Задание 4.
{

	int day1, month1, otvet, year, day2, number1, number2, month2, visocosniy1, visocosniy2;
	printf ("Enter \"i\" (day 1): ");
	scanf ("%d", &day1);
	printf ("Enter \"j\" (month 1): ");
	scanf ("%d", &month1);
	printf ("Enter \"l\" (day 2): ");
	scanf ("%d", &day2);
	printf ("Enter \"m\" (month 2): ");
	scanf ("%d", &month2);
	printf ("Enter \"k\" (year 1 and year 2): ");
	scanf ("%d", &year);
	printf ("\n");
	visocosniy1 = correct_with_return(day1, month1, year);
	visocosniy2 = correct_with_return(day2, month2, year);
	number1 = fun_number(day1, month1, visocosniy1);
	number2 = fun_number(day2, month2, visocosniy2);
	if (visocosniy1 != -1 && visocosniy2 != -1)
	{
		otvet = abs(number1 - number2);
		if (otvet >= 90)
		{
			printf ("Result: Yes. ");
			return 0;
		}
		else
		{
			printf ("Result: No. ");
			return 0;
		}
	}
	else
	{
		error;
		return 0;
	}
}

int fun5(void)
{
	int day, month, L, n, year, visocosniy, number, do_kontsa_goda, otvet;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &year);
	printf ("Enter \"n\": ");
	scanf ("%d", &n);
	printf ("Enter \"L\": ");
	scanf ("%d", &L);
	printf ("\n");
	visocosniy = correct_with_return(day, month, year);
	if (n < 365 && L > 0 && n >= 0 && visocosniy != -1)
	{
		number = fun_number(day, month, visocosniy);
		if (visocosniy == 0)
		{
			do_kontsa_goda = 366 - number;
			if (n > do_kontsa_goda)
			{
				otvet = year + 1 - L;
				printf ("Result: %d. ", otvet);

				return 0;
			}
			else
			{
				if (n <= do_kontsa_goda)
				{
					otvet = year - L;
					printf ("Result: %d. ", otvet);

					return 0;
				}
			}
		}
		else
		{
			if (visocosniy != 0)
			{
				do_kontsa_goda = 365 - number;
				if (n > do_kontsa_goda)
				{
					otvet = year + 1 - L;
					printf ("Result: %d. ", otvet);

					return 0;
				}
				else
				{
					if (n <= do_kontsa_goda)
					{
						otvet = year - L;
						printf ("Result: %d. ", otvet);

						return 0;
					}
				}
			}
		}
	}
	else
	{
		error;
		return 0;
	}
	return 0;
}

void fun6(void)
{
	/*date date1, date2;
	printf ("Enter \"i\" (day 1): ");
	scanf ("%d", &date1.day);
	printf ("Enter \"j\" (month 1): ");
	scanf ("%d", &date1.month);
	printf ("\nEnter \"l\" (day 2): ");
	scanf ("%d", &date2.day);
	printf ("Enter \"m\" (month 2): ");
	scanf ("%d", &date2.month);
	printf ("Enter \"k\" (year 1 and year 2): ");
	scanf ("%d", &date1.year);
	printf ("Enter \"p\" (day of week the first date) (Monday- 1, Tuesday- 2... Sunday- 7): ");
	scanf ("%d", &date1.day_of_week);
	date1.year = date2.year;
	int visocosniy1 = correct_with_return(date1.day, date1.month, date1.year);
	int visocosniy2 = correct_with_return(date2.day, date2.month, date2.year);
	if (visocosniy1 != -1 && visocosniy2 != -1)
	{
		int result = 0;
		int number1 = fun_number(date1.day, date1.month, visocosniy1);
		int number2 = fun_number(date2.day, date2.month, visocosniy2);
		date2.day_of_week = 0;
		if (number1 <= number2)
		{
			while (date1.day != date2.day && date1.month != date2.month && date1.year != date2.year)
			{
				date1 = fun_next_date_2(date1);
				date1.day_of_week++;
				if (date1.day_of_week % 7 == 0 || (date1.day_of_week +1) % 7 == 0) result++;
			}
			printf ("Result: %d. ", result);
		}
		else
		{
			date2.day--;
			date2.day_of_week--;
			while (date2.day != date1.day && date2.month != date1.month && date2.year != date1.year)
			{
				date2 = fun_next_date_2(date2);
				date2.day_of_week++;
				if (date2.day_of_week % 7 == 0 || (date2.day_of_week +1) % 7 == 0) result++;
			}
			if (date2.day_of_week % 7 == 0 || (date1.day_of_week +1) % 7 == 0)
			{
				result--;
				printf ("Result: %d. ", result);
			}
			else printf ("Result: %d. ", result);
		}
	}
	else error;*/
	int day1, visocosniy1, p, otvet, visocosniy2, day2, month1, month2, year;
	printf ("Enter \"i\" (day 1): ");
	scanf ("%d", &day1);
	printf ("Enter \"j\" (month 1): ");
	scanf ("%d", &month1);
	printf ("\nEnter \"l\" (day 2): ");
	scanf ("%d", &day2);
	printf ("Enter \"m\" (month 2): ");
	scanf ("%d", &month2);
	printf ("Enter \"k\" (year 1 and year 2): ");
	scanf ("%d", &year);
	printf ("Enter \"p\" (day of week %d.%d.%d) (Monday- 1, Tuesday- 2... Sunday- 7): ", day1, month1, year);
	scanf ("%d", &p);
	printf ("\n");
	visocosniy1 = correct_with_return(day1, month1, year);
	visocosniy2 = correct_with_return(day2, month2, year);
	otvet = 0;
	if (visocosniy1 != -1 && visocosniy2 != -1 && p > 0 && p <= 7)
	{
		int number1 = fun_number(day1, month1, visocosniy1);
		int number2 = fun_number(day2, month2, visocosniy2);
		int number = abs(number1 - number2);
		if ( (month1 < month2) || (month1 == month2 && day1 < day2) )
		{
			int i, week_day[number];
			week_day[0] = p;
			for (i = 1; i <= number; i++)
			{
				week_day[i] = week_day[i-1] + 1;
				if ( (week_day[i] + 1) % 7 == 0 || week_day[i] % 7 == 0 )
				{
					otvet = otvet + 1;
				}
			}
			printf ("Result: %d. ", otvet);
		}
		else
		{
			int i, week_day[number];
			week_day[number + 1] = p + 1;
			for (i = number; i >= 1; i--)
			{
				week_day[i] = week_day[i+1] - 1;
				if ( (week_day[i] + 1) % 7 == 0 || week_day[i] % 7 == 0 )
				{
					otvet = otvet + 1;
				}
			}
			printf ("Result: %d. ", otvet);
		}
	}
	else
	{
		error;
	}
}

void fun7(void)
{
	date date1;
	int visocosniy;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &date1.day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &date1.month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &date1.year);
	printf ("\n");
	visocosniy = correct_with_return(date1.day, date1.month, date1.year);
	if (visocosniy != -1)
	{
		int i, otvet = 0;
		date last_date;  //Последний день времени года.
		last_date.year = date1.year;
		for (i = 1; i == 1; i++)
		{
			if ((date1.month == 1 || date1.month == 2) && visocosniy == 0)
			{
				last_date.day = 29;
				last_date.month = 2;
			}
			else
			{
				if ((date1.month == 1 || date1.month == 2) && visocosniy != 0)
				{
					last_date.day = 28;
					last_date.month = 2;
				}
				else
				{
					if (date1.month >= 3 && date1.month <= 5)
					{
						last_date.day = 31;
						last_date.month = 5;
					}
					else
					{
						if (date1.month >= 6 && date1.month <= 8)
						{
							last_date.day = 31;
							last_date.month = 8;
						}
						else
						{
							if (date1.month >= 9 && date1.month <= 11)
							{
								last_date.day = 30;
								last_date.month = 11;
							}

							else
							{
								if (date1.month == 12 && ((date1.year + 1) % 4 == 0) )
								{
									last_date.day = 29;
									last_date.month = 2;
									last_date.year = date1.year + 1;
								}
								else
								{
									if (date1.month == 12 && ((date1.year + 1) % 4 != 0) )
									{
										last_date.day = 28;
										last_date.month = 2;
										last_date.year = date1.year + 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (date1.day == last_date.day && date1.month == last_date.month && date1.year == last_date.year)
		{
			printf ("Result: 0. ");

		}
		else
		{
			for (i = 1; i == 1;)
			{
				date1 = fun_next_date_2(date1);
				otvet = otvet + 1;
				if (date1.day == last_date.day && date1.month == last_date.month && date1.year == last_date.year)
				{

					i++;
				}
			}
			printf ("Result: %d. ", otvet);

		}
	}
	else
	{
		error;

	}
}

int fun8(void)
{
	int k, i, otvet_p, otvet_r;
	printf ("Enter \"n\" (number of date): ");
	scanf ("%d", &k);             //k количестов дат.
	printf ("\n");
	int day[k], visocosniy[k], month[k], year[k];
	for (i = 1; i <= k;)
	{
		printf ("Enter day %d: ", i);
		scanf ("%d", &day[i]);
		printf ("Enter month %d: ", i);
		scanf ("%d", &month[i]);
		printf ("Enter year %d: ", i);
		scanf ("%d", &year[i]);
		printf ("\n");
		visocosniy[i] = correct_with_return(day[i], month[i], year[i]);
		if (visocosniy[i] == -1)
		{
			error;

			i = k;
			return 0;
		}
		else
		{
			i++;
		}
	}
	day[0] = day[k];
	month[0] = month[k];
	year[0] = year[k];
	otvet_r = 0;
	otvet_p = 0;
	for (i = 1; i <= k; i++)//Определяет позднюю дату.
	{
		if ( (year[i] > year[i-1]) || (year[i] == year[i-1] && month[i] > month[i-1]) || (year[i] == year[i-1] && month[i] == month[i-1] && day[i] > day[i-1]) )
		{
			otvet_p = i;
		}
	}
	for (i = 1; i <= k; i++)//Определяет ранюю дату.
	{
		if ( (year[i] < year[i-1]) || (year[i] == year[i-1] && month[i] < month[i-1]) || (year[i] == year[i-1] && month[i] == month[i-1] && day[i] < day[i-1]) )
		{
			otvet_r = i;
		}
	}
	/*for (i = 1; i == 1; i++)
	{
		if (otvet_p == 0)
		{
			otvet_p = k;
		}
	}
	for (i = 1; i == 1;i++)
	{
		if (otvet_r == 0)
		{
			otvet_r = k;
		}
	}*/
	for (i = 1; i == 1; i++)
	{
		if (k == 1)
		{
			otvet_r = 1;
			otvet_p = 1;
		}
	}
	printf ("Result: the earliest: date %d (%d.%d.%d). \n        the latest: date %d (%d.%d.%d). ", otvet_r, day[otvet_r], month[otvet_r], year[otvet_r], otvet_p, day[otvet_p], month[otvet_p], year[otvet_p]);

	return 0;
}

int fun9(void)
{
	int day, month, year, n_1, n_2, visocosniy;
	printf ("Enter \"i\" (day of beginning of session): ");
	scanf ("%d", &day);
	printf ("Enter \"j\" (month of beginning of session): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (year of beginning of session): ");
	scanf ("%d", &year);
	printf ("Enter \"n_1\" (number of exams with 3 days preparing): ");
	scanf ("%d", &n_1);
	printf ("Enter \"n_2\" (number of exams with 4 days preparing): ");
	scanf ("%d", &n_2);
	printf ("\n");
	visocosniy = correct_with_return(day, month, year);
	if (visocosniy != -1 && n_1 > 0 && n_2 > 0)
	{
		int number = fun_number(day, month, visocosniy);
		n_1 = n_1 * 4;
		n_2 = n_2 * 5;
		number = number + n_1 + n_2;
		int i;
		for(i = 1; i == 1;)
		{
			year = year + 1;
			visocosniy = year % 4;
			if ( (visocosniy == 0 && number > 366) || (visocosniy != 0 && number > 365) )
			{
				if (visocosniy == 0)
				{
					number = number - 366;
				}
				else
				{
					number = number - 365;
				}
			}
			else
			{
				i++;
				year = year - 1;
			}
		}
		int otvet_day = fun_number_reverse(number - 1, visocosniy, 0);
		int otvet_month = fun_number_reverse(number - 1, visocosniy, 1);
		printf ("Result: %d.%d.%d. ", otvet_day, otvet_month, year);

	}
	else
	{
		error;

	}
	return EXIT_SUCCESS;
}

void fun10(void)
{
	date date;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &date.day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &date.month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &date.year);
	printf ("\n");
	int visocosniy = correct_with_return(date.day, date.month, date.year);
	if (visocosniy != -1)
	{
		date = fun_next_date_2(date);
		printf ("Result: %d.%d.%d. ", date.day, date.month, date.year);
	}
	else error;
}

int fun11(void)
{
	int month, year;
	printf ("Enter \"j\" (month): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (year): ");
	scanf ("%d", &year);
	int visocosniy = year % 4;
	int do_kontsa_month = fun_do_kontsa_month(0, month, visocosniy);
	int m[do_kontsa_month + 1];
	printf ("Enter \"m\" (day of week the first day of month %d) (Monday- 1, Tuesday- 2... Sunday- 7): ", month);
	scanf ("%d", &m[0]);
	printf ("\n");
	if (month > 0 && month <= 12 && m[0] > 0 && m[0] <= 7)
	{
		int i, holiday;
		m[0]--;
		for(i = 1; i <= do_kontsa_month; i++)
		{
			m[i] = m[i-1] + 1;
		}
		printf ("Result: ");
		for(i = 1; i <= do_kontsa_month; i++)
		{
			holiday = fun_holiday(i, month);
			if (holiday == 0 && (m[i] % 7 != 0) && (m[i] + 1) % 7 != 0  )
			{
				printf ("%d.%d.%d \n        ", i, month, year);
			}
		}

		return EXIT_SUCCESS;
	}
	else
	{
		error;

	}
	return EXIT_SUCCESS;
}

int fun12(void)
{
	date date1, date2;
	printf ("Enter \"i\" (day 1): ");
	scanf ("%d", &date1.day);
	printf ("Enter \"j\" (month 1): ");
	scanf ("%d", &date1.month);
	printf ("Enter \"k\" (year 1): ");
	scanf ("%d", &date1.year);
	printf ("\n");

	printf ("Enter \"l\" (day 2): ");
	scanf ("%d", &date2.day);
	printf ("Enter \"m\" (month 2): ");
	scanf ("%d", &date2.month);
	printf ("Enter \"n\" (year 2): ");
	scanf ("%d", &date2.year);
	printf ("\n");

	int visocosniy1 = correct_with_return(date1.day, date1.month, date1.year);
	int visocosniy2 = correct_with_return(date2.day, date2.month, date2.year);
	if (visocosniy1 != -1 && visocosniy2 != -1 && (date1.year < date2.year || (date1.year == date2.year && date1.month < date2.month) || (date1.year == date2.year && date1.month == date2.month && date1.day < date2.day)   ))
	{
		int i, otvet = 0;
		for (i=1;i==1;)
		{
			date1 = fun_next_date_2(date1);
			if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
			{
				i++;
			}
			else
			{
				otvet++;
			}
		}
		printf ("Result: %d. ", otvet);

		return 0;
	}
	else
	{
		error;

		return 0;
	}
}

int fun13(void)
{
	float today_day, today_month, today_year, birth_day, birth_month, birth_year;
	float otvet;
	printf ("Enter \"i\" (today day): ");
	scanf ("%f", &today_day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%f", &today_month);
	printf ("Enter \"k\" (today year): ");
	scanf("%f", &today_year);
	printf ("Enter \"l\" (day of birth): ");
	scanf ("%f", &birth_day);
	printf ("Enter \"m\" (month of birth): ");
	scanf ("%f", &birth_month);
	printf ("Enter \"n\" (year of birth): ");
	scanf ("%f", &birth_year);
	printf ("\n");
	float today_visocosniy, birth_visocosniy;
	today_visocosniy = correct_with_return(today_day, today_month, today_year);
	birth_visocosniy = correct_with_return(birth_day, birth_month, birth_year);
	float today_number, birth_number;
	today_number = fun_number(today_day, today_month, today_visocosniy);
	birth_number = fun_number(birth_day, birth_month, birth_visocosniy);
	if (today_visocosniy != -1 && birth_visocosniy != -1 && (today_year > birth_year || (today_year == birth_year && today_number > birth_number)))
	{
		float today_otvet, birth_otvet;
		int i;
		for(i = 1; i == 1; i++)
		{
			if (today_visocosniy == 0)
			{
				today_otvet = today_year + (today_number / 366);
			}
			else
			{
				today_otvet = today_year + (today_number / 365);
			}
		}
		for(i = 1; i == 1; i++)
		{
			if (birth_visocosniy == 0)
			{
				birth_otvet = birth_year + (birth_number / 366);
			}
			else
			{
				birth_otvet = birth_year + (birth_number / 365);
			}
		}
		otvet = today_otvet - birth_otvet;
		printf ("Result: %f.", otvet);
	}
	else
	{
		error;
	}
	return EXIT_SUCCESS;
}

int fun14(void)
{
	int n;
	printf ("Enter number of date: ");
	scanf ("%d", &n);
	if(n > 0)
	{
		int i, day[n+1], month[n+1], year, visocosniy, spring = 0, summer = 0;
		printf ("Enter year: ");
		scanf ("%d", &year);
		printf ("\n");
		for (i = 1; i <= n; i++)
		{
			printf ("\"Date %d\" \n", i);
			printf ("Enter day %d: ", i);
			scanf ("%d", &day[i]);
			printf ("Enter month %d: ", i);
			scanf ("%d", &month[i]);
			printf ("\n");
			visocosniy = correct_with_return(day[i], month[i], year);
			if (visocosniy == -1)
			{
				error;

				return 0;
			}
		}
		for (i = 1; i <= n; i++)//Определяет ранюю из весенних.
		{
			if ((month[i] >= 3 && month[i] <= 5) && (month[i] < month[i-1] || (month[i] == month[i-1] && day[i] < day[i-1])   )   )
			{
				spring = i;
			}
		}
		for (i = 1; i <= n; i++)//Определяет позднюю из летних.
		{
			if ((month[i] >= 6 && month[i] <= 8) && (month[i] > month[i-1] || (month[i] == month[i-1] && day[i] > day[i-1]) )    )
			{
				summer = i;
			}
		}
		printf ("Result: ");
		for (i=1;i==1;i++)
		{
			if (spring == 0)
			{
				printf ("There is not spring dates. ");
			}
			else
			{
				printf ("the earliest in spring: date %d (%d.%d.%d). ", spring, day[spring], month[spring], year);
			}
		}
		printf ("\n        ");
		for (i=1;i==1;i++)
		{
			if (summer == 0)
			{
				printf ("There is not summer dates. ");
			}
			else
			{
				printf ("the latest in summer: date %d (%d.%d.%d). ", summer, day[summer], month[summer], year);
			}
		}

		return 0;
	}
	else
	{
		error;

		return 0;
	}
}

void fun15(void)
{
	date date1, date2;
	printf ("Enter \"i\" (day 1): ");
	scanf ("%d", &date1.day);
	printf ("Enter \"j\" (month 1): ");
	scanf ("%d", &date1.month);
	printf ("Enter \"k\" (year 1): ");
	scanf ("%d", &date1.year);
	printf ("\nEnter \"l\" (day 2): ");
	scanf ("%d", &date2.day);
	printf ("Enter \"m\" (month 2): ");
	scanf ("%d", &date2.month);
	printf ("Enter \"n\" (year 2): ");
	scanf ("%d", &date2.year);
	printf ("\n");
	int visocosniy1 = correct_with_return(date1.day, date1.month, date1.year);
	int visocosniy2 = correct_with_return(date2.day, date2.month, date2.year);
	if (visocosniy1 != -1 && visocosniy2 != -1 && date1.year == date2.year)
	{
		int result = 0, holiday, i;
		date1.day_of_week = 0;
		date2.day_of_week = 0;
		int number1 = fun_number(date1.day, date1.month, visocosniy1);
		int number2 = fun_number(date2.day, date2.month, visocosniy2);
		if (number1 <= number2)
		{
			for (i = 1; i <= number2 - number1 - 1; i++)
			{
				date1 = fun_next_date_2(date1);
				holiday = fun_holiday(date1.day, date1.month);
				if (holiday == 1) result++;
			}
			printf ("Result: %d. ", result);
		}
		else
		{
			for (i = 1; i <= number1 - number2 - 1; i++)
			{
				date2 = fun_next_date_2(date2);
				holiday = fun_holiday(date2.day, date2.month);
				if (holiday == 1) result++;
			}
			printf ("Result: %d. ", result);
		}
		/*if (date1.year < date2.year || (date1.year == date2.year && date1.month < date2.month) || (date1.year == date2.year && date1.month == date2.month && date1.day < date2.day))
		{
			while (date1 != date2)
			{
				date1 = fun_next_date_2(date1);
				holiday = fun_holiday(date1.day, date1.month);
				if (holiday == 1) result++;
			}
		}
		else
		{
			if (date1 == date2) printf ("Result: 0. ");
			else while (date1 != date2)
			{
				date2 = fun_next_date_2(date2);
				holiday = fun_holiday(date1.day, date1.month);
				if (holiday == 1) result++;
			}
		}*/
	}
	else error;
}

int fun16(void)
{
	int day, month, year, visocosniy, n;
	printf ("Enter \"i\" (day): ");
	scanf ("%d", &day);
	printf ("Enter \"j\" (month): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (year): ");
	scanf ("%d", &year);
	printf ("Enter \"n\": ");
	scanf ("%d", &n);
	printf ("\n");
	n = 7 * n;
	visocosniy = correct_with_return(day, month, year);
	if (visocosniy != -1 && n > 0)
	{
		int i, number, k = 0;
		number = fun_number(day, month, visocosniy);
		number = number + n;
		for (i = 0; k == 0;)
		{
			if (number > 366 && visocosniy == 0 )
			{
				number = number - 366;
				i++;
			}
			else
			{
				if (number > 365 && visocosniy != 0)
				{
					number = number - 365;
					i++;
				}
				else
				{
					k = 100;
				}
			}
		}
		number = number - 1;
		year = year + i;
		visocosniy = year % 4;
		day = fun_number_reverse(number, visocosniy, 0);
		month = fun_number_reverse(number, visocosniy, 1);
		printf ("Result: %d.%d.%d. ", day, month, year);

	}
	else
	{
		error;

	}
	return 0;
}

int fun17(void)
{
	int N;
	printf ("Enter \"N\": ");
	scanf ("%d", &N);
	printf ("\n");
	if (N > 0)
	{
		int i, visocosniy, winter = 0, spring = 0, summer = 0, autumn = 0, day[N], month[N];
		for(i = 1; i <= N; i++)
		{
			printf ("Enter day %d: ", i);
			scanf ("%d", &day[i]);
			printf ("Enter month %d: ", i);
			scanf ("%d", &month[i]);
			printf ("\n");
			visocosniy = correct_with_return(day[i], month[i], 2008);
			if (visocosniy == -1)
			{
				error;

				return 0;
			}
		}
		for (i = 1; i <= N; i++)
		{
			if (day[i] > 15)
			{
				month[i]++;
			}
		}
		for (i = 1; i <= N; i++)
		{
			if (month[i] == 12 || month[i] == 1 || month[i] == 2)
			{
				winter++;
			}
			else
			{
				if (month[i] >= 3 && month[i] <= 5)
				{
					spring++;
				}
				else
				{
					if (month[i] >= 6 && month[i] <= 8)
					{
						summer++;
					}
					else
					{
						if (month[i] >= 9 && month[i] <= 11)
						{
							autumn++;
						}
						else
						{
							if (month[i] == 13)
							{
								winter++;
							}
						}
					}
				}
			}
		}
		printf ("Result: Winter: %d \n        Spring: %d \n        Summer: %d \n        Autumn: %d. ", winter, spring, summer, autumn);

		return 0;
	}
	else
	{
		error;

		return 0;
	}
}

int fun18(void)
{
	int day, n, month, year, visocosniy;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &year);
	printf ("Enter \"n\": ");
	scanf ("%d", &n);
	printf ("\n");
	visocosniy = correct_with_return(day, month, year);
	int number;
	number = fun_number(day, month, visocosniy);
	number = number + n;
	if (visocosniy != -1 && ((visocosniy == 0 && number <= 366) || (visocosniy != 0 && number <= 365)) )
	{
		day = fun_number_reverse(number, visocosniy, 0);
		month = fun_number_reverse(number, visocosniy, 1);
		printf ("Result: day: %d. \n        month: %d. ", day, month);

	}
	else
	{
		error;

	}
	return EXIT_SUCCESS;
}

void fun19(void)
{
	date date;
	printf ("Enter \"i\" (day): ");
	scanf ("%d", &date.day);
	printf ("Enter \"j\" (month): ");
	scanf ("%d", &date.month);
	printf ("Enter \"k\" (year): ");
	scanf ("%d", &date.year);
	printf ("Enter \"m\" (day of week %d.%d.%d) (Monday- 1, Tuesday- 2... Sunday- 7.): ", date.day, date.month, date.year);
	scanf ("%d", &date.day_of_week);
	printf ("\n");
	int visocosniy = correct_with_return(date.day, date.month, date.year);
	if (visocosniy != -1 && date.day_of_week >= 1 && date.day_of_week <= 7)
	{
		int i, otvet = 0;
		for (i = date.year; i == date.year;)
		{
			date = fun_next_date_2(date);
			date.day_of_week++;
			if (date.day_of_week % 7 == 0) otvet++;
		}
		printf ("Result: %d. ", otvet);
	}
	else
	{
		error;
	}
}


void fun20(void)
{
	date date1;
	int visocosniy;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &date1.day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &date1.month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &date1.year);
	printf ("Enter \"m\" (day of week %d.%d.%d) (Monday- 1, Tuesday- 2... Sunday- 7): ", date1.day, date1.month, date1.year);
	scanf ("%d", &date1.day_of_week);
	printf ("\n");
	visocosniy = correct_with_return(date1.day, date1.month, date1.year);
	if (visocosniy != -1 && date1.day_of_week >= 1 && date1.day_of_week <= 7)
	{
		int i;
		date date2;
		date2 = date1;
		int m = date1.day_of_week;//backup на случай изменения date1.day_of_week.
		for (i = 1; i == 1;)
		{
			date1 = fun_next_date_2(date1);
			date1.day_of_week = date1.day_of_week + 1;
			if (   ((date1.day_of_week + 6) % 7 == 0)   ||   ((date1.day_of_week + 4) % 7 == 0)  ||   ((date1.day_of_week + 2) % 7 == 0) )
			{
				i++;
			}
		}
		for (i = 1; i == 1;)
		{
			date2 = fun_next_date_2(date2);
			date2.day_of_week = date2.day_of_week + 1;
			if (      (date2.day_of_week + 2) % 7 == 0 )
			{
				i++;
			}
		}
		if (m >= 1 && m <= 4)
		{
			printf ("Result: the earliest day on this week: %d.%d.%d. \n        the latest day on this week: %d.%d.%d. ", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year);
		}
		else
		{
			printf ("Result: There is not the earliest day on this week. \n        There is not the latest day on this week. ");
		}
	}
	else
	{
		error;
	}
}

int fun21(void)
{
	int m;
	printf ("Enter \"m\": ");
	scanf ("%d", &m);
	date date[m+2];
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &date[0].day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &date[0].month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &date[0].year);
	printf ("Enter \"p\" (day of week %d.%d.%d) (Monday- 1, Tuesday-2... Sunday- 7): ", date[0].day, date[0].month, date[0].year);
	scanf ("%d", &date[0].day_of_week);
	printf ("\n");
	int visocosniy = correct_with_return(date[0].day, date[0].month, date[0].year);
	if (visocosniy != -1 && date[0].day_of_week > 0 && date[0].day_of_week < 7 && m > 0)
	{
		int i, otvet2[m];/*какая по счету смена (1-ая или 2-ая) в этот день*/
		otvet2[0] = 2;
		date[1] = fun_next_date_2(date[0]);
		date[1].day_of_week = date[0].day_of_week + 1;
		for (i = 1; i <= m; i++)
		{
			if (date[i].day_of_week % 7 == 0)
			{
				otvet2[i] = 0;//0 если воскресенье
				date[i+1] = fun_next_date_2(date[i]);
				date[i+1].day_of_week = date[i].day_of_week + 1;
			}
			else
			{
				if (otvet2[i-1] == 0 || otvet2[i-1] == 2)
				{
					otvet2[i] = 1;
					date[i+1] = date[i];
					date[i+1].day_of_week = date[i].day_of_week;//На всякий случай
				}
				else
				{
					otvet2[i] = 2;
					date[i+1] = fun_next_date_2(date[i]);
					date[i+1].day_of_week = date[i].day_of_week + 1;
				}
			}
		}
		printf ("Result: %d.%d.%d. \n        ", date[m].day, date[m].month, date[m].year);

		if (otvet2[m] == 0 || otvet2[m] == 1)
		{
			printf ("It is the first change this day. ");

			return 0;
		}
		else
		{
			printf ("It is the second change this day. ");

			return 0;
		}

	}
	else
	{
		error;

		return 0;
	}
}

int fun22(void)
{
	date date;
	printf ("Enter \"i\" (day and day of week): ");
	scanf ("%d", &date.day);
	date.day_of_week = date.day;
	printf ("Enter \"j\" (month): ");
	scanf ("%d", &date.month);
	printf ("\n");
	date.year = 2008;//2008 потому что это может високосный год.
	int visocosniy = correct_with_return(date.day, date.month, 2008);
	if (visocosniy != -1 && date.day_of_week >=1 && date.day_of_week <= 5 && date.month >= 6 && date.month <= 8)
	{
		int i, holiday;
		date.day--;
		date.day_of_week--;
		for (i = 1; i <= 21; i++)
		{
			date = fun_next_date_2(date);
			date.day_of_week++;
			holiday = fun_holiday(date.day, date.month);
			if (date.day_of_week % 7 == 0 || holiday == 1)
			{
				i--;
			}
		}
		printf ("Result: %d.%d. ", date.day, date.month);
		return 0;
	}
	else
	{
		error;
		return 0;
	}
}

/*int fun22_2(void)
{
	date date;
	int stop;
	printf ("NOTE: There is a mistake in this task. There are two variable with name \"i\" \n      (day and day of week). So \"i\" (day of week) is renamed as \"m\". ");
	printf ("\n \n");
	printf ("Enter i (day): ");
	scanf ("%d", &date.day);
	printf ("Enter j (month): ");
	scanf ("%d", &date.month);
	printf ("Enter m (day of week %d.%d) (Monday- 1, Tuesday- 2... Sunday- 7): ", date.day, date.month);
	scanf ("%d", &date.day_of_week);
	printf ("\n");
	int visocosniy = correct_with_return(date.day, date.month, 2008);
	if (visocosniy != -1 && date.day_of_week >= 1 && date.day_of_week <= 5 && date.month >= 6 && date.month <= 8)
	{
		int i, holiday;
		for (i = 1; i <= 20;)
		{
			date.day_of_week++;
			holiday = fun_holiday(date.day, date.month);
			if (holiday == 0 && date.day_of_week % 7 != 0)
			{
				i++;
				date = fun_next_date_2(date);
			}
			else
			{
				date = fun_next_date_2(date);
			}
		}
		printf ("Result: %d.%d. ", date.day, date.month);

		return 0;
	}
	else
	{
		error;

		return 0;
	}
}*/

int fun23(void)
{
	date date;
	int n;
	date.day = 0;
	date.month = 1;
	printf ("Enter \"n\": ");
	scanf ("%d", &n);
	printf ("Enter \"k\" (year): ");
	scanf ("%d", &date.year);
	printf ("Enter \"i\" (day of week 1.1.%d): ", date.year);
	scanf ("%d", &date.day_of_week);
	printf ("\n");
	if (n > 0 && date.year > 0 && date.day_of_week > 0 && date.day_of_week <= 7)
	{
		int i;
		date.day_of_week--;
		for (i = 1; i <= n; i++)//Сам механизм функции.
		{
			date = fun_next_date_2(date);
			date.day_of_week++;
			if (date.day_of_week % 7 == 0)
			{
				date = fun_next_date_2(date);
				date.day_of_week++;
			}
		}
		printf ("Result: %d.%d.%d. ",date.day, date.month, date.year);
		return 0;
	}
	else
	{
		error;
		return 0;
	}
}

int fun24(void)
{
	int day, month, year, L, m;
	printf ("Enter \"i\" (today day): ");
	scanf ("%d", &day);
	printf ("Enter \"j\" (today month): ");
	scanf ("%d", &month);
	printf ("Enter \"k\" (today year): ");
	scanf ("%d", &year);
	printf ("Enter \"m\": ");
	scanf ("%d", &m);
	printf ("Enter \"L\": ");
	scanf ("%d", &L);
	printf ("\n");
	int visocosniy = correct_with_return(day, month, year);
	if(m < 365 && visocosniy != -1 && m > 0 && L > 0)
	{
		int number = fun_number(day, month, visocosniy);
		if (number - m > 0)
		{
			printf ("Result: %d. ", year - L);
			return 0;
		}
		else
		{
			printf ("Result: %d. ", year - L - 1);
			return 0;
		}
	}
	else
	{
		error;
		return 0;
	}
}

int fun_number(int day, int month, int visocosniy)//Определяет порядковое число дня в году (из 365 или 366)
{
	int n;
	if (month == 1)
	{
		n = day;
		return n;
	}
	else
	{
		if (month == 2)
		{
			n = day + 31;
			return n;
		}
		else
		{
			if (month == 3 && visocosniy == 0)
			{
				n = day + 31 + 29;
				return n;
			}
			else
			{
				if (month == 3 && visocosniy != 0 )
				{
					n = day + 31 + 28;
					return n;
				}
				else
				{
					if (month == 4 && visocosniy == 0)
					{
						n = day + 31 + 29 + 31;
						return n;
					}
					else
					{
						if (month == 4 && visocosniy != 0)
						{
							n = day + 31 + 28 + 31;
							return n;
						}
						else
						{
							if (month == 5 && visocosniy == 0)
							{
								n = day + 31 + 29 + 31 + 30;
								return n;
							}
							else
							{
								if (month == 5 && visocosniy != 0)
								{
									n = day + 31 + 28 + 31 +  30;
									return n;
								}
								else
								{
									if (month == 6 && visocosniy == 0)
									{
										n = day + 31 + 29 + 31 + 30 + 31;
										return n;
									}
									else
									{
										if (month == 6 && visocosniy != 0)
										{
											n = day + 31 + 28 + 31 + 30 + 31;
											return n;
										}
										else
										{
											if (month == 7 && visocosniy == 0)
											{
												n = day + 31 + 29 + 31 + 30 + 31 + 30;
												return n;
											}
											else
											{
												if (month == 7 && visocosniy != 0)
												{
													n = day + 31 + 28 + 31 + 30 + 31 + 30;
													return n;
												}
												else
												{
													if (month == 8 && visocosniy == 0)
													{
														n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
														return n;
													}
													else
													{
														if (month == 8 && visocosniy != 0)
														{
															n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
															return n;
														}
														else
														{
															if (month == 9 && visocosniy == 0)
															{
																n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
																return n;
															}
															else
															{
																if (month == 9 && visocosniy != 0)
																{
																	n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
																	return n;
																}
																else
																{
																	if (month == 10 && visocosniy == 0)
																	{
																	n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
																	return n;
																	}
																	else
																	{
																		if (month == 10 && visocosniy != 0)
																		{
																			n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
																			return n;
																		}
																		else
																		{
																			if (month == 11 && visocosniy == 0)
																			{
																				n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
																				return n;
																			}
																			else
																			{
																				if (month == 11 && visocosniy != 0)
																				{
																					n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
																					return n;
																				}
																				else
																				{
																					if (month == 12 && visocosniy == 0)
																					{
																						n = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
																						return n;
																					}
																					else
																					{
																						if (month == 12 && visocosniy != 0)
																						{
																							n = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
																							return n;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int correct_with_return(int day, int month, int year)//Определяет правильность даты, а также високосный ли год. Возвращает 0 или какое либо другое положительное число, если верно, и -1, если не верно.
{
	int visocosniy;
	visocosniy=year%4;												//Если visocosniy = 0, то год- високосный, если не равен 0, то не високостный.
		if ((day > 0 && month > 0 && year > 0) && ((month == 1 && day <= 31) || (month == 2 && day <=29 && visocosniy == 0) || (month == 2 && day <= 28 && visocosniy != 0) || (month == 3 && day <= 31) || (month == 4 && day <= 30) || (month == 5 && day <= 31) || (month == 6 && day <=30) || (month == 7 && day <= 31) || (month == 8 && day <= 31) || (month == 9 && day <= 30) || (month == 10 && day <= 31) || (month == 11 && day <= 30) || (month == 12 && day <= 31)))			//определяем правильность даты
		{
			return visocosniy;
		}
		else
		{
			return -1;
		}
}

int fun_number_reverse(int number, int visocosniy, int i)//Возвращает день и месяц, зная порядковый номер дня в году. i от 0 до 1.
{
	int date[2];
	if (visocosniy == 0)
	{
		if (number <= 31)
		{
			date[0] = number;
			date[1] = 1;
			return date[i];
		}
		else
		{
			if (number - 31 <= 29)
			{
				date[0] = number - 31;
				date[1] = 2;
				return date[i];
			}
			else
			{
				if (number - 31 - 29 <= 31)
				{
					date[0] = number - 31 - 29;
					date[1] = 3;
					return date[i];
				}
				else
				{
					if (number - 31 - 29 - 31 <= 30)
					{
						date[0] = number - 31 - 29 -31;
						date[1] = 4;
						return date[i];
					}
					else
					{
						if (number - 31 - 29 - 31 - 30 <= 31)
						{
							date[0] = number - 31 - 29 - 31 - 30;
							date[1] = 5;
							return date[i];
						}
						else
						{
							if (number - 31 - 29 - 31 - 30 - 31 <= 30)
							{
								date[0] = number - 31 - 29 - 31 - 30 - 30;
								date[1] = 6;
								return date[i];
							}
							else
							{
								if (number - 31 - 29 - 31 - 30 - 31 - 30 <= 31)
								{
									date[0] = number - 31 - 29 - 31 - 30 - 31 - 30;
									date[1] = 7;
									return date[i];
								}
								else
								{
									if (number - 31 - 29 - 31 - 30 - 31 - 30 - 31 <= 31)
									{
										date[0] = number - 31 - 29 - 31 - 30 - 31 - 30 - 31;
										date[1] = 8;
										return date[i];
									}
									else
									{
										if (number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 <= 30)
										{
											date[0] = number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31;
											date[1] = 9;
											return date[i];
										}
										else
										{
											if (number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 <= 31)
											{
												date[0] = number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30;
												date[1] = 10;
												return date[i];
											}
											else
											{
												if (number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 <= 30)
												{
													date[0] = number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31;
													date[1] = 11;
													return date[i];
												}
												else
												{
													if (number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30 <= 31)
													{
														date[0] = number - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30;
														date[1] = 12;
														return date[i];
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (visocosniy != 0)
		{
			if (number <= 31)
			{
				date[0] = number;
				date[1] = 1;
				return date[i];
			}
			else
			{
				if (number - 31 <= 28)
				{
					date[0] = number - 31;
					date[1] = 2;
					return date[i];
				}
				else
				{
					if (number - 31 - 28 <= 31)
					{
						date[0] = number - 31 - 28;
						date[1] = 3;
						return date[i];
					}
					else
					{
						if (number - 31 - 28 - 31 <= 30)
						{
							date[0] = number - 31 - 28 -31;
							date[1] = 4;
							return date[i];
						}
						else
						{
							if (number - 31 - 28 - 31 - 30 <= 31)
							{
								date[0] = number - 31 - 28 - 31 - 30;
								date[1] = 5;
								return date[i];
							}
							else
							{
								if (number - 31 - 28 - 31 - 30 - 31 <= 30)
								{
									date[0] = number - 31 - 28 - 31 - 30 - 30;
									date[1] = 6;
									return date[i];
								}
								else
								{
									if (number - 31 - 28 - 31 - 30 - 31 - 30 <= 31)
									{
										date[0] = number - 31 - 28 - 31 - 30 - 31 - 30;
										date[1] = 7;
										return date[i];
									}
									else
									{
										if (number - 31 - 28 - 31 - 30 - 31 - 30 - 31 <= 31)
										{
											date[0] = number - 31 - 28 - 31 - 30 - 31 - 30 - 31;
											date[1] = 8;
											return date[i];
										}
										else
										{
											if (number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 <= 30)
											{
												date[0] = number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31;
												date[1] = 9;
												return date[i];
											}
											else
											{
												if (number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 <= 31)
												{
													date[0] = number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30;
													date[1] = 10;
													return date[i];
												}
												else
												{
													if (number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 <= 30)
													{
														date[0] = number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31;
														date[1] = 11;
														return date[i];
													}
													else
													{
														if (number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30 <= 31)
														{
															date[0] = number - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30;
															date[1] = 12;
															return date[i];
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int fun_holiday(int day, int month)//Определяет является ли день праздником. Взято с "http://ru.wikipedia.org/wiki/Праздники_России".
{
	if (   (day == 1 && month == 1) || (day == 7 && month == 1) || (day == 19 && month == 1) || (day == 25 && month == 3) || (day == 6 && month == 8) || (day == 15 && month == 8) || (day == 8 && month == 9) || (day == 12 && month == 1) || (day == 13 && month == 1) || (day == 21 && month == 1) || (day == 25 && month == 1) || (day == 27 && month == 1) || (day == 2 && month == 2) || (day == 8 && month == 2) || (day == 9 && month == 2) || (day == 10 && month == 2) || (day == 15 && month == 2) || (day == 23 && month == 2) || (day == 1 && month == 3) || (day == 8 && month == 3) || (day == 11 && month == 3) || (day == 12 && month == 3) || (day == 19 && month == 3) || (day == 20 && month == 3) || (day == 23 && month == 3) || (day == 25 && month == 3) || (day == 27 && month == 3) || (day == 29 && month == 3) || (day == 1 && month == 4) || (day == 2 && month == 4) || (day == 8 && month == 4) || (day == 12 && month == 4) || (day == 15 && month == 4) || (day == 18 && month == 4) || (day == 21 && month == 4) || (day == 26 && month == 4) || (day == 27 && month == 4) || (day == 28 && month == 4) || (day == 30 && month == 4) || (day == 1 && month == 5) || (day == 7 && month == 5) || (day == 9 && month == 5) || (day == 20 && month == 5) || (day == 21 && month == 5) || (day == 24 && month == 5) || (day == 25 && month == 5) || (day == 26 && month == 5) || (day == 27 && month == 5) || (day == 28 && month == 5) || (day == 31 && month == 5) || (day == 1 && month == 6) || (day == 2 && month == 6) || (day == 5 && month == 6) || (day == 6 && month == 6) || (day == 8 && month == 6) || (day == 12 && month == 6) || (day == 14 && month == 6) || (day == 22 && month == 6) || (day == 27 && month == 6) || (day == 29 && month == 6) || (day == 30 && month == 6) || (day == 3 && month == 7) || (day == 8 && month == 7) || (day == 10 && month == 7) || (day == 28 && month == 7) || (day == 1 && month == 8) || (day == 2 && month == 8) || (day == 6 && month == 8) || (day == 9 && month == 8) || (day == 12 && month == 8) || (day == 15 && month == 8) || (day == 22 && month == 8) || (day == 23 && month == 8) || (day == 27 && month == 8) || (day == 1 && month == 8) || (day == 2 && month == 9) || (day == 3 && month == 9) || (day == 4 && month == 9) || (day == 8 && month == 9) || (day == 11 && month == 9) || (day == 13 && month == 9) || (day == 19 && month == 9) || (day == 21 && month == 9) || (day == 24 && month == 9) || (day == 27 && month == 9) || (day == 28 && month == 9) || (day == 1 && month == 10) || (day == 4 && month == 10) || (day == 5 && month == 10) || (day == 6 && month == 10) || (day == 20 && month == 10) || (day == 23 && month == 10) || (day == 24 && month == 10) || (day == 25 && month == 10) || (day == 29 && month == 10) || (day == 30 && month == 10) || (day == 31 && month == 10) || (day == 1 && month == 11) || (day == 4 && month == 11) || (day == 5 && month == 11) || (day == 7 && month == 11) || (day == 10 && month == 11) || (day == 13 && month == 11) || (day == 14 && month == 11) || (day == 19 && month == 11) || (day == 21 && month == 11) || (day == 22 && month == 11) || (day == 27 && month == 11) || (day == 30 && month == 11) || (day == 1 && month == 12) || (day == 3 && month == 12) || (day == 5 && month == 12) || (day == 9 && month == 12) || (day == 12 && month == 12) || (day == 17 && month == 12) || (day == 19 && month == 12) || (day == 20 && month == 12) || (day == 22 && month == 12) || (day == 24 && month == 12) || (day == 27 && month == 12))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int fun_do_kontsa_month(int day, int month, int visocosniy)
{
	int do_kontsa_month;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		do_kontsa_month = 31 - day;
		return do_kontsa_month;
	}
	else
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			do_kontsa_month = 30 - day;
			return do_kontsa_month;
		}
		else
		{
			if (month == 2 && visocosniy == 0)
			{
				do_kontsa_month = 29 - day;
				return do_kontsa_month;
			}
			else
			{
				if (month == 2 && visocosniy != 0)
				{
					do_kontsa_month = 28 - day;
					return do_kontsa_month;
				}
			}
		}
	}
	return EXIT_SUCCESS;
}


date fun_next_date_2(date date1)//Определяет дату завтрашнего дня.
{
	int next_visocosniy;
	date1.day = date1.day + 1;
	next_visocosniy = correct_with_return(date1.day , date1.month, date1.year);
	if (next_visocosniy != -1)
	{
		return date1;
	}
	else
	{
		date1.day = 1;
		date1.month = date1.month + 1;
		next_visocosniy = correct_with_return(date1.day , date1.month, date1.year);
		if (next_visocosniy != -1)
		{
			return date1;
		}
		else
		{
			date1.day = 1;
			date1.month = 1;
			date1.year = date1.year + 1;
			next_visocosniy = correct_with_return(date1.day , date1.month, date1.year);
			if (next_visocosniy != -1)
			{
				return date1;
			}
		}
	}
	return date1;
}


