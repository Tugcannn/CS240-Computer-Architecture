/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Tugcan/Desktop/CS240/lab07/Calculator/calc.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};
static int ng4[] = {4, 0};
static int ng5[] = {5, 0};
static int ng6[] = {2, 0};



static void Cont_13_0(char *t0)
{
    char t4[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t7) == 0)
        goto LAB4;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t3);
    t26 = *((unsigned int *)t4);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t3 + 4);
    t29 = (t4 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    t56 = (t0 + 5216);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 5104);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t3 + 4);
    t39 = (t4 + 4);
    t40 = *((unsigned int *)t3);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB12;

}

static void Always_15_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 1000LL);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 1000LL);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 1000LL);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 1000LL);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_23_2(char *t0)
{
    char t14[8];
    char t35[8];
    char t39[8];
    char t52[8];
    char t67[8];
    char t83[8];
    char t91[8];
    char t118[8];
    char t133[8];
    char t149[8];
    char t157[8];
    char t185[8];
    char t193[8];
    char t233[8];
    char t261[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    int t217;
    int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    char *t234;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    char *t257;
    char *t258;
    char *t259;
    char *t260;
    char *t262;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5136);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB12:    xsi_set_current_line(36, ng0);

LAB19:    xsi_set_current_line(37, ng0);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t15 = (t7 + 4);
    t16 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t15);
    t12 = *((unsigned int *)t16);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB23;

LAB20:    if (t21 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t14) = 1;

LAB31:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB26:    goto LAB18;

LAB14:    xsi_set_current_line(48, ng0);

LAB36:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t3);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t14) = 1;

LAB40:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t21 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t14) = 1;

LAB48:    memset(t35, 0, 8);
    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t15) != 0)
        goto LAB51;

LAB52:    t24 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t24);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB53;

LAB54:    memcpy(t193, t35, 8);

LAB55:    t225 = (t193 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t193);
    t229 = (t228 & t227);
    t230 = (t229 != 0);
    if (t230 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB134;

LAB131:    if (t21 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t14) = 1;

LAB134:    memset(t35, 0, 8);
    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t15) != 0)
        goto LAB137;

LAB138:    t24 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t24);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB139;

LAB140:    memcpy(t193, t35, 8);

LAB141:    t225 = (t193 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t193);
    t229 = (t228 & t227);
    t230 = (t229 != 0);
    if (t230 > 0)
        goto LAB189;

LAB190:
LAB191:
LAB105:
LAB43:    goto LAB18;

LAB16:    xsi_set_current_line(74, ng0);

LAB193:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t3);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB197;

LAB194:    if (t21 != 0)
        goto LAB196;

LAB195:    *((unsigned int *)t14) = 1;

LAB197:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB198;

LAB199:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB205;

LAB202:    if (t21 != 0)
        goto LAB204;

LAB203:    *((unsigned int *)t14) = 1;

LAB205:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB206;

LAB207:
LAB208:
LAB200:    goto LAB18;

LAB22:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(37, ng0);

LAB27:    xsi_set_current_line(38, ng0);
    t31 = (t0 + 2088);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2888);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB26;

LAB30:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(41, ng0);

LAB35:    xsi_set_current_line(42, ng0);
    t16 = ((char*)((ng2)));
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t16, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB34;

LAB39:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(49, ng0);

LAB44:    xsi_set_current_line(50, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 2408);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB43;

LAB47:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t35) = 1;
    goto LAB52;

LAB51:    t16 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB52;

LAB53:    t25 = (t0 + 1528U);
    t31 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t39, 0, 8);
    t32 = (t31 + 4);
    t33 = (t25 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t25);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t33);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t32);
    t48 = *((unsigned int *)t33);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB59;

LAB56:    if (t49 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t39) = 1;

LAB59:    memset(t52, 0, 8);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t39);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t53) != 0)
        goto LAB62;

LAB63:    t60 = (t52 + 4);
    t61 = *((unsigned int *)t52);
    t62 = (!(t61));
    t63 = *((unsigned int *)t60);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB64;

LAB65:    memcpy(t91, t52, 8);

LAB66:    memset(t118, 0, 8);
    t119 = (t91 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t91);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t119) != 0)
        goto LAB80;

