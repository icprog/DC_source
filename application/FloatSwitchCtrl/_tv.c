#ifndef _tv_c
#define _tv_c

const FSW_TV tv[] = {





/* CFG1_5FSW2P FSW_CFG(HIGH_WATER, START2, START1, STOP, DRY_RUN) */ CFG1_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG1_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,0,0,
  CFG1_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG1_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG1_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
/* CFG2_5FSW2P FSW_CFG(HIGH_WATER, START2, ALARM, START1_STOP, DRY_RUN) */ CFG2_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG2_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG2_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG2_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,A_A,0,
  CFG2_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG2_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,A_A,0,
  CFG2_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG2_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG2_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,A_A,0,
  CFG2_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,A_A,0,
  CFG2_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
/* CFG3_5FSW2P FSW_CFG(HIGH_WATER, START2, ALARM, START1, STOP) */  CFG3_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG3_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG3_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG3_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,A_A,0,
  CFG3_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,A_A,0,
  CFG3_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,A_A,0,
  CFG3_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,A_A,0,
  CFG3_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG3_5FSW2P,FSW5(N,N,N,N,A),3,0,0,0,0,0,
  CFG3_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG3_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,A_A,0,
  CFG3_5FSW2P,FSW5(N,N,N,N,A),3,0,0,0,0,0,
  CFG3_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG4_5FSW2P FSW_CFG(START2, ALARM, START1, STOP, DRY_RUN) */  CFG4_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG4_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG4_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG4_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG4_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,A_A,0,
  CFG4_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG4_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG4_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG4_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG4_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,A_A,0,
  CFG4_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,A_A,0,
  CFG4_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG4_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG4_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG4_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,A_A,0,
  CFG4_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
/* CFG5_5FSW2P FSW_CFG(START2, START1, STOP2, STOP1,  DRY_RUN) */  CFG5_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG5_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG5_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,A,A,A),0,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG5_5FSW2P,FSW5(N,N,A,A,A),0,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG5_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG5_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,0,0,
  CFG5_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
/* CFG6_5FSW2P FSW_CFG(HIGH_WATER, START2, START1, STOP2, STOP1) */  CFG6_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG6_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,N,A),1,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,0,0,
  CFG6_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,A,A),3,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,N,A),1,0,0,0,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG6_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,0,0,
  CFG6_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG7_5FSW2P FSW_CFG(START2, ALARM, START1, STOP2, STOP1) */ CFG7_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG7_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,N,N,A),1,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG7_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,A_A,0,
  CFG7_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,A_A,0,
  CFG7_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,N,N,A),1,0,0,0,0,0,
  CFG7_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG8_5FSW2P FSW_CFG(START2, START1, STOP1, STOP2, DRY_RUN) */ CFG8_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG8_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG8_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,0,0,
  CFG8_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG8_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG8_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG8_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,0,0,
  CFG8_5FSW2P,FSW5(N,N,N,A,A),2,0,0,0,0,0,
  CFG8_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG8_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
/* CFG9_5FSW2P FSW_CFG(START2, STOP2, START1, STOP1, DRY_RUN) */  CFG9_5FSW2P,FSW5(N,N,N,N,N),0,0,A_D,0,0,1,
  CFG9_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG9_5FSW2P,FSW5(N,N,N,A,A),0,0,0,0,0,0,
  CFG9_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG9_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
  CFG9_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,0,0,
  CFG9_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,0,0,
  CFG9_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG9_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG9_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,1,
