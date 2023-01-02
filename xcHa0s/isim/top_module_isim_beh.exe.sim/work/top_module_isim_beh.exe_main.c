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
    work_m_00000000000916232398_0967961054_init();
    work_m_00000000002642417493_0236324256_init();
    work_m_00000000001285778097_4112152428_init();
    work_m_00000000002642417493_3913188552_init();
    work_m_00000000002642417493_3811023632_init();
    work_m_00000000002054518030_1345475044_init();
    work_m_00000000003314343620_1279674626_init();
    work_m_00000000003692399255_0886308060_init();
    work_m_00000000002642417493_3149429741_init();
    work_m_00000000000891126166_1200043877_init();
    work_m_00000000002684065195_1720460815_init();
    work_m_00000000004092558751_2949365859_init();
    work_m_00000000001809073338_2943448091_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001809073338_2943448091");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
