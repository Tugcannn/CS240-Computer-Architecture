0: CP 287 286 //tmp = index 
1: LT 287 90  // tmp = tmp < SIZE 
2: BZJ 16 287  // if(tmp == 0) goto 16 END_WHILE1
3: CP 287 284 // tmp = max 
4: CP 288 286 // tmp2 = index
5: ADDi 288 100 // tmp2 = tmp2 + first element of array address
6: CPI 289 288 // var = *tmp2
7: LT 287 289 // tmp = tmp < var
8: BZJ 14 287  // if(tmp == 0) goto 14 goto END_IF
9: CPI 284 288  // max = array[index] 
10: CP 285 286 // maxIndex = index 
11: ADDi 286 1 // index = index + 1
12: BZJi 15 0  // goto WHILE1
13: BZJi 16 0 // END_WHILE1: goto END_WHILE1
14: 11
15: 0
16: 13
 


90: 25    // SIZE

100: 19   // first element of array 
101: 13   
102: 22
103: 43
104: 35
105: 67
106: 58
107: 79
108: 18
109: 26
110: 33
111: 41
112: 51
113: 60
114: 81
115: 59
116: 63
117: 77
118: 83
119: 33
120: 44
121: 12
122: 99
123: 22
124: 21   // last element of array

284: 0    // max
285: 0    //found greatest index
286: 0    //index
287: 0    //tmp
288: 0    //tmp2
289: 0    //var
