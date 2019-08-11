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
static const char *ng0 = "/media/shashank/C628A2F428A2E323/Xilinx/Xilinx/Problem5/booth_multiplier.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {3, 0};
static int ng3[] = {0, 0};
static int ng4[] = {7, 0};
static int ng5[] = {4, 0};
static int ng6[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char t73[8];
    char t87[8];
    char t88[8];
    char t89[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng2)));
    t17 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t15, t16, ((int*)(t7)), 2, t14, 32, 1, t17, 32, 1);
    t18 = (t6 + 4);
    t8 = *((unsigned int *)t18);
    t19 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t21 = (!(t9));
    t22 = (t19 && t21);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t23);
    t24 = (!(t10));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng4)));
    t17 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t6, t15, t16, ((int*)(t7)), 2, t14, 32, 1, t17, 32, 1);
    t18 = (t6 + 4);
    t8 = *((unsigned int *)t18);
    t19 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t21 = (!(t9));
    t22 = (t19 && t21);
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t23);
    t24 = (!(t10));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 4, t3, 4);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB10:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB2;

LAB6:    t11 = *((unsigned int *)t16);
    t26 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t27 = (t12 - t13);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t26, *((unsigned int *)t15), t28);
    goto LAB7;

LAB8:    t11 = *((unsigned int *)t16);
    t26 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t27 = (t12 - t13);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t15), t28);
    goto LAB9;

LAB11:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t14 = (t0 + 2088);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t20 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t23 = (t18 + 4);
    t29 = (t20 + 4);
    t13 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t20);
    t31 = (t13 ^ t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t29);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t29);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB17;

LAB14:    if (t38 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t15) = 1;

LAB17:    t42 = (t15 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t15);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t30 = (t10 | t13);
    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t14);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB35;

LAB32:    if (t33 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    t18 = (t6 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    t38 = *((unsigned int *)t6);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_rshift(t6, 8, t4, 8, t5, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 1768);
    t17 = (t0 + 1768);
    t18 = (t17 + 72U);
    t20 = *((char **)t18);
    t23 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t15, t20, 2, t23, 32, 1);
    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t19 = (!(t30));
    if (t19 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB16:    t41 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(47, ng0);

LAB21:    xsi_set_current_line(48, ng0);
    t48 = (t0 + 2248);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng6)));
    memset(t16, 0, 8);
    t52 = (t50 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t50);
    t55 = *((unsigned int *)t51);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t52);
    t62 = *((unsigned int *)t53);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB25;

LAB22:    if (t63 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t16) = 1;

LAB25:    t67 = (t16 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t16);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB24:    t66 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(49, ng0);

LAB29:    xsi_set_current_line(50, ng0);
    t74 = (t0 + 1768);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t73, 0, 8);
    t77 = (t73 + 4);
    t78 = (t76 + 4);
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 4);
    *((unsigned int *)t73) = t80;
    t81 = *((unsigned int *)t78);
    t82 = (t81 >> 4);
    *((unsigned int *)t77) = t82;
    t83 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t83 & 15U);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 & 15U);
    t85 = (t0 + 1048U);
    t86 = *((char **)t85);
    memset(t87, 0, 8);
    xsi_vlog_unsigned_add(t87, 4, t73, 4, t86, 4);
    t85 = (t0 + 1768);
    t91 = (t0 + 1768);
    t92 = (t91 + 72U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng4)));
    t95 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t88, t89, t90, ((int*)(t93)), 2, t94, 32, 1, t95, 32, 1);
    t96 = (t88 + 4);
    t97 = *((unsigned int *)t96);
    t19 = (!(t97));
    t98 = (t89 + 4);
    t99 = *((unsigned int *)t98);
    t21 = (!(t99));
    t22 = (t19 && t21);
    t100 = (t90 + 4);
    t101 = *((unsigned int *)t100);
    t24 = (!(t101));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB30;

LAB31:    goto LAB28;

LAB30:    t102 = *((unsigned int *)t90);
    t26 = (t102 + 0);
    t103 = *((unsigned int *)t88);
    t104 = *((unsigned int *)t89);
    t27 = (t103 - t104);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t85, t87, t26, *((unsigned int *)t89), t28);
    goto LAB31;

LAB34:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(54, ng0);

LAB39:    xsi_set_current_line(55, ng0);
    t20 = (t0 + 2248);
    t23 = (t20 + 56U);
    t29 = *((char **)t23);
    t41 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t42 = (t29 + 4);
    t48 = (t41 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t41);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t48);
    t54 = (t46 ^ t47);
    t55 = (t45 | t54);
    t56 = *((unsigned int *)t42);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB43;

LAB40:    if (t58 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t15) = 1;

LAB43:    t50 = (t15 + 4);
    t61 = *((unsigned int *)t50);
    t62 = (~(t61));
    t63 = *((unsigned int *)t15);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB38;

LAB42:    t49 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(56, ng0);

LAB47:    xsi_set_current_line(57, ng0);
    t51 = (t0 + 1768);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t16, 0, 8);
    t66 = (t16 + 4);
    t67 = (t53 + 4);
    t68 = *((unsigned int *)t53);
    t69 = (t68 >> 4);
    *((unsigned int *)t16) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 4);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t72 & 15U);
    t79 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t79 & 15U);
    t74 = (t0 + 2408);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t73, 0, 8);
    xsi_vlog_unsigned_add(t73, 4, t16, 4, t76, 4);
    t77 = (t0 + 1768);
    t78 = (t0 + 1768);
    t85 = (t78 + 72U);
    t86 = *((char **)t85);
    t91 = ((char*)((ng4)));
    t92 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t87, t88, t89, ((int*)(t86)), 2, t91, 32, 1, t92, 32, 1);
    t93 = (t87 + 4);
    t80 = *((unsigned int *)t93);
    t19 = (!(t80));
    t94 = (t88 + 4);
    t81 = *((unsigned int *)t94);
    t21 = (!(t81));
    t22 = (t19 && t21);
    t95 = (t89 + 4);
    t82 = *((unsigned int *)t95);
    t24 = (!(t82));
    t25 = (t22 && t24);
    if (t25 == 1)
        goto LAB48;

LAB49:    goto LAB46;

LAB48:    t83 = *((unsigned int *)t89);
    t26 = (t83 + 0);
    t84 = *((unsigned int *)t87);
    t97 = *((unsigned int *)t88);
    t27 = (t84 - t97);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t77, t73, t26, *((unsigned int *)t88), t28);
    goto LAB49;

LAB50:    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t15), 1);
    goto LAB51;

}


extern void work_m_01597345415291660874_1820119024_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_01597345415291660874_1820119024", "isim/dist_law_tb_isim_beh.exe.sim/work/m_01597345415291660874_1820119024.didat");
	xsi_register_executes(pe);
}
