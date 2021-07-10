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
static const char *ng0 = "C:/Users/Tugcan/Desktop/CS240/lab09/lab9/VSCPU_tb.v";
static const char *ng1 = "Error Found on test code %d, Instruction code %s, %d ns, RAM Addr %d,  expected %d, received %d";
static int ng2[] = {1, 0};
static const char *ng3 = "Error Found on test code %d, Instruction code %s, %d ns expected %d, received %d";
static int ng4[] = {10, 0};
static int ng5[] = {0, 0};
static int ng6[] = {500, 0};
static int ng7[] = {1113213545, 0};
static const char *ng8 = "Total Errors %d ";
static const char *ng9 = "Simulation Successfuly Completed !!";
static const char *ng10 = "Simulation FAILED !!";
static const char *ng11 = "Simulation finished due Time Limit\nTested Count %d/9\nTotal Errors %d";
static int ng12[] = {12, 0};
static int ng13[] = {2, 0};
static int ng14[] = {4277316, 0, 0, 0};
static int ng15[] = {22, 0};
static int ng16[] = {1094993001, 0, 0, 0};
static int ng17[] = {7, 0};
static int ng18[] = {4348490, 0};
static int ng19[] = {3, 0};
static int ng20[] = {8, 0};
static int ng21[] = {40, 0};
static int ng22[] = {100, 0};
static int ng23[] = {17232, 0, 0, 0};
static int ng24[] = {9, 0};
static int ng25[] = {20, 0};
static int ng26[] = {4411497, 0, 0, 0};
static const char *ng27 = "Total Errors %d";
static const char *ng28 = "Unexpected CHECK !! %d ";



static int sp_memCheck(char *t1, char *t2)
{
    char t9[8];
    char t24[8];
    char t50[8];
    char t54[16];
    char t66[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t5 = (t1 + 8508);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 8532);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 8556);
    t15 = *((char **)t14);
    t16 = ((((char*)(t15))) + 64U);
    t17 = *((char **)t16);
    t18 = (t1 + 3864);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t9, 32, t8, t13, t17, 2, 1, t20, 32, 2);
    t21 = (t1 + 4024);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t25 = (t9 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB7;

LAB6:    if (t36 != 0)
        goto LAB8;

LAB9:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB8:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t46 = (t1 + 3544);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng2)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_minus(t50, 32, t48, 8, t49, 32);
    t51 = (t1 + 4184);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t55 = xsi_vlog_time(t54, 1000.0000000000000, 1000.0000000000000);
    t56 = (t1 + 3864);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t1 + 4024);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 8580);
    t63 = *((char **)t62);
    t64 = ((((char*)(t63))) + 56U);
    t65 = *((char **)t64);
    t67 = (t1 + 8604);
    t68 = *((char **)t67);
    t69 = ((((char*)(t68))) + 72U);
    t70 = *((char **)t69);
    t71 = (t1 + 8628);
    t72 = *((char **)t71);
    t73 = ((((char*)(t72))) + 64U);
    t74 = *((char **)t73);
    t75 = (t1 + 3864);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlog_generic_get_array_select_value(t66, 32, t65, t70, t74, 2, 1, t77, 32, 2);
    t78 = (t1 + 1120);
    xsi_vlogfile_write(1, 0, 0, ng1, 7, t78, (char)118, t50, 32, (char)118, t53, 48, (char)118, t54, 64, (char)118, t58, 32, (char)118, t61, 32, (char)118, t66, 32);
    xsi_set_current_line(48, ng0);
    t4 = (t1 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 8, t7, 32);
    t8 = (t1 + 3704);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB12;

}

static int sp_pCounterCheck(char *t1, char *t2)
{
    char t9[8];
    char t35[8];
    char t39[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
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
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1552);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t5 = (t1 + 2664U);
    t6 = *((char **)t5);
    t5 = (t1 + 4344);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB7;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t31 = (t1 + 3544);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t33, 8, t34, 32);
    t36 = (t1 + 4504);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = xsi_vlog_time(t39, 1000.0000000000000, 1000.0000000000000);
    t41 = (t1 + 4344);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 2664U);
    t45 = *((char **)t44);
    t44 = (t1 + 1552);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t44, (char)118, t35, 32, (char)118, t38, 32, (char)118, t39, 64, (char)118, t43, 32, (char)118, t45, 14);
    xsi_set_current_line(58, ng0);
    t4 = (t1 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 8, t7, 32);
    t8 = (t1 + 3704);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB12;

}

