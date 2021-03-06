/*
 * (C) Copyright 2017 Rockchip Electronics Co., Ltd.
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */
#ifndef _ASM_ARCH_GRF_px30_H
#define _ASM_ARCH_GRF_px30_H

#include <common.h>

struct px30_grf {
	unsigned int gpio1al_iomux;
	unsigned int gpio1ah_iomux;
	unsigned int gpio1bl_iomux;
	unsigned int gpio1bh_iomux;
	unsigned int gpio1cl_iomux;
	unsigned int gpio1ch_iomux;
	unsigned int gpio1dl_iomux;
	unsigned int gpio1dh_iomux;

	unsigned int gpio2al_iomux;
	unsigned int gpio2ah_iomux;
	unsigned int gpio2bl_iomux;
	unsigned int gpio2bh_iomux;
	unsigned int gpio2cl_iomux;
	unsigned int gpio2ch_iomux;
	unsigned int gpio2dl_iomux;
	unsigned int gpio2dh_iomux;

	unsigned int gpio3al_iomux;
	unsigned int gpio3ah_iomux;
	unsigned int gpio3bl_iomux;
	unsigned int gpio3bh_iomux;
	unsigned int gpio3cl_iomux;
	unsigned int gpio3ch_iomux;
	unsigned int gpio3dl_iomux;
	unsigned int gpio3dh_iomux;

	unsigned int gpio1a_p;
	unsigned int gpio1b_p;
	unsigned int gpio1c_p;
	unsigned int gpio1d_p;
	unsigned int gpio2a_p;
	unsigned int gpio2b_p;
	unsigned int gpio2c_p;
	unsigned int gpio2d_p;
	unsigned int gpio3a_p;
	unsigned int gpio3b_p;
	unsigned int gpio3c_p;
	unsigned int gpio3d_p;
	unsigned int gpio1a_sr;
	unsigned int gpio1b_sr;
	unsigned int gpio1c_sr;
	unsigned int gpio1d_sr;
	unsigned int gpio2a_sr;
	unsigned int gpio2b_sr;
	unsigned int gpio2c_sr;
	unsigned int gpio2d_sr;
	unsigned int gpio3a_sr;
	unsigned int gpio3b_sr;
	unsigned int gpio3c_sr;
	unsigned int gpio3d_sr;
	unsigned int gpio1a_smt;
	unsigned int gpio1b_smt;
	unsigned int gpio1c_smt;
	unsigned int gpio1d_smt;
	unsigned int gpio2a_smt;
	unsigned int gpio2b_smt;
	unsigned int gpio2c_smt;
	unsigned int gpio2d_smt;
	unsigned int gpio3a_smt;
	unsigned int gpio3b_smt;
	unsigned int gpio3c_smt;
	unsigned int gpio3d_smt;
	unsigned int gpio1a_e;
	unsigned int gpio1b_e;
	unsigned int gpio1c_e;
	unsigned int gpio1d_e;
	unsigned int gpio2a_e;
	unsigned int gpio2b_e;
	unsigned int gpio2c_e;
	unsigned int gpio2d_e;
	unsigned int gpio3a_e;
	unsigned int gpio3b_e;
	unsigned int gpio3c_e;
	unsigned int gpio3d_e;

	unsigned int reserved0[(0x180 - 0x11C) / 4 - 1];
	unsigned int io_vsel;
	unsigned int iofunc_con0;
	unsigned int reserved1[(0x400 - 0x184) / 4 - 1];
	unsigned int soc_con[6];
	unsigned int reserved2[(0x480 - 0x414) / 4 - 1];
	unsigned int soc_status0;
	unsigned int reserved3[(0x500 - 0x480) / 4 - 1];
	unsigned int cpu_con[3];
	unsigned int reserved4[5];
	unsigned int cpu_status[2];
	unsigned int reserved5[2];
	unsigned int soc_noc_con[2];
	unsigned int reserved6[6];
	unsigned int ddr_bankhash[4];
	unsigned int reserved7[(0x700 - 0x55c) / 4 - 1];
	unsigned int host0_con[2];
	unsigned int reserved8[(0x880 - 0x704) / 4 - 1];
	unsigned int otg_con3;
	unsigned int reserved9[3];
	unsigned int host0_status4;
	unsigned int reserved10[(0x904 - 0x890) / 4 - 1];
	unsigned int mac_con1;
};

