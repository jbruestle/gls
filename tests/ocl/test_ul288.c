/*
 * AUTOGENERATED tcarstens January 2014
 */
#include "tests.h"


#if TEST_SET & TEST_288
#define mpz_set_ul  mpz_set_ocl_ul288

#define ul_bitsize  (288)
#define ul          ocl_ul288


#define ul_test_all        ul288_test_all
#define ul_test_setup      ul288_test_setup
#define ul_test_clear      ul288_test_clear
#define ul_test_run_kernel ul288_test_run_kernel

#define ul_rand_seed_two   "kern_ul288_rand_seed_two"
#define ul_rand_seed_three "kern_ul288_rand_seed_three"

#define ul_binop_test      ul288_binop_test
#define ul_add_test        "kern_ul288_add_test"
#define ul_sub_test        "kern_ul288_sub_test"
#define ul_mul_test        "kern_ul288_mul_test"

#define ul_divremop_test   ul288_divremop_test
#define ul_divrem_test     "kern_ul288_divrem_test"

#define ul_compare_test    ul288_compare_test
#define ul_cmp_test        "kern_ul288_cmp_test"
#define ul_cmp_ui_test     "kern_ul288_cmp_ui_test"

#define ul_mod_binop_test  mod288_binop_test
#define ul_mod_add_test    "kern_mod288_add_test"
#define ul_mod_sub_test    "kern_mod288_sub_test"
#define ul_mod_mul_test    "kern_mod288_mul_test"
#define ul_mod_mul_test2   "kern_mod288_mul_test2"
#define ul_mod_inv_test    "kern_mod288_inv_test"


#define ul_ecmop_test      ul288_ecmop_test
#define ul_ecm_reorder     "kern_ul288_ecm_reorder"


#include "test_all.h"
#endif /* TEST_288 */
