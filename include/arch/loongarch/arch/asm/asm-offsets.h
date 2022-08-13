/**
* SPDX-License-Identifier: GPL-2.0-only
* Copyright 2022, tyyteam(Qingtao Liu, Yang Lei, Yang Chen)
* qtliu@mail.ustc.edu.cn, le24@mail.ustc.edu.cn, chenyangcs@mail.ustc.edu.cn
* Derived from:
* Copyright (C) 2020-2021 Loongson Technology Corporation Limited
*/
#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

/* LoongArch pt_regs offsets. */
#define PT_R0 0 /* offsetof(struct pt_regs, regs[0]) */
#define PT_R1 8 /* offsetof(struct pt_regs, regs[1]) */
#define PT_R2 16 /* offsetof(struct pt_regs, regs[2]) */
#define PT_R3 24 /* offsetof(struct pt_regs, regs[3]) */
#define PT_R4 32 /* offsetof(struct pt_regs, regs[4]) */
#define PT_R5 40 /* offsetof(struct pt_regs, regs[5]) */
#define PT_R6 48 /* offsetof(struct pt_regs, regs[6]) */
#define PT_R7 56 /* offsetof(struct pt_regs, regs[7]) */
#define PT_R8 64 /* offsetof(struct pt_regs, regs[8]) */
#define PT_R9 72 /* offsetof(struct pt_regs, regs[9]) */
#define PT_R10 80 /* offsetof(struct pt_regs, regs[10]) */
#define PT_R11 88 /* offsetof(struct pt_regs, regs[11]) */
#define PT_R12 96 /* offsetof(struct pt_regs, regs[12]) */
#define PT_R13 104 /* offsetof(struct pt_regs, regs[13]) */
#define PT_R14 112 /* offsetof(struct pt_regs, regs[14]) */
#define PT_R15 120 /* offsetof(struct pt_regs, regs[15]) */
#define PT_R16 128 /* offsetof(struct pt_regs, regs[16]) */
#define PT_R17 136 /* offsetof(struct pt_regs, regs[17]) */
#define PT_R18 144 /* offsetof(struct pt_regs, regs[18]) */
#define PT_R19 152 /* offsetof(struct pt_regs, regs[19]) */
#define PT_R20 160 /* offsetof(struct pt_regs, regs[20]) */
#define PT_R21 168 /* offsetof(struct pt_regs, regs[21]) */
#define PT_R22 176 /* offsetof(struct pt_regs, regs[22]) */
#define PT_R23 184 /* offsetof(struct pt_regs, regs[23]) */
#define PT_R24 192 /* offsetof(struct pt_regs, regs[24]) */
#define PT_R25 200 /* offsetof(struct pt_regs, regs[25]) */
#define PT_R26 208 /* offsetof(struct pt_regs, regs[26]) */
#define PT_R27 216 /* offsetof(struct pt_regs, regs[27]) */
#define PT_R28 224 /* offsetof(struct pt_regs, regs[28]) */
#define PT_R29 232 /* offsetof(struct pt_regs, regs[29]) */
#define PT_R30 240 /* offsetof(struct pt_regs, regs[30]) */
#define PT_R31 248 /* offsetof(struct pt_regs, regs[31]) */
#define PT_CRMD 280 /* offsetof(struct pt_regs, csr_crmd) */
#define PT_PRMD 288 /* offsetof(struct pt_regs, csr_prmd) */
#define PT_EUEN 296 /* offsetof(struct pt_regs, csr_euen) */
#define PT_ECFG 304 /* offsetof(struct pt_regs, csr_ecfg) */
#define PT_ESTAT 312 /* offsetof(struct pt_regs, csr_estat) */
#define PT_ERA 264 /* offsetof(struct pt_regs, csr_era) */
#define PT_BVADDR 272 /* offsetof(struct pt_regs, csr_badvaddr) */
#define PT_ORIG_A0 256 /* offsetof(struct pt_regs, orig_a0) */
#define PT_SIZE 320 /* sizeof(struct pt_regs) */

/* LoongArch task_struct offsets. */
#define TASK_STATE 0 /* offsetof(struct task_struct, __state) */
#define TASK_THREAD_INFO 8 /* offsetof(struct task_struct, stack) */
#define TASK_FLAGS 20 /* offsetof(struct task_struct, flags) */
#define TASK_MM 1216 /* offsetof(struct task_struct, mm) */
#define TASK_PID 1400 /* offsetof(struct task_struct, pid) */
#define TASK_STRUCT_SIZE 4096 /* sizeof(struct task_struct) */

/* LoongArch thread_info offsets. */
#define TI_TASK 0 /* offsetof(struct thread_info, task) */
#define TI_FLAGS 8 /* offsetof(struct thread_info, flags) */
#define TI_TP_VALUE 16 /* offsetof(struct thread_info, tp_value) */
#define TI_CPU 24 /* offsetof(struct thread_info, cpu) */
#define TI_PRE_COUNT 28 /* offsetof(struct thread_info, preempt_count) */
#define TI_REGS 32 /* offsetof(struct thread_info, regs) */
#define _THREAD_SIZE 16384 /* THREAD_SIZE */
#define _THREAD_MASK 16383 /* THREAD_MASK */
#define _IRQ_STACK_SIZE 16384 /* IRQ_STACK_SIZE */
#define _IRQ_STACK_START 16368 /* IRQ_STACK_START */

