
//
//  passingArguments.c
//  string-output
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include "passingArguments.h"


// passing arguments

int withArguments1(int argc, char *argv[])
{
//  printf("Hi, ");
//  printf(argv[1]);
//  printf(". How are you?");

  // more secure way cos the string is checked
  printf("Hi %s. How are you?", argv[1]);
  return 0;
}

int withArguments12(int argc, char *argv[])
{
  int a,b;
  int sum, prod, quot, rem;
  sscanf(argv[1], "%d", &a);
  sscanf(argv[2], "%d", &b);

  sum = a + b;
  prod = a * b;
  quot = a / b;
  rem = a % b;

  printf("%d + %d = %d\n", a, b, sum);
  printf("%d * %d = %d\n", a, b, prod);
  printf("%d / %d = %d\n", a, b, quot);
  printf("%d %% %d = %d\n", a, b, rem);
  return 0;
}
