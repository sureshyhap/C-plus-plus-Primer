/*
  Illegal because you can change the reference which would change a const.
  Illegal because could change what p2 points to which is a const.
  Legal because its valid to change what p1 points to.
  Illegal because p1 could change what p3 points to which is a const.
  Legal because they are both low level const.
 */
