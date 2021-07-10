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
static const char *ng0 = "C:/Users/Tugcan/Desktop/CS240/lab07/calc/calc_tb.v";
static const char *ng1 = "data";
static const char *ng2 = "result";
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {5, 0};
static int ng6[] = {15, 0};
static int ng7[] = {2, 0};
static const char *ng8 = "Output Error at time %d, expected %d, received %d, data #%d";
static const char *ng9 = "True Value at time %d, expected %d, received %d, data #%d";
static const char *ng10 = "Design contains no errors.. Well done !!!";
static const char *ng11 = "Design contains %d errors!";



static void Initial_19_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 2088);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_20_1(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 2248);
    xsi_vlogfile_readmemh(ng2, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_22_2(char *t0)
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

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);

LAB4:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1448);
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
    t24 = (t0 + 1448);
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

static void Initial_28_3(char *t0)
{
    char t12[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6828);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6828);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4976);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB6:    xsi_set_current_line(33, ng0);
    t10 = (t0 + 4960);
    *((int *)t10) = 1;
    t11 = (t0 + 4424);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 6828);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6832);
    *((int *)t8) = t7;

LAB10:    t9 = (t0 + 6832);
    if (*((int *)t9) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4200);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB11:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t10 = (t0 + 4992);
    *((int *)t10) = 1;
    t11 = (t0 + 4424);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2088);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t13 = (t0 + 2088);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 2408);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t12, 8, t8, t11, t15, 2, 1, t18, 32, 1);
    t19 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t19, t12, 0, 0, 8, 1000LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6836);
    *((int *)t8) = t7;

LAB15:    t9 = (t0 + 6836);
    if (*((int *)t9) > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    t2 = (t0 + 6832);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB10;

LAB16:    xsi_set_current_line(43, ng0);

LAB18:    xsi_set_current_line(44, ng0);
    t10 = (t0 + 5008);
    *((int *)t10) = 1;
    t11 = (t0 + 4424);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t20 = (t6 & t5);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t9) == 0)
        goto LAB20;

LAB22:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;

LAB23:    t11 = (t12 + 4);
    t13 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    *((unsigned int *)t12) = t23;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB25;

LAB24:    t28 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t28 & 1U);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 1U);
    t14 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 1, 1000LL);
    t2 = (t0 + 6836);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB15;

LAB20:    *((unsigned int *)t12) = 1;
    goto LAB23;

LAB25:    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t24 | t25);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t13);
    *((unsigned int *)t11) = (t26 | t27);
    goto LAB24;

LAB26:    xsi_set_current_line(50, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_55_4(char *t0)
{
    char t14[8];
    char t20[8];
    char t26[16];
    char t31[8];
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
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
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

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6840);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6840);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 32, t8, 32, t9, 32);
    t10 = (t14 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t14);
    t24 = (t6 & t5);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)119, t8, 32);

LAB20:
LAB1:    return;
LAB6:    xsi_set_current_line(59, ng0);
    t10 = (t0 + 5024);
    *((int *)t10) = 1;
    t11 = (t0 + 4672);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(59, ng0);

LAB9:    xsi_set_current_line(60, ng0);
    t12 = (t0 + 5040);
    *((int *)t12) = 1;
    t13 = (t0 + 4672);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2248);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t14, 8, t9, t12, t16, 2, 1, t19, 32, 1);
    memset(t20, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t14))
        goto LAB12;

LAB11:    t21 = (t3 + 4);
    t22 = (t14 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB12;

LAB13:    t23 = (t20 + 4);
    t4 = *((unsigned int *)t23);
    t5 = (~(t4));
    t6 = *((unsigned int *)t20);
    t24 = (t6 & t5);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(66, ng0);
    t2 = xsi_vlog_time(t26, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2248);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 2248);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2248);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t14, 8, t9, t12, t16, 2, 1, t19, 32, 1);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 2568);
    t23 = (t21 + 56U);
    t27 = *((char **)t23);
    xsi_vlogfile_write(1, 0, 0, ng9, 5, t0, (char)118, t26, 64, (char)118, t14, 8, (char)118, t22, 8, (char)119, t27, 32);

LAB16:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t8, 32, t9, 32);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    t2 = (t0 + 6840);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB12:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(62, ng0);

LAB17:    xsi_set_current_line(63, ng0);
    t27 = xsi_vlog_time(t26, 1000.0000000000000, 1000.0000000000000);
    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 2248);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2248);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2568);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_array_select_value(t31, 8, t30, t34, t37, 2, 1, t40, 32, 1);
    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    t41 = (t0 + 2568);
    t43 = (t41 + 56U);
    t44 = *((char **)t43);
    xsi_vlogfile_write(1, 0, 0, ng8, 5, t0, (char)118, t26, 64, (char)118, t31, 8, (char)118, t42, 8, (char)119, t44, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t8, 32, t9, 32);
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    goto LAB16;

LAB18:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB20;

}


extern void work_m_00000000003929953133_1175430051_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Initial_20_1,(void *)Initial_22_2,(void *)Initial_28_3,(void *)Initial_55_4};
	xsi_register_didat("work_m_00000000003929953133_1175430051", "isim/calc_tb_isim_beh.exe.sim/work/m_00000000003929953133_1175430051.didat");
	xsi_register_executes(pe);
}
