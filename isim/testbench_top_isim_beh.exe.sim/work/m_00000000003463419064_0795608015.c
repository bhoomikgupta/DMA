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
static const char *ng0 = "C:/Users/Bhoomik/OneDrive/vhdl/encoder/BhoomsDMA/DMA/roomavail_calc.v";
static unsigned int ng1[] = {128U, 0U};



static void Always_20_0(char *t0)
{
    char t8[8];
    char t14[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 4032);
    *((int *)t2) = 1;
    t3 = (t0 + 3496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 2384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2544);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t4 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t5 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t5) = 1;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t6 = (t3 + 4);
    t7 = (t8 + 4);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB10;

LAB11:
LAB12:    t44 = (t14 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t14);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t2) == 0)
        goto LAB16;

LAB18:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;

LAB19:    t5 = (t0 + 1824U);
    t6 = *((char **)t5);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t6);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t5 = (t8 + 4);
    t7 = (t6 + 4);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB20;

LAB21:
LAB22:    t44 = (t14 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t14);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t15 = (t12 | t13);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB26;

LAB27:
LAB28:    t26 = (t8 + 4);
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    t41 = *((unsigned int *)t8);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB25:
LAB15:    goto LAB2;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB10:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t3 + 4);
    t27 = (t8 + 4);
    t28 = *((unsigned int *)t3);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t38);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t39);
    goto LAB12;

LAB13:    xsi_set_current_line(24, ng0);
    t50 = (t0 + 2384);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t0 + 1664U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_minus(t55, 8, t52, 8, t54, 8);
    t53 = (t0 + 2544);
    xsi_vlogvar_assign_value(t53, t55, 0, 0, 8);
    goto LAB15;

LAB16:    *((unsigned int *)t8) = 1;
    goto LAB19;

LAB20:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t8 + 4);
    t27 = (t6 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t38);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t39);
    goto LAB22;

LAB23:    xsi_set_current_line(26, ng0);
    t50 = (t0 + 2384);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t0 + 1984U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 8, t52, 8, t54, 8);
    t53 = (t0 + 2544);
    xsi_vlogvar_assign_value(t53, t55, 0, 0, 8);
    goto LAB25;

LAB26:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t19 | t20);
    t7 = (t3 + 4);
    t18 = (t4 + 4);
    t21 = *((unsigned int *)t3);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t28 = (~(t25));
    t29 = *((unsigned int *)t18);
    t30 = (~(t29));
    t36 = (t22 & t24);
    t37 = (t28 & t30);
    t31 = (~(t36));
    t32 = (~(t37));
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    t34 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t34 & t32);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 & t31);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t32);
    goto LAB28;

LAB29:    xsi_set_current_line(28, ng0);
    t27 = (t0 + 2384);
    t44 = (t27 + 56U);
    t50 = *((char **)t44);
    t51 = (t0 + 1664U);
    t52 = *((char **)t51);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 8, t50, 8, t52, 8);
    t51 = (t0 + 1984U);
    t53 = *((char **)t51);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 8, t14, 8, t53, 8);
    t51 = (t0 + 2544);
    xsi_vlogvar_assign_value(t51, t55, 0, 0, 8);
    goto LAB31;

}

static void Always_30_1(char *t0)
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

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    t3 = (t0 + 3744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1344U);
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

LAB11:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB12;

}


extern void work_m_00000000003463419064_0795608015_init()
{
	static char *pe[] = {(void *)Always_20_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000003463419064_0795608015", "isim/testbench_top_isim_beh.exe.sim/work/m_00000000003463419064_0795608015.didat");
	xsi_register_executes(pe);
}
