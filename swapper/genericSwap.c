//
//  genericSwap.c
//  swapper
//
//  Created by Fitsum Teklehaimanot on 07/06/2015.
//  Copyright (c) 2015 Fitsum Teklehaimanot. All rights reserved.
//

#include "genericSwap.h"

//swap function for any two variables of the same type

void genericSwap(void *vp1, void *vp2, int size){
  char buffer[size];
  memcpy(buffer, vp1, size);
  memcpy(vp1, vp2, size);
  memcpy(vp2, buffer, size);
}

