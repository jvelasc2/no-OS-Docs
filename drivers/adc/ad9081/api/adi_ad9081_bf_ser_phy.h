/*!
 * @brief     SPI Register Definition Header File, automatically generated file at 1/20/2020 6:24:30 AM.
 *
 * @copyright copyright(c) 2018 - Analog Devices Inc.All Rights Reserved.
 *            This software is proprietary to Analog Devices, Inc. and its
 *            licensor. By using this software you agree to the terms of the
 *            associated analog devices software license agreement.
 */

/*!
 * @addtogroup AD9081_BF
 * @{
 */
#ifndef __ADI_AD9081_BF_SER_PHY_H__
#define __ADI_AD9081_BF_SER_PHY_H__

/*============= I N C L U D E S ============*/
#include "adi_ad9081_config.h"

/*============= D E F I N E S ==============*/
#define REG_PWR_DN_ADDR 0x00000750
#define BF_PD_SER_INFO 0x00001000
#define BF_PD_SER(val) (val & 0x0000FFFF)
#define BF_PD_SER_GET(val) (val & 0x0000FFFF)

#define REG_PWR_DN2_ADDR 0x00000751

#define REG_JTX_SWING_ADDR 0x00000752
#define BF_DRVSWING_CH0_SER_RC_INFO 0x00000300
#define BF_DRVSWING_CH0_SER_RC(val) (val & 0x00000007)
#define BF_DRVSWING_CH0_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVSWING_CH1_SER_RC_INFO 0x00000304
#define BF_DRVSWING_CH1_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVSWING_CH1_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_JTX_SWING2_ADDR 0x00000753
#define BF_DRVSWING_CH2_SER_RC_INFO 0x00000300
#define BF_DRVSWING_CH2_SER_RC(val) (val & 0x00000007)
#define BF_DRVSWING_CH2_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVSWING_CH3_SER_RC_INFO 0x00000304
#define BF_DRVSWING_CH3_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVSWING_CH3_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_JTX_SWING3_ADDR 0x00000754
#define BF_DRVSWING_CH4_SER_RC_INFO 0x00000300
#define BF_DRVSWING_CH4_SER_RC(val) (val & 0x00000007)
#define BF_DRVSWING_CH4_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVSWING_CH5_SER_RC_INFO 0x00000304
#define BF_DRVSWING_CH5_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVSWING_CH5_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_JTX_SWING4_ADDR 0x00000755
#define BF_DRVSWING_CH6_SER_RC_INFO 0x00000300
#define BF_DRVSWING_CH6_SER_RC(val) (val & 0x00000007)
#define BF_DRVSWING_CH6_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVSWING_CH7_SER_RC_INFO 0x00000304
#define BF_DRVSWING_CH7_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVSWING_CH7_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_POST_TAP_LEVEL1_ADDR 0x0000075A
#define BF_DRVPOSTEM_CH0_SER_RC_INFO 0x00000300
#define BF_DRVPOSTEM_CH0_SER_RC(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH0_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH1_SER_RC_INFO 0x00000304
#define BF_DRVPOSTEM_CH1_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVPOSTEM_CH1_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_POST_TAP_LEVEL2_ADDR 0x0000075B
#define BF_DRVPOSTEM_CH2_SER_RC_INFO 0x00000300
#define BF_DRVPOSTEM_CH2_SER_RC(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH2_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH3_SER_RC_INFO 0x00000304
#define BF_DRVPOSTEM_CH3_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVPOSTEM_CH3_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_POST_TAP_LEVEL3_ADDR 0x0000075C
#define BF_DRVPOSTEM_CH4_SER_RC_INFO 0x00000300
#define BF_DRVPOSTEM_CH4_SER_RC(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH4_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH5_SER_RC_INFO 0x00000304
#define BF_DRVPOSTEM_CH5_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVPOSTEM_CH5_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_POST_TAP_LEVEL4_ADDR 0x0000075D
#define BF_DRVPOSTEM_CH6_SER_RC_INFO 0x00000300
#define BF_DRVPOSTEM_CH6_SER_RC(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH6_SER_RC_GET(val) (val & 0x00000007)
#define BF_DRVPOSTEM_CH7_SER_RC_INFO 0x00000304
#define BF_DRVPOSTEM_CH7_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_DRVPOSTEM_CH7_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_PARDATAMODE_SER_ADDR 0x00000762
#define BF_PARDATAMODE_SER_RC_INFO 0x00000200
#define BF_PARDATAMODE_SER_RC(val) (val & 0x00000003)
#define BF_PARDATAMODE_SER_RC_GET(val) (val & 0x00000003)
#define BF_C2C_EN_SER_RC_INFO 0x00000102
#define BF_C2C_EN_SER_RC(val) ((val & 0x00000001) << 0x00000002)
#define BF_C2C_EN_SER_RC_GET(val) ((val >> 0x00000002) & 0x00000001)

