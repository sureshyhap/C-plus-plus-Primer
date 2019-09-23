/*
  a. iouCnt may be incremented even if it is not i, o, or u; just as long as its not a or e.

  unsigned aCnt = 0, eCnt = 0, otherCnt = 0;
  char ch = next_text();
  switch (ch) {
      case 'a': aCnt++
      case 'e' : eCnt++
      default: otherCnt++
  }

  b. ix's initialization may be jumped over so default can't use it.

  unsigned index = some_value;
  int ix = get_value();
  switch (index) {
      case 1:
          ivec[ix] = index;
	  break;
      default:
          ix = ivec.size() - 1;
	  ivec[ix] = index;
  }

  c. The cases should each have : not ,. Also the variable names don't match. Also it's impossible to get a 10.

  unsigned evenCnt = 0, oddCnt = 0;
  int digit = get_num() % 10;
  switch (digit) {
      case 1: case 3: case 5: case 7: case 9:
          odddCnt++;
	  break;
      case 2: case 4: case 6: case 8:
          evenCnt++;
	  break;
  }

  d. The cases must be a constant literal. Also should do sizeof unsigned (even though it should be the same size as an int)

  constexpr unsigned ival = 512, jval = 1024, kval = 4096;
  unsigned bufsize;
  unsigned swt = get_bufCnt();
  switch (swt) {
      case ival:
          bufsize = ival * sizeof(unsigned);
	  break;
      case jval:
          bufsize = jval * sizeof(unsigned)
	  break;
      case kval:
           bufsize = kval * sizeof(unsigned)
	   break;
  }
  
 */
