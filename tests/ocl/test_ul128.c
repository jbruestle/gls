/*
 * AUTOGENERATED tcarstens January 2014
 */
#include "tests.h"


#if TEST_SET & TEST_128
#define mpz_set_ul  mpz_set_ocl_ul128

#define ul_bitsize  (128)
#define ul          ocl_ul128


#define ul_test_all        ul128_test_all
#define ul_test_setup      ul128_test_setup
#define ul_test_clear      ul128_test_clear
#define ul_test_run_kernel ul128_test_run_kernel

#define ul_rand_seed_two   "kern_ul128_rand_seed_two"
#define ul_rand_seed_three "kern_ul128_rand_seed_three"

#define ul_binop_test      ul128_binop_test
#define ul_add_test        "kern_ul128_add_test"
#define ul_sub_test        "kern_ul128_sub_test"
#define ul_mul_test        "kern_ul128_mul_test"

#define ul_divremop_test   ul128_divremop_test
#define ul_divrem_test     "kern_ul128_divrem_test"

#define ul_compare_test    ul128_compare_test
#define ul_cmp_test        "kern_ul128_cmp_test"
#define ul_cmp_ui_test     "kern_ul128_cmp_ui_test"

#define ul_mod_binop_test  mod128_binop_test
#define ul_mod_add_test    "kern_mod128_add_test"
#define ul_mod_sub_test    "kern_mod128_sub_test"
#define ul_mod_mul_test    "kern_mod128_mul_test"
#define ul_mod_mul_test2   "kern_mod128_mul_test2"
#define ul_mod_inv_test    "kern_mod128_inv_test"


#define ul_ecmop_test      ul128_ecmop_test
#define ul_ecm_reorder     "kern_ul128_ecm_reorder"


#include "test_all.h"
#endif /* TEST_128 */
