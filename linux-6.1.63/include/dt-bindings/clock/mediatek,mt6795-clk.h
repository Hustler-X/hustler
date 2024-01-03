/* SPDX-License-Identifier: (GPL-2.0+ OR BSD-2-Clause) */
/*
 * Copyright (c) 2022 Collabora Ltd.
 * Author: AngeloGioacchino Del Regno <angelogioacchino.delregno@collabora.com>
 */

#ifndef _DT_BINDINGS_CLK_MT6795_H
#define _DT_BINDINGS_CLK_MT6795_H

/* TOPCKGEN */
#define CLK_TOP_ADSYS_26M		0
#define CLK_TOP_CLKPH_MCK_O		1
#define CLK_TOP_USB_SYSPLL_125M		2
#define CLK_TOP_DSI0_DIG		3
#define CLK_TOP_DSI1_DIG		4
#define CLK_TOP_ARMCA53PLL_754M		5
#define CLK_TOP_ARMCA53PLL_502M		6
#define CLK_TOP_MAIN_H546M		7
#define CLK_TOP_MAIN_H364M		8
#define CLK_TOP_MAIN_H218P4M		9
#define CLK_TOP_MAIN_H156M		10
#define CLK_TOP_TVDPLL_445P5M		11
#define CLK_TOP_TVDPLL_594M		12
#define CLK_TOP_UNIV_624M		13
#define CLK_TOP_UNIV_416M		14
#define CLK_TOP_UNIV_249P6M		15
#define CLK_TOP_UNIV_178P3M		16
#define CLK_TOP_UNIV_48M		17
#define CLK_TOP_CLKRTC_EXT		18
#define CLK_TOP_CLKRTC_INT		19
#define CLK_TOP_FPC			20
#define CLK_TOP_HDMITXPLL_D2		21
#define CLK_TOP_HDMITXPLL_D3		22
#define CLK_TOP_ARMCA53PLL_D2		23
#define CLK_TOP_ARMCA53PLL_D3		24
#define CLK_TOP_APLL1			25
#define CLK_TOP_APLL2			26
#define CLK_TOP_DMPLL			27
#define CLK_TOP_DMPLL_D2		28
#define CLK_TOP_DMPLL_D4		29
#define CLK_TOP_DMPLL_D8		30
#define CLK_TOP_DMPLL_D16		31
#define CLK_TOP_MMPLL			32
#define CLK_TOP_MMPLL_D2		33
#define CLK_TOP_MSDCPLL			34
#define CLK_TOP_MSDCPLL_D2		35
#define CLK_TOP_MSDCPLL_D4		36
#define CLK_TOP_MSDCPLL2		37
#define CLK_TOP_MSDCPLL2_D2		38
#define CLK_TOP_MSDCPLL2_D4		39
#define CLK_TOP_SYSPLL_D2		40
#define CLK_TOP_SYSPLL1_D2		41
#define CLK_TOP_SYSPLL1_D4		42
#define CLK_TOP_SYSPLL1_D8		43
#define CLK_TOP_SYSPLL1_D16		44
#define CLK_TOP_SYSPLL_D3		45
#define CLK_TOP_SYSPLL2_D2		46
#define CLK_TOP_SYSPLL2_D4		47
#define CLK_TOP_SYSPLL_D5		48
#define CLK_TOP_SYSPLL3_D2		49
#define CLK_TOP_SYSPLL3_D4		50
#define CLK_TOP_SYSPLL_D7		51
#define CLK_TOP_SYSPLL4_D2		52
#define CLK_TOP_SYSPLL4_D4		53
#define CLK_TOP_TVDPLL			54
#define CLK_TOP_TVDPLL_D2		55
#define CLK_TOP_TVDPLL_D4		56
#define CLK_TOP_TVDPLL_D8		57
#define CLK_TOP_TVDPLL_D16		58
#define CLK_TOP_UNIVPLL_D2		59
#define CLK_TOP_UNIVPLL1_D2		60
#define CLK_TOP_UNIVPLL1_D4		61
#define CLK_TOP_UNIVPLL1_D8		62
#define CLK_TOP_UNIVPLL_D3		63
#define CLK_TOP_UNIVPLL2_D2		64
#define CLK_TOP_UNIVPLL2_D4		65
#define CLK_TOP_UNIVPLL2_D8		66
#define CLK_TOP_UNIVPLL_D5		67
#define CLK_TOP_UNIVPLL3_D2		68
#define CLK_TOP_UNIVPLL3_D4		69
#define CLK_TOP_UNIVPLL3_D8		70
#define CLK_TOP_UNIVPLL_D7		71
#define CLK_TOP_UNIVPLL_D26		72
#define CLK_TOP_UNIVPLL_D52		73
#define CLK_TOP_VCODECPLL		74
#define CLK_TOP_VCODECPLL_370P5		75
#define CLK_TOP_VENCPLL			76
#define CLK_TOP_VENCPLL_D2		77
#define CLK_TOP_VENCPLL_D4		78
#define CLK_TOP_AXI_SEL			79
#define CLK_TOP_MEM_SEL			80
#define CLK_TOP_DDRPHYCFG_SEL		81
#define CLK_TOP_MM_SEL			82
#define CLK_TOP_PWM_SEL			83
#define CLK_TOP_VDEC_SEL		84
#define CLK_TOP_VENC_SEL		85
#define CLK_TOP_MFG_SEL			86
#define CLK_TOP_CAMTG_SEL		87
#define CLK_TOP_UART_SEL		88
#define CLK_TOP_SPI_SEL			89
#define CLK_TOP_USB20_SEL		90
#define CLK_TOP_USB30_SEL		91
#define CLK_TOP_MSDC50_0_H_SEL		92
#define CLK_TOP_MSDC50_0_SEL		93
#define CLK_TOP_MSDC30_1_SEL		94
#define CLK_TOP_MSDC30_2_SEL		95
#define CLK_TOP_MSDC30_3_SEL		96
#define CLK_TOP_AUDIO_SEL		97
#define CLK_TOP_AUD_INTBUS_SEL		98
#define CLK_TOP_PMICSPI_SEL		99
#define CLK_TOP_SCP_SEL			100
#define CLK_TOP_MJC_SEL			101
#define CLK_TOP_DPI0_SEL		102
#define CLK_TOP_IRDA_SEL		103
#define CLK_TOP_CCI400_SEL		104
#define CLK_TOP_AUD_1_SEL		105
#define CLK_TOP_AUD_2_SEL		106
#define CLK_TOP_MEM_MFG_IN_SEL		107
#define CLK_TOP_AXI_MFG_IN_SEL		108
#define CLK_TOP_SCAM_SEL		109
#define CLK_TOP_I2S0_M_SEL		110
#define CLK_TOP_I2S1_M_SEL		111
#define CLK_TOP_I2S2_M_SEL		112
#define CLK_TOP_I2S3_M_SEL		113
#define CLK_TOP_I2S3_B_SEL		114
#define CLK_TOP_APLL1_DIV0		115
#define CLK_TOP_APLL1_DIV1		116
#define CLK_TOP_APLL1_DIV2		117
#define CLK_TOP_APLL1_DIV3		118
#define CLK_TOP_APLL1_DIV4		119
#define CLK_TOP_APLL1_DIV5		120
#define CLK_TOP_APLL2_DIV0		121
#define CLK_TOP_APLL2_DIV1		122
#define CLK_TOP_APLL2_DIV2		123
#define CLK_TOP_APLL2_DIV3		124
#define CLK_TOP_APLL2_DIV4		125
#define CLK_TOP_APLL2_DIV5		126
#define CLK_TOP_NR_CLK			127

