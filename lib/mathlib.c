#include <stdio.h>
#define EPSILON 0.000001
int multiple(int a, int b) {
  return a * b; 
}

int add(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int divide(int a, int b) {
  return a / b;
}

double sqrt(double a) {
  if(a < 0) {
    return -1;
  } else {
    double taxmin1 = a/2;
    double taxmin = (taxmin1+(a/2))/2;

    if(taxmin > EPSILON) {
      return taxmin;
    }
  }
}
