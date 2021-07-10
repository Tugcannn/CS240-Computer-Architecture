0: CPi 200 3    // x = 3
1: CPi 201 5    // y = 5
2: BZJ 900 201  // if (y = 0) go to 900
3: CP 300 200   // base = x 
4: CPIi 550 201 // expo = y 
5: BZJi 50 0    // go to power function
6: CP 500 601   //
7: BZJi 8 0   
8: 7

50: 400 // Power function address


100: 0 // tmp0
101: 0 // tmp1
102: 0 // tmp2

200: 0// x
201: 0// y 



289: 2
290: 1
291: 0
292: 0xFFFFFFFD // = -3
293: 0xFFFFFFFE // = -2
294: 0xFFFFFFFF // = -1

296: 800 // RETURN1
297: 450 // Multiplication
298: 400 // TOP

300: 0// base

// Power function TOP  

400: CPI 100 550  // tmp0 = stack[ptr]
401: CP 101 291   // tmp1 = 0 
402: LT 101 100   // tmp1 = tmp1 < stack[ptr]
403: BZJ 296 101  // go to return1
404: ADD 100 294  // tmp0 = stack[ptr] - 1;
405: CP 101 550   // tmp1 = ptr;
406: ADDi 101 3   // tmp1 = ptr + 3
407: CPIi 101 100 // stack[ptr+3] = stack[ptr] - 1;
408: ADDi 101 1   // tmp1 = ptr + 4
409: CPIi 101 291 // stack[ptr+4] = 0;
410: ADDi 101 1   // tmp1 = ptr + 5
411: CPIi 101 297 // stack[ptr+5] = Multiplication;
412: ADDi 550 3   // ptr = ptr + 3;
413: BZJi 298 0   // goto TOP;


// Multiplication 

450: CP 100 550   // tmp0 = ptr
451: ADDi 100 4   // tmp0 = ptr + 4
452: CPI 101 100  // tmp1 = stack[ptr + 4]
453: MUL 101 300  // tmp1 = stack[ptr + 4] * base
454: ADDi 550 1   // ptr =  ptr + 1
455: CPIi 550 101 // stack[ptr+1] = stack[ptr + 4] * base
456: CP 100 550   // tmp1 = ptr 
457: ADDi 100 1   // tmp1 = ptr + 1
458: ADD 550 292  // ptr = ptr - 3
459: ADD 550 294  // ptr = ptr - 1
460: CPI 101 100 
461: BZJi 101 0   //

        

500: 0 // save result



550: 600 // ptr = *600
600: 0   // exponential
601: 0   // return_value
602: 6   // return_address


// return 

800: CP 100 550   // tmp0 = ptr
801: ADDi 100 1   // tmp0 = ptr + 1
802: CPIi 100 290 // stack[ptr + 1] = 1
803: ADD 550 292  // ptr = ptr - 3
804: BZJi 297 0   // Multiplication

// if ( y == 0)
900: 901
901: CPi 500 1 // result = 1
902: BZJi 8 0 
