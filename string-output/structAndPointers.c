
//
//  structAndPointers.c
//  string-output
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include "structAndPointers.h"

// structures and pointers(using structure pointers)
#include <string.h>

struct Books1 {
  char title[50];
  char author[50];
  char subject[50];
  int book_id;

};

int BookList3( )
{
  void printBook1(struct Books1 *book);

  struct Books1 Book1;        /* Declare Book1 of type Book */
  struct Books1 Book2;        /* Declare Book2 of type Book */

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
  printBook1(&Book1);

  /* print Book2 info */
  printBook1(&Book2);

  return 0;
}

void printBook1(struct Books1 *book){
  printf( "Book title : %s\n", book->title);
  printf( "Book author : %s\n", book->author);
  printf( "Book subject : %s\n", book->subject);
  printf( "Book book_id : %d\n", book->book_id);
}