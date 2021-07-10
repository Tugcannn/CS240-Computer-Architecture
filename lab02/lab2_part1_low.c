size = 10 ;
a[0] = 7 ;
a[1] = 3 ;
a[2] = 0 ;
a[3] = 6 ;
a[4] = 1 ;
a[5] = 4 ;
a[6] = 9 ;
a[7] = 8 ;
a[8] = 5 ;
a[9] = 2 ;
k = 0 ;
m = 0 ;

WHILE1:
tmp = k;
tmp = tmp < size;
if(tmp = 0) goto END_WHILE1;
m = 0 ;
WHILE2:
tmp2 = m;
tmp3 = size ;
tmp3 = tmp3 - k ;
tmp3 = tmp3 - 1 ;
tmp2 = tmp2 < tmp3;
if(tmp2 = 0) goto END_WHILE2;
tmp4 = *(a+m+1) ;
tmp5 = *(a+m);
tmp4 = tmp4 < tmp5 ;
if(tmp4 = 0) goto END;
tmp = *(a+m);
*(a+m) = *(a+m+1);
*(a+m+1) = tmp;
END: goto END;
m = m + 1 ;
goto WHILE2:
END_WHILE2: goto END_WHILE2; 
k = k + 1 ;
goto WHILE1:
END_WHILE1: goto END_WHILE1;
