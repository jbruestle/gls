/*
 * AUTOGENERATED tcarstens January 2014
 */
#define BITSIZE            (32)


#define ul_ocl             ocl_ul32
#define ul_init_ocl        ocl_ul32_init
#define ul_clear_ocl       ocl_ul32_clear
#define mpz_set_ul_ocl     mpz_set_ocl_ul32
#define mpz_get_ul_ocl     mpz_get_ocl_ul32


#define pm1_process_ocl    pm1_ul32_process_ocl
#define kern_pm1_stage1    "kern_pm1_ul32_stage1"
#define kern_pm1_reorder   "kern_pm1_ul32_reorder"
#define kern_pm1_stage2    "kern_pm1_ul32_stage2"

#define pp1_process_ocl    pp1_ul32_process_ocl
#define kern_pp1_stage1    "kern_pp1_ul32_stage1"
#define kern_pp1_reorder   "kern_pp1_ul32_reorder"
#define kern_pp1_stage2    "kern_pp1_ul32_stage2"

#define ecm_process_ocl    ecm_ul32_process_ocl
#define kern_ecm_stage1    "kern_ecm_ul32_stage1"
#define kern_ecm_reorder   "kern_ecm_ul32_reorder"
#define kern_ecm_stage2    "kern_ecm_ul32_stage2"


#define ellM_point_t       ellM32_point_t
#define mod                mod32
#define ul                 ul32
#define ul_init            ul32_init
#define ul_clear           ul32_clear
#define ul_set_ui          ul32_set_ui
#define ul_cmp_ui          ul32_cmp_ui
#define ul_cmp             ul32_cmp
#define mod_init           mod32_init
#define mod_clear          mod32_clear
#define mod_set            mod32_set
#define mpz_get_ul         mpz_get_ul32
#define mpz_set_ul         mpz_set_ul32
#define pm1_stage1_ul      pm1_stage1_ul32
#define pm1_stage2_ul      pm1_stage2_ul32
#define pp1_stage1_ul      pp1_stage1_ul32
#define pp1_stage2_ul      pp1_stage2_ul32
#define ecm_stage1_ul      ecm_stage1_ul32
#define ecm_stage2_ul      ecm_stage2_ul32


#include "ocl_process_common.h"