// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint8mf8_t test_vssubu_vv_u8mf8_rnu_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rnu_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rnu_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rnu_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rnu_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rnu_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rnu_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rnu_tu(vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rnu_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rnu_tu(vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rnu_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rnu_tu(vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rnu_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rnu_tu(vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rnu_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rnu_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rnu_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rnu_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rnu_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rnu_tu(vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rnu_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rnu_tu(vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rnu_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rnu_tu(vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rnu_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rnu_tu(vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rnu_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rnu_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rnu_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rnu_tu(vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rnu_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rnu_tu(vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rnu_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rnu_tu(vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rnu_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rnu_tu(vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rnu_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rnu_tu(vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rnu_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rnu_tu(vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rnu_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rnu_tu(vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rnu_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rnu_tu(vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rne_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rne_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rne_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rne_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rne_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rne_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rne_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rne_tu(vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rne_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rne_tu(vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rne_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rne_tu(vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rne_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rne_tu(vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rne_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rne_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rne_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rne_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rne_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rne_tu(vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rne_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rne_tu(vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rne_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rne_tu(vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rne_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rne_tu(vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rne_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rne_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rne_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rne_tu(vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rne_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rne_tu(vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rne_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rne_tu(vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rne_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rne_tu(vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rne_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rne_tu(vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rne_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rne_tu(vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rne_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rne_tu(vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rne_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rne_tu(vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rdn_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rdn_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rdn_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rdn_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rdn_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rdn_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rdn_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rdn_tu(vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rdn_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rdn_tu(vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rdn_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rdn_tu(vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rdn_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rdn_tu(vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rdn_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rdn_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rdn_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rdn_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rdn_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rdn_tu(vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rdn_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rdn_tu(vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rdn_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rdn_tu(vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rdn_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rdn_tu(vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rdn_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rdn_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rdn_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rdn_tu(vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rdn_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rdn_tu(vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rdn_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rdn_tu(vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rdn_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rdn_tu(vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rdn_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rdn_tu(vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rdn_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rdn_tu(vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rdn_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rdn_tu(vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rdn_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rdn_tu(vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rod_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rod_tu(vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rod_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rod_tu(vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rod_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rod_tu(vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rod_tu(vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rod_tu(vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rod_tu(vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rod_tu(vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rod_tu(vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rod_tu(vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rod_tu(vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rod_tu(vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rod_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rod_tu(vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rod_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rod_tu(vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rod_tu(vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rod_tu(vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rod_tu(vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rod_tu(vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rod_tu(vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rod_tu(vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rod_tu(vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rod_tu(vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rod_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rod_tu(vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rod_tu(vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rod_tu(vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rod_tu(vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rod_tu(vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rod_tu(vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rod_tu(vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rod_tu(vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rod_tu(vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rod_tu(vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rod_tu(vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rod_tu(vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rod_tu(vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rod_tu(vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rod_tu(vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rod_tu(vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rod_tu(vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tu(maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rnu_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rnu_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rnu_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rnu_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rnu_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rnu_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rnu_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rnu_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rnu_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rnu_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rnu_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rnu_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rnu_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rnu_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rnu_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rnu_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rnu_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rnu_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rnu_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rnu_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rnu_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rnu_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rnu_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rnu_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rnu_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rnu_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rnu_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rnu_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rnu_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rnu_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rnu_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rnu_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rnu_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rnu_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rnu_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rnu_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rnu_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rnu_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rnu_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rnu_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rnu_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rnu_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rnu_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rnu_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rne_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rne_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rne_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rne_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rne_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rne_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rne_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rne_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rne_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rne_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rne_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rne_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rne_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rne_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rne_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rne_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rne_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rne_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rne_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rne_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rne_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rne_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rne_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rne_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rne_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rne_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rne_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rne_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rne_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rne_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rne_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rne_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rne_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rne_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rne_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rne_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rne_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rne_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rne_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rne_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rne_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rne_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rne_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rne_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rdn_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rdn_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rdn_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rdn_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rdn_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rdn_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rdn_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rdn_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rdn_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rdn_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rdn_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rdn_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rdn_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rdn_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rdn_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rdn_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rdn_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rdn_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rdn_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rdn_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rdn_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rdn_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rdn_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rdn_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rdn_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rdn_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rdn_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rdn_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rdn_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rdn_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rdn_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rdn_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rdn_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rdn_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rdn_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rdn_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rdn_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rdn_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rdn_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rdn_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rdn_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rdn_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rdn_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rdn_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rod_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rod_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rod_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rod_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rod_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rod_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rod_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rod_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rod_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rod_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rod_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rod_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rod_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rod_tum(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rod_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rod_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rod_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rod_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rod_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rod_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rod_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rod_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rod_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rod_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rod_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rod_tum(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rod_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rod_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rod_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rod_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rod_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rod_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rod_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rod_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rod_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rod_tum(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rod_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rod_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rod_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rod_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rod_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rod_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rod_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rod_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tum(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rnu_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rnu_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rnu_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rnu_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rnu_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rnu_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rnu_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rnu_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rnu_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rnu_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rnu_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rnu_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rnu_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rnu_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rnu_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rnu_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rnu_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rnu_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rnu_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rnu_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rnu_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rnu_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rnu_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rnu_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rnu_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rnu_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rnu_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rnu_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rnu_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rnu_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rnu_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rnu_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rnu_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rnu_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rnu_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rnu_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rnu_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rnu_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rnu_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rnu_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rnu_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rnu_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rnu_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rnu_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rne_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rne_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rne_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rne_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rne_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rne_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rne_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rne_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rne_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rne_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rne_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rne_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rne_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rne_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rne_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rne_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rne_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rne_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rne_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rne_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rne_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rne_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rne_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rne_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rne_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rne_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rne_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rne_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rne_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rne_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rne_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rne_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rne_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rne_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rne_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rne_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rne_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rne_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rne_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rne_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rne_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rne_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rne_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rne_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rdn_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rdn_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rdn_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rdn_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rdn_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rdn_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rdn_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rdn_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rdn_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rdn_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rdn_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rdn_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rdn_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rdn_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rdn_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rdn_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rdn_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rdn_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rdn_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rdn_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rdn_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rdn_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rdn_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rdn_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rdn_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rdn_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rdn_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rdn_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rdn_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rdn_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rdn_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rdn_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rdn_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rdn_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rdn_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rdn_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rdn_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rdn_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rdn_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rdn_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rdn_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rdn_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rdn_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rdn_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rod_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rod_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rod_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rod_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rod_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rod_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rod_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rod_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rod_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rod_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rod_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rod_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rod_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rod_tumu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rod_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rod_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rod_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rod_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rod_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rod_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rod_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rod_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rod_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rod_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rod_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rod_tumu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rod_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rod_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rod_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rod_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rod_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rod_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rod_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rod_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rod_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rod_tumu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rod_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rod_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rod_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rod_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rod_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rod_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rod_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rod_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_tumu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rnu_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rnu_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rnu_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rnu_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rnu_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rnu_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rnu_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rnu_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rnu_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rnu_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rnu_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rnu_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rnu_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rnu_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rnu_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rnu_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rnu_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rnu_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rnu_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rnu_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rnu_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rnu_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rnu_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rnu_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rnu_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rnu_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rnu_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rnu_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rnu_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rnu_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rnu_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rnu_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rnu_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rnu_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rnu_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rnu_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rnu_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rnu_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rnu_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rnu_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rnu_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rnu_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rnu_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rnu_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rne_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rne_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rne_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rne_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rne_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rne_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rne_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rne_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rne_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rne_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rne_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rne_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rne_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rne_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rne_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rne_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rne_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rne_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rne_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rne_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rne_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rne_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rne_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rne_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rne_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rne_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rne_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rne_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rne_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rne_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rne_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rne_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rne_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rne_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rne_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rne_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rne_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rne_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rne_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rne_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rne_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rne_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rne_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rne_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rdn_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rdn_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rdn_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rdn_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rdn_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rdn_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rdn_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rdn_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rdn_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rdn_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rdn_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rdn_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rdn_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rdn_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rdn_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rdn_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rdn_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rdn_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rdn_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rdn_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rdn_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rdn_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rdn_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rdn_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rdn_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rdn_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rdn_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rdn_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rdn_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rdn_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rdn_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rdn_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rdn_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rdn_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rdn_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rdn_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rdn_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rdn_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rdn_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rdn_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rdn_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rdn_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rdn_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rdn_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vv_u8mf8_rod_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf8_t test_vssubu_vx_u8mf8_rod_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vv_u8mf4_rod_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf4_t test_vssubu_vx_u8mf4_rod_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vv_u8mf2_rod_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8mf2_t test_vssubu_vx_u8mf2_rod_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vv_u8m1_rod_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m1_t test_vssubu_vx_u8m1_rod_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vv_u8m2_rod_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m2_t test_vssubu_vx_u8m2_rod_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vv_u8m4_rod_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m4_t test_vssubu_vx_u8m4_rod_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vv_u8m8_rod_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint8m8_t test_vssubu_vx_u8m8_rod_mu(vbool1_t mask, vuint8m8_t maskedoff, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vv_u16mf4_rod_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf4_t test_vssubu_vx_u16mf4_rod_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vv_u16mf2_rod_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16mf2_t test_vssubu_vx_u16mf2_rod_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vv_u16m1_rod_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m1_t test_vssubu_vx_u16m1_rod_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vv_u16m2_rod_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m2_t test_vssubu_vx_u16m2_rod_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vv_u16m4_rod_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m4_t test_vssubu_vx_u16m4_rod_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vv_u16m8_rod_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint16m8_t test_vssubu_vx_u16m8_rod_mu(vbool2_t mask, vuint16m8_t maskedoff, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vv_u32mf2_rod_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32mf2_t test_vssubu_vx_u32mf2_rod_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vv_u32m1_rod_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m1_t test_vssubu_vx_u32m1_rod_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vv_u32m2_rod_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m2_t test_vssubu_vx_u32m2_rod_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vv_u32m4_rod_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m4_t test_vssubu_vx_u32m4_rod_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vv_u32m8_rod_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint32m8_t test_vssubu_vx_u32m8_rod_mu(vbool4_t mask, vuint32m8_t maskedoff, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vv_u64m1_rod_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m1_t test_vssubu_vx_u64m1_rod_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vv_u64m2_rod_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m2_t test_vssubu_vx_u64m2_rod_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vv_u64m4_rod_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m4_t test_vssubu_vx_u64m4_rod_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vv_u64m8_rod_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

vuint64m8_t test_vssubu_vx_u64m8_rod_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vssubu_mu(mask, maskedoff, op1, op2, vl);
}