check_member(px30_grf, mac_con1, 0x904);

struct px30_pmugrf {
	unsigned int gpio0a_e;
	unsigned int gpio0b_e;
	unsigned int gpio0c_e;
	unsigned int gpio0d_e;
	unsigned int gpio0a_p;
	unsigned int gpio0b_p;
	unsigned int gpio0c_p;
	unsigned int gpio0d_p;
	unsigned int gpio0al_iomux;
	unsigned int gpio0bl_iomux;
	unsigned int gpio0cl_iomux;
	unsigned int gpio0dl_iomux;
	unsigned int gpio0l_sr;
	unsigned int gpio0h_sr;
	unsigned int gpio0l_smt;
	unsigned int gpio0h_smt;
	unsigned int reserved1[(0x100 - 0x3c) / 4 - 1];
	unsigned int soc_con[4];
	unsigned int reserved2[(0x180 - 0x10c) / 4 - 1];
	unsigned int pvtm_con[2];
	unsigned int reserved3[2];
	unsigned int pvtm_status[2];
	unsigned int reserved4[(0x200 - 0x194) / 4 - 1];
	unsigned int os_reg[12];
	unsigned int reset_function_status;
};

check_member(px30_pmugrf, reset_function_status, 0x230);

/* GRF_GPIO0A_IOMUX */
enum {
	GPIO0A7_SHIFT		= 14,
	GPIO0A7_MASK		= 3 << GPIO0A7_SHIFT,
	GPIO0A7_GPIO		= 0,
	GPIO0A7_I2C3_SDA,
	GPIO0A7_HDMI_DDCSDA,

	GPIO0A6_SHIFT		= 12,
	GPIO0A6_MASK		= 3 << GPIO0A6_SHIFT,
	GPIO0A6_GPIO		= 0,
	GPIO0A6_I2C3_SCL,
	GPIO0A6_HDMI_DDCSCL,

	GPIO0A3_SHIFT		= 6,
	GPIO0A3_MASK		= 3 << GPIO0A3_SHIFT,
	GPIO0A3_GPIO		= 0,
	GPIO0A3_I2C1_SDA,
	GPIO0A3_SDIO_CMD,

	GPIO0A2_SHIFT		= 4,
	GPIO0A2_MASK		= 3 << GPIO0A2_SHIFT,
	GPIO0A2_GPIO		= 0,
	GPIO0A2_I2C1_SCL,

	GPIO0A1_SHIFT		= 2,
	GPIO0A1_MASK		= 3 << GPIO0A1_SHIFT,
	GPIO0A1_GPIO		= 0,
	GPIO0A1_I2C0_SDA,

	GPIO0A0_SHIFT		= 0,
	GPIO0A0_MASK		= 3 << GPIO0A0_SHIFT,
	GPIO0A0_GPIO		= 0,
	GPIO0A0_I2C0_SCL,
};

/* GRF_GPIO0B_IOMUX */
enum {
	GPIO0B7_SHIFT		= 14,
	GPIO0B7_MASK		= 3 << GPIO0B7_SHIFT,
	GPIO0B7_GPIO		= 0,
	GPIO0B7_HDMI_HDP,

	GPIO0B6_SHIFT		= 12,
	GPIO0B6_MASK		= 3 << GPIO0B6_SHIFT,
	GPIO0B6_GPIO		= 0,
	GPIO0B6_I2S_SDI,
	GPIO0B6_SPI_CSN0,

	GPIO0B5_SHIFT		= 10,
	GPIO0B5_MASK		= 3 << GPIO0B5_SHIFT,
	GPIO0B5_GPIO		= 0,
	GPIO0B5_I2S_SDO,
	GPIO0B5_SPI_RXD,

	GPIO0B3_SHIFT		= 6,
	GPIO0B3_MASK		= 3 << GPIO0B3_SHIFT,
	GPIO0B3_GPIO		= 0,
	GPIO0B3_I2S1_LRCKRX,
	GPIO0B3_SPI_TXD,

