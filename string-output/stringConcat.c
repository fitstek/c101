//
//  stringConcat.c
//  string-output
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

//concatenating strings
#include "stringConcat.h"
#include <string.h>

int concat2()
{
  char result[100];
  strcpy(result, "Hello ");
  strcat(result, "World");
  printf("%s", result);
  return 0;
}
//or

int concat() {
  char result[100];
  sprintf(result, "%s", "Hi");
  printf("%s", result);
  return 0;
}