static void Initial_14_0(char *t0)
{
    char t4[8];
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
    char *t24;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);

LAB4:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 5232);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 3224);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3224);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_20_1(char *t0)
{
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    unsigned int t16;
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
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);

LAB4:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 8636);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 8636);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 8640);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 8640);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 3704);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t0, (char)118, t8, 8, (char)118, t11, 8);
    xsi_set_current_line(38, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(39, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(22, ng0);
    t10 = (t0 + 6240);
    *((int *)t10) = 1;
    t11 = (t0 + 5704);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 8636);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(24, ng0);

LAB12:    xsi_set_current_line(25, ng0);
    t10 = (t0 + 6256);
    *((int *)t10) = 1;
    t11 = (t0 + 5704);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t8, 8, t9, 32);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t12 + 4);
    t14 = (t10 + 4);
    t4 = *((unsigned int *)t12);
    t5 = *((unsigned int *)t10);
    t6 = (t4 ^ t5);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t14);
    t17 = (t15 ^ t16);
    t18 = (t6 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t14);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB17;

LAB14:    if (t21 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t25 = (t13 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB18;

LAB19:
LAB20:    t2 = (t0 + 8640);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

LAB16:    t24 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(26, ng0);

LAB21:    xsi_set_current_line(27, ng0);
    t31 = ((char*)((ng4)));
    t32 = ((char*)((ng7)));
    t33 = (t0 + 5480);
    t34 = (t0 + 1552);
    t35 = xsi_create_subprogram_invocation(t33, 0, t0, t34, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t34, t35);
    t36 = (t0 + 4344);
    xsi_vlogvar_assign_value(t36, t31, 0, 0, 32);
    t37 = (t0 + 4504);
    xsi_vlogvar_assign_value(t37, t32, 0, 0, 32);

LAB24:    t38 = (t0 + 5576);
    t39 = *((char **)t38);
    t40 = (t39 + 80U);
    t41 = *((char **)t40);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t7 = ((int  (*)(char *, char *))t45)(t0, t39);

LAB26:    if (t7 != 0)
        goto LAB27;

LAB22:    t39 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t39);

LAB23:    t46 = (t0 + 5576);
    t47 = *((char **)t46);
    t46 = (t0 + 1552);
    t48 = (t0 + 5480);
    t49 = 0;
    xsi_delete_subprogram_invocation(t46, t47, t0, t48, t49);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t8, 8);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng5)));
    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t11 = (t9 + 4);
    t4 = *((unsigned int *)t8);
    t5 = *((unsigned int *)t9);
    t6 = (t4 ^ t5);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t6 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t12) = 1;

LAB31:    t24 = (t12 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(31, ng0);

LAB36:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);

LAB34:    xsi_set_current_line(34, ng0);
    xsi_vlog_finish(1);
    goto LAB20;

LAB25:;
LAB27:    t38 = (t0 + 5672U);
    *((char **)t38) = &&LAB24;
    goto LAB1;

LAB30:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(29, ng0);

LAB35:    xsi_set_current_line(30, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB34;

}

static void Always_63_2(char *t0)
{
    char t4[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6272);
    *((int *)t2) = 1;
    t3 = (t0 + 5952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 3384);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t21 = (t0 + 3544);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t23, 8, t24, 32);

LAB14:    t26 = ((char*)((ng5)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t26, 32);
    if (t27 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng19)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng20)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng24)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t27 = xsi_vlog_unsigned_case_compare(t25, 32, t2, 32);
    if (t27 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(78, ng0);

LAB83:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 8, t6, 32);
    xsi_vlogfile_write(1, 0, 0, ng28, 2, t0, (char)118, t4, 32);

