#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg6e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

void test_vlsseg6e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

void test_vlsseg6e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg6e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, base, bstride, vl);
}

