/*
 * Hermit.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: pranav
 */

#include "Hermit.h"
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

double hermit_next(int n, double x, double Hn, double Hnm1)
{
   return (2 * x * Hn - 2 * n * Hnm1);
}

// Implement Hermit polynomials
double hermit_imp(int n, double x)
{
   double p0 = 1.0;
   double p1 = 2 * x;

   if(n == 0)
      return p0;

   int c = 1;

   while(c < n)
   {
      std::swap(p0, p1);
      p1 = hermit_next(c, x, p0, p1);
      ++c;
   }
   return p1;
}