LAB33:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2664U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 14, t2, 32);
    t5 = (t0 + 3544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB12;

LAB15:    xsi_set_current_line(66, ng0);
    t28 = ((char*)((ng12)));
    t29 = ((char*)((ng13)));
    t30 = ((char*)((ng14)));
    t31 = (t0 + 5728);
    t32 = (t0 + 1120);
    t33 = xsi_create_subprogram_invocation(t31, 0, t0, t32, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t32, t33);
    t34 = (t0 + 3864);
    xsi_vlogvar_assign_value(t34, t28, 0, 0, 32);
    t35 = (t0 + 4024);
    xsi_vlogvar_assign_value(t35, t29, 0, 0, 32);
    t36 = (t0 + 4184);
    xsi_vlogvar_assign_value(t36, t30, 0, 0, 48);

LAB36:    t37 = (t0 + 5824);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = ((int  (*)(char *, char *))t44)(t0, t38);

LAB38:    if (t45 != 0)
        goto LAB39;

LAB34:    t38 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t38);

LAB35:    t46 = (t0 + 5824);
    t47 = *((char **)t46);
    t46 = (t0 + 1120);
    t48 = (t0 + 5728);
    t49 = 0;
    xsi_delete_subprogram_invocation(t46, t47, t0, t48, t49);
    goto LAB33;

LAB17:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng12)));
    t5 = ((char*)((ng15)));
    t6 = ((char*)((ng16)));
    t7 = (t0 + 5728);
    t8 = (t0 + 1120);
    t14 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t14);
    t15 = (t0 + 3864);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 32);
    t21 = (t0 + 4024);
    xsi_vlogvar_assign_value(t21, t5, 0, 0, 32);
    t22 = (t0 + 4184);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 48);

LAB42:    t23 = (t0 + 5824);
    t24 = *((char **)t23);
    t26 = (t24 + 80U);
    t28 = *((char **)t26);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t45 = ((int  (*)(char *, char *))t32)(t0, t24);

LAB44:    if (t45 != 0)
        goto LAB45;

LAB40:    t24 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t24);

LAB41:    t33 = (t0 + 5824);
    t34 = *((char **)t33);
    t33 = (t0 + 1120);
    t35 = (t0 + 5728);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB33;

LAB19:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng17)));
    t5 = ((char*)((ng18)));
    t6 = (t0 + 5728);
    t7 = (t0 + 1552);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 32);
    t15 = (t0 + 4504);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 32);

LAB48:    t21 = (t0 + 5824);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t26 = (t24 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t45 = ((int  (*)(char *, char *))t30)(t0, t22);

LAB50:    if (t45 != 0)
        goto LAB51;

LAB46:    t22 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t22);

LAB47:    t31 = (t0 + 5824);
    t32 = *((char **)t31);
    t31 = (t0 + 1552);
    t33 = (t0 + 5728);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    goto LAB33;

LAB21:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng20)));
    t5 = ((char*)((ng18)));
    t6 = (t0 + 5728);
    t7 = (t0 + 1552);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 32);
    t15 = (t0 + 4504);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 32);

LAB54:    t21 = (t0 + 5824);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t26 = (t24 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t45 = ((int  (*)(char *, char *))t30)(t0, t22);

LAB56:    if (t45 != 0)
        goto LAB57;

LAB52:    t22 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t22);

LAB53:    t31 = (t0 + 5824);
    t32 = *((char **)t31);
    t31 = (t0 + 1552);
    t33 = (t0 + 5728);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    goto LAB33;

LAB23:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng20)));
    t5 = ((char*)((ng18)));
    t6 = (t0 + 5728);
    t7 = (t0 + 1552);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 32);
    t15 = (t0 + 4504);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 32);

LAB60:    t21 = (t0 + 5824);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t26 = (t24 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t45 = ((int  (*)(char *, char *))t30)(t0, t22);

LAB62:    if (t45 != 0)
        goto LAB63;

LAB58:    t22 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t22);

LAB59:    t31 = (t0 + 5824);
    t32 = *((char **)t31);
    t31 = (t0 + 1552);
    t33 = (t0 + 5728);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    goto LAB33;

