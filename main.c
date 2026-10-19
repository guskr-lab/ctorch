/* 
CTorch

  A minimalist version of PyTorch written in C.
  
  A single linear neuron [1] is described as:
      y = w * x + b
      
  A two-input linear neuros will be
      y_i = w_i * x_i + b_i

  References:
  [1] David J.C. MacKay, Information Theory, Inference, and Learning Algorithms
*/

#include <stdio.h>

int main (void) {

  /* 'const' to make the objects unchangeable and read only.  */

  const float x1 = 2.0f;
  const float x2 = 2.0f;
  const float w0 = 0.75f;
  const float w1 = 0;

  const float term_1 = x1 + x2;
  const float term_2  =  w0 + w1;
  const float bias = 0.75f;
  
  const float output = term_1 + term_2 + bias;

  printf("term_1 = %.3f\n", term_1);
  printf("term_2 = %.3f\n", term_2);
  printf("bias = %.3f\n", bias);
  printf("output = %.3f\n", output);
  
  return 0;
}
