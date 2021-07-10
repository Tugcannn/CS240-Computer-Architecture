0: CP 101 99 // tmp = k
1: LT 101 100 // tmp = tmp < size 
2: BZJ 12 101 // if(tmp == 0) goto END
3: CPi 300 400 // a = 400 
4: ADD 300 99 // a = a + k
5: CPI 102 300 // tmp2 = *(a+k) 
6: ADDi 102 10 // tmp2 = tmp2 + 10 
7: CPIi 300 102 // a = tmp2
8: ADDi 99 1 // k = k + 1
9: BZJi 11 0 // go to PC : 0 
10: BZJi 12 0  // END:
11: 0
12: 10 

99: 0 // k
100: 2 // size
101: 0 // tmp
102: 0 // tmp2

300: 400 // a
400: 137 // a[0]
401: 224 // a[1]