	GPIO0B1_SHIFT		= 2,
	GPIO0B1_MASK		= 3 << GPIO0B1_SHIFT,
	GPIO0B1_GPIO		= 0,
	GPIO0B1_I2S_SCLK,
	GPIO0B1_SPI_CLK,

	GPIO0B0_SHIFT		= 0,
	GPIO0B0_MASK		= 3,
	GPIO0B0_GPIO		= 0,
	GPIO0B0_I2S_MCLK,
};

/* GRF_GPIO0C_IOMUX */
enum {
	GPIO0C4_SHIFT		= 8,
	GPIO0C4_MASK		= 3 << GPIO0C4_SHIFT,
	GPIO0C4_GPIO		= 0,
	GPIO0C4_HDMI_CECSDA,

	GPIO0C1_SHIFT		= 2,
	GPIO0C1_MASK		= 3 << GPIO0C1_SHIFT,
	GPIO0C1_GPIO		= 0,
	GPIO0C1_UART0_RSTN,
	GPIO0C1_CLK_OUT1,
};

/* GRF_GPIO0D_IOMUX */
enum {
	GPIO0D6_SHIFT		= 12,
	GPIO0D6_MASK		= 3 << GPIO0D6_SHIFT,
	GPIO0D6_GPIO		= 0,
	GPIO0D6_SDIO_PWREN,
	GPIO0D6_PWM11,


	GPIO0D4_SHIFT		= 8,
	GPIO0D4_MASK		= 3 << GPIO0D4_SHIFT,
	GPIO0D4_GPIO		= 0,
	GPIO0D4_PWM2,

	GPIO0D3_SHIFT		= 6,
	GPIO0D3_MASK		= 3 << GPIO0D3_SHIFT,
	GPIO0D3_GPIO		= 0,
	GPIO0D3_PWM1,

	GPIO0D2_SHIFT		= 4,
	GPIO0D2_MASK		= 3 << GPIO0D2_SHIFT,
	GPIO0D2_GPIO		= 0,
	GPIO0D2_PWM0,
};

/* GRF_GPIO1A_IOMUX */
enum {
	GPIO1A7_SHIFT		= 14,
	GPIO1A7_MASK		= 1,
	GPIO1A7_GPIO		= 0,
	GPIO1A7_SDMMC_WRPRT,
};

/* GRF_GPIO1B_IOMUX */
enum {
	GPIO1B7_SHIFT		= 14,
	GPIO1B7_MASK		= 3 << GPIO1B7_SHIFT,
	GPIO1B7_GPIO		= 0,
	GPIO1B7_SDMMC_CMD,

	GPIO1B6_SHIFT		= 12,
	GPIO1B6_MASK		= 3 << GPIO1B6_SHIFT,
	GPIO1B6_GPIO		= 0,
	GPIO1B6_SDMMC_PWREN,

	GPIO1B4_SHIFT		= 8,
	GPIO1B4_MASK		= 3 << GPIO1B4_SHIFT,
	GPIO1B4_GPIO		= 0,
	GPIO1B4_SPI_CSN1,
	GPIO1B4_PWM12,

	GPIO1B3_SHIFT		= 6,
	GPIO1B3_MASK		= 3 << GPIO1B3_SHIFT,
	GPIO1B3_GPIO		= 0,
	GPIO1B3_UART1_RSTN,
	GPIO1B3_PWM13,

	GPIO1B2_SHIFT		= 4,
	GPIO1B2_MASK		= 3 << GPIO1B2_SHIFT,
	GPIO1B2_GPIO		= 0,
	GPIO1B2_UART1_SIN,
	GPIO1B2_UART21_SIN,

	GPIO1B1_SHIFT		= 2,
	GPIO1B1_MASK		= 3 << GPIO1B1_SHIFT,
	GPIO1B1_GPIO		= 0,
	GPIO1B1_UART1_SOUT,
	GPIO1B1_UART21_SOUT,
};

/* GRF_GPIO1C_IOMUX */
enum {
	GPIO1C7_SHIFT		= 14,
	GPIO1C7_MASK		= 3 << GPIO1C7_SHIFT,
	GPIO1C7_GPIO		= 0,
	GPIO1C7_NAND_CS3,
	GPIO1C7_EMMC_RSTNOUT,

