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
static const char *ng0 = "C:/Users/Bhoomik/OneDrive/vhdl/encoder/BhoomsDMA/DMA/descriptor_process.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {4U, 0U};



static void Cont_41_0(char *t0)
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
    char *t17;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2344U);
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
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4294967295U);
    t12 = (t0 + 7416);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t17 = (t0 + 7288);
    *((int *)t17) = 1;

LAB1:    return;
}

static void Cont_42_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2344U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 8);
    t6 = (t4 + 12);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 4294967295U);
    t13 = (t0 + 7480);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 7304);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_43_2(char *t0)
{
    char t16[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 7320);
    *((int *)t2) = 1;
    t3 = (t0 + 6752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4344);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(104, ng0);

LAB60:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(54, ng0);

LAB20:    xsi_set_current_line(55, ng0);
    t6 = (t0 + 2184U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB19;

LAB9:    xsi_set_current_line(60, ng0);

LAB25:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2824U);
    t5 = *((char **)t3);
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2984U);
    t3 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(65, ng0);

LAB26:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 4344);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB28;

LAB27:    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB30;

LAB29:    *((unsigned int *)t16) = 1;

LAB30:    t17 = (t16 + 4);
    t9 = *((unsigned int *)t17);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);

LAB34:    goto LAB19;

LAB13:    xsi_set_current_line(72, ng0);

LAB35:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2664U);
    t5 = *((char **)t3);
    t3 = (t0 + 3864);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    memset(t16, 0, 8);
    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB37;

LAB36:    t15 = (t7 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB39;

LAB38:    *((unsigned int *)t16) = 1;

LAB39:    t18 = (t16 + 4);
    t9 = *((unsigned int *)t18);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB19;

LAB15:    xsi_set_current_line(83, ng0);

LAB45:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 2504U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(98, ng0);

LAB59:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4664);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);

LAB48:    goto LAB19;

LAB21:    xsi_set_current_line(55, ng0);

LAB24:    xsi_set_current_line(56, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 3384);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB28:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB30;

LAB32:    xsi_set_current_line(68, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t0 + 4824);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 8);
    goto LAB34;

LAB37:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(74, ng0);

LAB44:    xsi_set_current_line(75, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4504);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4664);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3864);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t5, 32, t14, 8);
    t15 = (t0 + 5144);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB43;

LAB46:    xsi_set_current_line(85, ng0);

LAB49:    xsi_set_current_line(86, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 4504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t14);
    t21 = (t12 ^ t13);
    t22 = (t11 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB53;

LAB50:    if (t25 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t16) = 1;

LAB53:    t17 = (t16 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(92, ng0);

LAB58:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 3864);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t16, 32, 10, 2U, t15, 8, t6, 2);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t5, 32, t16, 32);
    t17 = (t0 + 4664);
    xsi_vlogvar_assign_value(t17, t33, 0, 0, 32);

LAB56:    goto LAB48;

LAB52:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(88, ng0);

LAB57:    xsi_set_current_line(89, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4344);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 3);
    goto LAB56;

}

static void Always_107_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7336);
    *((int *)t2) = 1;
    t3 = (t0 + 7000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t5 = (t0 + 2024U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(119, ng0);

LAB14:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(110, ng0);

LAB13:    xsi_set_current_line(111, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

}


extern void work_m_00000000001119557733_1688874697_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Cont_42_1,(void *)Always_43_2,(void *)Always_107_3};
	xsi_register_didat("work_m_00000000001119557733_1688874697", "isim/testbench_top_isim_beh.exe.sim/work/m_00000000001119557733_1688874697.didat");
	xsi_register_executes(pe);
}
