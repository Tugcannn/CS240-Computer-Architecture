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
static const char *ng0 = "C:/Users/Tugcan/Desktop/CS240/Project/projectCPU2021_designs/projectCPU2021_tb.v";
static const char *ng1 = "Error Found at instrCount %d, Test: %s, %d ns, RAM Addr %d: expected %d, received %d\n";
static int ng2[] = {1, 0};
static const char *ng3 = "Error Found at instrCount %d, Test: %s, %d ns, RAM Addr %d: expected %h, received %h\n";
static const char *ng4 = "Memory correct at instrCount %d, Test: %s, %d ns, RAM Addr %d: expected %d, received %d\n";
static const char *ng5 = "Memory correct at instrCount %d, Test: %s, %d ns, RAM Addr %d: expected %h, received %h\n";
static const char *ng6 = "Error Found at instrCount %d, Test: %s, %d ns: expected PC=%d, observed PC=%d\n";
static const char *ng7 = "PC correct at instrCount %d, Test: %s, %d ns: expected PC=%d, observed PC=%d\n";
static const char *ng8 = "Error Found at instrCount %d, Test: %s, %d ns: expected W=%d, observed W=%d\n";
static const char *ng9 = "Error Found at instrCount %d, Test: %s, %d ns: expected W=%h, observed W=%h\n";
static const char *ng10 = "W correct at instrCount %d, Test: %s, %d ns: expected W=%d, observed W=%d\n";
static const char *ng11 = "W correct at instrCount %d, Test: %s, %d ns: expected W=%h, observed W=%h\n";
static const char *ng12 = "outputLog.txt";
static const char *ng13 = "w";
static int ng14[] = {10, 0};
static int ng15[] = {0, 0};
static int ng16[] = {1000, 0};
static int ng17[] = {159, 0};
static int ng18[] = {158, 0};
static int ng19[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1297096777, 0, 74, 0};
static const char *ng20 = "Total Errors = %d\n";
static const char *ng21 = "Total Errors = %d";
static const char *ng22 = "Simulation Successfully Completed\n";
static const char *ng23 = "Simulation Successfully Completed";
static const char *ng24 = "Simulation Failed\n";
static const char *ng25 = "Simulation Failed";
static const char *ng26 = "Simulation finished due to Time Limit.\nTest Count = %d\nTotal Errors = %d\n";
static int ng27[] = {3, 0};
static int ng28[] = {1415934836, 0, 1246580768, 0, 0, 0, 0, 0, 0, 0};
static int ng29[] = {8, 0};
static int ng30[] = {32, 0};
static int ng31[] = {1936990256, 0, 1142969445, 0, 16708, 0, 0, 0, 0, 0};
static int ng32[] = {14, 0};
static int ng33[] = {16, 0};
static int ng34[] = {1936990257, 0, 1142969445, 0, 16708, 0, 0, 0, 0, 0};
static int ng35[] = {20, 0};
static int ng36[] = {1936990256, 0, 1142969445, 0, 5128526, 0, 0, 0, 0, 0};
static int ng37[] = {26, 0};
static unsigned int ng38[] = {247U, 0U};
static int ng39[] = {1936990257, 0, 1142969445, 0, 5128526, 0, 0, 0, 0, 0};
static int ng40[] = {1936990256, 0, 1277187173, 0, 5460562, 0, 0, 0, 0, 0};
static int ng41[] = {38, 0};
static int ng42[] = {128, 0};
static int ng43[] = {1936990257, 0, 1277187173, 0, 5460562, 0, 0, 0, 0, 0};
static int ng44[] = {44, 0};
static unsigned int ng45[] = {57088U, 0U};
static int ng46[] = {1936990258, 0, 1277187173, 0, 5460562, 0, 0, 0, 0, 0};
static int ng47[] = {50, 0};
static unsigned int ng48[] = {61179U, 0U};
static int ng49[] = {1936990259, 0, 1277187173, 0, 5460562, 0, 0, 0, 0, 0};
static int ng50[] = {56, 0};
static int ng51[] = {1936990256, 0, 1159746661, 0, 71, 0, 0, 0, 0, 0};
static int ng52[] = {62, 0};
static int ng53[] = {1936990257, 0, 1159746661, 0, 71, 0, 0, 0, 0, 0};
static int ng54[] = {68, 0};
static int ng55[] = {74, 0};
static int ng56[] = {72, 0};
static int ng57[] = {255, 0};
static int ng58[] = {1415934836, 0, 1348884256, 0, 1852055619, 0, 844570721, 0, 17232, 0};
static int ng59[] = {78, 0};
static int ng60[] = {80, 0};
static int ng61[] = {1936990256, 0, 1512068197, 0, 83, 0, 0, 0, 0, 0};
static int ng62[] = {84, 0};
static int ng63[] = {85, 0};
static int ng64[] = {1936990257, 0, 1512068197, 0, 83, 0, 0, 0, 0, 0};
static int ng65[] = {97, 0};
static int ng66[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1145315401, 0, 65, 0};
static int ng67[] = {106, 0};
static unsigned int ng68[] = {65295U, 0U};
static int ng69[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1313087561, 0, 20033, 0};
static int ng70[] = {115, 0};
static unsigned int ng71[] = {57024U, 0U};
static int ng72[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1380720713, 0, 21330, 0};
static int ng73[] = {124, 0};
static int ng74[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1195712585, 0, 0, 0};
static int ng75[] = {131, 0};
static int ng76[] = {133, 0};
static int ng77[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1398415433, 0, 0, 0};
static int ng78[] = {142, 0};
static unsigned int ng79[] = {65261U, 0U};
static int ng80[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 844570697, 0, 17232, 0};
static int ng81[] = {151, 0};
static int ng82[] = {147, 0};
static unsigned int ng83[] = {57007U, 0U};
static int ng84[] = {1415934836, 0, 1701016608, 0, 1852074354, 0, 1716985929, 0, 17232, 0};