/* APMIXED_SYS */
#define CLK_APMIXED_ARMCA53PLL		0
#define CLK_APMIXED_MAINPLL		1
#define CLK_APMIXED_UNIVPLL		2
#define CLK_APMIXED_MMPLL		3
#define CLK_APMIXED_MSDCPLL		4
#define CLK_APMIXED_VENCPLL		5
#define CLK_APMIXED_TVDPLL		6
#define CLK_APMIXED_MPLL		7
#define CLK_APMIXED_VCODECPLL		8
#define CLK_APMIXED_APLL1		9
#define CLK_APMIXED_APLL2		10
#define CLK_APMIXED_REF2USB_TX		11
#define CLK_APMIXED_NR_CLK		12

/* INFRA_SYS */
#define CLK_INFRA_DBGCLK		0
#define CLK_INFRA_SMI			1
#define CLK_INFRA_AUDIO			2
#define CLK_INFRA_GCE			3
#define CLK_INFRA_L2C_SRAM		4
#define CLK_INFRA_M4U			5
#define CLK_INFRA_MD1MCU		6
#define CLK_INFRA_MD1BUS		7
#define CLK_INFRA_MD1DBB		8
#define CLK_INFRA_DEVICE_APC		9
#define CLK_INFRA_TRNG			10
#define CLK_INFRA_MD1LTE		11
#define CLK_INFRA_CPUM			12
#define CLK_INFRA_KP			13
#define CLK_INFRA_CA53_C0_SEL		14
#define CLK_INFRA_CA53_C1_SEL		15
#define CLK_INFRA_NR_CLK		16