/* CFG10_5FSW2P FSW_CFG(HIGH_WATER, START2, START1, STOP1, STOP2) */ CFG10_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG10_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG10_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG10_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG10_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG10_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,0,0,
  CFG10_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG10_5FSW2P,FSW5(N,N,N,N,A),2,0,0,0,0,0,
  CFG10_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG11_5FSW2P FSW_CFG(START2, ALARM, START1, STOP1, STOP2) */   CFG11_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG11_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG11_5FSW2P,FSW5(N,N,A,A,A),1,0,0,0,0,0,
  CFG11_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG11_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,A_A,0,
  CFG11_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,A_A,0,
  CFG11_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG11_5FSW2P,FSW5(N,N,N,N,A),2,0,0,0,0,0,
  CFG11_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG12_5FSW2P FSW_CFG(HIGH_WATER, START2, STOP2, START1, STOP1) */ CFG12_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG12_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG12_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,0,0,
  CFG12_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG12_5FSW2P,FSW5(A,A,A,A,A),3,0,0,A_H,0,0,
  CFG12_5FSW2P,FSW5(N,A,A,A,A),3,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,N,A),1,0,0,0,0,0,
  CFG12_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG13_5FSW2P FSW_CFG(START2, ALARM, STOP2, START1, STOP1) */ CFG13_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG13_5FSW2P,FSW5(N,N,N,N,A),0,0,0,0,0,0,
  CFG13_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG13_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
  CFG13_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG13_5FSW2P,FSW5(N,A,A,A,A),1,0,0,0,A_A,0,
  CFG13_5FSW2P,FSW5(A,A,A,A,A),3,0,0,0,A_A,0,
  CFG13_5FSW2P,FSW5(N,N,A,A,A),3,0,0,0,0,0,
  CFG13_5FSW2P,FSW5(N,N,N,A,A),1,0,0,0,0,0,
  CFG13_5FSW2P,FSW5(N,N,N,N,N),0,0,0,0,0,1,
/* CFG1_4FSW2P FSW_CFG(HIGH_WATER, START2, START1_STOP, DRY_RUN) */ CFG1_4FSW2P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
  CFG1_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG1_4FSW2P,FSW4(N,N,A,A),1,0,0,0,0,0,
  CFG1_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG1_4FSW2P,FSW4(N,A,A,A),3,0,0,0,0,0,
  CFG1_4FSW2P,FSW4(A,A,A,A),3,0,0,A_H,0,0,
  CFG1_4FSW2P,FSW4(N,A,A,A),3,0,0,0,0,0,
  CFG1_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
/* CFG2_4FSW2P FSW_CFG(HIGH_WATER, START2, START1, STOP) */ CFG2_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
  CFG2_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,0,
  CFG2_4FSW2P,FSW4(N,N,A,A),1,0,0,0,0,0,
  CFG2_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
  CFG2_4FSW2P,FSW4(N,A,A,A),3,0,0,0,0,0,
  CFG2_4FSW2P,FSW4(A,A,A,A),3,0,0,A_H,0,0,
  CFG2_4FSW2P,FSW4(N,A,A,A),3,0,0,0,0,0,
  CFG2_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
/* CFG3_4FSW2P FSW_CFG(START2, ALARM, START1, STOP) */ CFG3_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
  CFG3_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,0,
  CFG3_4FSW2P,FSW4(N,N,A,A),1,0,0,0,0,0,
  CFG3_4FSW2P,FSW4(N,A,A,A),1,0,0,0,A_A,0,
  CFG3_4FSW2P,FSW4(N,N,A,A),1,0,0,0,0,0,
  CFG3_4FSW2P,FSW4(N,N,N,A),1,0,0,0,0,0,
  CFG3_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
  CFG3_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,0,
  CFG3_4FSW2P,FSW4(A,A,A,A),3,0,0,0,A_A,0,
  CFG3_4FSW2P,FSW4(N,N,A,A),3,0,0,0,0,0,
  CFG3_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
/* CFG4_4FSW2P FSW_CFG(START2, ALARM, START1_STOP, DRY_RUN) */ CFG4_4FSW2P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
  CFG4_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG4_4FSW2P,FSW4(N,N,A,A),1,0,0,0,0,0,
  CFG4_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG4_4FSW2P,FSW4(N,A,A,A),1,0,0,0,A_A,0,
  CFG4_4FSW2P,FSW4(A,A,A,A),3,0,0,0,A_A,0,
  CFG4_4FSW2P,FSW4(N,N,A,A),3,0,0,0,0,0,
  CFG4_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG4_4FSW2P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
/* CFG5_4FSW2P FSW_CFG(START2, START1, STOP,  DRY_RUN) */ CFG5_4FSW2P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
  CFG5_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG5_4FSW2P,FSW4(N,N,A,A),0,0,0,0,0,0,
  CFG5_4FSW2P,FSW4(N,A,A,A),1,0,0,0,0,0,
  CFG5_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG5_4FSW2P,FSW4(A,A,A,A),3,0,0,0,0,0,
  CFG5_4FSW2P,FSW4(N,N,A,A),3,0,0,0,0,0,
  CFG5_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