static int sp_memCheck(char *t1, char *t2)
{
    char t9[8];
    char t24[8];
    char t40[8];
    char t44[16];
    char t56[8];
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
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t5 = (t1 + 9560);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 9584);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 9608);
    t15 = *((char **)t14);
    t16 = ((((char*)(t15))) + 64U);
    t17 = *((char **)t16);
    t18 = (t1 + 4344);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t9, 16, t8, t13, t17, 2, 1, t20, 13, 2);
    t21 = (t1 + 4504);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t23))
        goto LAB7;

LAB6:    t25 = (t9 + 4);
    t26 = (t23 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t26))
        goto LAB7;

LAB8:    t27 = (t24 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(131, ng0);

LAB13:    xsi_set_current_line(132, ng0);
    t4 = (t1 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4024);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t10, 9, t11, 32);
    t12 = (t1 + 4664);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t16 = (t1 + 4344);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 4504);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 9776);
    t23 = *((char **)t22);
    t25 = ((((char*)(t23))) + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 9800);
    t33 = *((char **)t27);
    t34 = ((((char*)(t33))) + 72U);
    t35 = *((char **)t34);
    t36 = (t1 + 9824);
    t37 = *((char **)t36);
    t38 = ((((char*)(t37))) + 64U);
    t39 = *((char **)t38);
    t41 = (t1 + 4344);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_array_select_value(t24, 16, t26, t35, t39, 2, 1, t43, 13, 2);
    t45 = (t1 + 848);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng4, 7, t45, (char)118, t9, 32, (char)118, t14, 144, (char)118, t44, 64, (char)118, t18, 13, (char)118, t21, 16, (char)118, t24, 16);
    xsi_set_current_line(136, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4664);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t13 = (t1 + 4344);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4504);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 9848);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 9872);
    t25 = *((char **)t23);
    t26 = ((((char*)(t25))) + 72U);
    t27 = *((char **)t26);
    t33 = (t1 + 9896);
    t34 = *((char **)t33);
    t35 = ((((char*)(t34))) + 64U);
    t36 = *((char **)t35);
    t37 = (t1 + 4344);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t24, 16, t22, t27, t36, 2, 1, t39, 13, 2);
    t41 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng5, 7, t41, (char)118, t9, 32, (char)118, t11, 144, (char)118, t44, 64, (char)118, t15, 13, (char)118, t18, 16, (char)118, t24, 16);

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t24) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(121, ng0);