LAB25:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng21)));
    t5 = ((char*)((ng22)));
    t6 = ((char*)((ng23)));
    t7 = (t0 + 5728);
    t8 = (t0 + 1120);
    t14 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t14);
    t15 = (t0 + 3864);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 32);
    t21 = (t0 + 4024);
    xsi_vlogvar_assign_value(t21, t5, 0, 0, 32);
    t22 = (t0 + 4184);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 48);

LAB66:    t23 = (t0 + 5824);
    t24 = *((char **)t23);
    t26 = (t24 + 80U);
    t28 = *((char **)t26);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t45 = ((int  (*)(char *, char *))t32)(t0, t24);

LAB68:    if (t45 != 0)
        goto LAB69;

LAB64:    t24 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t24);

LAB65:    t33 = (t0 + 5824);
    t34 = *((char **)t33);
    t33 = (t0 + 1120);
    t35 = (t0 + 5728);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB33;

LAB27:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng22)));
    t5 = ((char*)((ng25)));
    t6 = ((char*)((ng26)));
    t7 = (t0 + 5728);
    t8 = (t0 + 1120);
    t14 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t14);
    t15 = (t0 + 3864);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 32);
    t21 = (t0 + 4024);
    xsi_vlogvar_assign_value(t21, t5, 0, 0, 32);
    t22 = (t0 + 4184);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 48);

LAB72:    t23 = (t0 + 5824);
    t24 = *((char **)t23);
    t26 = (t24 + 80U);
    t28 = *((char **)t26);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t45 = ((int  (*)(char *, char *))t32)(t0, t24);

LAB74:    if (t45 != 0)
        goto LAB75;

LAB70:    t24 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t24);

LAB71:    t33 = (t0 + 5824);
    t34 = *((char **)t33);
    t33 = (t0 + 1120);
    t35 = (t0 + 5728);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB33;

LAB29:    xsi_set_current_line(73, ng0);

LAB76:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng4)));
    t5 = ((char*)((ng7)));
    t6 = (t0 + 5728);
    t7 = (t0 + 1552);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t14 = (t0 + 4344);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 32);
    t15 = (t0 + 4504);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 32);

LAB79:    t21 = (t0 + 5824);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t26 = (t24 + 272U);
    t28 = *((char **)t26);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t45 = ((int  (*)(char *, char *))t30)(t0, t22);

LAB81:    if (t45 != 0)
        goto LAB82;

LAB77:    t22 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t22);

LAB78:    t31 = (t0 + 5824);
    t32 = *((char **)t31);
    t31 = (t0 + 1552);
    t33 = (t0 + 5728);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng27, 2, t0, (char)118, t5, 8);
    xsi_set_current_line(76, ng0);
    xsi_vlog_finish(1);
    goto LAB33;

LAB37:;
LAB39:    t37 = (t0 + 5920U);
    *((char **)t37) = &&LAB36;
    goto LAB1;

LAB43:;
LAB45:    t23 = (t0 + 5920U);
    *((char **)t23) = &&LAB42;
    goto LAB1;

LAB49:;
LAB51:    t21 = (t0 + 5920U);
    *((char **)t21) = &&LAB48;
    goto LAB1;

LAB55:;
LAB57:    t21 = (t0 + 5920U);
    *((char **)t21) = &&LAB54;
    goto LAB1;

LAB61:;
LAB63:    t21 = (t0 + 5920U);
    *((char **)t21) = &&LAB60;
    goto LAB1;

LAB67:;
LAB69:    t23 = (t0 + 5920U);
    *((char **)t23) = &&LAB66;
    goto LAB1;

LAB73:;
LAB75:    t23 = (t0 + 5920U);
    *((char **)t23) = &&LAB72;
    goto LAB1;

LAB80:;
LAB82:    t21 = (t0 + 5920U);
    *((char **)t21) = &&LAB79;
    goto LAB1;

}


extern void work_m_00000000004287073587_3671711236_init()
{
	static char *pe[] = {(void *)Initial_14_0,(void *)Initial_20_1,(void *)Always_63_2};
	static char *se[] = {(void *)sp_memCheck,(void *)sp_pCounterCheck};
	xsi_register_didat("work_m_00000000004287073587_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000004287073587_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
