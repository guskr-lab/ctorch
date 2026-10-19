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

int main (void)
{
    const float weight = 0.8f;
    const float bias = -0.6f;
    const float threshold = 0.6f;
  
    /*
     `sizeof inputs` is the number of bytes occupied by the entire array.

     `sizeof inputs[0]` is the number of bytes occupied by one element.

     `size_t` is the standard unsigned type used for object sizes and array

     */

    const float inputs[] = {-2.0f, -0.5f, 0.0f, 1.0f, 2.0f};
    const size_t count = sizeof inputs / sizeof inputs[0];

    /*
        A `for` loop has three clauses: initialization; continuation condition; update 
     */

    for (size_t i = 0; i < count; ++i) {
            const float y = weight * inputs[i] + bias;

            /* `>=` produces an integer truth value: nonzero for true, zero for false. */

            if (y >= threshold) {
                printf("x=%5.2f -> y=%6.3f -> class 1\n", inputs[i], y); //true
            } else {
                printf("x=%5.2f -> y=%6.3f -> class 0\n", inputs[i], y); //false
            }

    }
    
    return 0;
}