	GPIO1C6_SHIFT		= 12,
	GPIO1C6_MASK		= 3 << GPIO1C6_SHIFT,
	GPIO1C6_GPIO		= 0,
	GPIO1C6_NAND_CS2,
	GPIO1C6_EMMC_CMD,


	GPIO1C5_SHIFT		= 10,
	GPIO1C5_MASK		= 3 << GPIO1C5_SHIFT,
	GPIO1C5_GPIO		= 0,
	GPIO1C5_SDMMC_D3,
	GPIO1C5_JTAG_TMS,

	GPIO1C4_SHIFT		= 8,
	GPIO1C4_MASK		= 3 << GPIO1C4_SHIFT,
	GPIO1C4_GPIO		= 0,
	GPIO1C4_SDMMC_D2,
	GPIO1C4_JTAG_TCK,

	GPIO1C3_SHIFT		= 6,
	GPIO1C3_MASK		= 3 << GPIO1C3_SHIFT,
	GPIO1C3_GPIO		= 0,
	GPIO1C3_SDMMC_D1,
	GPIO1C3_UART2_SIN,

	GPIO1C2_SHIFT		= 4,
	GPIO1C2_MASK		= 3 << GPIO1C2_SHIFT ,
	GPIO1C2_GPIO		= 0,
	GPIO1C2_SDMMC_D0,
	GPIO1C2_UART2_SOUT,

	GPIO1C1_SHIFT		= 2,
	GPIO1C1_MASK		= 3 << GPIO1C1_SHIFT,
	GPIO1C1_GPIO		= 0,
	GPIO1C1_SDMMC_DETN,

	GPIO1C0_SHIFT		= 0,
	GPIO1C0_MASK		= 3 << GPIO1C0_SHIFT,
	GPIO1C0_GPIO		= 0,
	GPIO1C0_SDMMC_CLKOUT,
};

/* GRF_GPIO1DL_IOMUX */
enum {

	GPIO1D3_SHIFT		= 12,
	GPIO1D3_MASK		= 0xf << GPIO1D3_SHIFT,
	GPIO1D3_GPIO		= 0,
	GPIO1D3_SDMMC1_D1,
	GPIO1D3_UART2_RXM0,

	GPIO1D2_SHIFT		= 8,
	GPIO1D2_MASK		= 0xf << GPIO1D2_SHIFT,
	GPIO1D2_GPIO		= 0,
	GPIO1D2_SDMMC1_D0,
	GPIO1D2_UART2_TXM0,

	GPIO1D1_SHIFT		= 4,
	GPIO1D1_MASK		= 0xf << GPIO1D1_SHIFT,
	GPIO1D1_GPIO		= 0,
	GPIO1D1_SDMMC1_D3,

	GPIO1D0_SHIFT		= 0,
	GPIO1D0_MASK		= 0xf << GPIO1D0_SHIFT,
	GPIO1D0_GPIO		= 0,
	GPIO1D0_SDMMC1_D2,
};
/* GRF_GPIO1DH_IOMUX */
enum {

	GPIO1D7_SHIFT		= 14,
	GPIO1D7_MASK		= 3 << GPIO1D7_SHIFT,
	GPIO1D7_GPIO		= 0,
	GPIO1D7_NAND_D7,
	GPIO1D7_EMMC_D7,

	GPIO1D6_SHIFT		= 12,
	GPIO1D6_MASK		= 3 << GPIO1D6_SHIFT,
	GPIO1D6_GPIO		= 0,
	GPIO1D6_NAND_D6,
	GPIO1D6_EMMC_D6,

	GPIO1D5_SHIFT		= 10,
	GPIO1D5_MASK		= 3 << GPIO1D5_SHIFT,
	GPIO1D5_GPIO		= 0,
	GPIO1D5_NAND_D5,
	GPIO1D5_EMMC_D5,

