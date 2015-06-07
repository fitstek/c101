
//
//  unions.c
//  string-output
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include "unions.h"


//Unions and accessing their values

#include <string.h>

union Data
{
  int i;
  float f;
  char  str[20];
};

int unionExample( )
{
  union Data data;

  data.i = 20;
  printf("Stored integer is %d\n", data.i);

  data.f = 20;
  printf("Stored float is %f\n", data.f);

  strcpy(data.str, "Hello");
  printf("Stored character is %s\n", data.str);

//  printf( "Memory size occupied by data : %lu\n", sizeof(data));
//  printf("Stored integer is %d\n", data.i); // We won't get the right values because the final value
//  printf("Stored float is %f\n", data.f); // assigned has occupied the memory location
//  printf("Stored character is %s\n", data.str);

  return 0;
}