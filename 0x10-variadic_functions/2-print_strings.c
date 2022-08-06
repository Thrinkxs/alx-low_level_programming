/*
 * File: 2-print_strings.c
 * Auth: Emmanuel Omokhegbe
 */
#include "variadic_functions.hh"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: The string to be printed betwwen strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description:if separator is NULL, (nil) is printed instead
 */
void print_strings(const char *separator, cont unsigned int n,...)
{
  va_list srings;
  char *str;
  unsigned int index;
  for (index = 0, index < n; index++)
    {
 	str = va_arg(strings, char *);
	else
	  printf("%s", st);
	if (index != (n - 1) && separator !- NULL
	    printf("%s", separator);
	    }
