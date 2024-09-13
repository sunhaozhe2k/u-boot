#ifndef DT_BINDINGS_STM32_SDRAM_H
#define DT_BINDINGS_STM32_SDRAM_H

// NORSRAM definitions
#define NORSRAM_BANK_1 0x0
#define NORSRAM_BANK_2 0x1
#define NORSRAM_BANK_3 0x2
#define NORSRAM_BANK_4 0x3

#define NORSRAM_DATA_ADDR_MUX_EN 0x1
#define NORSRAM_DATA_ADDR_MUX_DIS 0x0

#define NORSRAM_TYPE_SRAM 0x0
#define NORSRAM_TYPE_PSRAM 0x1
#define NORSRAM_TYPE_NOR 0x2

#define NORSRAM_WAIT_SIGNAL_DIS 0x0
#define NORSRAM_WAIT_SIGNAL_EN 0x1

#define NORSRAM_WAIT_SIGNAL_POLARITY_LOW 0x0
#define NORSRAM_WAIT_SIGNAL_POLARITY_HIGH 0x1

#define NORSRAM_WAIT_SIGNAL_TIMING_BEFORE_WS 0x0
#define NORSRAM_WAIT_SIGNAL_TIMING_DURING_WS 0x1

#define NORSRAM_WRAP_MODE_EN 0x1
#define NORSRAM_WRAP_MODE_DIS 0x0

#define NORSRAM_WRITE_OP_DIS 0x0
#define NORSRAM_WRITE_OP_EN 0x1

#define NORSRAM_EXTENDED_MODE_EN 0x1
#define NORSRAM_EXTENDED_MODE_DIS 0x0

#define NORSRAM_ASYNCHRONOUS_WAIT_EN 0x1
#define NORSRAM_ASYNCHRONOUS_WAIT_DIS 0x0

#define NORSRAM_BURST_ACCESS_MODE_EN 0x1
#define NORSRAM_BURST_ACCESS_MODE_DIS 0x0

#define NORSRAM_WRITE_BURST_EN 0x1
#define NORSRAM_WRITE_BURST_DIS 0x0

#define NORSRAM_PAGE_SIZE_NONE 0x0
#define NORSRAM_PAGE_SIZE_128 0x1
#define NORSRAM_PAGE_SIZE_256 0x2
#define NORSRAM_PAGE_SIZE_512 0x3
#define NORSRAM_PAGE_SIZE_1024 0x4

#define NORSRAM_ACCESS_MODE_A 0x0
#define NORSRAM_ACCESS_MODE_B 0x1
#define NORSRAM_ACCESS_MODE_C 0x2
#define NORSRAM_ACCESS_MODE_D 0x3

// SDRAM definitions
#define NO_COL_8	0x0
#define NO_COL_9	0x1
#define NO_COL_10	0x2
#define NO_COL_11	0x3

#define NO_ROW_11	0x0
#define NO_ROW_12	0x1
#define NO_ROW_13	0x2

#define MWIDTH_8	0x0
#define MWIDTH_16	0x1
#define MWIDTH_32	0x2
#define BANKS_2		0x0
#define BANKS_4		0x1
#define CAS_1		0x1
#define CAS_2		0x2
#define CAS_3		0x3
#define SDCLK_DIS	0x0
#define SDCLK_2		0x2
#define SDCLK_3		0x3
#define RD_BURST_EN	0x1
#define RD_BURST_DIS	0x0
#define RD_PIPE_DL_0	0x0
#define RD_PIPE_DL_1	0x1
#define RD_PIPE_DL_2	0x2

/* Timing = value +1 cycles */
#define TMRD_1		(1 - 1)
#define TMRD_2		(2 - 1)
#define TMRD_3		(3 - 1)
#define TXSR_1		(1 - 1)
#define TXSR_6		(6 - 1)
#define TXSR_7		(7 - 1)
#define TXSR_8		(8 - 1)
#define TRAS_1		(1 - 1)
#define TRAS_4		(4 - 1)
#define TRAS_6		(6 - 1)
#define TRC_6		(6 - 1)
#define TWR_1		(1 - 1)
#define TWR_2		(2 - 1)
#define TRP_2		(2 - 1)
#define TRCD_1		(1 - 1)
#define TRCD_2		(2 - 1)

#endif
