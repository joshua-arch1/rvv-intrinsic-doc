#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vasubu_vv_u8mf8_rnu(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rnu(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rnu(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rnu(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rnu(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rnu(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rnu(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rnu(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rnu(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rnu(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rnu(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rnu(op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rnu(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rnu(op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rnu(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rnu(op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rnu(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rnu(op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rnu(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rnu(op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rnu(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rnu(op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rnu(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rnu(op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rnu(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rnu(op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rnu(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rnu(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rnu(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rnu(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rnu(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rnu(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rnu(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rnu(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rnu(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rnu(op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rnu(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rnu(op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rnu(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rnu(op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rnu(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rnu(op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rnu(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rnu(op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rnu(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rnu(op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rnu(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rnu(op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rnu(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rnu(op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rnu(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rnu(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rnu(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rnu(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rnu(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rnu(op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rnu(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rnu(op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rnu(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rnu(op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rnu(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rnu(op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rnu(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rnu(op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rnu(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rnu(op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rnu(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rnu(op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rnu(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rnu(op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rnu(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rnu(op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rnu(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rnu(op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rnu(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rnu(op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rnu(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rnu(op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rnu(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rnu(op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rnu(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rnu(op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rnu(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rnu(op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rnu(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rnu(op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rnu(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rnu(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rne(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rne(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rne(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rne(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rne(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rne(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rne(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rne(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rne(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rne(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rne(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rne(op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rne(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rne(op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rne(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rne(op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rne(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rne(op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rne(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rne(op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rne(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rne(op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rne(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rne(op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rne(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rne(op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rne(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rne(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rne(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rne(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rne(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rne(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rne(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rne(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rne(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rne(op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rne(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rne(op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rne(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rne(op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rne(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rne(op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rne(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rne(op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rne(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rne(op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rne(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rne(op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rne(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rne(op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rne(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rne(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rne(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rne(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rne(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rne(op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rne(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rne(op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rne(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rne(op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rne(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rne(op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rne(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rne(op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rne(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rne(op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rne(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rne(op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rne(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rne(op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rne(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rne(op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rne(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rne(op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rne(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rne(op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rne(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rne(op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rne(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rne(op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rne(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rne(op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rne(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rne(op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rne(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rne(op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rne(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rne(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rdn(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rdn(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rdn(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rdn(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rdn(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rdn(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rdn(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rdn(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rdn(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rdn(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rdn(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rdn(op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rdn(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rdn(op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rdn(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rdn(op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rdn(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rdn(op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rdn(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rdn(op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rdn(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rdn(op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rdn(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rdn(op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rdn(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rdn(op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rdn(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rdn(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rdn(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rdn(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rdn(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rdn(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rdn(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rdn(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rdn(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rdn(op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rdn(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rdn(op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rdn(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rdn(op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rdn(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rdn(op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rdn(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rdn(op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rdn(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rdn(op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rdn(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rdn(op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rdn(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rdn(op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rdn(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rdn(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rdn(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rdn(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rdn(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rdn(op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rdn(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rdn(op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rdn(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rdn(op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rdn(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rdn(op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rdn(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rdn(op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rdn(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rdn(op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rdn(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rdn(op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rdn(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rdn(op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rdn(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rdn(op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rdn(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rdn(op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rdn(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rdn(op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rdn(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rdn(op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rdn(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rdn(op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rdn(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rdn(op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rdn(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rdn(op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rdn(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rdn(op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rdn(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rdn(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rod(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rod(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rod(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rod(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rod(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rod(op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rod(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rod(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rod(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rod(op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rod(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rod(op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rod(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rod(op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rod(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rod(op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rod(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rod(op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rod(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rod(op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rod(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rod(op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rod(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rod(op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rod(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rod(op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rod(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rod(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rod(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rod(op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rod(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rod(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rod(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rod(op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rod(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rod(op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rod(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rod(op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rod(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rod(op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rod(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rod(op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rod(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rod(op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rod(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rod(op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rod(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rod(op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rod(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rod(op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rod(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rod(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rod(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rod(op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rod(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rod(op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rod(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rod(op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rod(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rod(op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rod(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rod(op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rod(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rod(op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rod(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rod(op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rod(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rod(op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rod(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rod(op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rod(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rod(op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rod(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rod(op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rod(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rod(op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rod(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rod(op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rod(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rod(op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rod(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rod(op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rod(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rod(op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rod(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rod(op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rod(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rod(op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rnu_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rnu_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rnu_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rnu_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rnu_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rnu_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rnu_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rnu_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rnu_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rnu_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rnu_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rnu_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rnu_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rnu_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rnu_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rnu_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rnu_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rnu_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rnu_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rnu_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rnu_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rnu_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rnu_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rnu_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rnu_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rnu_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rnu_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rnu_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rnu_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rnu_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rnu_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rnu_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rnu_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rnu_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rnu_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rnu_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rnu_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rnu_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rnu_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rnu_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rnu_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rnu_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rnu_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rnu_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rnu_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rnu_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rnu_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rnu_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rnu_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rnu_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rnu_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rnu_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rnu_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rnu_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rnu_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rnu_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rnu_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rnu_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rnu_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rnu_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rnu_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rnu_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rnu_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rnu_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rnu_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rnu_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rnu_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rnu_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rnu_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rnu_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rnu_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rnu_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rnu_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rnu_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rnu_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rnu_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rnu_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rnu_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rnu_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rnu_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rnu_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rnu_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rnu_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rnu_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rnu_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rnu_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rnu_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rnu_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rne_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rne_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rne_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rne_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rne_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rne_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rne_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rne_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rne_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rne_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rne_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rne_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rne_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rne_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rne_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rne_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rne_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rne_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rne_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rne_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rne_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rne_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rne_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rne_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rne_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rne_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rne_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rne_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rne_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rne_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rne_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rne_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rne_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rne_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rne_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rne_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rne_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rne_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rne_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rne_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rne_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rne_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rne_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rne_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rne_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rne_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rne_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rne_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rne_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rne_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rne_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rne_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rne_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rne_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rne_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rne_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rne_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rne_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rne_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rne_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rne_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rne_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rne_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rne_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rne_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rne_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rne_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rne_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rne_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rne_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rne_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rne_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rne_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rne_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rne_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rne_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rne_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rne_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rne_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rne_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rne_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rne_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rne_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rne_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rne_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rne_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rne_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rne_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rdn_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rdn_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rdn_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rdn_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rdn_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rdn_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rdn_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rdn_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rdn_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rdn_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rdn_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rdn_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rdn_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rdn_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rdn_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rdn_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rdn_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rdn_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rdn_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rdn_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rdn_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rdn_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rdn_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rdn_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rdn_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rdn_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rdn_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rdn_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rdn_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rdn_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rdn_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rdn_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rdn_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rdn_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rdn_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rdn_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rdn_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rdn_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rdn_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rdn_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rdn_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rdn_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rdn_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rdn_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rdn_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rdn_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rdn_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rdn_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rdn_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rdn_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rdn_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rdn_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rdn_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rdn_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rdn_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rdn_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rdn_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rdn_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rdn_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rdn_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rdn_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rdn_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rdn_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rdn_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rdn_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rdn_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rdn_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rdn_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rdn_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rdn_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rdn_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rdn_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rdn_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rdn_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rdn_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rdn_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rdn_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rdn_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rdn_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rdn_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rdn_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rdn_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rdn_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rdn_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rdn_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rdn_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rdn_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rdn_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rod_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf8_rod_m(mask, op1, op2, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rod_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf8_rod_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rod_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf4_rod_m(mask, op1, op2, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rod_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf4_rod_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rod_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8mf2_rod_m(mask, op1, op2, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rod_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8mf2_rod_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rod_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m1_rod_m(mask, op1, op2, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rod_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m1_rod_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rod_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m2_rod_m(mask, op1, op2, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rod_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m2_rod_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rod_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m4_rod_m(mask, op1, op2, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rod_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m4_rod_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rod_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u8m8_rod_m(mask, op1, op2, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rod_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu_vx_u8m8_rod_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rod_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf4_rod_m(mask, op1, op2, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rod_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf4_rod_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rod_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16mf2_rod_m(mask, op1, op2, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rod_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16mf2_rod_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rod_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m1_rod_m(mask, op1, op2, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rod_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m1_rod_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rod_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m2_rod_m(mask, op1, op2, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rod_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m2_rod_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rod_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m4_rod_m(mask, op1, op2, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rod_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m4_rod_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rod_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u16m8_rod_m(mask, op1, op2, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rod_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu_vx_u16m8_rod_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rod_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32mf2_rod_m(mask, op1, op2, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rod_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32mf2_rod_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rod_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m1_rod_m(mask, op1, op2, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rod_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m1_rod_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rod_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m2_rod_m(mask, op1, op2, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rod_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m2_rod_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rod_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m4_rod_m(mask, op1, op2, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rod_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m4_rod_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rod_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u32m8_rod_m(mask, op1, op2, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rod_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu_vx_u32m8_rod_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rod_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m1_rod_m(mask, op1, op2, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rod_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m1_rod_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rod_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m2_rod_m(mask, op1, op2, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rod_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m2_rod_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rod_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m4_rod_m(mask, op1, op2, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rod_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m4_rod_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rod_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu_vv_u64m8_rod_m(mask, op1, op2, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rod_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu_vx_u64m8_rod_m(mask, op1, op2, vl);
}

