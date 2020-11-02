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
static const char *ng0 = "C:/Users/Bhoomik/OneDrive/vhdl/encoder/BhoomsDMA/DMA/test1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {3, 0};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {32U, 0U};
static int ng6[] = {4, 0};
static unsigned int ng7[] = {61440U, 0U};
static unsigned int ng8[] = {251658240U, 0U};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {17, 0};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {8U, 0U};



static void Initial_25_0(char *t0)
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

LAB0:    t1 = (t0 + 6800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(27, ng0);

LAB6:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 6608);
    xsi_process_wait(t2, 2500LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 2840);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2840);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_31_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);

LAB4:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 6856);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_68_2(char *t0)
{
    char t14[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 7296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 11624);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 11624);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB6:    xsi_set_current_line(71, ng0);

LAB8:    xsi_set_current_line(72, ng0);
    t10 = (t0 + 8112);
    *((int *)t10) = 1;
    t11 = (t0 + 7328);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(73, ng0);
    t12 = (t0 + 8128);
    *((int *)t12) = 1;
    t13 = (t0 + 7328);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7104);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 3640);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 8144);
    *((int *)t2) = 1;
    t3 = (t0 + 7328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7104);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 3640);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 8160);
    *((int *)t2) = 1;
    t3 = (t0 + 7328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 8176);
    *((int *)t2) = 1;
    t3 = (t0 + 7328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 7104);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8192);
    *((int *)t2) = 1;
    t3 = (t0 + 7328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 7104);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t9, 32);
    t10 = (t0 + 3960);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5880);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    t10 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 3U, t10, 30, t9, 1, t8, 1);
    t11 = (t0 + 4280);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t9, 32);
    t10 = (t0 + 4440);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 8208);
    *((int *)t2) = 1;
    t3 = (t0 + 7328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7104);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5720);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t8, 8, t9, 8);
    t10 = (t0 + 5720);
    xsi_vlogvar_assign_value(t10, t14, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5720);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t14, 0, 8);
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
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t14) = 1;

LAB24:    t13 = (t14 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:
LAB27:    t2 = (t0 + 11624);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB23:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(94, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 5880);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB27;

}

static void Always_98_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8224);
    *((int *)t2) = 1;
    t3 = (t0 + 7576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 8240);
    *((int *)t4) = 1;
    t5 = (t0 + 7576);
    *((char **)t5) = t4;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 8256);
    *((int *)t2) = 1;
    t3 = (t0 + 7576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 7352);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4760);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 8272);
    *((int *)t2) = 1;
    t3 = (t0 + 7576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7352);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4760);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

static void Initial_111_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 7792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);

LAB4:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4440);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 8288);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 8304);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 8320);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 8336);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 8352);
    *((int *)t3) = 1;
    t4 = (t0 + 7824);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t5 = (t0 + 11628);
    *((int *)t5) = t11;

LAB15:    t7 = (t0 + 11628);
    if (*((int *)t7) > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 8384);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB16:    xsi_set_current_line(147, ng0);

LAB18:    xsi_set_current_line(147, ng0);
    t12 = (t0 + 8368);
    *((int *)t12) = 1;
    t13 = (t0 + 7824);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    t2 = (t0 + 11628);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB15;

LAB20:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 8400);
    *((int *)t3) = 1;
    t4 = (t0 + 7824);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t5 = (t0 + 11632);
    *((int *)t5) = t11;

LAB24:    t7 = (t0 + 11632);
    if (*((int *)t7) > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB25:    xsi_set_current_line(153, ng0);
    t12 = (t0 + 8416);
    *((int *)t12) = 1;
    t13 = (t0 + 7824);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    t2 = (t0 + 11632);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB24;

LAB28:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5080);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 8432);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 8448);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 8464);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 8496);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 8512);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 8528);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 8544);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5080);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t4 = (t0 + 11636);
    *((int *)t4) = t11;

LAB45:    t5 = (t0 + 11636);
    if (*((int *)t5) > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB46:    xsi_set_current_line(181, ng0);
    t7 = (t0 + 8560);
    *((int *)t7) = 1;
    t12 = (t0 + 7824);
    *((char **)t12) = t7;
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    t2 = (t0 + 11636);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB45;

LAB49:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5080);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 8576);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 8592);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 8608);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 8624);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 8640);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 8656);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB61:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 8672);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB63:    xsi_set_current_line(205, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 8688);
    *((int *)t2) = 1;
    t3 = (t0 + 7824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5080);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t4 = (t0 + 11640);
    *((int *)t4) = t11;

LAB66:    t5 = (t0 + 11640);
    if (*((int *)t5) > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 7600);
    xsi_process_wait(t2, 40000000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB67:    xsi_set_current_line(209, ng0);
    t7 = (t0 + 8704);
    *((int *)t7) = 1;
    t12 = (t0 + 7824);
    *((char **)t12) = t7;
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB69:    t2 = (t0 + 11640);
    t11 = *((int *)t2);
    *((int *)t2) = (t11 - 1);
    goto LAB66;

LAB70:    xsi_set_current_line(211, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002191371084_1899091061_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Initial_31_1,(void *)Initial_68_2,(void *)Always_98_3,(void *)Initial_111_4};
	xsi_register_didat("work_m_00000000002191371084_1899091061", "isim/testbench_top_isim_beh.exe.sim/work/m_00000000002191371084_1899091061.didat");
	xsi_register_executes(pe);
}
