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
static const char *ng0 = "E:/faculta/FIC/0xcHa0s/xcHa0s/cpu.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};



static void Cont_20_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 511U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 511U);
    t12 = (t0 + 11600);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 511U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 8);
    t25 = (t0 + 11392);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_101_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 9336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 11408);
    *((int *)t2) = 1;
    t3 = (t0 + 9368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 3768U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 8008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(103, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 8008);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 16);
    goto LAB8;

}

static void Cont_118_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 10, t2, 32);
    t5 = (t0 + 11664);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 11424);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_122_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 9832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 6328U);
    t3 = *((char **)t2);
    t2 = (t0 + 11728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1023U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 9);
    t16 = (t0 + 11440);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_123_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 10080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 1023U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 1023U);
    t12 = (t0 + 11792);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1023U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 9);
    t25 = (t0 + 11456);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_125_5(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 10328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 11472);
    *((int *)t2) = 1;
    t3 = (t0 + 10360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(125, ng0);

LAB5:    xsi_set_current_line(126, ng0);
    t4 = (t0 + 6488U);
    t5 = *((char **)t4);
    t4 = (t0 + 8168);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 10);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(128, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t4 = (t11 + 4);
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 1023U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 1023U);
    t19 = (t0 + 8168);
    xsi_vlogvar_assign_value(t19, t11, 0, 0, 10);
    goto LAB8;

LAB9:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 6648U);
    t5 = *((char **)t4);
    t4 = (t0 + 8168);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 10);
    goto LAB11;

}

static void Always_154_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 10576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 11488);
    *((int *)t2) = 1;
    t3 = (t0 + 10608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(154, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 4888U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5048U);
    t3 = *((char **)t2);

LAB16:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(157, ng0);
    t7 = (t0 + 5848U);
    t8 = *((char **)t7);
    t7 = (t0 + 7528);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 16);
    goto LAB15;

LAB9:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 6008U);
    t4 = *((char **)t3);
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB15;

LAB11:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 6168U);
    t4 = *((char **)t3);
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB15;

LAB13:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB15;

LAB17:    xsi_set_current_line(164, ng0);
    t4 = (t0 + 5848U);
    t7 = *((char **)t4);
    t4 = (t0 + 7688);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 16);
    goto LAB25;

LAB19:    xsi_set_current_line(165, ng0);
    t4 = (t0 + 6008U);
    t7 = *((char **)t4);
    t4 = (t0 + 7688);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 16);
    goto LAB25;

LAB21:    xsi_set_current_line(166, ng0);
    t4 = (t0 + 6168U);
    t7 = *((char **)t4);
    t4 = (t0 + 7688);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 16);
    goto LAB25;

LAB23:    xsi_set_current_line(167, ng0);
    t4 = (t0 + 2008U);
    t7 = *((char **)t4);
    t4 = (t0 + 7688);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 16);
    goto LAB25;

}

static void Always_176_7(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 10824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 11504);
    *((int *)t2) = 1;
    t3 = (t0 + 10856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(176, ng0);

LAB5:    xsi_set_current_line(178, ng0);
    t4 = (t0 + 5368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 9, t2, 32);
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 9);

LAB18:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);

LAB19:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB7:    xsi_set_current_line(179, ng0);
    t7 = (t0 + 5848U);
    t8 = *((char **)t7);
    t7 = (t0 + 7368);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 16);
    goto LAB15;

LAB9:    xsi_set_current_line(180, ng0);
    t3 = (t0 + 6008U);
    t4 = *((char **)t3);
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB15;

LAB11:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 6168U);
    t4 = *((char **)t3);
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB15;

LAB13:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 6488U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    xsi_vlogtype_concat(t9, 16, 16, 2U, t3, 6, t4, 10);
    t7 = (t0 + 7368);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    goto LAB15;

LAB16:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 3128U);
    t7 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 9, t4, 32);
    t8 = (t0 + 7848);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 9);
    goto LAB18;

LAB20:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 2808U);
    t7 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 511U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 511U);
    t16 = (t0 + 7208);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 9);
    goto LAB28;

LAB22:    xsi_set_current_line(193, ng0);
    t4 = (t0 + 1528U);
    t7 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 511U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 511U);
    t16 = (t0 + 7208);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 9);
    goto LAB28;

LAB24:    xsi_set_current_line(194, ng0);
    t4 = (t0 + 3128U);
    t7 = *((char **)t4);
    t4 = (t0 + 7208);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 9);
    goto LAB28;

LAB26:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 7848);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t16 = (t0 + 7208);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 9);
    goto LAB28;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 11072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4728U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 11856);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 65535U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 15);
    t37 = (t0 + 11520);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2968U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 8008);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t17, 16, t23, 16);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}


extern void work_m_00000000000891126166_1200043877_init()
{
	static char *pe[] = {(void *)Cont_20_0,(void *)Always_101_1,(void *)Cont_118_2,(void *)Cont_122_3,(void *)Cont_123_4,(void *)Always_125_5,(void *)Always_154_6,(void *)Always_176_7,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000891126166_1200043877", "isim/top_module_isim_beh.exe.sim/work/m_00000000000891126166_1200043877.didat");
	xsi_register_executes(pe);
}
