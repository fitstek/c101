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

//// structure as function arguments(refactor the code above)
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
//  void printBook(struct Books book);
//  
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
//  printBook(Book1);
//  
//  /* print Book2 info */
//  printBook(Book2);
//  
//  return 0;
//}
//
//void printBook(struct Books book){
//  printf( "Book title : %s\n", book.title);
//  printf( "Book author : %s\n", book.author);
//  printf( "Book subject : %s\n", book.subject);
//  printf( "Book book_id : %d\n", book.book_id);
//}

//// structures and pointers(using structure pointers)
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
//  void printBook(struct Books *book);
//
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
//  printBook(&Book1);
//
//  /* print Book2 info */
//  printBook(&Book2);
//
//  return 0;
//}
//
//void printBook(struct Books *book){
//  printf( "Book title : %s\n", book->title);
//  printf( "Book author : %s\n", book->author);
//  printf( "Book subject : %s\n", book->subject);
//  printf( "Book book_id : %d\n", book->book_id);
//}

////Unions and accessing their values
//
//#include <string.h>
//
//union Data
//{
//  int i;
//  float f;
//  char  str[20];
//};
//
//int main( )
//{
//  union Data data;
//  
//  data.i = 20;
//  printf("Stored integer is %d\n", data.i);
//  
//  data.f = 20;
//  printf("Stored float is %f\n", data.f);
//  
//  strcpy(data.str, "Hello");
//  printf("Stored character is %s\n", data.str);
//  
////  printf( "Memory size occupied by data : %lu\n", sizeof(data));
////  printf("Stored integer is %d\n", data.i); // We won't get the right values because the final value
////  printf("Stored float is %f\n", data.f); // assigned has occupied the memory location
////  printf("Stored character is %s\n", data.str);
//  
//  return 0;
//}

// C bit fields

//#include <string.h>
//
//struct
//{
//  unsigned int widthValidated;
//  unsigned int heightValidated;
//} status1;
//
///* define a structure with bit fields */
//struct
//{
//  unsigned int widthValidated : 1;
//  unsigned int heightValidated : 1;
//} status2;
//
//int main( )
//{
//  printf( "Memory size occupied by status1 : %lu\n", sizeof(status1));
//  printf( "Memory size occupied by status2 : %lu\n", sizeof(status2));
//  
//  return 0;
//}


//// typeDef and define, typeDef used on.y for type where as define is used for anything, typeDef is processed in the compiler while define  in the preprocessor
//
////typedef unsigned char BYTE; example of how to
//#include <string.h>
//
//typedef struct Books
//{
//  char  title[50];
//  char  author[50];
//  char  subject[100];
//  int   book_id;
//} Book;
//
//int main( )
//{
//  Book book;
//  
//  strcpy( book.title, "C Programming");
//  strcpy( book.author, "Nuha Ali");
//  strcpy( book.subject, "C Programming Tutorial");
//  book.book_id = 6495407;
//  
//  printf( "Book title : %s\n", book.title);
//  printf( "Book author : %s\n", book.author);
//  printf( "Book subject : %s\n", book.subject);
//  printf( "Book book_id : %d\n", book.book_id);
//  
//  return 0;
//}



//#define TRUE  1
//#define FALSE 0
//
//int main( )
//{
//  printf( "Value of TRUE : %d\n", TRUE);
//  printf( "Value of FALSE : %d\n", FALSE);
//  
//  return 0;
//}

// playing with memory
//int main() {
////  char ch = 'a';
////  short s = ch;
////  printf("%d", s);
//  
////  short s = 65;
////  char ch = s;
////  printf("%c", ch);
//  
////  int i = 37;
////  float f1 = i;
////  float f2 = *(float*)&i;
////  
////  printf("%f\n", f1);
////  printf("%f", f2);
//  
////  float f = 7.0;
////  short s1 = f;
////  short s2 = *(short*)&f;
////  
////  printf("%d\n", s1);
////  printf("%d", s2);
//  
////  double d = 3.1416;
////  char ch = *(char*)&d;// first takes the address of d(&d) and then the char* tells it that the address is that of a single character so when it deferences it it takes only the data in the first byte and leaves the rest(7bytes)
////  printf("%c", ch);
//  
////  short s = 45;
////  double d = *(double*)&s; // in this case, d thinks it has 8 bytes and it takes the first 2 bytes from s and then take whatever binary resides in then next 6 bytes in memory
//  
//}

//typedef struct Fractions {
//  int numerator;
//  int denumerator;
//} fraction;
//
//int main() {
//  
//  fraction pi;
//  pi.numerator = 10;
//  pi.denumerator = 23;
//  
//  printf("The numerator is %d\n", pi.numerator);
//  printf("The denumerator is %d\n", pi.denumerator);
//  
//  // change the denumerator
//  
//  ((fraction*)&(pi.denumerator))->numerator = 12; //get pointer to pi.denumerator, tell the pointer that it is pointing to a fraction struct then when we change the numerator we are changing the bits in the memory location of pi.denumerator hence
//  
//  printf("The denumerator is %d\n", pi.denumerator);
//  
//  return 0;
//}
