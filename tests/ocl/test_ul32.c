/*
 * AUTOGENERATED tcarstens January 2014
 */
#include "tests.h"


#if TEST_SET & TEST_32
#define mpz_set_ul  mpz_set_ocl_ul32

#define ul_bitsize  (32)
#define ul          ocl_ul32


#define ul_test_all        ul32_test_all
#define ul_test_setup      ul32_test_setup
#define ul_test_clear      ul32_test_clear
#define ul_test_run_kernel ul32_test_run_kernel

#define ul_rand_seed_two   "kern_ul32_rand_seed_two"
#define ul_rand_seed_three "kern_ul32_rand_seed_three"

#define ul_binop_test      ul32_binop_test
#define ul_add_test        "kern_ul32_add_test"
#define ul_sub_test        "kern_ul32_sub_test"
#define ul_mul_test        "kern_ul32_mul_test"

#define ul_divremop_test   ul32_divremop_test
#define ul_divrem_test     "kern_ul32_divrem_test"

#define ul_compare_test    ul32_compare_test
#define ul_cmp_test        "kern_ul32_cmp_test"
#define ul_cmp_ui_test     "kern_ul32_cmp_ui_test"

#define ul_mod_binop_test  mod32_binop_test
#define ul_mod_add_test    "kern_mod32_add_test"
#define ul_mod_sub_test    "kern_mod32_sub_test"
#define ul_mod_mul_test    "kern_mod32_mul_test"
#define ul_mod_mul_test2   "kern_mod32_mul_test2"
#define ul_mod_inv_test    "kern_mod32_inv_test"


#define ul_ecmop_test      ul32_ecmop_test
#define ul_ecm_reorder     "kern_ul32_ecm_reorder"


#include "test_all.h"
#endif /* TEST_32 */
