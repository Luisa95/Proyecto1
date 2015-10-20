#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
void B(uint32_t valor,int *pc, bool *flg);

void BEQ( uint32_t valor,int *pc, bool *flg);

void BNE( uint32_t valor,int *pc, bool *flg);

void BCS( uint32_t valor,int *pc, bool *flg);

void BCC( uint32_t valor,int *pc, bool *flg);

void BMI( uint32_t valor,int *pc, bool *flg);

void BPL( uint32_t valor,int *pc, bool *flg);

void BVS( uint32_t valor,int *pc, bool *flg);

void BVC( uint32_t valor,int *pc, bool *flg);

void BHI( uint32_t valor,int *pc, bool *flg);

void BLS( uint32_t valor,int *pc, bool *flg);

void BGE( uint32_t valor,int *pc, bool *flg);

void BLT( uint32_t valor,int *pc, bool *flg);

void BGT( uint32_t valor,int *pc, bool *flg);

void BLE( uint32_t valor,int *pc,bool *flg);

void BAL( uint32_t valor,int *pc,bool *flg);

void BL( uint32_t valor,int *pc, bool *flg);

void BX(uint32_t *pc, bool *flg);

