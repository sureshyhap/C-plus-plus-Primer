/*
  a. The programmer probably wanted the return value of getPtr() to be assigned to p and then test if that value is not 0 but it actually assigns to p the boolean result of whether the return value of getPtr() is or isn't 0. To fix this, do:            if ((p = getPtr()) != 0)
  b. The programmer probably wanted the condition to be true if i was equal to 1024 but this assigns 1024 to i which returns the nonzero value 1024 which means the if always runs. To fix this do:                if (i == 1024)
 */
