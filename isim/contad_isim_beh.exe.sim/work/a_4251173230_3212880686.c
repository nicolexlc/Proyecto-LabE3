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
static const char *ng0 = "C:/Users/daesb/E32Fase/contad.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4251173230_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    unsigned char t9;
    char *t10;
    int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 11999);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 3776);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((int *)t13) = t8;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    if (t5 == 1)
        goto LAB12;

LAB15:    if (t5 == 0)
        goto LAB13;

LAB16:
LAB14:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 6334);
    t4 = (t0 + 3840);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 3U);
    xsi_driver_first_trans_fast_port(t4);

LAB11:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    if (t5 == 0)
        goto LAB19;

LAB30:    if (t5 == 1)
        goto LAB20;

LAB31:    if (t5 == 2)
        goto LAB21;

LAB32:    if (t5 == 3)
        goto LAB22;

LAB33:    if (t5 == 4)
        goto LAB23;

LAB34:    if (t5 == 5)
        goto LAB24;

LAB35:    if (t5 == 6)
        goto LAB25;

LAB36:    if (t5 == 7)
        goto LAB26;

LAB37:    if (t5 == 8)
        goto LAB27;

LAB38:    if (t5 == 9)
        goto LAB28;

LAB39:
LAB29:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 6417);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);

LAB18:    goto LAB3;

LAB5:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 2152U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    t9 = (t8 <= 0);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);

LAB9:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 3776);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 2152U);
    t10 = *((char **)t3);
    t11 = *((int *)t10);
    t12 = (t11 + 1);
    t3 = (t0 + 3712);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t12;
    xsi_driver_first_trans_fast(t3);
    goto LAB9;

LAB12:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 6328);
    t7 = (t0 + 3840);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t1 = (t0 + 3904);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((int *)t13) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 6331);
    t4 = (t0 + 3840);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 3U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t1 = (t0 + 3904);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((int *)t13) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB17:;
LAB19:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 6337);
    t7 = (t0 + 3968);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB18;

LAB20:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 6345);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB21:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 6353);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB22:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 6361);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB23:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 6369);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB24:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 6377);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB25:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 6385);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB26:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 6393);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB27:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 6401);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB28:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 6409);
    t4 = (t0 + 3968);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB18;

LAB40:;
}


extern void work_a_4251173230_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4251173230_3212880686_p_0};
	xsi_register_didat("work_a_4251173230_3212880686", "isim/contad_isim_beh.exe.sim/work/a_4251173230_3212880686.didat");
	xsi_register_executes(pe);
}
