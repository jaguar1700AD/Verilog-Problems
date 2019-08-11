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
static const char *ng0 = "/media/shashank/C628A2F428A2E323/Xilinx/Xilinx/Problem4/div.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_32_0(char *t0)
{
    char t8[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_divide(t8, 8, t4, 8, t7, 4);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 8, t7, 8, t11, 4);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 8, t4, 8, t8, 8);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 4, t5, 32);
    t6 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 1768);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t13 = (t11 + 56U);
    t19 = *((char **)t13);
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 4, t10, 4, t19, 4);
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t12, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t4, 8, t5, 32);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 8);
    goto LAB8;

}


extern void work_m_05253058174831426940_1086445890_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_05253058174831426940_1086445890", "isim/div_tb_isim_beh.exe.sim/work/m_05253058174831426940_1086445890.didat");
	xsi_register_executes(pe);
}