LAB12:    xsi_set_current_line(122, ng0);
    t33 = (t1 + 3704);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 4024);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng2)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_minus(t40, 32, t38, 9, t39, 32);
    t41 = (t1 + 4664);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t45 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t46 = (t1 + 4344);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t1 + 4504);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t1 + 9632);
    t53 = *((char **)t52);
    t54 = ((((char*)(t53))) + 56U);
    t55 = *((char **)t54);
    t57 = (t1 + 9656);
    t58 = *((char **)t57);
    t59 = ((((char*)(t58))) + 72U);
    t60 = *((char **)t59);
    t61 = (t1 + 9680);
    t62 = *((char **)t61);
    t63 = ((((char*)(t62))) + 64U);
    t64 = *((char **)t63);
    t65 = (t1 + 4344);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlog_generic_get_array_select_value(t56, 16, t55, t60, t64, 2, 1, t67, 13, 2);
    t68 = (t1 + 848);
    xsi_vlogfile_fwrite(*((unsigned int *)t35), 0, 0, 1, ng1, 7, t68, (char)118, t40, 32, (char)118, t43, 144, (char)118, t44, 64, (char)118, t48, 13, (char)118, t51, 16, (char)118, t56, 16);
    xsi_set_current_line(126, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4664);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t44, 1000.0000000000000, 1000.0000000000000);
    t13 = (t1 + 4344);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 4504);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 9704);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 9728);
    t25 = *((char **)t23);
    t26 = ((((char*)(t25))) + 72U);
    t27 = *((char **)t26);
    t33 = (t1 + 9752);
    t34 = *((char **)t33);
    t35 = ((((char*)(t34))) + 64U);
    t36 = *((char **)t35);
    t37 = (t1 + 4344);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t24, 16, t22, t27, t36, 2, 1, t39, 13, 2);
    t41 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 7, t41, (char)118, t9, 32, (char)118, t11, 144, (char)118, t44, 64, (char)118, t15, 13, (char)118, t18, 16, (char)118, t24, 16);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4184);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 9);
    goto LAB11;

}

static int sp_PCCheck(char *t1, char *t2)
{
    char t9[8];
    char t25[8];
    char t29[16];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t5 = (t1 + 2824U);
    t6 = *((char **)t5);
    t5 = (t1 + 4824);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB7;

LAB6:    t10 = (t6 + 4);
    t11 = (t8 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB7;

LAB8:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(158, ng0);

LAB13:    xsi_set_current_line(159, ng0);
    t4 = (t1 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4024);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t10, 9, t11, 32);
    t12 = (t1 + 4984);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t21 = (t1 + 4824);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 2824U);
    t26 = *((char **)t24);
    t24 = (t1 + 1280);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng7, 6, t24, (char)118, t9, 32, (char)118, t19, 144, (char)118, t29, 64, (char)118, t23, 32, (char)118, t26, 13);
    xsi_set_current_line(163, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4984);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t18 = (t1 + 4824);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 2824U);
    t22 = *((char **)t21);
    t21 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng7, 6, t21, (char)118, t9, 32, (char)118, t11, 144, (char)118, t29, 64, (char)118, t20, 32, (char)118, t22, 13);

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(148, ng0);

