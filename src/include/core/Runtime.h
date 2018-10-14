#ifndef WASMVM_CORE_RUNTIME_DEF
#define WASMVM_CORE_RUNTIME_DEF

#include <stdint.h>
#include <core/Stack.h>
#include <core/Store.h>

int runtime_i32_const(Stack* stack);
int runtime_i64_const(Stack* stack);
int runtime_f32_const(Stack* stack);
int runtime_f64_const(Stack* stack);
int runtime_i32_add(Stack* stack);
int runtime_i32_sub(Stack* stack);
int runtime_i32_mul(Stack* stack);
int runtime_i32_div_s(Stack* stack);
int runtime_i32_div_u(Stack* stack);
int runtime_i32_rem_s(Stack* stack);
int runtime_i32_rem_u(Stack* stack);
int runtime_i32_and(Stack* stack);
int runtime_i32_or(Stack* stack);
int runtime_i32_xor(Stack* stack);
int runtime_i32_shl(Stack* stack);
int runtime_i32_shr_u(Stack* stack);
int runtime_i32_shr_s(Stack* stack);
int runtime_i32_rotl(Stack* stack);
int runtime_i32_rotr(Stack* stack);
int runtime_i32_eq(Stack* stack);
int runtime_i32_ne(Stack* stack);
int runtime_i32_lt_s(Stack* stack);
int runtime_i32_le_s(Stack* stack);
int runtime_i32_lt_u(Stack* stack);
int runtime_i32_le_u(Stack* stack);
int runtime_i32_gt_s(Stack* stack);
int runtime_i32_ge_s(Stack* stack);
int runtime_i32_gt_u(Stack* stack);
int runtime_i32_ge_u(Stack* stack);
int runtime_i32_clz(Stack* stack);
int runtime_i32_ctz(Stack* stack);
int runtime_i32_popcnt(Stack* stack);
int runtime_i64_add(Stack* stack);
int runtime_i64_sub(Stack* stack);
int runtime_i64_mul(Stack* stack);
int runtime_i64_div_s(Stack* stack);
int runtime_i64_div_u(Stack* stack);
int runtime_i64_rem_s(Stack* stack);
int runtime_i64_rem_u(Stack* stack);
int runtime_i64_and(Stack* stack);
int runtime_i64_or(Stack* stack);
int runtime_i64_xor(Stack* stack);
int runtime_i64_shl(Stack* stack);
int runtime_i64_shr_u(Stack* stack);
int runtime_i64_shr_s(Stack* stack);
int runtime_i64_rotl(Stack* stack);
int runtime_i64_rotr(Stack* stack);
int runtime_i64_eq(Stack* stack);
int runtime_i64_ne(Stack* stack);
int runtime_i64_lt_s(Stack* stack);
int runtime_i64_le_s(Stack* stack);
int runtime_i64_lt_u(Stack* stack);
int runtime_i64_le_u(Stack* stack);
int runtime_i64_gt_s(Stack* stack);
int runtime_i64_ge_s(Stack* stack);
int runtime_i64_gt_u(Stack* stack);
int runtime_i64_ge_u(Stack* stack);
int runtime_i64_clz(Stack* stack);
int runtime_i64_ctz(Stack* stack);
int runtime_i64_popcnt(Stack* stack);
int runtime_i64_eqz(Stack* stack);
int runtime_f32_add(Stack* stack);
int runtime_f32_sub(Stack* stack);
int runtime_f32_mul(Stack* stack);
int runtime_f32_div(Stack* stack);
int runtime_f32_abs(Stack* stack);
int runtime_f32_neg(Stack* stack);
int runtime_f32_copysign(Stack* stack);
int runtime_f32_ceil(Stack* stack);
int runtime_f32_floor(Stack* stack);
int runtime_f32_trunc(Stack* stack);
int runtime_f32_nearest(Stack* stack);
int runtime_f32_eq(Stack* stack);
int runtime_f32_ne(Stack* stack);
int runtime_f32_lt(Stack* stack);
int runtime_f32_le(Stack* stack);
int runtime_f32_gt(Stack* stack);
int runtime_f32_ge(Stack* stack);
int runtime_f32_sqrt(Stack* stack);
int runtime_f32_min(Stack* stack);
int runtime_f32_max(Stack* stack);
int runtime_f64_add(Stack* stack);
int runtime_f64_sub(Stack* stack);
int runtime_f64_mul(Stack* stack);
int runtime_f64_div(Stack* stack);
int runtime_f64_abs(Stack* stack);
int runtime_f64_neg(Stack* stack);
int runtime_f64_copysign(Stack* stack);
int runtime_f64_ceil(Stack* stack);
int runtime_f64_floor(Stack* stack);
int runtime_f64_trunc(Stack* stack);
int runtime_f64_nearest(Stack* stack);
int runtime_f64_eq(Stack* stack);
int runtime_f64_ne(Stack* stack);
int runtime_f64_lt(Stack* stack);
int runtime_f64_le(Stack* stack);
int runtime_f64_gt(Stack* stack);
int runtime_f64_ge(Stack* stack);
int runtime_f64_sqrt(Stack* stack);
int runtime_f64_min(Stack* stack);
int runtime_f64_max(Stack* stack);
int runtime_i32_wrap_i64(Stack* stack);
int runtime_i32_trunc_s_f32(Stack* stack);
int runtime_i32_trunc_s_f64(Stack* stack);
int runtime_i32_trunc_u_f32(Stack* stack);
int runtime_i32_trunc_u_f64(Stack* stack);
int runtime_i32_reinterpret_f32(Stack* stack);
int runtime_i64_extend_s_i32(Stack* stack);
int runtime_i64_extend_u_i32(Stack* stack);
int runtime_i64_trunc_s_f32(Stack* stack);
int runtime_i64_trunc_s_f64(Stack* stack);
int runtime_i64_trunc_u_f32(Stack* stack);
int runtime_i64_trunc_u_f64(Stack* stack);
int runtime_i64_reinterpret_f64(Stack* stack);
int runtime_f32_demote_f64(Stack* stack);
int runtime_f32_convert_s_i32(Stack* stack);
int runtime_f32_convert_s_i64(Stack* stack);
int runtime_f32_convert_u_i32(Stack* stack);
int runtime_f32_convert_u_i64(Stack* stack);
int runtime_f32_reinterpret_i32(Stack* stack);
int runtime_f64_promote_f32(Stack* stack);
int runtime_f64_convert_s_i32(Stack* stack);
int runtime_f64_convert_s_i64(Stack* stack);
int runtime_f64_convert_u_i32(Stack* stack);
int runtime_f64_convert_u_i64(Stack* stack);
int runtime_f64_reinterpret_i64(Stack* stack);

#endif