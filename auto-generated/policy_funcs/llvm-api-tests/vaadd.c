// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vaadd_vv_i8mf8_rnu_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rnu_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rnu_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rnu_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rnu_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rnu_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rnu_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rnu_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rnu_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rnu_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rnu_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rnu_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rnu_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rnu_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rnu_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rnu_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rnu_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rnu_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rnu_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rnu_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rnu_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rnu_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rnu_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rnu_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rnu_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rnu_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rnu_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rnu_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rnu_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rnu_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rnu_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rnu_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rnu_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rnu_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rnu_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rnu_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rnu_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rnu_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rnu_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rnu_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rnu_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rnu_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rnu_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rnu_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rnu_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rnu_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rnu_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rnu_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rnu_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rnu_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rnu_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rnu_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rnu_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rnu_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rne_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rne_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rne_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rne_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rne_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rne_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rne_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rne_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rne_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rne_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rne_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rne_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rne_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rne_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rne_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rne_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rne_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rne_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rne_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rne_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rne_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rne_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rne_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rne_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rne_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rne_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rne_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rne_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rne_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rne_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rne_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rne_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rne_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rne_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rne_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rne_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rne_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rne_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rne_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rne_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rne_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rne_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rne_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rne_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rne_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rne_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rne_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rne_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rne_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rne_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rne_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rne_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rne_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rne_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rne_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rne_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rne_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rne_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rne_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rne_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rne_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rne_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rne_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rne_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rne_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rne_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rne_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rne_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rne_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rne_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rne_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rne_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rne_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rne_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rne_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rne_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rne_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rne_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rne_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rne_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rne_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rne_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rne_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rne_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rne_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rne_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rne_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rne_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rdn_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rdn_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rdn_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rdn_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rdn_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rdn_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rdn_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rdn_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rdn_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rdn_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rdn_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rdn_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rdn_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rdn_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rdn_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rdn_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rdn_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rdn_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rdn_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rdn_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rdn_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rdn_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rdn_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rdn_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rdn_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rdn_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rdn_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rdn_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rdn_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rdn_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rdn_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rdn_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rdn_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rdn_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rdn_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rdn_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rdn_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rdn_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rdn_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rdn_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rdn_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rdn_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rdn_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rdn_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rdn_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rdn_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rdn_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rdn_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rdn_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rdn_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rdn_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rdn_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rdn_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rdn_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rod_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rod_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rod_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rod_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rod_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rod_tu(maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rod_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rod_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rod_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rod_tu(maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rod_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rod_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rod_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rod_tu(maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rod_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rod_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rod_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rod_tu(maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rod_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rod_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rod_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rod_tu(maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rod_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rod_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rod_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rod_tu(maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rod_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rod_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rod_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rod_tu(maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rod_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rod_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rod_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rod_tu(maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rod_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rod_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rod_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rod_tu(maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rod_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rod_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rod_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rod_tu(maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rod_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rod_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rod_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rod_tu(maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rod_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rod_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rod_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rod_tu(maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rod_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rod_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rod_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rod_tu(maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rod_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rod_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rod_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rod_tu(maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rod_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rod_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rod_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rod_tu(maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rod_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rod_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rod_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rod_tu(maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rod_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rod_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rod_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rod_tu(maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rod_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rod_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rod_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rod_tu(maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rod_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rod_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rod_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rod_tu(maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rod_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rod_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rod_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rod_tu(maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rod_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rod_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rod_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rod_tu(maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rod_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rod_tu(maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rnu_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rnu_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rnu_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rnu_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rnu_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rnu_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rnu_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rnu_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rnu_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rnu_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rnu_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rnu_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rnu_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rnu_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rnu_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rnu_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rnu_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rnu_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rnu_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rnu_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rnu_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rnu_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rnu_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rnu_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rnu_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rnu_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rnu_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rnu_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rnu_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rnu_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rnu_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rnu_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rnu_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rnu_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rnu_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rnu_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rnu_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rnu_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rnu_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rnu_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rnu_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rnu_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rnu_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rnu_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rnu_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rne_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rne_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rne_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rne_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rne_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rne_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rne_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rne_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rne_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rne_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rne_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rne_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rne_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rne_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rne_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rne_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rne_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rne_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rne_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rne_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rne_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rne_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rne_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rne_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rne_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rne_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rne_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rne_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rne_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rne_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rne_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rne_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rne_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rne_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rne_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rne_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rne_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rne_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rne_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rne_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rne_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rne_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rne_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rne_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rne_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rdn_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rdn_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rdn_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rdn_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rdn_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rdn_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rdn_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rdn_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rdn_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rdn_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rdn_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rdn_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rdn_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rdn_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rdn_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rdn_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rdn_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rdn_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rdn_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rdn_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rdn_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rdn_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rdn_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rdn_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rdn_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rdn_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rdn_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rdn_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rdn_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rdn_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rdn_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rdn_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rdn_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rdn_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rdn_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rdn_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rdn_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rdn_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rdn_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rdn_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rdn_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rdn_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rdn_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rdn_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rdn_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rod_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rod_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rod_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rod_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rod_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rod_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rod_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rod_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rod_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rod_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rod_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rod_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rod_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rod_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rod_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rod_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rod_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rod_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rod_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rod_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rod_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rod_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rod_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rod_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rod_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rod_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rod_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rod_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rod_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rod_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rod_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rod_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rod_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rod_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rod_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rod_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rod_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rod_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rod_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rod_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rod_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rod_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rod_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rod_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rod_tum(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rnu_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rnu_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rnu_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rnu_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rnu_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rnu_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rnu_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rnu_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rnu_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rnu_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rnu_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rnu_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rnu_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rnu_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rnu_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rnu_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rnu_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rnu_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rnu_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rnu_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rnu_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rnu_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rnu_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rnu_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rnu_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rnu_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rnu_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rnu_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rnu_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rnu_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rnu_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rnu_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rnu_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rnu_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rnu_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rnu_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rnu_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rnu_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rnu_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rnu_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rnu_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rnu_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rnu_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rnu_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rnu_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rne_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rne_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rne_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rne_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rne_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rne_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rne_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rne_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rne_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rne_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rne_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rne_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rne_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rne_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rne_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rne_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rne_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rne_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rne_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rne_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rne_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rne_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rne_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rne_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rne_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rne_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rne_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rne_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rne_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rne_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rne_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rne_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rne_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rne_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rne_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rne_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rne_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rne_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rne_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rne_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rne_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rne_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rne_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rne_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rne_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rdn_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rdn_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rdn_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rdn_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rdn_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rdn_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rdn_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rdn_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rdn_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rdn_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rdn_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rdn_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rdn_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rdn_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rdn_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rdn_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rdn_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rdn_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rdn_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rdn_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rdn_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rdn_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rdn_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rdn_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rdn_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rdn_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rdn_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rdn_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rdn_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rdn_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rdn_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rdn_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rdn_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rdn_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rdn_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rdn_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rdn_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rdn_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rdn_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rdn_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rdn_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rdn_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rdn_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rdn_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rdn_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rod_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rod_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rod_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rod_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rod_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rod_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rod_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rod_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rod_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rod_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rod_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rod_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rod_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rod_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rod_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rod_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rod_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rod_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rod_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rod_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rod_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rod_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rod_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rod_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rod_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rod_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rod_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rod_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rod_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rod_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rod_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rod_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rod_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rod_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rod_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rod_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rod_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rod_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rod_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rod_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rod_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rod_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rod_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rod_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rod_tumu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rnu_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rnu_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rnu_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rnu_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rnu_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rnu_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rnu_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rnu_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rnu_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rnu_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rnu_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rnu_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rnu_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rnu_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rnu_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rnu_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rnu_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rnu_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rnu_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rnu_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rnu_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rnu_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rnu_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rnu_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rnu_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rnu_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rnu_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rnu_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rnu_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rnu_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rnu_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rnu_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rnu_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rnu_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rnu_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rnu_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rnu_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rnu_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rnu_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rnu_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rnu_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rnu_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rnu_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rnu_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rnu_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rne_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rne_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rne_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rne_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rne_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rne_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rne_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rne_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rne_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rne_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rne_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rne_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rne_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rne_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rne_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rne_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rne_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rne_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rne_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rne_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rne_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rne_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rne_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rne_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rne_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rne_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rne_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rne_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rne_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rne_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rne_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rne_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rne_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rne_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rne_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rne_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rne_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rne_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rne_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rne_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rne_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rne_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rne_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rne_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rne_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rdn_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rdn_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rdn_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rdn_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rdn_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rdn_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rdn_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rdn_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rdn_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rdn_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rdn_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rdn_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rdn_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rdn_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rdn_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rdn_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rdn_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rdn_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rdn_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rdn_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rdn_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rdn_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rdn_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rdn_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rdn_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rdn_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rdn_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rdn_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rdn_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rdn_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rdn_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rdn_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rdn_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rdn_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rdn_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rdn_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rdn_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rdn_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rdn_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rdn_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rdn_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rdn_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rdn_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rdn_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rdn_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rod_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rod_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rod_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rod_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rod_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8mf2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rod_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8mf2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rod_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rod_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rod_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rod_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rod_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rod_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rod_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i8m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rod_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_vx_i8m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rod_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rod_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rod_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16mf2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rod_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16mf2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rod_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rod_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rod_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rod_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rod_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rod_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rod_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i16m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rod_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_vx_i16m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rod_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32mf2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rod_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32mf2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rod_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rod_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rod_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rod_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rod_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rod_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rod_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i32m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rod_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_vx_i32m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rod_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rod_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m1_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rod_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rod_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m2_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rod_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rod_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m4_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rod_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_vv_i64m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rod_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_vx_i64m8_rod_mu(mask, maskedoff, op1, op2, vl);
}