LAB12:    xsi_set_current_line(149, ng0);
    t18 = (t1 + 3704);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 4024);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t23, 9, t24, 32);
    t26 = (t1 + 4984);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t31 = (t1 + 4824);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 2824U);
    t35 = *((char **)t34);
    t34 = (t1 + 1280);
    xsi_vlogfile_fwrite(*((unsigned int *)t20), 0, 0, 1, ng6, 6, t34, (char)118, t25, 32, (char)118, t28, 144, (char)118, t29, 64, (char)118, t33, 32, (char)118, t35, 13);
    xsi_set_current_line(153, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4984);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t18 = (t1 + 4824);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 2824U);
    t22 = *((char **)t21);
    t21 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 6, t21, (char)118, t9, 32, (char)118, t11, 144, (char)118, t29, 64, (char)118, t20, 32, (char)118, t22, 13);
    xsi_set_current_line(157, ng0);
    t4 = (t1 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4184);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 9);
    goto LAB11;

}

static int sp_WCheck(char *t1, char *t2)
{
    char t9[8];
    char t25[8];
    char t29[16];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(174, ng0);

LAB5:    xsi_set_current_line(175, ng0);
    t5 = (t1 + 2984U);
    t6 = *((char **)t5);
    t5 = (t1 + 5144);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB7;

LAB6:    t10 = (t6 + 4);
    t11 = (t8 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB7;

LAB8:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(185, ng0);

LAB13:    xsi_set_current_line(186, ng0);
    t4 = (t1 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4024);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t10, 9, t11, 32);
    t12 = (t1 + 5304);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t21 = (t1 + 5144);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 2984U);
    t26 = *((char **)t24);
    t24 = (t1 + 1712);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng10, 6, t24, (char)118, t9, 32, (char)118, t19, 144, (char)118, t29, 64, (char)118, t23, 16, (char)118, t26, 16);
    xsi_set_current_line(190, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 5304);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t18 = (t1 + 5144);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 2984U);
    t22 = *((char **)t21);
    t21 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng11, 6, t21, (char)118, t9, 32, (char)118, t11, 144, (char)118, t29, 64, (char)118, t20, 16, (char)118, t22, 16);

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(175, ng0);

LAB12:    xsi_set_current_line(176, ng0);
    t18 = (t1 + 3704);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 4024);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t23, 9, t24, 32);
    t26 = (t1 + 5304);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t31 = (t1 + 5144);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 2984U);
    t35 = *((char **)t34);
    t34 = (t1 + 1712);
    xsi_vlogfile_fwrite(*((unsigned int *)t20), 0, 0, 1, ng8, 6, t34, (char)118, t25, 32, (char)118, t28, 144, (char)118, t29, 64, (char)118, t33, 16, (char)118, t35, 16);
    xsi_set_current_line(180, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 5304);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_vlog_time(t29, 1000.0000000000000, 1000.0000000000000);
    t18 = (t1 + 5144);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 2984U);
    t22 = *((char **)t21);
    t21 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng9, 6, t21, (char)118, t9, 32, (char)118, t11, 144, (char)118, t29, 64, (char)118, t20, 16, (char)118, t22, 16);
    xsi_set_current_line(184, ng0);
    t4 = (t1 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 9, t7, 32);
    t8 = (t1 + 4184);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 9);
    goto LAB11;

}

static void Initial_13_0(char *t0)
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

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);

LAB4:    xsi_set_current_line(14, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 3544);
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
    t24 = (t0 + 3544);
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

static void Initial_21_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
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
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    xsi_set_current_line(22, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng12, ng13);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t2 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t9 = (t0 + 9904);
    *((int *)t9) = t8;

LAB5:    t10 = (t0 + 9904);
    if (*((int *)t10) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng15)));
    t4 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t2 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t9 = (t0 + 9908);
    *((int *)t9) = t8;

LAB9:    t10 = (t0 + 9908);
    if (*((int *)t10) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t2 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t9 = (t0 + 9912);
    *((int *)t9) = t8;

LAB13:    t10 = (t0 + 9912);
    if (*((int *)t10) > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3704);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = (t0 + 4024);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t22 = (t0 + 4184);
    t23 = (t22 + 56U);
    t29 = *((char **)t23);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 0, 0, 1, ng26, 3, t0, (char)118, t12, 9, (char)118, t29, 9);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4024);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = (t0 + 4184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng26, 3, t0, (char)118, t9, 9, (char)118, t12, 9);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3704);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    xsi_set_current_line(49, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(25, ng0);
    t11 = (t0 + 7040);
    *((int *)t11) = 1;
    t12 = (t0 + 6504);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 9904);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(27, ng0);
    t11 = (t0 + 7056);
    *((int *)t11) = 1;
    t12 = (t0 + 6504);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 9908);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB9;