/* LoongArch specific thread_struct offsets. */
#define THREAD_REG01 2816 /* offsetof(struct task_struct, thread.reg01) */
#define THREAD_REG03 2824 /* offsetof(struct task_struct, thread.reg03) */
#define THREAD_REG22 2832 /* offsetof(struct task_struct, thread.reg22) */
#define THREAD_REG23 2840 /* offsetof(struct task_struct, thread.reg23) */
#define THREAD_REG24 2848 /* offsetof(struct task_struct, thread.reg24) */
#define THREAD_REG25 2856 /* offsetof(struct task_struct, thread.reg25) */
#define THREAD_REG26 2864 /* offsetof(struct task_struct, thread.reg26) */
#define THREAD_REG27 2872 /* offsetof(struct task_struct, thread.reg27) */
#define THREAD_REG28 2880 /* offsetof(struct task_struct, thread.reg28) */
#define THREAD_REG29 2888 /* offsetof(struct task_struct, thread.reg29) */
#define THREAD_REG30 2896 /* offsetof(struct task_struct, thread.reg30) */
#define THREAD_REG31 2904 /* offsetof(struct task_struct, thread.reg31) */
#define THREAD_CSRCRMD 2920 /* offsetof(struct task_struct, thread.csr_crmd) */
#define THREAD_CSRPRMD 2912 /* offsetof(struct task_struct, thread.csr_prmd) */
#define THREAD_CSREUEN 2928 /* offsetof(struct task_struct, thread.csr_euen) */
#define THREAD_CSRECFG 2936 /* offsetof(struct task_struct, thread.csr_ecfg) */
#define THREAD_SCR0 2952 /* offsetof(struct task_struct, thread.scr0) */
#define THREAD_SCR1 2960 /* offsetof(struct task_struct, thread.scr1) */
#define THREAD_SCR2 2968 /* offsetof(struct task_struct, thread.scr2) */
#define THREAD_SCR3 2976 /* offsetof(struct task_struct, thread.scr3) */
#define THREAD_EFLAGS 2984 /* offsetof(struct task_struct, thread.eflags) */
#define THREAD_FPU 3040 /* offsetof(struct task_struct, thread.fpu) */
#define THREAD_BVADDR 2944 /* offsetof(struct task_struct, thread.csr_badvaddr) */
#define THREAD_ECODE 3000 /* offsetof(struct task_struct, thread.error_code) */
#define THREAD_TRAPNO 2992 /* offsetof(struct task_struct, thread.trap_nr) */

#define THREAD_FPR0 16 /* offsetof(struct loongarch_fpu, fpr[0]) */
#define THREAD_FPR1 48 /* offsetof(struct loongarch_fpu, fpr[1]) */
#define THREAD_FPR2 80 /* offsetof(struct loongarch_fpu, fpr[2]) */
#define THREAD_FPR3 112 /* offsetof(struct loongarch_fpu, fpr[3]) */
#define THREAD_FPR4 144 /* offsetof(struct loongarch_fpu, fpr[4]) */
#define THREAD_FPR5 176 /* offsetof(struct loongarch_fpu, fpr[5]) */
#define THREAD_FPR6 208 /* offsetof(struct loongarch_fpu, fpr[6]) */
#define THREAD_FPR7 240 /* offsetof(struct loongarch_fpu, fpr[7]) */
#define THREAD_FPR8 272 /* offsetof(struct loongarch_fpu, fpr[8]) */
#define THREAD_FPR9 304 /* offsetof(struct loongarch_fpu, fpr[9]) */
#define THREAD_FPR10 336 /* offsetof(struct loongarch_fpu, fpr[10]) */
#define THREAD_FPR11 368 /* offsetof(struct loongarch_fpu, fpr[11]) */
#define THREAD_FPR12 400 /* offsetof(struct loongarch_fpu, fpr[12]) */
#define THREAD_FPR13 432 /* offsetof(struct loongarch_fpu, fpr[13]) */
#define THREAD_FPR14 464 /* offsetof(struct loongarch_fpu, fpr[14]) */
#define THREAD_FPR15 496 /* offsetof(struct loongarch_fpu, fpr[15]) */
#define THREAD_FPR16 528 /* offsetof(struct loongarch_fpu, fpr[16]) */
#define THREAD_FPR17 560 /* offsetof(struct loongarch_fpu, fpr[17]) */
#define THREAD_FPR18 592 /* offsetof(struct loongarch_fpu, fpr[18]) */
#define THREAD_FPR19 624 /* offsetof(struct loongarch_fpu, fpr[19]) */
#define THREAD_FPR20 656 /* offsetof(struct loongarch_fpu, fpr[20]) */
#define THREAD_FPR21 688 /* offsetof(struct loongarch_fpu, fpr[21]) */
#define THREAD_FPR22 720 /* offsetof(struct loongarch_fpu, fpr[22]) */
#define THREAD_FPR23 752 /* offsetof(struct loongarch_fpu, fpr[23]) */
#define THREAD_FPR24 784 /* offsetof(struct loongarch_fpu, fpr[24]) */
#define THREAD_FPR25 816 /* offsetof(struct loongarch_fpu, fpr[25]) */
#define THREAD_FPR26 848 /* offsetof(struct loongarch_fpu, fpr[26]) */
#define THREAD_FPR27 880 /* offsetof(struct loongarch_fpu, fpr[27]) */
#define THREAD_FPR28 912 /* offsetof(struct loongarch_fpu, fpr[28]) */
#define THREAD_FPR29 944 /* offsetof(struct loongarch_fpu, fpr[29]) */
#define THREAD_FPR30 976 /* offsetof(struct loongarch_fpu, fpr[30]) */
#define THREAD_FPR31 1008 /* offsetof(struct loongarch_fpu, fpr[31]) */
#define THREAD_FCSR 0 /* offsetof(struct loongarch_fpu, fcsr) */
#define THREAD_FCC 8 /* offsetof(struct loongarch_fpu, fcc) */
#define THREAD_VCSR 4 /* offsetof(struct loongarch_fpu, vcsr) */