#define REG_PRE_TAP_LEVEL_CH0_ADDR 0x00000763
#define BF_DRVPREEM_CH0_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH0_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH0_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH1_ADDR 0x00000764
#define BF_DRVPREEM_CH1_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH1_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH1_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH2_ADDR 0x00000765
#define BF_DRVPREEM_CH2_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH2_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH2_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH3_ADDR 0x00000766
#define BF_DRVPREEM_CH3_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH3_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH3_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH4_ADDR 0x00000767
#define BF_DRVPREEM_CH4_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH4_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH4_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH5_ADDR 0x00000768
#define BF_DRVPREEM_CH5_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH5_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH5_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH6_ADDR 0x00000769
#define BF_DRVPREEM_CH6_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH6_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH6_SER_RC_GET(val) (val & 0x000000FF)

#define REG_PRE_TAP_LEVEL_CH7_ADDR 0x0000076A
#define BF_DRVPREEM_CH7_SER_RC_INFO 0x00000800
#define BF_DRVPREEM_CH7_SER_RC(val) (val & 0x000000FF)
#define BF_DRVPREEM_CH7_SER_RC_GET(val) (val & 0x000000FF)

#define REG_RSTB_ADDR 0x00000773
#define BF_RSTB_SER_INFO 0x00001000
#define BF_RSTB_SER(val) (val & 0x0000FFFF)
#define BF_RSTB_SER_GET(val) (val & 0x0000FFFF)

#define REG_RSTB2_ADDR 0x00000774

#define REG_PARITY_ERROR_ADDR 0x00000775
#define BF_PARITY_ERROR_SER_INFO 0x00001000
#define BF_PARITY_ERROR_SER(val) (val & 0x0000FFFF)
#define BF_PARITY_ERROR_SER_GET(val) (val & 0x0000FFFF)

#define REG_PARITY_ERROR2_ADDR 0x00000776

#define REG_PARITY_RST_N_ADDR 0x00000777
#define BF_SER_PARITY_RST_N_INFO 0x00001000
#define BF_SER_PARITY_RST_N(val) (val & 0x0000FFFF)
#define BF_SER_PARITY_RST_N_GET(val) (val & 0x0000FFFF)

#define REG_PARITY_RST_N2_ADDR 0x00000778