LAB14:    xsi_set_current_line(28, ng0);

LAB16:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 7072);
    *((int *)t11) = 1;
    t12 = (t0 + 6504);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4024);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = ((char*)((ng17)));
    memset(t3, 0, 8);
    t11 = (t9 + 4);
    t12 = (t10 + 4);
    t5 = *((unsigned int *)t9);
    t6 = *((unsigned int *)t10);
    t7 = (t5 ^ t6);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t12);
    t15 = (t13 ^ t14);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB21;

LAB18:    if (t19 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t3) = 1;

LAB21:    t23 = (t3 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB22;

LAB23:
LAB24:    t2 = (t0 + 9912);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB13;

LAB20:    t22 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(30, ng0);

LAB25:    xsi_set_current_line(31, ng0);
    t29 = ((char*)((ng18)));
    t30 = ((char*)((ng19)));
    t31 = (t0 + 6280);
    t32 = (t0 + 1280);
    t33 = xsi_create_subprogram_invocation(t31, 0, t0, t32, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t32, t33);
    t34 = (t0 + 4824);
    xsi_vlogvar_assign_value(t34, t29, 0, 0, 32);
    t35 = (t0 + 4984);
    xsi_vlogvar_assign_value(t35, t30, 0, 0, 144);

LAB28:    t36 = (t0 + 6376);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t8 = ((int  (*)(char *, char *))t43)(t0, t37);

LAB30:    if (t8 != 0)
        goto LAB31;

LAB26:    t37 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t37);

LAB27:    t44 = (t0 + 6376);
    t45 = *((char **)t44);
    t44 = (t0 + 1280);
    t46 = (t0 + 6280);
    t47 = 0;
    xsi_delete_subprogram_invocation(t44, t45, t0, t46, t47);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3704);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = (t0 + 4184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 0, 0, 1, ng20, 2, t0, (char)118, t12, 9);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4184);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)118, t9, 9);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4184);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = ((char*)((ng15)));
    memset(t3, 0, 8);
    t11 = (t9 + 4);
    t12 = (t10 + 4);
    t5 = *((unsigned int *)t9);
    t6 = *((unsigned int *)t10);
    t7 = (t5 ^ t6);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t12);
    t15 = (t13 ^ t14);
    t16 = (t7 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t3) = 1;

LAB35:    t23 = (t3 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3704);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 0, 0, 1, ng24, 1, t0);
    xsi_set_current_line(41, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3704);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    xsi_set_current_line(43, ng0);
    xsi_vlog_finish(1);
    goto LAB24;

LAB29:;
LAB31:    t36 = (t0 + 6472U);
    *((char **)t36) = &&LAB28;
    goto LAB1;

LAB34:    t22 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(34, ng0);

LAB39:    xsi_set_current_line(35, ng0);
    t29 = (t0 + 3704);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_fwrite(*((unsigned int *)t31), 0, 0, 1, ng22, 1, t0);
    xsi_set_current_line(36, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3704);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    xsi_set_current_line(38, ng0);
    xsi_vlog_finish(1);
    goto LAB38;

}

static void Always_80_2(char *t0)
{
    char t8[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    int t10;
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
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 7088);
    *((int *)t2) = 1;
    t3 = (t0 + 6752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t6, 9, t7, 32);

LAB6:    t9 = ((char*)((ng15)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t9, 32);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng35)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng37)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng41)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng44)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng47)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng50)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng52)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng54)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng55)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng59)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng62)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng65)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng67)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng70)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng73)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng75)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng78)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng81)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng18)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t10 == 1)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2824U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t3, 13, t2, 32);
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t31, 0, 0, 9);
    goto LAB2;

