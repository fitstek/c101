//
//  main.c
//  string-output
//
//  Created by Fitsum Teklehaimanot on 21/05/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include <stdio.h>

// hello world program

//int main() {
//    printf("Hello, World!\n");
//    return 0;
//}

//assigning variables and reading their values

//int main()
//{
//  int user_input;
//  printf("Please input a number: \n");
//  scanf("%d", &user_input);
//  
//  printf("The number you typed is %d \n", user_input);
//  getchar();
//  return 0;
//}

//concatenating strings
//#include <string.h>
//int main()
//{
//  char result[100];
//  strcpy(result, "Hello ");
//  strcat(result, "World");
//  printf("%s", result);
//  return 0;
//}

//int main() {
//  char result[100];
//  sprintf(result, "%s", "Hi");
//  printf("%s", result);
//}
// passing arguments

//int main(int argc, char *argv[])
//{
////  printf("Hi, ");
////  printf(argv[1]);
////  printf(". How are you?");
//  
//  // more secure way cos the string is checked
//  printf("Hi %s. How are you?", argv[1]);
//}

//int main(int argc, char *argv[])
//{
//  int a,b;
//  int sum, prod, quot, rem;
//  sscanf(argv[1], "%d", &a);
//  sscanf(argv[2], "%d", &b);
//  
//  sum = a + b;
//  prod = a * b;
//  quot = a / b;
//  rem = a % b;
//  
//  printf("%d + %d = %d\n", a, b, sum);
//  printf("%d * %d = %d\n", a, b, prod);
//  printf("%d / %d = %d\n", a, b, quot);
//  printf("%d %% %d = %d\n", a, b, rem);
//}

//if statements
//int main(int argc, char *argv[]){
//  if (argc > 1) {
//    int age;
//    sscanf(argv[1], "%d", &age);
//    printf("%d", age);
//  } else {
//    printf("Incorrect number of arguments");
//  }
//}

// for loop

//int main(int argc, char *argv[]){
//  int listNumbers(int number);
//  
//  int number;
//  sscanf(argv[1], "%d", &number);
//  
//  
//  if (number > 10) {
//    printf("%d is not between 1 and 10", number);
//  } else {
//    listNumbers(number);
//  }
//}
//
//
//int listNumbers(int number){
//  int i;
//  
//  for (i = number -1 ; i > 0; i--) {
//    printf("%d\n", i);
//  }
//  return 0;
//}

//// pointers
//int main ()
//{
//  int  var1;
//  char var2[10];
//  
//  printf("Address of var1 variable: %x\n", &var1  );
//  printf("Address of var2 variable: %x\n", &var2  );
//  
//  return 0;
//}

//int main ()
//{
//  int  var = 20;   /* actual variable declaration */
//  int  *ip;        /* pointer variable declaration */
//  
//  ip = &var;  /* store address of var in pointer variable*/
//  
//  printf("Address of the var variable is %x\n", &var);
//  printf("Address stored in the ip pointer is %x\n", ip);
//  printf("Value of the memmory location pointed by ip is  %d\n", *ip); //in this case use %d cos the value is int
//}

//int main()
//{
//  int x;            /* A normal integer*/
//  int *p;           /* A pointer to an integer ("*p" is an integer, so p
//                     must be a pointer to an integer) */
//  
//  p = &x;           /* Read it, "assign the address of x to p" */
//  scanf( "%d", &x );          /* Put a value in x, we could also use p here */
//  printf( "The value being referenced by pointer %d\n", *p ); /* Note the use of the * to get the value */
//  printf( "The address of the variable x by using pointer %x\n", p );
//  printf( "The address of the variable x by using x's address %x\n", &x );
//  getchar();
//}