/* Size of struct page */
#define STRUCT_PAGE_SIZE 64 /* sizeof(struct page) */

/* Linux mm_struct offsets. */
#define MM_USERS 76 /* offsetof(struct mm_struct, mm_users) */
#define MM_PGD 64 /* offsetof(struct mm_struct, pgd) */
#define MM_CONTEXT 720 /* offsetof(struct mm_struct, context) */

#define _PGD_T_SIZE 8 /* sizeof(pgd_t) */
#define _PMD_T_SIZE 8 /* sizeof(pmd_t) */
#define _PTE_T_SIZE 8 /* sizeof(pte_t) */

#define _PGD_T_LOG2 3 /* PGD_T_LOG2 */
#define _PMD_T_LOG2 3 /* PMD_T_LOG2 */
#define _PTE_T_LOG2 3 /* PTE_T_LOG2 */

#define _PGD_ORDER 0 /* PGD_ORDER */
#define _PMD_ORDER 0 /* PMD_ORDER */
#define _PTE_ORDER 0 /* PTE_ORDER */

#define _PMD_SHIFT 25 /* PMD_SHIFT */
#define _PGDIR_SHIFT 36 /* PGDIR_SHIFT */

#define _PTRS_PER_PGD 2048 /* PTRS_PER_PGD */
#define _PTRS_PER_PMD 2048 /* PTRS_PER_PMD */
#define _PTRS_PER_PTE 2048 /* PTRS_PER_PTE */

#define _PAGE_SHIFT 14 /* PAGE_SHIFT */
#define _PAGE_SIZE 16384 /* PAGE_SIZE */

/* Linux sigcontext offsets. */
#define SC_REGS 8 /* offsetof(struct sigcontext, sc_regs) */
#define SC_PC 0 /* offsetof(struct sigcontext, sc_pc) */

/* Linux signal numbers. */
#define _SIGHUP 1 /* SIGHUP */
#define _SIGINT 2 /* SIGINT */
#define _SIGQUIT 3 /* SIGQUIT */
#define _SIGILL 4 /* SIGILL */
#define _SIGTRAP 5 /* SIGTRAP */
#define _SIGIOT 6 /* SIGIOT */
#define _SIGABRT 6 /* SIGABRT */
#define _SIGFPE 8 /* SIGFPE */
#define _SIGKILL 9 /* SIGKILL */
#define _SIGBUS 7 /* SIGBUS */
#define _SIGSEGV 11 /* SIGSEGV */
#define _SIGSYS 31 /* SIGSYS */
#define _SIGPIPE 13 /* SIGPIPE */
#define _SIGALRM 14 /* SIGALRM */
#define _SIGTERM 15 /* SIGTERM */
#define _SIGUSR1 10 /* SIGUSR1 */
#define _SIGUSR2 12 /* SIGUSR2 */
#define _SIGCHLD 17 /* SIGCHLD */
#define _SIGPWR 30 /* SIGPWR */
#define _SIGWINCH 28 /* SIGWINCH */
#define _SIGURG 23 /* SIGURG */
#define _SIGIO 29 /* SIGIO */
#define _SIGSTOP 19 /* SIGSTOP */
#define _SIGTSTP 20 /* SIGTSTP */
#define _SIGCONT 18 /* SIGCONT */
#define _SIGTTIN 21 /* SIGTTIN */
#define _SIGTTOU 22 /* SIGTTOU */
#define _SIGVTALRM 26 /* SIGVTALRM */
#define _SIGPROF 27 /* SIGPROF */
#define _SIGXCPU 24 /* SIGXCPU */
#define _SIGXFSZ 25 /* SIGXFSZ */

/* Linux smp cpu boot offsets. */
#define CPU_BOOT_STACK 0 /* offsetof(struct secondary_data, stack) */
#define CPU_BOOT_TINFO 8 /* offsetof(struct secondary_data, thread_info) */


#endif
