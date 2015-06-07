//
//  main.c
//  swapper
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  
  int x = 7;
  int y = 10;
  char *husband;
  char *wife;
  
  husband = strdup("Fitsum Seged");
  wife = strdup("Lemie");
  
  void swapIntegers(int *ap, int *bp);
  void genericSwap(void *vp1, void *vp2, int size);
  
  swapIntegers(&x, &y);
  
  printf("x: %i\n", x);
  printf("y: %i\n", y);
  
  genericSwap(&x, &y, sizeof(int));
  
  printf("x: %i\n", x);
  printf("y: %i\n", y);
  
  genericSwap(&husband, &wife, sizeof(char *));
  
  printf("husband: %s\n", husband);
  printf("wife: %s\n", wife);
  
  //The wrong way to call the arguments(bad thing about this is it compiles and executes)
  
  genericSwap(husband, wife, sizeof(char *));
  
  printf("husband: %s\n", husband);
  printf("wife: %s", wife);
  
  return 0;
}
