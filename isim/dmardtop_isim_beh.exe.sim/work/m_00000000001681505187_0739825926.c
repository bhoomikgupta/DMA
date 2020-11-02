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
static const char *ng0 = "C:/Users/Bhoomik/OneDrive/vhdl/encoder/BhoomsDMA/DMA/descriptor_fetch.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};



static void Cont_55_0(char *t0)
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

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void Cont_56_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3032U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 7776);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 7584);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_57_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 6768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3032U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 7840);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 7600);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_59_3(char *t0)
{
    char t16[8];
    char t41[8];
    char t80[8];
    char t87[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7616);
    *((int *)t2) = 1;
    t3 = (t0 + 7048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 4552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4712);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(68, ng0);

LAB16:    xsi_set_current_line(69, ng0);
    t6 = (t0 + 2072U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(75, ng0);

LAB21:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2392U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(80, ng0);

LAB26:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5032);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB24:    goto LAB15;

LAB11:    xsi_set_current_line(86, ng0);

LAB27:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2552U);
    t5 = *((char **)t3);
    t3 = (t0 + 3512U);
    t6 = *((char **)t3);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 & t10);
    *((unsigned int *)t16) = t11;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t16 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    t17 = (t12 | t13);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB28;

LAB29:
LAB30:    t39 = (t0 + 3672U);
    t40 = *((char **)t39);
    t42 = *((unsigned int *)t16);
    t43 = *((unsigned int *)t40);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t39 = (t16 + 4);
    t45 = (t40 + 4);
    t46 = (t41 + 4);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB31;

LAB32:
LAB33:    t72 = (t41 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t41);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t0 + 3512U);
    t5 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t16) = t11;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t16 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t6);
    t17 = (t12 | t13);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t7);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB38;

LAB39:
LAB40:    t22 = (t0 + 3672U);
    t39 = *((char **)t22);
    memset(t41, 0, 8);
    t22 = (t39 + 4);
    t42 = *((unsigned int *)t22);
    t43 = (~(t42));
    t44 = *((unsigned int *)t39);
    t47 = (t44 & t43);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t22) == 0)
        goto LAB41;

LAB43:    t40 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t40) = 1;

LAB44:    t49 = *((unsigned int *)t16);
    t50 = *((unsigned int *)t41);
    t51 = (t49 & t50);
    *((unsigned int *)t80) = t51;
    t45 = (t16 + 4);
    t46 = (t41 + 4);
    t54 = (t80 + 4);
    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t46);
    t56 = (t52 | t53);
    *((unsigned int *)t54) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB45;

LAB46:
LAB47:    t78 = (t80 + 4);
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t80);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t0 + 3512U);
    t5 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t2) == 0)
        goto LAB52;

LAB54:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;

LAB55:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t16);
    t19 = (t17 & t18);
    *((unsigned int *)t41) = t19;
    t7 = (t3 + 4);
    t14 = (t16 + 4);
    t15 = (t41 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t14);
    t23 = (t20 | t21);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t15);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB56;

LAB57:
LAB58:    t40 = (t41 + 4);
    t49 = *((unsigned int *)t40);
    t50 = (~(t49));
    t51 = *((unsigned int *)t41);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB50:
LAB36:    goto LAB15;

LAB13:    xsi_set_current_line(106, ng0);

LAB63:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 5192);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t23 = (~(t21));
    t24 = (t18 & t23);
    if (t24 != 0)
        goto LAB65;

LAB64:    if (t21 != 0)
        goto LAB66;

LAB67:    t39 = (t16 + 4);
    t25 = *((unsigned int *)t39);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t14);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t14);
    t21 = (t19 | t20);
    t23 = (~(t21));
    t24 = (t18 & t23);
    if (t24 != 0)
        goto LAB74;

LAB71:    if (t21 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t16) = 1;

LAB74:    memset(t41, 0, 8);
    t22 = (t16 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t22) != 0)
        goto LAB77;

LAB78:    t40 = (t41 + 4);
    t30 = *((unsigned int *)t41);
    t33 = *((unsigned int *)t40);
    t34 = (t30 || t33);
    if (t34 > 0)
        goto LAB79;

LAB80:    memcpy(t87, t41, 8);

LAB81:    t88 = (t87 + 4);
    t74 = *((unsigned int *)t88);
    t75 = (~(t74));
    t76 = *((unsigned int *)t87);
    t77 = (t76 & t75);
    t81 = (t77 != 0);
    if (t81 > 0)
        goto LAB89;

LAB90:
LAB91:    goto LAB15;

LAB17:    xsi_set_current_line(69, ng0);

LAB20:    xsi_set_current_line(70, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 4872);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 5032);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(76, ng0);

LAB25:    xsi_set_current_line(77, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4872);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB24;

LAB28:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t20 | t21);
    t15 = (t5 + 4);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t33);
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t34);
    goto LAB30;

LAB31:    t52 = *((unsigned int *)t41);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t41) = (t52 | t53);
    t54 = (t16 + 4);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t16);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t66);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    goto LAB33;

LAB34:    xsi_set_current_line(88, ng0);

LAB37:    xsi_set_current_line(89, ng0);
    t78 = ((char*)((ng3)));
    t79 = (t0 + 4392);
    xsi_vlogvar_assign_value(t79, t78, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5032);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB36;

LAB38:    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t16) = (t20 | t21);
    t14 = (t3 + 4);
    t15 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t8 = (t24 & t26);
    t31 = (t28 & t30);
    t33 = (~(t8));
    t34 = (~(t31));
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t33);
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t34);
    goto LAB40;