#define REG_CLK_OFFSET1_ADDR 0x00000779
#define BF_CLKOFFSET_CH0_SER_RC_INFO 0x00000300
#define BF_CLKOFFSET_CH0_SER_RC(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH0_SER_RC_GET(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH1_SER_RC_INFO 0x00000304
#define BF_CLKOFFSET_CH1_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_CLKOFFSET_CH1_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_CLK_OFFSET2_ADDR 0x0000077A
#define BF_CLKOFFSET_CH2_SER_RC_INFO 0x00000300
#define BF_CLKOFFSET_CH2_SER_RC(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH2_SER_RC_GET(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH3_SER_RC_INFO 0x00000304
#define BF_CLKOFFSET_CH3_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_CLKOFFSET_CH3_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_CLK_OFFSET3_ADDR 0x0000077B
#define BF_CLKOFFSET_CH4_SER_RC_INFO 0x00000300
#define BF_CLKOFFSET_CH4_SER_RC(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH4_SER_RC_GET(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH5_SER_RC_INFO 0x00000304
#define BF_CLKOFFSET_CH5_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_CLKOFFSET_CH5_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_CLK_OFFSET4_ADDR 0x0000077C
#define BF_CLKOFFSET_CH6_SER_RC_INFO 0x00000300
#define BF_CLKOFFSET_CH6_SER_RC(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH6_SER_RC_GET(val) (val & 0x00000007)
#define BF_CLKOFFSET_CH7_SER_RC_INFO 0x00000304
#define BF_CLKOFFSET_CH7_SER_RC(val) ((val & 0x00000007) << 0x00000004)
#define BF_CLKOFFSET_CH7_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000007)

#define REG_OTHER_ADDR 0x00000781
#define BF_EN_FBCK_SER_RC_INFO 0x00000104
#define BF_EN_FBCK_SER_RC(val) ((val & 0x00000001) << 0x00000004)
#define BF_EN_FBCK_SER_RC_GET(val) ((val >> 0x00000004) & 0x00000001)
#define BF_FBCKINV_SER_RC_INFO 0x00000105
#define BF_FBCKINV_SER_RC(val) ((val & 0x00000001) << 0x00000005)
#define BF_FBCKINV_SER_RC_GET(val) ((val >> 0x00000005) & 0x00000001)

#define REG_EN_DRVSLICEOFFSET_ADDR 0x00000782
#define BF_EN_DRVSLICEOFFSET_CH01_SER_RC_INFO 0x00000100
#define BF_EN_DRVSLICEOFFSET_CH01_SER_RC(val) (val & 0x00000001)
#define BF_EN_DRVSLICEOFFSET_CH01_SER_RC_GET(val) (val & 0x00000001)
#define BF_EN_DRVSLICEOFFSET_CH23_SER_RC_INFO 0x00000101
#define BF_EN_DRVSLICEOFFSET_CH23_SER_RC(val) ((val & 0x00000001) << 0x00000001)
#define BF_EN_DRVSLICEOFFSET_CH23_SER_RC_GET(val) \
	((val >> 0x00000001) & 0x00000001)
#define BF_EN_DRVSLICEOFFSET_CH45_SER_RC_INFO 0x00000102
#define BF_EN_DRVSLICEOFFSET_CH45_SER_RC(val) ((val & 0x00000001) << 0x00000002)
#define BF_EN_DRVSLICEOFFSET_CH45_SER_RC_GET(val) \
	((val >> 0x00000002) & 0x00000001)
#define BF_EN_DRVSLICEOFFSET_CH67_SER_RC_INFO 0x00000103
#define BF_EN_DRVSLICEOFFSET_CH67_SER_RC(val) ((val & 0x00000001) << 0x00000003)
#define BF_EN_DRVSLICEOFFSET_CH67_SER_RC_GET(val) \
	((val >> 0x00000003) & 0x00000001)

#define REG_PN_SWAP_ADDR 0x00000783
#define BF_DATA_PN_SWAP_CORR_INFO 0x00001000
#define BF_DATA_PN_SWAP_CORR(val) (val & 0x0000FFFF)
#define BF_DATA_PN_SWAP_CORR_GET(val) (val & 0x0000FFFF)

#define REG_PN_SWAP2_ADDR 0x00000784

