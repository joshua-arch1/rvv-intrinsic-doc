#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsm_v_b1(uint8_t *base, vbool1_t value, size_t vl) {
  return __riscv_vsm_v_b1(base, value, vl);
}

void test_vsm_v_b2(uint8_t *base, vbool2_t value, size_t vl) {
  return __riscv_vsm_v_b2(base, value, vl);
}

void test_vsm_v_b4(uint8_t *base, vbool4_t value, size_t vl) {
  return __riscv_vsm_v_b4(base, value, vl);
}

void test_vsm_v_b8(uint8_t *base, vbool8_t value, size_t vl) {
  return __riscv_vsm_v_b8(base, value, vl);
}

void test_vsm_v_b16(uint8_t *base, vbool16_t value, size_t vl) {
  return __riscv_vsm_v_b16(base, value, vl);
}

void test_vsm_v_b32(uint8_t *base, vbool32_t value, size_t vl) {
  return __riscv_vsm_v_b32(base, value, vl);
}

void test_vsm_v_b64(uint8_t *base, vbool64_t value, size_t vl) {
  return __riscv_vsm_v_b64(base, value, vl);
}

