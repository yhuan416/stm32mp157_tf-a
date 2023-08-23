/*
 * Copyright (c) Linaro 2018 Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef IMX_UART_H
#define IMX_UART_H

#include <drivers/console.h>

#define IMX_UART_RXD_OFFSET	0x00
#define IMX_UART_RXD_CHARRDY	BIT(15)
#define IMX_UART_RXD_ERR	BIT(14)
#define IMX_UART_RXD_OVERRUN	BIT(13)
#define IMX_UART_RXD_FRMERR	BIT(12)
#define IMX_UART_RXD_BRK	BIT(11)
#define IMX_UART_RXD_PRERR	BIT(10)

#define IMX_UART_TXD_OFFSET	0x40

#define IMX_UART_CR1_OFFSET	0x80
#define IMX_UART_CR1_ADEN	BIT(15)
#define IMX_UART_CR1_ADBR	BIT(14)
#define IMX_UART_CR1_TRDYEN	BIT(13)
#define IMX_UART_CR1_IDEN	BIT(12)
#define IMX_UART_CR1_RRDYEN	BIT(9)
#define IMX_UART_CR1_RXDMAEN	BIT(8)
#define IMX_UART_CR1_IREN	BIT(7)
#define IMX_UART_CR1_TXMPTYEN	BIT(6)
#define IMX_UART_CR1_RTSDEN	BIT(5)
#define IMX_UART_CR1_SNDBRK	BIT(4)
#define IMX_UART_CR1_TXDMAEN	BIT(3)
#define IMX_UART_CR1_ATDMAEN	BIT(2)
#define IMX_UART_CR1_DOZE	BIT(1)
#define IMX_UART_CR1_UARTEN	BIT(0)

#define IMX_UART_CR2_OFFSET	0x84
#define IMX_UART_CR2_ESCI	BIT(15)
#define IMX_UART_CR2_IRTS	BIT(14)
#define IMX_UART_CR2_CTSC	BIT(13)
#define IMX_UART_CR2_CTS	BIT(12)
#define IMX_UART_CR2_ESCEN	BIT(11)
#define IMX_UART_CR2_PREN	BIT(8)
#define IMX_UART_CR2_PROE	BIT(7)
#define IMX_UART_CR2_STPB	BIT(6)
#define IMX_UART_CR2_WS		BIT(5)
#define IMX_UART_CR2_RTSEN	BIT(4)
#define IMX_UART_CR2_ATEN	BIT(3)
#define IMX_UART_CR2_TXEN	BIT(2)
#define IMX_UART_CR2_RXEN	BIT(1)
#define IMX_UART_CR2_SRST	BIT(0)

#define IMX_UART_CR3_OFFSET	0x88
#define IMX_UART_CR3_DTREN	BIT(13)
#define IMX_UART_CR3_PARERREN	BIT(12)
#define IMX_UART_CR3_FARERREN	BIT(11)
#define IMX_UART_CR3_DSD	BIT(10)
#define IMX_UART_CR3_DCD	BIT(9)
#define IMX_UART_CR3_RI		BIT(8)
#define IMX_UART_CR3_ADNIMP	BIT(7)
#define IMX_UART_CR3_RXDSEN	BIT(6)
#define IMX_UART_CR3_AIRINTEN	BIT(5)
#define IMX_UART_CR3_AWAKEN	BIT(4)
#define IMX_UART_CR3_DTRDEN	BIT(3)
#define IMX_UART_CR3_RXDMUXSEL	BIT(2)
#define IMX_UART_CR3_INVT	BIT(1)
#define IMX_UART_CR3_ACIEN	BIT(0)

#define IMX_UART_CR4_OFFSET	0x8c
#define IMX_UART_CR4_INVR	BIT(9)
#define IMX_UART_CR4_ENIRI	BIT(8)
#define IMX_UART_CR4_WKEN	BIT(7)
#define IMX_UART_CR4_IDDMAEN	BIT(6)
#define IMX_UART_CR4_IRSC	BIT(5)
#define IMX_UART_CR4_LPBYP	BIT(4)
#define IMX_UART_CR4_TCEN	BIT(3)
#define IMX_UART_CR4_BKEN	BIT(2)
#define IMX_UART_CR4_OREN	BIT(1)
#define IMX_UART_CR4_DREN	BIT(0)

#define IMX_UART_FCR_OFFSET	0x90
#define IMX_UART_FCR_TXTL_MASK	(BIT(15) | BIT(14) | BIT(13) | BIT(12) |\
				 BIT(11) | BIT(10))
#define IMX_UART_FCR_TXTL(x)	((x) << 10)
#define IMX_UART_FCR_RFDIV_MASK	(BIT(9) | BIT(8) | BIT(7))
#define IMX_UART_FCR_RFDIV7	(BIT(9) | BIT(8))
#define IMX_UART_FCR_RFDIV1	(BIT(9) | BIT(7))
#define IMX_UART_FCR_RFDIV2	BIT(9)
#define IMX_UART_FCR_RFDIV3	(BIT(8) | BIT(7))
#define IMX_UART_FCR_RFDIV4	BIT(8)
#define IMX_UART_FCR_RFDIV5	BIT(7)
#define IMX_UART_FCR_RFDIV6	0
#define IMX_UART_FCR_DCEDTE	BIT(6)
#define IMX_UART_FCR_RXTL_MASK	(BIT(5) | BIT(4) | BIT(3) | BIT(2) |\
				 BIT(1) | BIT(0))
#define IMX_UART_FCR_RXTL(x)	x

#define IMX_UART_STAT1_OFFSET	0x94
#define IMX_UART_STAT1_PARITYERR	BIT(15)
#define IMX_UART_STAT1_RTSS	BIT(14)
#define IMX_UART_STAT1_TRDY	BIT(13)
#define IMX_UART_STAT1_RTSD	BIT(12)
#define IMX_UART_STAT1_ESCF	BIT(11)
#define IMX_UART_STAT1_FRAMEERR	BIT(10)
#define IMX_UART_STAT1_RRDY	BIT(9)
#define IMX_UART_STAT1_AGTIM	BIT(8)
#define IMX_UART_STAT1_DTRD	BIT(7)
#define IMX_UART_STAT1_RXDS	BIT(6)
#define IMX_UART_STAT1_AIRINT	BIT(5)
#define IMX_UART_STAT1_AWAKE	BIT(4)
#define IMX_UART_STAT1_SAD	BIT(3)

#define IMX_UART_STAT2_OFFSET	0x98
#define IMX_UART_STAT2_ADET	BIT(15)
#define IMX_UART_STAT2_TXFE	BIT(14)
#define IMX_UART_STAT2_DTRF	BIT(13)
#define IMX_UART_STAT2_IDLE	BIT(12)
#define IMX_UART_STAT2_ACST	BIT(11)
#define IMX_UART_STAT2_RIDELT	BIT(10)
#define IMX_UART_STAT2_RIIN	BIT(9)
#define IMX_UART_STAT2_IRINT	BIT(8)
#define IMX_UART_STAT2_WAKE	BIT(7)
#define IMX_UART_STAT2_DCDDELT	BIT(6)
#define IMX_UART_STAT2_DCDIN	BIT(5)
#define IMX_UART_STAT2_RTSF	BIT(4)
#define IMX_UART_STAT2_TXDC	BIT(3)
#define IMX_UART_STAT2_BRCD	BIT(2)
#define IMX_UART_STAT2_ORE	BIT(1)
#define IMX_UART_STAT2_RCR	BIT(0)

#define IMX_UART_ESC_OFFSET	0x9c

#define IMX_UART_TIM_OFFSET	0xa0

#define IMX_UART_BIR_OFFSET	0xa4

#define IMX_UART_BMR_OFFSET	0xa8

#define IMX_UART_BRC_OFFSET	0xac

#define IMX_UART_ONEMS_OFFSET	0xb0

#define IMX_UART_TS_OFFSET	0xb4
#define IMX_UART_TS_FRCPERR	BIT(13)
#define IMX_UART_TS_LOOP	BIT(12)
#define IMX_UART_TS_DBGEN	BIT(11)
#define IMX_UART_TS_LOOPIR	BIT(10)
#define IMX_UART_TS_RXDBG	BIT(9)
#define IMX_UART_TS_TXEMPTY	BIT(6)
#define IMX_UART_TS_RXEMPTY	BIT(5)
#define IMX_UART_TS_TXFULL	BIT(4)
#define IMX_UART_TS_RXFULL	BIT(3)
#define IMX_UART_TS_SOFTRST	BIT(0)

#ifndef __ASSEMBLER__

typedef struct {
	console_t console;
	uintptr_t base;
} console_imx_uart_t;

int console_imx_uart_register(uintptr_t baseaddr,
			      uint32_t clock,
			      uint32_t baud,
			      console_imx_uart_t *console);
#endif /*__ASSEMBLER__*/

#endif /* IMX_UART_H */
