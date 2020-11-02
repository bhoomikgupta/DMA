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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001681505187_0739825926_init();
    work_m_00000000001119557733_1688874697_init();
    work_m_00000000003463419064_0795608015_init();
    work_m_00000000001620377740_1743070415_init();
    work_m_00000000004129822892_2802995064_init();
    work_m_00000000001938880330_3262628669_init();
    work_m_00000000003164131281_1078966874_init();
    work_m_00000000001620377740_3411045315_init();
    work_m_00000000004129822892_0195494004_init();
    work_m_00000000001938880330_0902067608_init();
    work_m_00000000003164131281_3086748927_init();
    work_m_00000000003959916477_2017677581_init();
    work_m_00000000002191371084_1899091061_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002191371084_1899091061");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