/* CFG6_4FSW2P FSW_CFG(START2, START1, STOP2, STOP1) */ CFG6_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
  CFG6_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,0,
  CFG6_4FSW2P,FSW4(N,A,A,A),1,0,0,0,0,0,
  CFG6_4FSW2P,FSW4(A,A,A,A),3,0,0,0,0,0,
  CFG6_4FSW2P,FSW4(N,N,N,A),1,0,0,0,0,0,
  CFG6_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
/* CFG7_4FSW2P FSW_CFG(START2, START1, STOP1, STOP2) */ CFG7_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
  CFG7_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,0,
  CFG7_4FSW2P,FSW4(N,A,A,A),1,0,0,0,0,0,
  CFG7_4FSW2P,FSW4(A,A,A,A),3,0,0,0,0,0,
  CFG7_4FSW2P,FSW4(N,N,N,A),2,0,0,0,0,0,
  CFG7_4FSW2P,FSW4(N,N,N,N),0,0,0,0,0,1,
/* CFG8_4FSW2P FSW_CFG(START2, STOP2, START1_STOP, DRY_RUN) */ CFG8_4FSW2P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
  CFG8_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG8_4FSW2P,FSW4(N,N,A,A),1,0,0,0,0,0,
  CFG8_4FSW2P,FSW4(N,A,A,A),1,0,0,0,0,0,
  CFG8_4FSW2P,FSW4(A,A,A,A),3,0,0,0,0,0,
  CFG8_4FSW2P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG8_4FSW2P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
/* CFG1_4FSW1P FSW_CFG(HIGH_WATER, START1, STOP, DRY_RUN) */ CFG1_4FSW1P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
  CFG1_4FSW1P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG1_4FSW1P,FSW4(N,N,A,A),0,0,0,0,0,0,
  CFG1_4FSW1P,FSW4(N,A,A,A),1,0,0,0,0,0,
  CFG1_4FSW1P,FSW4(A,A,A,A),1,0,0,A_H,0,0,
  CFG1_4FSW1P,FSW4(N,A,A,A),1,0,0,0,0,0,
  CFG1_4FSW1P,FSW4(N,N,N,A),0,0,0,0,0,1,
  CFG1_4FSW1P,FSW4(N,N,N,N),0,0,A_D,0,0,1,
/* CFG1_3FSW2P FSW3_CFG(HIGH_WATER, START2, START1_STOP) */ CFG1_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG1_3FSW2P,FSW3(N,N,A),1,0,0,0,0,0,
  CFG1_3FSW2P,FSW3(N,A,A),3,0,0,0,0,0,
  CFG1_3FSW2P,FSW3(A,A,A),3,0,0,A_H,0,0,
  CFG1_3FSW2P,FSW3(N,A,A),3,0,0,0,0,0,
  CFG1_3FSW2P,FSW3(N,N,A),3,0,0,0,0,0,
  CFG1_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
/* CFG2_3FSW2P FSW3_CFG(START2, START1_STOP, DRY_RUN) */ CFG2_3FSW2P,FSW3(N,N,N),0,0,A_D,0,0,1,
  CFG2_3FSW2P,FSW3(N,N,A),0,0,0,0,0,1,
  CFG2_3FSW2P,FSW3(N,A,A),1,0,0,0,0,0,
  CFG2_3FSW2P,FSW3(N,N,A),0,0,0,0,0,1,
  CFG2_3FSW2P,FSW3(A,A,A),3,0,0,0,0,0,
  CFG2_3FSW2P,FSW3(N,N,A),0,0,0,0,0,1,
/* CFG3_3FSW2P FSW3_CFG(START2, ALARM, START1_STOP) */ CFG3_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG3_3FSW2P,FSW3(N,N,A),1,0,0,0,0,0,
  CFG3_3FSW2P,FSW3(N,A,A),1,0,0,0,A_A,0,
  CFG3_3FSW2P,FSW3(N,N,A),1,0,0,0,0,0,
  CFG3_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG3_3FSW2P,FSW3(A,A,A),3,0,0,0,A_A,0,
  CFG3_3FSW2P,FSW3(N,N,A),3,0,0,0,0,0,
  CFG3_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