#define REG_MAIN_DATA_INV_ADDR 0x00000789
#define BF_OUTPUTDATAINVERT_CH0_SER_RC_INFO 0x00000100
#define BF_OUTPUTDATAINVERT_CH0_SER_RC(val) (val & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH0_SER_RC_GET(val) (val & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH1_SER_RC_INFO 0x00000101
#define BF_OUTPUTDATAINVERT_CH1_SER_RC(val) ((val & 0x00000001) << 0x00000001)
#define BF_OUTPUTDATAINVERT_CH1_SER_RC_GET(val) \
	((val >> 0x00000001) & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH2_SER_RC_INFO 0x00000102
#define BF_OUTPUTDATAINVERT_CH2_SER_RC(val) ((val & 0x00000001) << 0x00000002)
#define BF_OUTPUTDATAINVERT_CH2_SER_RC_GET(val) \
	((val >> 0x00000002) & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH3_SER_RC_INFO 0x00000103
#define BF_OUTPUTDATAINVERT_CH3_SER_RC(val) ((val & 0x00000001) << 0x00000003)
#define BF_OUTPUTDATAINVERT_CH3_SER_RC_GET(val) \
	((val >> 0x00000003) & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH4_SER_RC_INFO 0x00000104
#define BF_OUTPUTDATAINVERT_CH4_SER_RC(val) ((val & 0x00000001) << 0x00000004)
#define BF_OUTPUTDATAINVERT_CH4_SER_RC_GET(val) \
	((val >> 0x00000004) & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH5_SER_RC_INFO 0x00000105
#define BF_OUTPUTDATAINVERT_CH5_SER_RC(val) ((val & 0x00000001) << 0x00000005)
#define BF_OUTPUTDATAINVERT_CH5_SER_RC_GET(val) \
	((val >> 0x00000005) & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH6_SER_RC_INFO 0x00000106
#define BF_OUTPUTDATAINVERT_CH6_SER_RC(val) ((val & 0x00000001) << 0x00000006)
#define BF_OUTPUTDATAINVERT_CH6_SER_RC_GET(val) \
	((val >> 0x00000006) & 0x00000001)
#define BF_OUTPUTDATAINVERT_CH7_SER_RC_INFO 0x00000107
#define BF_OUTPUTDATAINVERT_CH7_SER_RC(val) ((val & 0x00000001) << 0x00000007)
#define BF_OUTPUTDATAINVERT_CH7_SER_RC_GET(val) \
	((val >> 0x00000007) & 0x00000001)

#define REG_POST_TAP_POL_ADDR 0x0000078B
#define BF_POSTTAPPOL_SER_RC_INFO 0x00001000
#define BF_POSTTAPPOL_SER_RC(val) (val & 0x0000FFFF)
#define BF_POSTTAPPOL_SER_RC_GET(val) (val & 0x0000FFFF)

#define REG_POST_TAP_POL2_ADDR 0x0000078C

#define REG_PRE_TAP_POL_ADDR 0x0000078D
#define BF_PRETAPPOL_SER_RC_INFO 0x00001000
#define BF_PRETAPPOL_SER_RC(val) (val & 0x0000FFFF)
#define BF_PRETAPPOL_SER_RC_GET(val) (val & 0x0000FFFF)

#define REG_PRE_TAP_POL2_ADDR 0x0000078E

#define REG_POLY_CODE_ADDR 0x0000078F
#define BF_DRVPOLYCODE_SER_RC_INFO 0x00000600
#define BF_DRVPOLYCODE_SER_RC(val) (val & 0x0000003F)
#define BF_DRVPOLYCODE_SER_RC_GET(val) (val & 0x0000003F)

#define REG_CBUS_ADDR_JTX_ADDR 0x00000790
#define BF_CBUS_ADDR_SER_INFO 0x00000800
#define BF_CBUS_ADDR_SER(val) (val & 0x000000FF)
#define BF_CBUS_ADDR_SER_GET(val) (val & 0x000000FF)

#define REG_CBUS_WSTROBE_ADDR 0x00000791
#define BF_CBUS_WSTROBE_SER_INFO 0x00001000
#define BF_CBUS_WSTROBE_SER(val) (val & 0x0000FFFF)
#define BF_CBUS_WSTROBE_SER_GET(val) (val & 0x0000FFFF)

#define REG_CBUS_WSTROBE2_ADDR 0x00000792

#define REG_CBUS_WDATA_JTX_ADDR 0x00000793
#define BF_CBUS_WDATA_SER_INFO 0x00000800
#define BF_CBUS_WDATA_SER(val) (val & 0x000000FF)
#define BF_CBUS_WDATA_SER_GET(val) (val & 0x000000FF)

#define REG_CBUS_REN_ADDR 0x00000794
#define BF_CBUS_REN_SER_INFO 0x00001000
#define BF_CBUS_REN_SER(val) (val & 0x0000FFFF)
#define BF_CBUS_REN_SER_GET(val) (val & 0x0000FFFF)

#define REG_CBUS_REN2_ADDR 0x00000795

#define REG_CBUS_RDATA_JTX_ADDR 0x00000796
#define BF_CBUS_RDATA_SER_INFO 0x00000800
#define BF_CBUS_RDATA_SER(val) (val & 0x000000FF)
#define BF_CBUS_RDATA_SER_GET(val) (val & 0x000000FF)

#define REG_SYNCA_CTRL_ADDR 0x00000797
#define BF_SYNCA_RX_MODE_RC_INFO 0x00000100
#define BF_SYNCA_RX_MODE_RC(val) (val & 0x00000001)
#define BF_SYNCA_RX_MODE_RC_GET(val) (val & 0x00000001)
#define BF_SYNCA_RX_ONCHIP_TERM_RC_INFO 0x00000101
#define BF_SYNCA_RX_ONCHIP_TERM_RC(val) ((val & 0x00000001) << 0x00000001)
#define BF_SYNCA_RX_ONCHIP_TERM_RC_GET(val) ((val >> 0x00000001) & 0x00000001)
#define BF_SYNCA_RX_PN_INV_RC_INFO 0x00000102
#define BF_SYNCA_RX_PN_INV_RC(val) ((val & 0x00000001) << 0x00000002)
#define BF_SYNCA_RX_PN_INV_RC_GET(val) ((val >> 0x00000002) & 0x00000001)
#define BF_PD_SYNCA_RX_RC_INFO 0x00000103
#define BF_PD_SYNCA_RX_RC(val) ((val & 0x00000001) << 0x00000003)
#define BF_PD_SYNCA_RX_RC_GET(val) ((val >> 0x00000003) & 0x00000001)

#define REG_SYNCB_CTRL_ADDR 0x00000798
#define BF_SYNCB_RX_MODE_RC_INFO 0x00000100
#define BF_SYNCB_RX_MODE_RC(val) (val & 0x00000001)
#define BF_SYNCB_RX_MODE_RC_GET(val) (val & 0x00000001)
#define BF_SYNCB_RX_ONCHIP_TERM_RC_INFO 0x00000101
#define BF_SYNCB_RX_ONCHIP_TERM_RC(val) ((val & 0x00000001) << 0x00000001)
#define BF_SYNCB_RX_ONCHIP_TERM_RC_GET(val) ((val >> 0x00000001) & 0x00000001)
#define BF_SYNCB_RX_PN_INV_RC_INFO 0x00000102
#define BF_SYNCB_RX_PN_INV_RC(val) ((val & 0x00000001) << 0x00000002)
#define BF_SYNCB_RX_PN_INV_RC_GET(val) ((val >> 0x00000002) & 0x00000001)
#define BF_PD_SYNCB_RX_RC_INFO 0x00000103
#define BF_PD_SYNCB_RX_RC(val) ((val & 0x00000001) << 0x00000003)
#define BF_PD_SYNCB_RX_RC_GET(val) ((val >> 0x00000003) & 0x00000001)

#define REG_JTX_CTRL_ADDR 0x00000799
#define BF_JTAG_EN_SER_TESTMODE_RC_INFO 0x00000100
#define BF_JTAG_EN_SER_TESTMODE_RC(val) (val & 0x00000001)
#define BF_JTAG_EN_SER_TESTMODE_RC_GET(val) (val & 0x00000001)

#endif /* __ADI_AD9081_BF_SER_PHY_H__ */
/*! @} */