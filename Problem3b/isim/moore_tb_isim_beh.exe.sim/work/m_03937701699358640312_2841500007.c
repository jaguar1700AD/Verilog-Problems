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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/shashank/C628A2F428A2E323/Xilinx/Xilinx/Problem3b/moore.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3656);
    *((int *)t2) = 1;
    t3 = (t0 + 3120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t11 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t11);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t11);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB86;

LAB83:    if (t25 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t9) = 1;

LAB86:    t18 = (t9 + 4);
    t30 = *((unsigned int *)t18);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB89:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB21:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB22;

LAB23:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t19) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t10) > 0)
        goto LAB28;

LAB29:    memcpy(t9, t28, 8);

LAB30:    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t9, 0, 0, 3, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t3) != 0)
        goto LAB33;

LAB34:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB35;

LAB36:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t7) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t10) > 0)
        goto LAB41;

LAB42:    memcpy(t9, t12, 8);

LAB43:    t18 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t18, t9, 0, 0, 3, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t3) != 0)
        goto LAB46;

LAB47:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB48;

LAB49:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t7) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t10) > 0)
        goto LAB54;

LAB55:    memcpy(t9, t12, 8);

LAB56:    t18 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t18, t9, 0, 0, 3, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t3) != 0)
        goto LAB59;

LAB60:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB61;

LAB62:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t7) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t10) > 0)
        goto LAB67;

LAB68:    memcpy(t9, t12, 8);

LAB69:    t18 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t18, t9, 0, 0, 3, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t3) != 0)
        goto LAB72;

LAB73:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB74;

LAB75:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t7) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t10) > 0)
        goto LAB80;

LAB81:    memcpy(t9, t12, 8);

LAB82:    t18 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t18, t9, 0, 0, 3, 0LL);
    goto LAB17;

LAB18:    *((unsigned int *)t10) = 1;
    goto LAB21;

LAB20:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB21;

LAB22:    t23 = ((char*)((ng2)));
    goto LAB23;

LAB24:    t28 = ((char*)((ng1)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t28, 3);
    goto LAB30;

LAB28:    memcpy(t9, t23, 8);
    goto LAB30;

LAB31:    *((unsigned int *)t10) = 1;
    goto LAB34;

LAB33:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB34;

LAB35:    t11 = ((char*)((ng2)));
    goto LAB36;

LAB37:    t12 = ((char*)((ng3)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB43;

LAB41:    memcpy(t9, t11, 8);
    goto LAB43;

LAB44:    *((unsigned int *)t10) = 1;
    goto LAB47;

LAB46:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB48:    t11 = ((char*)((ng2)));
    goto LAB49;

LAB50:    t12 = ((char*)((ng4)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB56;

LAB54:    memcpy(t9, t11, 8);
    goto LAB56;

LAB57:    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB59:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB60;

LAB61:    t11 = ((char*)((ng5)));
    goto LAB62;

LAB63:    t12 = ((char*)((ng1)));
    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB69;

LAB67:    memcpy(t9, t11, 8);
    goto LAB69;

LAB70:    *((unsigned int *)t10) = 1;
    goto LAB73;

LAB72:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB73;

LAB74:    t11 = ((char*)((ng5)));
    goto LAB75;

LAB76:    t12 = ((char*)((ng5)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t9, 3, t11, 3, t12, 3);
    goto LAB82;

LAB80:    memcpy(t9, t11, 8);
    goto LAB82;

LAB85:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(45, ng0);
    t19 = ((char*)((ng6)));
    t23 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t23, t19, 0, 0, 1, 0LL);
    goto LAB89;

}

static void Always_50_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3672);
    *((int *)t2) = 1;
    t3 = (t0 + 3368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    goto LAB2;

}


extern void work_m_03937701699358640312_2841500007_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_34_1,(void *)Always_50_2};
	xsi_register_didat("work_m_03937701699358640312_2841500007", "isim/moore_tb_isim_beh.exe.sim/work/m_03937701699358640312_2841500007.didat");
	xsi_register_executes(pe);
}