LAB41:    *((unsigned int *)t41) = 1;
    goto LAB44;

LAB45:    t59 = *((unsigned int *)t80);
    t60 = *((unsigned int *)t54);
    *((unsigned int *)t80) = (t59 | t60);
    t55 = (t16 + 4);
    t72 = (t41 + 4);
    t61 = *((unsigned int *)t16);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t66 = (~(t63));
    t67 = *((unsigned int *)t41);
    t68 = (~(t67));
    t69 = *((unsigned int *)t72);
    t70 = (~(t69));
    t32 = (t62 & t66);
    t64 = (t68 & t70);
    t71 = (~(t32));
    t73 = (~(t64));
    t74 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t74 & t71);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & t73);
    t76 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t76 & t71);
    t77 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t77 & t73);
    goto LAB47;

LAB48:    xsi_set_current_line(95, ng0);

LAB51:    xsi_set_current_line(96, ng0);
    t79 = ((char*)((ng3)));
    t86 = (t0 + 4392);
    xsi_vlogvar_assign_value(t86, t79, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB50;

LAB52:    *((unsigned int *)t16) = 1;
    goto LAB55;

LAB56:    t26 = *((unsigned int *)t41);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t41) = (t26 | t27);
    t22 = (t3 + 4);
    t39 = (t16 + 4);
    t28 = *((unsigned int *)t3);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t33 = (~(t30));
    t34 = *((unsigned int *)t16);
    t35 = (~(t34));
    t36 = *((unsigned int *)t39);
    t37 = (~(t36));
    t8 = (t29 & t33);
    t31 = (t35 & t37);
    t38 = (~(t8));
    t42 = (~(t31));
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t38);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t42);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t47 & t38);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & t42);
    goto LAB58;

LAB59:    xsi_set_current_line(100, ng0);

LAB62:    xsi_set_current_line(101, ng0);
    t45 = ((char*)((ng3)));
    t46 = (t0 + 4872);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5032);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB61;

LAB65:    *((unsigned int *)t16) = 1;
    goto LAB67;

LAB66:    t22 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(108, ng0);
    t40 = (t0 + 5192);
    t45 = (t40 + 56U);
    t46 = *((char **)t45);
    t54 = ((char*)((ng3)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_minus(t41, 2, t46, 2, t54, 2);
    t55 = (t0 + 5352);
    xsi_vlogvar_assign_value(t55, t41, 0, 0, 2);
    goto LAB70;

LAB73:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t41) = 1;
    goto LAB78;

LAB77:    t39 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB78;

LAB79:    t45 = (t0 + 3352U);
    t46 = *((char **)t45);
    memset(t80, 0, 8);
    t45 = (t46 + 4);
    t35 = *((unsigned int *)t45);
    t36 = (~(t35));
    t37 = *((unsigned int *)t46);
    t38 = (t37 & t36);
    t42 = (t38 & 1U);
    if (t42 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t45) != 0)
        goto LAB84;

LAB85:    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t80);
    t47 = (t43 & t44);
    *((unsigned int *)t87) = t47;
    t55 = (t41 + 4);
    t72 = (t80 + 4);
    t78 = (t87 + 4);
    t48 = *((unsigned int *)t55);
    t49 = *((unsigned int *)t72);
    t50 = (t48 | t49);
    *((unsigned int *)t78) = t50;
    t51 = *((unsigned int *)t78);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB81;

LAB82:    *((unsigned int *)t80) = 1;
    goto LAB85;

LAB84:    t54 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB85;

LAB86:    t53 = *((unsigned int *)t87);
    t56 = *((unsigned int *)t78);
    *((unsigned int *)t87) = (t53 | t56);
    t79 = (t41 + 4);
    t86 = (t80 + 4);
    t57 = *((unsigned int *)t41);
    t58 = (~(t57));
    t59 = *((unsigned int *)t79);
    t60 = (~(t59));
    t61 = *((unsigned int *)t80);
    t62 = (~(t61));
    t63 = *((unsigned int *)t86);
    t66 = (~(t63));
    t8 = (t58 & t60);
    t31 = (t62 & t66);
    t67 = (~(t8));
    t68 = (~(t31));
    t69 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t69 & t67);
    t70 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t70 & t68);
    t71 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t71 & t67);
    t73 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t73 & t68);
    goto LAB88;

LAB89:    xsi_set_current_line(110, ng0);

LAB92:    xsi_set_current_line(111, ng0);
    t89 = ((char*)((ng3)));
    t90 = (t0 + 4872);
    xsi_vlogvar_assign_value(t90, t89, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB91;

}

static void Always_119_4(char *t0)
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

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 7632);
    *((int *)t2) = 1;
    t3 = (t0 + 7296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t5 = (t0 + 1752U);
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

LAB11:    xsi_set_current_line(127, ng0);

LAB14:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(121, ng0);

LAB13:    xsi_set_current_line(122, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

}


extern void work_m_00000000001681505187_0739825926_init()
{
	static char *pe[] = {(void *)Cont_55_0,(void *)Cont_56_1,(void *)Cont_57_2,(void *)Always_59_3,(void *)Always_119_4};
	xsi_register_didat("work_m_00000000001681505187_0739825926", "isim/dmardtop_isim_beh.exe.sim/work/m_00000000001681505187_0739825926.didat");
	xsi_register_executes(pe);
}
