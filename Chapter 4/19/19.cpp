/*
  a. The && operator only evaluates its right operand if ptr is not zero. It is then safe to dereference it in the second operand (the second operand increments the pointer but returns the old value which was tested to not be zero).
  b. It increments ival but the postfix increment returns ival as it was so this is basically doing:     ival && ival         which is not a useful expression.
  c. It is incorrect because the order of evaluating the subscript is undefined. You can instead do:        vec[ival + 1] <= vec[ival];
                             ++ival;
 */
