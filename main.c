/* 
CTorch

  CTorch computes a neuron's weighted sum from vectors rather than individual scalar variables.

  A minimalist version of PyTorch written in C.
  
  A single linear neuron [1] is described as:
      y = w * x + b
      
  A two-input linear neuros will be
      y_i = w_i * x_i + b_i

  ALGORITHM

  Input: two arrays x and w of equal length n

  Output: sum(x[i] * w[i]) for i in [0, n)

  Invariant: before iteration i, `sum` equals the contribution of elements 0 through i-1.

  Time: O(n)

  Space: O(1) auxiliary space

  References:
  [1] David J.C. MacKay, Information Theory, Inference, and Learning Algorithms

*/

#include <stdio.h>

#define NUM(a) (sizeof(a) / sizeof(*a))

int main (void)
{
    const float x[] = {1.0f, 2.0f, -1.0f, 0.5f, 0.2f};
    const float w[] = {0.2f, -0.4f, 0.6f, 0.8f, 0.4f};
    const size_t n = NUM(x);
    const float bias = 0.1f;

    float sum = 0.0f;

    for (size_t i = 0; i < n; ++i) {
        const float contribution = x[i] * w[i];
        sum = sum + contribution;

        printf("i = %f  x = %f  w = %f  contribution = %f  sum = %f\n", i, x[i], w[i], contribution, sum);

    }

    const float y = sum + bias;
    printf("output = %.3f\n", y);

    return 0;
}