/* PERI_SYS */
#define CLK_PERI_NFI			0
#define CLK_PERI_THERM			1
#define CLK_PERI_PWM1			2
#define CLK_PERI_PWM2			3
#define CLK_PERI_PWM3			4
#define CLK_PERI_PWM4			5
#define CLK_PERI_PWM5			6
#define CLK_PERI_PWM6			7
#define CLK_PERI_PWM7			8
#define CLK_PERI_PWM			9
#define CLK_PERI_USB0			10
#define CLK_PERI_USB1			11
#define CLK_PERI_AP_DMA			12
#define CLK_PERI_MSDC30_0		13
#define CLK_PERI_MSDC30_1		14
#define CLK_PERI_MSDC30_2		15
#define CLK_PERI_MSDC30_3		16
#define CLK_PERI_NLI_ARB		17
#define CLK_PERI_IRDA			18
#define CLK_PERI_UART0			19
#define CLK_PERI_UART1			20
#define CLK_PERI_UART2			21
#define CLK_PERI_UART3			22
#define CLK_PERI_I2C0			23
#define CLK_PERI_I2C1			24
#define CLK_PERI_I2C2			25
#define CLK_PERI_I2C3			26
#define CLK_PERI_I2C4			27
#define CLK_PERI_AUXADC			28
#define CLK_PERI_SPI0			29
#define CLK_PERI_UART0_SEL		30
#define CLK_PERI_UART1_SEL		31
#define CLK_PERI_UART2_SEL		32
#define CLK_PERI_UART3_SEL		33
#define CLK_PERI_NR_CLK			34

/* MFG */
#define CLK_MFG_BAXI			0
#define CLK_MFG_BMEM			1
#define CLK_MFG_BG3D			2
#define CLK_MFG_B26M			3
#define CLK_MFG_NR_CLK			4

/* MM_SYS */
#define CLK_MM_SMI_COMMON		0
#define CLK_MM_SMI_LARB0		1
#define CLK_MM_CAM_MDP			2
#define CLK_MM_MDP_RDMA0		3
#define CLK_MM_MDP_RDMA1		4
#define CLK_MM_MDP_RSZ0			5
#define CLK_MM_MDP_RSZ1			6
#define CLK_MM_MDP_RSZ2			7
#define CLK_MM_MDP_TDSHP0		8
#define CLK_MM_MDP_TDSHP1		9
#define CLK_MM_MDP_CROP			10
#define CLK_MM_MDP_WDMA			11
#define CLK_MM_MDP_WROT0		12
#define CLK_MM_MDP_WROT1		13
#define CLK_MM_FAKE_ENG			14
#define CLK_MM_MUTEX_32K		15
#define CLK_MM_DISP_OVL0		16
#define CLK_MM_DISP_OVL1		17
#define CLK_MM_DISP_RDMA0		18
#define CLK_MM_DISP_RDMA1		19
#define CLK_MM_DISP_RDMA2		20
#define CLK_MM_DISP_WDMA0		21
#define CLK_MM_DISP_WDMA1		22
#define CLK_MM_DISP_COLOR0		23
#define CLK_MM_DISP_COLOR1		24
#define CLK_MM_DISP_AAL			25
#define CLK_MM_DISP_GAMMA		26
#define CLK_MM_DISP_UFOE		27
#define CLK_MM_DISP_SPLIT0		28
#define CLK_MM_DISP_SPLIT1		29
#define CLK_MM_DISP_MERGE		30
#define CLK_MM_DISP_OD			31
#define CLK_MM_DISP_PWM0MM		32
#define CLK_MM_DISP_PWM026M		33
#define CLK_MM_DISP_PWM1MM		34
#define CLK_MM_DISP_PWM126M		35
#define CLK_MM_DSI0_ENGINE		36
#define CLK_MM_DSI0_DIGITAL		37
#define CLK_MM_DSI1_ENGINE		38
#define CLK_MM_DSI1_DIGITAL		39
#define CLK_MM_DPI_PIXEL		40
#define CLK_MM_DPI_ENGINE		41
#define CLK_MM_NR_CLK			42

/* VDEC_SYS */
#define CLK_VDEC_CKEN			0
#define CLK_VDEC_LARB_CKEN		1
#define CLK_VDEC_NR_CLK			2

/* VENC_SYS */
#define CLK_VENC_LARB			0
#define CLK_VENC_VENC			1
#define CLK_VENC_JPGENC			2
#define CLK_VENC_JPGDEC			3
#define CLK_VENC_NR_CLK			4

#endif /* _DT_BINDINGS_CLK_MT6795_H */