/* CFG4_3FSW2P FSW3_CFG(START2, START1, STOP) */ CFG4_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG4_3FSW2P,FSW3(N,N,A),0,0,0,0,0,0,
  CFG4_3FSW2P,FSW3(N,A,A),1,0,0,0,0,0,
  CFG4_3FSW2P,FSW3(N,N,A),1,0,0,0,0,0,
  CFG4_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG4_3FSW2P,FSW3(A,A,A),3,0,0,0,0,0,
  CFG4_3FSW2P,FSW3(N,A,A),3,0,0,0,0,0,
  CFG4_3FSW2P,FSW3(N,N,A),3,0,0,0,0,0,
  CFG4_3FSW2P,FSW3(N,N,N),0,0,0,0,0,1,
/* CFG1_3FSW1P FSW3_CFG(HIGH_WATER, START1, STOP) */ CFG1_3FSW1P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG1_3FSW1P,FSW3(N,N,A),0,0,0,0,0,0,
  CFG1_3FSW1P,FSW3(N,A,A),1,0,0,0,0,0,
  CFG1_3FSW1P,FSW3(N,N,A),1,0,0,0,0,0,
  CFG1_3FSW1P,FSW3(N,N,N),0,0,0,0,0,1,
  CFG1_3FSW1P,FSW3(A,A,A),1,0,0,A_H,0,0,
  CFG1_3FSW1P,FSW3(N,A,A),1,0,0,0,0,0,
  CFG1_3FSW1P,FSW3(N,N,N),0,0,0,0,0,1,
/* CFG2_3FSW1P FSW3_CFG(HIGH_WATER, START1_STOP, DRY_RUN) */ CFG2_3FSW1P,FSW3(N,N,N),0,0,A_D,0,0,1,
  CFG2_3FSW1P,FSW3(N,N,A),0,0,0,0,0,1,
  CFG2_3FSW1P,FSW3(N,A,A),1,0,0,0,0,0,
  CFG2_3FSW1P,FSW3(N,N,A),0,0,0,0,0,1,
  CFG2_3FSW1P,FSW3(A,A,A),1,0,0,A_H,0,0,
  CFG2_3FSW1P,FSW3(N,N,N),0,0,A_D,0,0,1,
/* CFG3_3FSW1P FSW3_CFG(START1, STOP, DRY_RUN) */ CFG3_3FSW1P,FSW3(N,N,N),0,0,A_D,0,0,1,
  CFG3_3FSW1P,FSW3(N,N,A),0,0,0,0,0,1,
  CFG3_3FSW1P,FSW3(N,A,A),0,0,0,0,0,0,
  CFG3_3FSW1P,FSW3(A,A,A),1,0,0,0,0,0,
  CFG3_3FSW1P,FSW3(N,A,A),1,0,0,0,0,0,
  CFG3_3FSW1P,FSW3(N,N,A),0,0,0,0,0,1,
  CFG3_3FSW1P,FSW3(N,N,N),0,0,A_D,0,0,1,
/* CFG1_2FSW1P FSW3_CFG(START1, STOP) */ CFG1_2FSW1P,FSW2(N,N),0,0,0,0,0,1,
  CFG1_2FSW1P,FSW2(N,A),0,0,0,0,0,0,
  CFG1_2FSW1P,FSW2(A,A),1,0,0,0,0,0,
  CFG1_2FSW1P,FSW2(N,A),1,0,0,0,0,0,
  CFG1_2FSW1P,FSW2(N,N),0,0,0,0,0,1,
/* CFG2_2FSW1P FSW3_CFG(HIGH_WATER, START1_STOP) */ CFG2_2FSW1P,FSW2(N,N),0,0,0,0,0,1,
  CFG2_2FSW1P,FSW2(N,A),1,0,0,0,0,0,
  CFG2_2FSW1P,FSW2(A,A),1,0,0,A_H,0,0,
  CFG2_2FSW1P,FSW2(N,A),1,0,0,0,0,0,
  CFG2_2FSW1P,FSW2(N,N),0,0,0,0,0,1,
/* CFG3_2FSW1P FSW3_CFG(START1_STOP, DRY_RUN) */ CFG3_2FSW1P,FSW2(N,N),0,0,A_D,0,0,1,
  CFG3_2FSW1P,FSW2(N,A),0,0,0,0,0,1,
  CFG3_2FSW1P,FSW2(A,A),1,0,0,0,0,0,
  CFG3_2FSW1P,FSW2(N,A),0,0,0,0,0,1,
  CFG3_2FSW1P,FSW2(N,N),0,0,A_D,0,0,1,
};

#endif
