/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __ls10_dev_timer_ip_h__
#define __ls10_dev_timer_ip_h__
/* This file is autogenerated.  Do not edit */
#define NV_PTIMER                             0x00000FFF:0x00000000 /* RW--D */
#define NV_PTIMER_PRI_TMR_CG1                             0x00000600 /* RW-4R */
#define NV_PTIMER_PRI_TMR_CG1_MONITOR_CG_EN                      0:0 /* RWIVF */
#define NV_PTIMER_PRI_TMR_CG1_MONITOR_CG_EN_ENABLED       0x00000001 /* RW--V */
#define NV_PTIMER_PRI_TMR_CG1_MONITOR_CG_EN_DISABLED      0x00000000 /* RWI-V */
#define NV_PTIMER_PRI_TMR_CG1_MONITOR_CG_EN__PROD         0x00000000 /* RW--V */
#define NV_PTIMER_PRI_TMR_CG1_SLCG                                1:1 /* RWIVF */
#define NV_PTIMER_PRI_TMR_CG1_SLCG_ENABLED                0x00000000 /* RW--V */
#define NV_PTIMER_PRI_TMR_CG1_SLCG_DISABLED               0x00000001 /* RWI-V */
#define NV_PTIMER_PRI_TMR_CG1_SLCG__PROD                  0x00000000 /* RW--V */
#endif // __ls10_dev_timer_ip_h__