	GPIO1D4_SHIFT		= 8,
	GPIO1D4_MASK		= 3 << GPIO1D4_SHIFT,
	GPIO1D4_GPIO		= 0,
	GPIO1D4_NAND_D4,
	GPIO1D4_EMMC_D4,
};
/* GRF_GPIO2A_IOMUX */
enum {
	GPIO2A7_SHIFT		= 14,
	GPIO2A7_MASK		= 3 << GPIO2A7_SHIFT,
	GPIO2A7_GPIO		= 0,
	GPIO2A7_NAND_DQS,
	GPIO2A7_EMMC_CLKOUT,

	GPIO2A5_SHIFT		= 10,
	GPIO2A5_MASK		= 3 << GPIO2A5_SHIFT,
	GPIO2A5_GPIO		= 0,
	GPIO2A5_NAND_WP,
	GPIO2A5_EMMC_PWREN,

	GPIO2A4_SHIFT		= 8,
	GPIO2A4_MASK		= 3 << GPIO2A4_SHIFT,
	GPIO2A4_GPIO		= 0,
	GPIO2A4_NAND_RDY,
	GPIO2A4_EMMC_CMD,

	GPIO2A3_SHIFT		= 6,
	GPIO2A3_MASK		= 3 << GPIO2A3_SHIFT,
	GPIO2A3_GPIO		= 0,
	GPIO2A3_NAND_RDN,
	GPIO2A4_SPI1_CSN1,

	GPIO2A2_SHIFT		= 4,
	GPIO2A2_MASK		= 3 << GPIO2A2_SHIFT,
	GPIO2A2_GPIO		= 0,
	GPIO2A2_NAND_WRN,
	GPIO2A4_SPI1_CSN0,

	GPIO2A1_SHIFT		= 2,
	GPIO2A1_MASK		= 3 << GPIO2A1_SHIFT,
	GPIO2A1_GPIO		= 0,
	GPIO2A1_NAND_CLE,
	GPIO2A1_SPI1_TXD,

	GPIO2A0_SHIFT		= 0,
	GPIO2A0_MASK		= 3 << GPIO2A0_SHIFT,
	GPIO2A0_GPIO		= 0,
	GPIO2A0_NAND_ALE,
	GPIO2A0_SPI1_RXD,
};

/* GRF_GPIO2B_IOMUX */
enum {
	GPIO2B7_SHIFT		= 14,
	GPIO2B7_MASK		= 3 << GPIO2B7_SHIFT,
	GPIO2B7_GPIO		= 0,
	GPIO2B7_GMAC_RXER,

	GPIO2B6_SHIFT		= 12,
	GPIO2B6_MASK		= 3 << GPIO2B6_SHIFT,
	GPIO2B6_GPIO		= 0,
	GPIO2B6_GMAC_CLK,
	GPIO2B6_MAC_LINK,

	GPIO2B5_SHIFT		= 10,
	GPIO2B5_MASK		= 3 << GPIO2B5_SHIFT,
	GPIO2B5_GPIO		= 0,
	GPIO2B5_GMAC_TXEN,

	GPIO2B4_SHIFT		= 8,
	GPIO2B4_MASK		= 3 << GPIO2B4_SHIFT,
	GPIO2B4_GPIO		= 0,
	GPIO2B4_GMAC_MDIO,

	GPIO2B3_SHIFT		= 6,
	GPIO2B3_MASK		= 3 << GPIO2B3_SHIFT,
	GPIO2B3_GPIO		= 0,
	GPIO2B3_GMAC_RXCLK,

	GPIO2B2_SHIFT		= 4,
	GPIO2B2_MASK		= 3 << GPIO2B2_SHIFT,
	GPIO2B2_GPIO		= 0,
	GPIO2B2_GMAC_CRS,

	GPIO2B1_SHIFT		= 2,
	GPIO2B1_MASK		= 3 << GPIO2B1_SHIFT,
	GPIO2B1_GPIO		= 0,
	GPIO2B1_GMAC_TXCLK,


	GPIO2B0_SHIFT		= 0,
	GPIO2B0_MASK		= 3 << GPIO2B0_SHIFT,
	GPIO2B0_GPIO		= 0,
	GPIO2B0_GMAC_RXDV,
	GPIO2B0_MAC_SPEED_IOUT,
};

