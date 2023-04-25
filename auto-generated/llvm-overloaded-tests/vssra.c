// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vssra_vv_i8mf8_rnu(vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rnu(vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rnu(vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rnu(vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rnu(vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rnu(vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rnu(vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rnu(vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rnu(vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rnu(vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rnu(vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rnu(vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rnu(vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rnu(vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rnu(vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rnu(vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rnu(vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rnu(vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rnu(vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rnu(vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rnu(vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rnu(vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rnu(vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rnu(vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rnu(vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rnu(vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rnu(vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rnu(vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rnu(vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rnu(vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rnu(vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rnu(vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rnu(vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rnu(vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rnu(vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rnu(vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rnu(vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rnu(vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rnu(vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rnu(vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rnu(vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rnu(vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rnu(vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rnu(vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rne(vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rne(vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rne(vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rne(vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rne(vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rne(vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rne(vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rne(vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rne(vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rne(vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rne(vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rne(vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rne(vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rne(vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rne(vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rne(vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rne(vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rne(vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rne(vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rne(vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rne(vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rne(vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rne(vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rne(vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rne(vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rne(vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rne(vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rne(vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rne(vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rne(vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rne(vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rne(vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rne(vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rne(vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rne(vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rne(vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rne(vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rne(vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rne(vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rne(vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rne(vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rne(vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rne(vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rne(vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rdn(vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rdn(vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rdn(vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rdn(vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rdn(vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rdn(vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rdn(vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rdn(vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rdn(vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rdn(vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rdn(vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rdn(vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rdn(vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rdn(vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rdn(vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rdn(vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rdn(vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rdn(vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rdn(vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rdn(vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rdn(vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rdn(vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rdn(vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rdn(vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rdn(vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rdn(vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rdn(vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rdn(vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rdn(vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rdn(vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rdn(vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rdn(vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rdn(vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rdn(vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rdn(vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rdn(vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rdn(vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rdn(vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rdn(vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rdn(vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rdn(vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rdn(vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rdn(vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rdn(vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rod(vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rod(vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rod(vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rod(vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rod(vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rod(vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rod(vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rod(vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rod(vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rod(vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rod(vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rod(vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rod(vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rod(vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rod(vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rod(vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rod(vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rod(vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rod(vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rod(vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rod(vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rod(vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rod(vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rod(vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rod(vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rod(vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rod(vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rod(vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rod(vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rod(vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rod(vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rod(vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rod(vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rod(vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rod(vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rod(vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rod(vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rod(vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rod(vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rod(vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rod(vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rod(vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rod(vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rod(vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rnu_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rnu_m(vbool64_t mask, vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rnu_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rnu_m(vbool32_t mask, vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rnu_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rnu_m(vbool16_t mask, vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rnu_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rnu_m(vbool8_t mask, vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rnu_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rnu_m(vbool4_t mask, vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rnu_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rnu_m(vbool2_t mask, vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rnu_m(vbool1_t mask, vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rnu_m(vbool1_t mask, vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rnu_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rnu_m(vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rnu_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rnu_m(vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rnu_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rnu_m(vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rnu_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rnu_m(vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rnu_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rnu_m(vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rnu_m(vbool2_t mask, vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rnu_m(vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rnu_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rnu_m(vbool64_t mask, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rnu_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rnu_m(vbool32_t mask, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rnu_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rnu_m(vbool16_t mask, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rnu_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rnu_m(vbool8_t mask, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rnu_m(vbool4_t mask, vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rnu_m(vbool4_t mask, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rnu_m(vbool64_t mask, vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rnu_m(vbool64_t mask, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rnu_m(vbool32_t mask, vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rnu_m(vbool32_t mask, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rnu_m(vbool16_t mask, vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rnu_m(vbool16_t mask, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rnu_m(vbool8_t mask, vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rnu_m(vbool8_t mask, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rne_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rne_m(vbool64_t mask, vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rne_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rne_m(vbool32_t mask, vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rne_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rne_m(vbool16_t mask, vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rne_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rne_m(vbool8_t mask, vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rne_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rne_m(vbool4_t mask, vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rne_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rne_m(vbool2_t mask, vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rne_m(vbool1_t mask, vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rne_m(vbool1_t mask, vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rne_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rne_m(vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rne_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rne_m(vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rne_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rne_m(vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rne_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rne_m(vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rne_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rne_m(vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rne_m(vbool2_t mask, vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rne_m(vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rne_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rne_m(vbool64_t mask, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rne_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rne_m(vbool32_t mask, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rne_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rne_m(vbool16_t mask, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rne_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rne_m(vbool8_t mask, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rne_m(vbool4_t mask, vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rne_m(vbool4_t mask, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rne_m(vbool64_t mask, vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rne_m(vbool64_t mask, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rne_m(vbool32_t mask, vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rne_m(vbool32_t mask, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rne_m(vbool16_t mask, vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rne_m(vbool16_t mask, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rne_m(vbool8_t mask, vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rne_m(vbool8_t mask, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rdn_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rdn_m(vbool64_t mask, vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rdn_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rdn_m(vbool32_t mask, vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rdn_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rdn_m(vbool16_t mask, vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rdn_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rdn_m(vbool8_t mask, vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rdn_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rdn_m(vbool4_t mask, vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rdn_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rdn_m(vbool2_t mask, vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rdn_m(vbool1_t mask, vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rdn_m(vbool1_t mask, vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rdn_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rdn_m(vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rdn_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rdn_m(vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rdn_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rdn_m(vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rdn_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rdn_m(vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rdn_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rdn_m(vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rdn_m(vbool2_t mask, vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rdn_m(vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rdn_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rdn_m(vbool64_t mask, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rdn_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rdn_m(vbool32_t mask, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rdn_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rdn_m(vbool16_t mask, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rdn_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rdn_m(vbool8_t mask, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rdn_m(vbool4_t mask, vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rdn_m(vbool4_t mask, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rdn_m(vbool64_t mask, vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rdn_m(vbool64_t mask, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rdn_m(vbool32_t mask, vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rdn_m(vbool32_t mask, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rdn_m(vbool16_t mask, vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rdn_m(vbool16_t mask, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rdn_m(vbool8_t mask, vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rdn_m(vbool8_t mask, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rod_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rod_m(vbool64_t mask, vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rod_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rod_m(vbool32_t mask, vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rod_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rod_m(vbool16_t mask, vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vv_i8m1_rod_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m1_t test_vssra_vx_i8m1_rod_m(vbool8_t mask, vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vv_i8m2_rod_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m2_t test_vssra_vx_i8m2_rod_m(vbool4_t mask, vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vv_i8m4_rod_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m4_t test_vssra_vx_i8m4_rod_m(vbool2_t mask, vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vv_i8m8_rod_m(vbool1_t mask, vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint8m8_t test_vssra_vx_i8m8_rod_m(vbool1_t mask, vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rod_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rod_m(vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rod_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rod_m(vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vv_i16m1_rod_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m1_t test_vssra_vx_i16m1_rod_m(vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vv_i16m2_rod_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m2_t test_vssra_vx_i16m2_rod_m(vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vv_i16m4_rod_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m4_t test_vssra_vx_i16m4_rod_m(vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vv_i16m8_rod_m(vbool2_t mask, vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint16m8_t test_vssra_vx_i16m8_rod_m(vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rod_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rod_m(vbool64_t mask, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vv_i32m1_rod_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m1_t test_vssra_vx_i32m1_rod_m(vbool32_t mask, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vv_i32m2_rod_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m2_t test_vssra_vx_i32m2_rod_m(vbool16_t mask, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vv_i32m4_rod_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m4_t test_vssra_vx_i32m4_rod_m(vbool8_t mask, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vv_i32m8_rod_m(vbool4_t mask, vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint32m8_t test_vssra_vx_i32m8_rod_m(vbool4_t mask, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vv_i64m1_rod_m(vbool64_t mask, vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m1_t test_vssra_vx_i64m1_rod_m(vbool64_t mask, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vv_i64m2_rod_m(vbool32_t mask, vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m2_t test_vssra_vx_i64m2_rod_m(vbool32_t mask, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vv_i64m4_rod_m(vbool16_t mask, vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m4_t test_vssra_vx_i64m4_rod_m(vbool16_t mask, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vv_i64m8_rod_m(vbool8_t mask, vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

vint64m8_t test_vssra_vx_i64m8_rod_m(vbool8_t mask, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra(mask, op1, shift, vl);
}

