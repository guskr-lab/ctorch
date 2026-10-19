/* 
CTorch

  A minimalist version of PyTorch written in C.
  
  A single linear neuron [1] is described as:
      y = w * x + b

  References:
  [1] David J.C. MacKay, Information Theory, Inference, and Learning Algorithms
*/

#include <stdio.h>

int main (void) {
  
  float x = 2.0f; 
  float w = 0.75f;
  float b = 0.10f;

  float y = w * x + b;

  const int array[] = {1, 2, 3, 4, 5};

  printf(" float x = %f\n", x);
  printf(" float w = %f\n", w);
  printf(" float b = %f\n", b);
  printf(" float y = %f\n", y);
  printf("x=%.3f  w=%.3f  b=%.3f  y=%.3f\n", x, w, b, y);
  
  return 0;
}
