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

//structures in C

//struct example {
//  int x;
//};
//
//int main() {
//  struct example an_example;
//  
//  an_example.x = 20;
//  printf("x is %d", an_example.x);
//  return 0;
//}

// Another example of using structs

//#include <string.h>
//
//struct Books {
//  char title[50];
//  char author[50];
//  char subject[50];
//  int book_id;
//  
//};
//
//int main( )
//{
//  struct Books Book1;        /* Declare Book1 of type Book */
//  struct Books Book2;        /* Declare Book2 of type Book */
//  
//  /* book 1 specification */
//  strcpy(Book1.title, "C programming");
//  strcpy(Book1.author, "Nuha Ali");
//  strcpy(Book1.subject, "C programming Tutorial");
//  Book1.book_id = 6495407;
//  
//  /* book 2 specification */
//  strcpy(Book2.title, "Telecom Billing");
//  strcpy(Book2.author, "Zara Ali");
//  strcpy(Book2.subject, "Telecom Billing Tutorial");
//  Book2.book_id = 6495700;
//  
//  /* print Book1 info */
//  printf( "Book 1 title : %s\n", Book1.title);
//  printf( "Book 1 author : %s\n", Book1.author);
//  printf( "Book 1 subject : %s\n", Book1.subject);
//  printf( "Book 1 book_id : %d\n", Book1.book_id);
//  
//  /* print Book2 info */
//  printf( "Book 2 title : %s\n", Book2.title);
//  printf( "Book 2 author : %s\n", Book2.author);
//  printf( "Book 2 subject : %s\n", Book2.subject);
//  printf( "Book 2 book_id : %d\n", Book2.book_id);
//  
//  return 0;
//}

// structure as function arguments(refactor the code above)
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
  
};

int main( )
{
  void printBook(struct Books book);
  
  struct Books Book1;        /* Declare Book1 of type Book */
  struct Books Book2;        /* Declare Book2 of type Book */
  
  /* book 1 specification */
  strcpy(Book1.title, "C programming");
  strcpy(Book1.author, "Nuha Ali");
  strcpy(Book1.subject, "C programming Tutorial");
  Book1.book_id = 6495407;
  
  /* book 2 specification */
  strcpy(Book2.title, "Telecom Billing");
  strcpy(Book2.author, "Zara Ali");
  strcpy(Book2.subject, "Telecom Billing Tutorial");
  Book2.book_id = 6495700;
  
  /* print Book1 info */
  printBook(Book1);
  
  /* print Book2 info */
  printBook(Book2);
  
  return 0;
}

void printBook(struct Books book){
  printf( "Book title : %s\n", book.title);
  printf( "Book author : %s\n", book.author);
  printf( "Book subject : %s\n", book.subject);
  printf( "Book book_id : %d\n", book.book_id);
}