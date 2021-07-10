0: BZJ 12 102 // if(b == 0) goto end
1: CP 50 102 // temp = b 
2: NANDi 50 1 // 
3: NAND 50 50 
4: SRLi 102 1 
5: BZJ 20 50 // if == 0 go to 9
6: ADD 100 101 // else 
7: SRLi 101 33
8: BZJi 14 0 
9: SRLi 101 33
10: BZJi 14 0
11: BZJi 12 0
12: 11 

14: 0
20: 9

50: 0 // temp
100: 0 // count
101: 3 // a
102: 7 // b