LAB7:    xsi_set_current_line(82, ng0);
    t11 = ((char*)((ng27)));
    t12 = ((char*)((ng28)));
    t13 = (t0 + 6528);
    t14 = (t0 + 1280);
    t15 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t15);
    t16 = (t0 + 4824);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 32);
    t17 = (t0 + 4984);
    xsi_vlogvar_assign_value(t17, t12, 0, 0, 144);

LAB56:    t18 = (t0 + 6624);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t0, t19);

LAB58:    if (t26 != 0)
        goto LAB59;

LAB54:    t19 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t19);

LAB55:    t27 = (t0 + 6624);
    t28 = *((char **)t27);
    t27 = (t0 + 1280);
    t29 = (t0 + 6528);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t28, t0, t29, t30);
    goto LAB53;

LAB9:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng30)));
    t4 = ((char*)((ng31)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB62:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB64:    if (t26 != 0)
        goto LAB65;

LAB60:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB61:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB11:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng33)));
    t4 = ((char*)((ng34)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB68:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB70:    if (t26 != 0)
        goto LAB71;

LAB66:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB67:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB13:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng15)));
    t4 = ((char*)((ng36)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB74:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB76:    if (t26 != 0)
        goto LAB77;

LAB72:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB73:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB15:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng38)));
    t4 = ((char*)((ng39)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB80:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB82:    if (t26 != 0)
        goto LAB83;

LAB78:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB79:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB17:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng29)));
    t4 = ((char*)((ng40)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB86:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB88:    if (t26 != 0)
        goto LAB89;

LAB84:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB85:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB19:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng42)));
    t4 = ((char*)((ng43)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB92:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB94:    if (t26 != 0)
        goto LAB95;

LAB90:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB91:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB21:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng45)));
    t4 = ((char*)((ng46)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB98:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB100:    if (t26 != 0)
        goto LAB101;

LAB96:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB97:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB23:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng48)));
    t4 = ((char*)((ng49)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB104:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB106:    if (t26 != 0)
        goto LAB107;

LAB102:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB103:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB25:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng15)));
    t4 = ((char*)((ng51)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB110:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB112:    if (t26 != 0)
        goto LAB113;

LAB108:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB109:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB27:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng53)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB116:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB118:    if (t26 != 0)
        goto LAB119;

LAB114:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB115:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB29:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng51)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB122:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB124:    if (t26 != 0)
        goto LAB125;

LAB120:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB121:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB31:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng56)));
    t4 = ((char*)((ng57)));
    t5 = ((char*)((ng58)));
    t6 = (t0 + 6528);
    t7 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t11 = (t0 + 4344);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 13);
    t12 = (t0 + 4504);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 16);
    t13 = (t0 + 4664);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 144);

LAB128:    t14 = (t0 + 6624);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t26 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB130:    if (t26 != 0)
        goto LAB131;

LAB126:    t15 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t15);

LAB127:    t22 = (t0 + 6624);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 6528);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    goto LAB53;

LAB33:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng60)));
    t4 = ((char*)((ng61)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 4824);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 32);
    t11 = (t0 + 4984);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB134:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB136:    if (t26 != 0)
        goto LAB137;

LAB132:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB133:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB35:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng63)));
    t4 = ((char*)((ng64)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 4824);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 32);
    t11 = (t0 + 4984);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB140:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB142:    if (t26 != 0)
        goto LAB143;

LAB138:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB139:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB37:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng33)));
    t4 = ((char*)((ng66)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB146:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB148:    if (t26 != 0)
        goto LAB149;

LAB144:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB145:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB39:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng68)));
    t4 = ((char*)((ng69)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB152:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB154:    if (t26 != 0)
        goto LAB155;

LAB150:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB151:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB41:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng71)));
    t4 = ((char*)((ng72)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB158:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB160:    if (t26 != 0)
        goto LAB161;

LAB156:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB157:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB43:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng74)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB164:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB166:    if (t26 != 0)
        goto LAB167;

LAB162:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB163:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB45:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng76)));
    t4 = ((char*)((ng77)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 4824);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 32);
    t11 = (t0 + 4984);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB170:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB172:    if (t26 != 0)
        goto LAB173;

