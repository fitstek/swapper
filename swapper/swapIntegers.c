//
//  swapIntegers.c
//  swapper
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include "swapIntegers.h"
#include <string.h>

void swapIntegers(int *ap, int *bp){
  int temp = *ap;
  *ap = *bp;
  *bp = temp;
}
