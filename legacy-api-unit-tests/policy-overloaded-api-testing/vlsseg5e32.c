#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg5e32_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32mf2_tuma(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32m1_tuma(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32mf2_tuma(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32m1_tuma(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32mf2_tuma(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32m1_tuma(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32mf2_tamu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_f32m1_tamu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, const float32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32mf2_tamu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_i32m1_tamu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, const int32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32mf2_tamu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

void test_vlsseg5e32_v_u32m1_tamu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, const uint32_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