LAB81:    t126 = (t118 + 4);
    t127 = *((unsigned int *)t118);
    t128 = (!(t127));
    t129 = *((unsigned int *)t126);
    t130 = (t128 || t129);
    if (t130 > 0)
        goto LAB82;

LAB83:    memcpy(t157, t118, 8);

LAB84:    memset(t185, 0, 8);
    t186 = (t157 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t157);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t186) != 0)
        goto LAB98;

LAB99:    t194 = *((unsigned int *)t35);
    t195 = *((unsigned int *)t185);
    t196 = (t194 & t195);
    *((unsigned int *)t193) = t196;
    t197 = (t35 + 4);
    t198 = (t185 + 4);
    t199 = (t193 + 4);
    t200 = *((unsigned int *)t197);
    t201 = *((unsigned int *)t198);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = *((unsigned int *)t199);
    t204 = (t203 != 0);
    if (t204 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB55;

LAB58:    t34 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t52) = 1;
    goto LAB63;

LAB62:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB63;

LAB64:    t65 = (t0 + 1528U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng4)));
    memset(t67, 0, 8);
    t68 = (t66 + 4);
    t69 = (t65 + 4);
    t70 = *((unsigned int *)t66);
    t71 = *((unsigned int *)t65);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB70;

LAB67:    if (t79 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t67) = 1;

LAB70:    memset(t83, 0, 8);
    t84 = (t67 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t84) != 0)
        goto LAB73;

LAB74:    t92 = *((unsigned int *)t52);
    t93 = *((unsigned int *)t83);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = (t52 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t83) = 1;
    goto LAB74;

LAB73:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB74;

LAB75:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t52 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (~(t107));
    t109 = *((unsigned int *)t52);
    t13 = (t109 & t108);
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t83);
    t113 = (t112 & t111);
    t114 = (~(t13));
    t115 = (~(t113));
    t116 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t116 & t114);
    t117 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t117 & t115);
    goto LAB77;

LAB78:    *((unsigned int *)t118) = 1;
    goto LAB81;

LAB80:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB81;

LAB82:    t131 = (t0 + 1528U);
    t132 = *((char **)t131);
    t131 = ((char*)((ng5)));
    memset(t133, 0, 8);
    t134 = (t132 + 4);
    t135 = (t131 + 4);
    t136 = *((unsigned int *)t132);
    t137 = *((unsigned int *)t131);
    t138 = (t136 ^ t137);
    t139 = *((unsigned int *)t134);
    t140 = *((unsigned int *)t135);
    t141 = (t139 ^ t140);
    t142 = (t138 | t141);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t135);
    t145 = (t143 | t144);
    t146 = (~(t145));
    t147 = (t142 & t146);
    if (t147 != 0)
        goto LAB88;

LAB85:    if (t145 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t133) = 1;

LAB88:    memset(t149, 0, 8);
    t150 = (t133 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t133);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t150) != 0)
        goto LAB91;

LAB92:    t158 = *((unsigned int *)t118);
    t159 = *((unsigned int *)t149);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = (t118 + 4);
    t162 = (t149 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB84;

LAB87:    t148 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t149) = 1;
    goto LAB92;

LAB91:    t156 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB92;

LAB93:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t118 + 4);
    t172 = (t149 + 4);
    t173 = *((unsigned int *)t171);
    t174 = (~(t173));
    t175 = *((unsigned int *)t118);
    t176 = (t175 & t174);
    t177 = *((unsigned int *)t172);
    t178 = (~(t177));
    t179 = *((unsigned int *)t149);
    t180 = (t179 & t178);
    t181 = (~(t176));
    t182 = (~(t180));
    t183 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t183 & t181);
    t184 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t184 & t182);
    goto LAB95;

LAB96:    *((unsigned int *)t185) = 1;
    goto LAB99;

LAB98:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB99;

