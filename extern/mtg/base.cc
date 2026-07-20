#include <stdio.h>
#include <stdlib.h>
#include "macros.h"
#include "minion.h"
#include "et_test_common.h"
#include "/home/vijay/vyoma/workspace/projects/july7/core-et/extern/mtg/tools/stitcher/../crc16/crc16.cpp"

#include "/home/vijay/vyoma/workspace/projects/july7/core-et/extern/mtg/tools/stitcher/../../tools/mtg_printf/mtg_printf.h"







#include "./test_out/20260713_162746_42/mtg_memory_map.h"
#include "./test_out/20260713_162746_42/mtg_lhid_map.h"
#include "./test_out/20260713_162746_42/mtg_target_data_rand.h"
int main() {

   __asm__("add x1, x0, x0");

   // Preamble
            __asm__("preamble_m_enable_shadows_0_b0_s0:");
   
   #include "./test_out/20260713_162746_42/components/preamble_m_enable_shadows_0.h"
   
            __asm__("preamble_set_lhid_1_b0_s1:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_lhid_1.h"
   
            __asm__("preamble_setup_m_trap_vector_2_b0_s2:");
   
   #include "./test_out/20260713_162746_42/components/preamble_setup_m_trap_vector_2.h"
   
            __asm__("preamble_setup_s_trap_vector_3_b0_s3:");
   
   #include "./test_out/20260713_162746_42/components/preamble_setup_s_trap_vector_3.h"
   
            __asm__("preamble_init_mstatus_4_b0_s4:");
   
   #include "./test_out/20260713_162746_42/components/preamble_init_mstatus_4.h"
   
            __asm__("preamble_init_fpabi_5_b0_s5:");
   
   #include "./test_out/20260713_162746_42/components/preamble_init_fpabi_5.h"
   
            __asm__("preamble_set_gamo_thread_pointer_6_b0_s6:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_gamo_thread_pointer_6.h"
   
            __asm__("preamble_set_lamo_thread_pointer_7_b0_s7:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_lamo_thread_pointer_7.h"
   
            __asm__("preamble_rand_xregs_8_b0_s8:");
   
   #include "./test_out/20260713_162746_42/components/preamble_rand_xregs_8.h"
   
            __asm__("preamble_rand_f_pregs_9_b0_s9:");
   
   #include "./test_out/20260713_162746_42/components/preamble_rand_f_pregs_9.h"
   
            __asm__("preamble_enable_l1_scp_10_b0_s10:");
   
   #include "./test_out/20260713_162746_42/components/preamble_enable_l1_scp_10.h"
   
            __asm__("preamble_clear_ten_c_11_b0_s11:");
   
   #include "./test_out/20260713_162746_42/components/preamble_clear_ten_c_11.h"
   
            __asm__("preamble_set_stack_pointer_12_b0_s12:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_stack_pointer_12.h"
   
            __asm__("preamble_set_global_pointer_13_b0_s13:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_global_pointer_13.h"
   
            __asm__("preamble_set_thread_pointer_14_b0_s14:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_thread_pointer_14.h"
   
            __asm__("preamble_fill_l1_scp_15_b0_s15:");
   
   #include "./test_out/20260713_162746_42/components/preamble_fill_l1_scp_15.h"
   
            __asm__("preamble_init_cs_rs_16_b0_s16:");
   
   #include "./test_out/20260713_162746_42/components/preamble_init_cs_rs_16.h"
   
            __asm__("preamble_set_coop_mode_17_b0_s17:");
   
   #include "./test_out/20260713_162746_42/components/preamble_set_coop_mode_17.h"
   
            __asm__("preamble_dummy_tensor_load_18_b0_s18:");
   
   #include "./test_out/20260713_162746_42/components/preamble_dummy_tensor_load_18.h"
   
            __asm__("preamble_fcc_barrier_19_b0_s19:");
   
   #include "./test_out/20260713_162746_42/components/preamble_fcc_barrier_19.h"
   

   // Init marker
   C_TEST_START;

   // Test Start
   mtg_printf("TEST_START\n");
            __asm__("start_0_b0_s0:");
   mtg_printf("start_0\n");
   #include "./test_out/20260713_162746_42/components/start_gen_signature_0.h"
   mtg_printf("start_0 pass\n");
            __asm__("start_rand_xregs_1_b0_s1:");
   
   #include "./test_out/20260713_162746_42/components/start_rand_xregs_1.h"
   
            __asm__("start_2_b0_s2:");
   mtg_printf("start_2\n");
   #include "./test_out/20260713_162746_42/components/start_gen_signature_2.h"
   mtg_printf("start_2 pass\n");
            __asm__("start_fcc_barrier_2_b0_s3:");
   
   #include "./test_out/20260713_162746_42/components/start_fcc_barrier_2.h"
   

   // Test Main
   mtg_printf("TEST_MAIN\n");
            __asm__("main_0_b0_s0:");
   mtg_printf("main_0\n");
   #include "./test_out/20260713_162746_42/components/main_gen_signature_0.h"
   mtg_printf("main_0 pass\n");
            __asm__("main_set_rand_tensor_mask_1_b0_s1:");
   
   #include "./test_out/20260713_162746_42/components/main_set_rand_tensor_mask_1.h"
   
            __asm__("main_cache_ops_wait_2_b0_s2:");
   
   #include "./test_out/20260713_162746_42/components/main_cache_ops_wait_2.h"
   
            __asm__("main_any_sequence_3_b0_s3:");
   
   #include "./test_out/20260713_162746_42/components/main_any_sequence_3.h"
   
            __asm__("main_cache_ops_4_b0_s4:");
   
   #include "./test_out/20260713_162746_42/components/main_cache_ops_4.h"
   
            __asm__("main_set_rand_tensor_mask_5_b0_s5:");
   
   #include "./test_out/20260713_162746_42/components/main_set_rand_tensor_mask_5.h"
   
            __asm__("main_tensor_load_6_b0_s6:");
   
   #include "./test_out/20260713_162746_42/components/main_tensor_load_6.h"
   
            __asm__("main_flbfcc_sync_shire_threads_7_b0_s7:");
   
   #include "./test_out/20260713_162746_42/components/main_flbfcc_sync_shire_threads_7.h"
   
            __asm__("main_packed_single_8_b0_s8:");
   
   #include "./test_out/20260713_162746_42/components/main_packed_single_8.h"
   
            __asm__("main_int_read_after_write_9_b0_s9:");
   
   #include "./test_out/20260713_162746_42/components/main_int_read_after_write_9.h"
   
            __asm__("main_set_rand_tensor_mask_10_b0_s10:");
   
   #include "./test_out/20260713_162746_42/components/main_set_rand_tensor_mask_10.h"
   
            __asm__("main_11_b0_s11:");
   mtg_printf("main_11\n");
   #include "./test_out/20260713_162746_42/components/main_gen_signature_11.h"
   mtg_printf("main_11 pass\n");
            __asm__("main_fcc_barrier_11_b0_s12:");
   
   #include "./test_out/20260713_162746_42/components/main_fcc_barrier_11.h"
   

   // Test End
   mtg_printf("TEST_END\n");
            __asm__("end_0_b0_s0:");
   mtg_printf("end_0\n");
   #include "./test_out/20260713_162746_42/components/end_gen_signature_0.h"
   mtg_printf("end_0 pass\n");
            __asm__("end_jump_to_m_mode_1_b0_s1:");
   
   #include "./test_out/20260713_162746_42/components/end_jump_to_m_mode_1.h"
   
            __asm__("end_eot_checks_2_b0_s2:");
   
   #include "./test_out/20260713_162746_42/components/end_eot_checks_2.h"
   
            __asm__("end_m_trap_vector_3_b0_s3:");
   
   #include "./test_out/20260713_162746_42/components/end_m_trap_vector_3.h"
   
            __asm__("end_s_trap_vector_4_b0_s4:");
   
   #include "./test_out/20260713_162746_42/components/end_s_trap_vector_4.h"
   
            __asm__("end_u_trap_vector_5_b0_s5:");
   
   #include "./test_out/20260713_162746_42/components/end_u_trap_vector_5.h"
   
            __asm__("end_6_b0_s6:");
   mtg_printf("end_6\n");
   #include "./test_out/20260713_162746_42/components/end_gen_signature_6.h"
   mtg_printf("end_6 pass\n");
            __asm__("end_fcc_barrier_6_b0_s7:");
   mtg_printf("HART done!\n");

   #include "./test_out/20260713_162746_42/components/end_fcc_barrier_6.h"
      int16_t lhid;
   __asm__ __volatile__ ("add %[lhid], x0, x27\n" : [lhid] "=r" (lhid) : : );


   __asm__ __volatile__ ("call mtg_glbl_test_pass\n" "mtg_glbl_test_pass:\n");

   // End marker
   C_TEST_PASS;

   // Test mhandlers, shandlers and uhandlers
            __asm__("preamble_setup_s_trap_vector_3_shandler_b0_s0:");
   
   #include "./test_out/20260713_162746_42/components/preamble_setup_s_trap_vector_3_shandler.h"
   
            __asm__("preamble_setup_s_trap_vector_3_mhandler_b0_s1:");
   
   #include "./test_out/20260713_162746_42/components/preamble_setup_s_trap_vector_3_mhandler.h"
   
            __asm__("preamble_setup_m_trap_vector_2_mhandler_b0_s2:");
   
   #include "./test_out/20260713_162746_42/components/preamble_setup_m_trap_vector_2_mhandler.h"
   

   return 0;
}
