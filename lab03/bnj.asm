0: CP 300 120 
1: CP 301 121
2: CPi 70 4
3: BZJi 84 0
4: CP 450 302
5: CPi 70 7
6: BZJi 85 0
7: CP 110 451
8: BZJ 122 110
9: BZJi 122 0


70: 0//RETURN ADDRESS

61: 403//INTERNAL JUMP
84: 250//LOOP TO SUM
85: 400//LOOP TO COUNT1s


120: 43690 // A
121: 34952 // B
122: 9 // jump address

110: 0 //number of different bits

250: CP 100 300 //XOR ENTRY POINT, GET ARGUMENT 1 to 100
251: CP 101 301 //GET ARGUMENT 2 to 101 & OUTPUTS TO 302
252: CP 102 100
253: NAND 102 101
254: CP 103 100
255: NAND 103 102
256: CP 104 101
257: NAND 104 102
258: NAND 104 103
259: CP 302 104
260: BZJi 70 0

300: 0 // input1
301: 0 // input2
302: 0 // output

400: CP 200 450//COUNT1s ENTRY POINT, GET ARGUMENT 1 to 200 & OUTPUTS TO 451
401: CPi 100 0
402: CPi 451 0
403: CP 104 100 // temp = i	<-- LOOP
404: LTi 104 32 // temp = temp < 32
405: BZJ 70 104// if(!(i<N)) goto END
406: CP 104 200 // temp = argument
407: NANDi 104 1//AND  start
408: NAND 104 104//AND end
409: ADD 451 104
410: SRLi 200 1 // shift 1 right
411: ADDi 100 1 // i++
412: BZJi 61 0 // goto LOOP

450: 0 // input1
451: 0 // output1