LAB100:    t205 = *((unsigned int *)t193);
    t206 = *((unsigned int *)t199);
    *((unsigned int *)t193) = (t205 | t206);
    t207 = (t35 + 4);
    t208 = (t185 + 4);
    t209 = *((unsigned int *)t35);
    t210 = (~(t209));
    t211 = *((unsigned int *)t207);
    t212 = (~(t211));
    t213 = *((unsigned int *)t185);
    t214 = (~(t213));
    t215 = *((unsigned int *)t208);
    t216 = (~(t215));
    t217 = (t210 & t212);
    t218 = (t214 & t216);
    t219 = (~(t217));
    t220 = (~(t218));
    t221 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t221 & t219);
    t222 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t222 & t220);
    t223 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t223 & t219);
    t224 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t224 & t220);
    goto LAB102;

LAB103:    xsi_set_current_line(53, ng0);

LAB106:    xsi_set_current_line(54, ng0);
    t231 = (t0 + 1528U);
    t232 = *((char **)t231);
    t231 = ((char*)((ng3)));
    memset(t233, 0, 8);
    t234 = (t232 + 4);
    t235 = (t231 + 4);
    t236 = *((unsigned int *)t232);
    t237 = *((unsigned int *)t231);
    t238 = (t236 ^ t237);
    t239 = *((unsigned int *)t234);
    t240 = *((unsigned int *)t235);
    t241 = (t239 ^ t240);
    t242 = (t238 | t241);
    t243 = *((unsigned int *)t234);
    t244 = *((unsigned int *)t235);
    t245 = (t243 | t244);
    t246 = (~(t245));
    t247 = (t242 & t246);
    if (t247 != 0)
        goto LAB110;

LAB107:    if (t245 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t233) = 1;

LAB110:    t249 = (t233 + 4);
    t250 = *((unsigned int *)t249);
    t251 = (~(t250));
    t252 = *((unsigned int *)t233);
    t253 = (t252 & t251);
    t254 = (t253 != 0);
    if (t254 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB118;

LAB115:    if (t21 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t14) = 1;

LAB118:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB126;

LAB123:    if (t21 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t14) = 1;

LAB126:    t15 = (t14 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB127;

LAB128:
LAB129:
LAB121:
LAB113:    goto LAB105;

LAB109:    t248 = (t233 + 4);
    *((unsigned int *)t233) = 1;
    *((unsigned int *)t248) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(54, ng0);

LAB114:    xsi_set_current_line(55, ng0);
    t255 = (t0 + 2568);
    t256 = (t255 + 56U);
    t257 = *((char **)t256);
    t258 = (t0 + 2568);
    t259 = (t258 + 56U);
    t260 = *((char **)t259);
    memset(t261, 0, 8);
    xsi_vlog_unsigned_multiply(t261, 8, t257, 8, t260, 8);
    t262 = (t0 + 2888);
    xsi_vlogvar_assign_value(t262, t261, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB113;

LAB117:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(58, ng0);

LAB122:    xsi_set_current_line(59, ng0);
    t16 = (t0 + 2568);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    t31 = ((char*)((ng6)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t25, 8, t31, 32);
    t32 = (t0 + 2888);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB121;

LAB125:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(62, ng0);

LAB130:    xsi_set_current_line(63, ng0);
    t16 = (t0 + 2568);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    t31 = ((char*)((ng6)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t25, 8, t31, 32);
    t32 = (t0 + 2888);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB129;

LAB133:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t35) = 1;
    goto LAB138;

LAB137:    t16 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB138;

LAB139:    t25 = (t0 + 1528U);
    t31 = *((char **)t25);
    t25 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t32 = (t31 + 4);
    t33 = (t25 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t25);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t32);
    t44 = *((unsigned int *)t33);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t32);
    t48 = *((unsigned int *)t33);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB145;

LAB142:    if (t49 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t39) = 1;

LAB145:    memset(t52, 0, 8);
    t53 = (t39 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t39);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t53) != 0)
        goto LAB148;

LAB149:    t60 = (t52 + 4);
    t61 = *((unsigned int *)t52);
    t62 = (!(t61));
    t63 = *((unsigned int *)t60);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB150;

LAB151:    memcpy(t91, t52, 8);

LAB152:    memset(t118, 0, 8);
    t119 = (t91 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t91);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t119) != 0)
        goto LAB166;

LAB167:    t126 = (t118 + 4);
    t127 = *((unsigned int *)t118);
    t128 = (!(t127));
    t129 = *((unsigned int *)t126);
    t130 = (t128 || t129);
    if (t130 > 0)
        goto LAB168;