/* GRF_GPIO2C_IOMUX */
enum {
	GPIO2C7_SHIFT		= 14,
	GPIO2C7_MASK		= 3 << GPIO2C7_SHIFT,
	GPIO2C7_GPIO		= 0,
	GPIO2C7_GMAC_TXD3,

	GPIO2C6_SHIFT		= 12,
	GPIO2C6_MASK		= 3 << GPIO2C6_SHIFT,
	GPIO2C6_GPIO		= 0,
	GPIO2C6_GMAC_TXD2,

	GPIO2C5_SHIFT		= 10,
	GPIO2C5_MASK		= 3 << GPIO2C5_SHIFT,
	GPIO2C5_GPIO		= 0,
	GPIO2C5_I2C2_SCL,
	GPIO2C5_GMAC_RXD2,

	GPIO2C4_SHIFT		= 8,
	GPIO2C4_MASK		= 3 << GPIO2C4_SHIFT,
	GPIO2C4_GPIO		= 0,
	GPIO2C4_I2C2_SDA,
	GPIO2C4_GMAC_RXD3,

	GPIO2C3_SHIFT		= 6,
	GPIO2C3_MASK		= 3 << GPIO2C3_SHIFT,
	GPIO2C3_GPIO		= 0,
	GPIO2C3_GMAC_TXD0,

	GPIO2C2_SHIFT		= 4,
	GPIO2C2_MASK		= 3 << GPIO2C2_SHIFT,
	GPIO2C2_GPIO		= 0,
	GPIO2C2_GMAC_TXD1,

	GPIO2C1_SHIFT		= 2,
	GPIO2C1_MASK		= 3 << GPIO2C1_SHIFT,
	GPIO2C1_GPIO		= 0,
	GPIO2C1_GMAC_RXD0,

	GPIO2C0_SHIFT		= 0,
	GPIO2C0_MASK		= 3 << GPIO2C0_SHIFT,
	GPIO2C0_GPIO		= 0,
	GPIO2C0_GMAC_RXD1,
};

/* GRF_GPIO2D_IOMUX */
enum {
	GPIO2D1_SHIFT		= 2,
	GPIO2D1_MASK		= 3 << GPIO2D1_SHIFT,
	GPIO2D1_GPIO		= 0,
	GPIO2D1_GMAC_MDC,

	GPIO2D0_SHIFT		= 0,
	GPIO2D0_MASK		= 3,
	GPIO2D0_GPIO		= 0,
	GPIO2D0_GMAC_COL,
};

/* GRF_GPIO3C_IOMUX */
enum {
	GPIO3C6_SHIFT		= 12,
	GPIO3C6_MASK		= 3 << GPIO3C6_SHIFT,
	GPIO3C6_GPIO		= 0,
	GPIO3C6_DRV_VBUS1,

	GPIO3C5_SHIFT		= 10,
	GPIO3C5_MASK		= 3 << GPIO3C5_SHIFT,
	GPIO3C5_GPIO		= 0,
	GPIO3C5_PWM10,

	GPIO3C1_SHIFT		= 2,
	GPIO3C1_MASK		= 3 << GPIO3C1_SHIFT,
	GPIO3C1_GPIO		= 0,
	GPIO3C1_DRV_VBUS,
};

/* GRF_GPIO3D_IOMUX */
enum {
	GPIO3D2_SHIFT	= 4,
	GPIO3D2_MASK	= 3 << GPIO3D2_SHIFT,
	GPIO3D2_GPIO	= 0,
	GPIO3D2_PWM3,
};

/* GRF_IOFUNC_CON0 */
enum {
	CON_IOMUX_UART2SEL_SHIFT	= 10,
	CON_IOMUX_UART2SEL_MASK	= 3 << CON_IOMUX_UART2SEL_SHIFT,
	CON_IOMUX_UART2SEL_M0	= 0,
	CON_IOMUX_UART2SEL_M1,
	CON_IOMUX_UART2SEL_USBPHY,
};

/* GRF_MACPHY_CON0 */
enum {
	MACPHY_CFG_ENABLE_SHIFT = 0,
	MACPHY_CFG_ENABLE_MASK  = 1 << MACPHY_CFG_ENABLE_SHIFT,
};
#endif
