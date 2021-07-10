0: CP 200 101 // max = x
1: CP 201 101 // tmp = x
2: LT 201 102 // tmp = tmp < y
3: BZJ 11 201 // if(tmp == 0) goto 11
4: CP 200 102 // max = y
5: CP 201 200 // tmp = max
6: LT 201 103 // tmp = tmp < z
7: BZJ 10 201 // if(tmp == 0) goto END
8: CP 200 103 // max = z
9: BZJi 10 0  // END:
10: 9
11: 5

101: 500 // x
102: 522 // y
103: 540 // z

200: 0 //max
201: 0 //tmp