LAB169:    memcpy(t157, t118, 8);

LAB170:    memset(t185, 0, 8);
    t186 = (t157 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t157);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t186) != 0)
        goto LAB184;

LAB185:    t194 = *((unsigned int *)t35);
    t195 = *((unsigned int *)t185);
    t196 = (t194 & t195);
    *((unsigned int *)t193) = t196;
    t197 = (t35 + 4);
    t198 = (t185 + 4);
    t199 = (t193 + 4);
    t200 = *((unsigned int *)t197);
    t201 = *((unsigned int *)t198);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = *((unsigned int *)t199);
    t204 = (t203 != 0);
    if (t204 == 1)
        goto LAB186;

LAB187:
LAB188:    goto LAB141;

LAB144:    t34 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t52) = 1;
    goto LAB149;

LAB148:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB149;

LAB150:    t65 = (t0 + 1528U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng2)));
    memset(t67, 0, 8);
    t68 = (t66 + 4);
    t69 = (t65 + 4);
    t70 = *((unsigned int *)t66);
    t71 = *((unsigned int *)t65);
    t72 = (t70 ^ t71);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = (t72 | t75);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t69);
    t79 = (t77 | t78);
    t80 = (~(t79));
    t81 = (t76 & t80);
    if (t81 != 0)
        goto LAB156;

LAB153:    if (t79 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t67) = 1;

LAB156:    memset(t83, 0, 8);
    t84 = (t67 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t84) != 0)
        goto LAB159;

LAB160:    t92 = *((unsigned int *)t52);
    t93 = *((unsigned int *)t83);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = (t52 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB152;

LAB155:    t82 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB156;

LAB157:    *((unsigned int *)t83) = 1;
    goto LAB160;

LAB159:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB160;

LAB161:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t52 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (~(t107));
    t109 = *((unsigned int *)t52);
    t13 = (t109 & t108);
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t83);
    t113 = (t112 & t111);
    t114 = (~(t13));
    t115 = (~(t113));
    t116 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t116 & t114);
    t117 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t117 & t115);
    goto LAB163;

LAB164:    *((unsigned int *)t118) = 1;
    goto LAB167;

LAB166:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB167;

LAB168:    t131 = (t0 + 1528U);
    t132 = *((char **)t131);
    t131 = ((char*)((ng6)));
    memset(t133, 0, 8);
    t134 = (t132 + 4);
    t135 = (t131 + 4);
    t136 = *((unsigned int *)t132);
    t137 = *((unsigned int *)t131);
    t138 = (t136 ^ t137);
    t139 = *((unsigned int *)t134);
    t140 = *((unsigned int *)t135);
    t141 = (t139 ^ t140);
    t142 = (t138 | t141);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t135);
    t145 = (t143 | t144);
    t146 = (~(t145));
    t147 = (t142 & t146);
    if (t147 != 0)
        goto LAB174;

LAB171:    if (t145 != 0)
        goto LAB173;

LAB172:    *((unsigned int *)t133) = 1;

LAB174:    memset(t149, 0, 8);
    t150 = (t133 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t133);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t150) != 0)
        goto LAB177;

LAB178:    t158 = *((unsigned int *)t118);
    t159 = *((unsigned int *)t149);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = (t118 + 4);
    t162 = (t149 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB179;

LAB180:
LAB181:    goto LAB170;

LAB173:    t148 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB174;

LAB175:    *((unsigned int *)t149) = 1;
    goto LAB178;

LAB177:    t156 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB178;

LAB179:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t118 + 4);
    t172 = (t149 + 4);
    t173 = *((unsigned int *)t171);
    t174 = (~(t173));
    t175 = *((unsigned int *)t118);
    t176 = (t175 & t174);
    t177 = *((unsigned int *)t172);
    t178 = (~(t177));
    t179 = *((unsigned int *)t149);
    t180 = (t179 & t178);
    t181 = (~(t176));
    t182 = (~(t180));
    t183 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t183 & t181);
    t184 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t184 & t182);
    goto LAB181;

LAB182:    *((unsigned int *)t185) = 1;
    goto LAB185;

