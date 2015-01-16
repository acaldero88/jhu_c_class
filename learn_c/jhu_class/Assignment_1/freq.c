/* Copyright (C) 1999 Lucent Technologies */
/* Excerpted from 'The Practice of Programming' */
/* by Brian W. Kernighan and Rob Pike */

/* 2006/09/12 Peter Froehlich added the EXIT_SUCCESS stuff */
/* 2007/01/22 Peter Froehlich fixed spacing and bracing :-) */

#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>

unsigned long count[UCHAR_MAX+1];

/* freq main: display byte frequency counts */
int main(void)
{
  int c;

  while ((c = getchar()) != EOF) {
    count[c]++;
  }

  for (c = 0; c <= UCHAR_MAX; c++) {
    if (count[c] != 0) {
      printf("%.2x  %c  %lu\n", c, isprint(c) ? c : '-', count[c]);
    }
  }

  return EXIT_SUCCESS;
}