LAB168:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB169:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB47:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng79)));
    t4 = ((char*)((ng80)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1712);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 5144);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 16);
    t11 = (t0 + 5304);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB176:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB178:    if (t26 != 0)
        goto LAB179;

LAB174:    t13 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t13);

LAB175:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1712);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB53;

LAB49:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng82)));
    t4 = ((char*)((ng83)));
    t5 = ((char*)((ng84)));
    t6 = (t0 + 6528);
    t7 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t11 = (t0 + 4344);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 13);
    t12 = (t0 + 4504);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 16);
    t13 = (t0 + 4664);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 144);

LAB182:    t14 = (t0 + 6624);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t26 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB184:    if (t26 != 0)
        goto LAB185;

LAB180:    t15 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t15);

LAB181:    t22 = (t0 + 6624);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 6528);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    goto LAB53;

LAB51:    xsi_set_current_line(104, ng0);

LAB186:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng19)));
    t5 = (t0 + 6528);
    t6 = (t0 + 1280);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t9 = (t0 + 4824);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 32);
    t11 = (t0 + 4984);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 144);

LAB189:    t12 = (t0 + 6624);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t26 = ((int  (*)(char *, char *))t19)(t0, t13);

LAB191:    if (t26 != 0)
        goto LAB192;

LAB187:    t13 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t13);

LAB188:    t20 = (t0 + 6624);
    t21 = *((char **)t20);
    t20 = (t0 + 1280);
    t22 = (t0 + 6528);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng20, 2, t0, (char)118, t7, 9);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(108, ng0);
    xsi_vlog_finish(1);
    goto LAB53;

LAB57:;
LAB59:    t18 = (t0 + 6720U);
    *((char **)t18) = &&LAB56;
    goto LAB1;

LAB63:;
LAB65:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB62;
    goto LAB1;

LAB69:;
LAB71:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB68;
    goto LAB1;

LAB75:;
LAB77:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB74;
    goto LAB1;

LAB81:;
LAB83:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB80;
    goto LAB1;

LAB87:;
LAB89:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB86;
    goto LAB1;

LAB93:;
LAB95:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB92;
    goto LAB1;

LAB99:;
LAB101:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB98;
    goto LAB1;

LAB105:;
LAB107:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB104;
    goto LAB1;

LAB111:;
LAB113:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB110;
    goto LAB1;

LAB117:;
LAB119:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB116;
    goto LAB1;

LAB123:;
LAB125:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB122;
    goto LAB1;

LAB129:;
LAB131:    t14 = (t0 + 6720U);
    *((char **)t14) = &&LAB128;
    goto LAB1;

LAB135:;
LAB137:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB134;
    goto LAB1;

LAB141:;
LAB143:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB140;
    goto LAB1;

LAB147:;
LAB149:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB146;
    goto LAB1;

LAB153:;
LAB155:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB152;
    goto LAB1;

LAB159:;
LAB161:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB158;
    goto LAB1;

LAB165:;
LAB167:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB164;
    goto LAB1;

LAB171:;
LAB173:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB170;
    goto LAB1;

LAB177:;
LAB179:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB176;
    goto LAB1;

LAB183:;
LAB185:    t14 = (t0 + 6720U);
    *((char **)t14) = &&LAB182;
    goto LAB1;

LAB190:;
LAB192:    t12 = (t0 + 6720U);
    *((char **)t12) = &&LAB189;
    goto LAB1;

}


extern void work_m_00000000001268409350_2733965263_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Initial_21_1,(void *)Always_80_2};
	static char *se[] = {(void *)sp_memCheck,(void *)sp_PCCheck,(void *)sp_WCheck};
	xsi_register_didat("work_m_00000000001268409350_2733965263", "isim/projectCPU_tb_isim_beh.exe.sim/work/m_00000000001268409350_2733965263.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