LAB184:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB185;

LAB186:    t205 = *((unsigned int *)t193);
    t206 = *((unsigned int *)t199);
    *((unsigned int *)t193) = (t205 | t206);
    t207 = (t35 + 4);
    t208 = (t185 + 4);
    t209 = *((unsigned int *)t35);
    t210 = (~(t209));
    t211 = *((unsigned int *)t207);
    t212 = (~(t211));
    t213 = *((unsigned int *)t185);
    t214 = (~(t213));
    t215 = *((unsigned int *)t208);
    t216 = (~(t215));
    t217 = (t210 & t212);
    t218 = (t214 & t216);
    t219 = (~(t217));
    t220 = (~(t218));
    t221 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t221 & t219);
    t222 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t222 & t220);
    t223 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t223 & t219);
    t224 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t224 & t220);
    goto LAB188;

LAB189:    xsi_set_current_line(67, ng0);

LAB192:    xsi_set_current_line(68, ng0);
    t231 = (t0 + 1528U);
    t232 = *((char **)t231);
    t231 = (t0 + 3208);
    xsi_vlogvar_assign_value(t231, t232, 0, 0, 3);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB191;

LAB196:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB197;

LAB198:    xsi_set_current_line(75, ng0);

LAB201:    xsi_set_current_line(76, ng0);
    t24 = ((char*)((ng6)));
    t25 = (t0 + 2408);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t14, 0, 0, 8);
    goto LAB200;

LAB204:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB205;

LAB206:    xsi_set_current_line(79, ng0);

LAB209:    xsi_set_current_line(81, ng0);
    t16 = (t0 + 3048);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    t31 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t32 = (t25 + 4);
    t33 = (t31 + 4);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t31);
    t38 = (t36 ^ t37);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t33);
    t42 = (t40 ^ t41);
    t43 = (t38 | t42);
    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t33);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB213;

LAB210:    if (t46 != 0)
        goto LAB212;

LAB211:    *((unsigned int *)t35) = 1;

LAB213:    t53 = (t35 + 4);
    t49 = *((unsigned int *)t53);
    t50 = (~(t49));
    t51 = *((unsigned int *)t35);
    t54 = (t51 & t50);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t15);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB221;

LAB218:    if (t21 != 0)
        goto LAB220;

LAB219:    *((unsigned int *)t14) = 1;

LAB221:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB222;

LAB223:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t15);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB229;

LAB226:    if (t21 != 0)
        goto LAB228;

LAB227:    *((unsigned int *)t14) = 1;

LAB229:    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB230;

LAB231:
LAB232:
LAB224:
LAB216:    goto LAB208;

LAB212:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB213;

LAB214:    xsi_set_current_line(81, ng0);

LAB217:    xsi_set_current_line(82, ng0);
    t59 = (t0 + 2568);
    t60 = (t59 + 56U);
    t65 = *((char **)t60);
    t66 = (t0 + 1528U);
    t68 = *((char **)t66);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 8, t65, 8, t68, 8);
    t66 = (t0 + 2888);
    xsi_vlogvar_assign_value(t66, t39, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB216;

LAB220:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB221;

LAB222:    xsi_set_current_line(85, ng0);

LAB225:    xsi_set_current_line(86, ng0);
    t25 = (t0 + 2568);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 1528U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 8, t32, 8, t34, 8);
    t33 = (t0 + 2888);
    xsi_vlogvar_assign_value(t33, t35, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB224;

LAB228:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB229;

LAB230:    xsi_set_current_line(89, ng0);

LAB233:    xsi_set_current_line(90, ng0);
    t25 = (t0 + 2568);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 1528U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 8, t32, 8, t34, 8);
    t33 = (t0 + 2888);
    xsi_vlogvar_assign_value(t33, t35, 0, 0, 8);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB232;

}


extern void work_m_00000000002690095519_4061625060_init()
{
	static char *pe[] = {(void *)Cont_13_0,(void *)Always_15_1,(void *)Always_23_2};
	xsi_register_didat("work_m_00000000002690095519_4061625060", "isim/calc_tb_isim_beh.exe.sim/work/m_00000000002690095519_4061625060.didat");
	xsi_register_executes(pe);
}
