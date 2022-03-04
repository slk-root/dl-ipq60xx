// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_LOCATION_INFO_H_
#define _RX_LOCATION_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	rtt_fac_legacy[13:0], rtt_fac_legacy_status[14], rtt_fac_vht[28:15], rtt_fac_vht_status[29], rtt_strongest_chain[31:30]
//	1	rtt_cfr_status[0], rtt_cir_status[1], rtt_preamble_type[3:2], pkt_bw[5:4], reserved[6], rtt_gi_type[7], skip_p_skip_btcf[15:8], rtt_msc_rate[19:16], rtt_pbd_leg_bw[21:20], timing_backoff[26:22], rtt_tx_frame_phase[28:27], rtt_mac_phy_phase[29], rtt_tx_data_start_x_phase[30], rx_location_info_valid[31]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_LOCATION_INFO 2

struct rx_location_info {
             uint32_t rtt_fac_legacy                  : 14, //[13:0]
                      rtt_fac_legacy_status           :  1, //[14]
                      rtt_fac_vht                     : 14, //[28:15]
                      rtt_fac_vht_status              :  1, //[29]
                      rtt_strongest_chain             :  2; //[31:30]
             uint32_t rtt_cfr_status                  :  1, //[0]
                      rtt_cir_status                  :  1, //[1]
                      rtt_preamble_type               :  2, //[3:2]
                      pkt_bw                          :  2, //[5:4]
                      reserved                        :  1, //[6]
                      rtt_gi_type                     :  1, //[7]
                      skip_p_skip_btcf                :  8, //[15:8]
                      rtt_msc_rate                    :  4, //[19:16]
                      rtt_pbd_leg_bw                  :  2, //[21:20]
                      timing_backoff                  :  5, //[26:22]
                      rtt_tx_frame_phase              :  2, //[28:27]
                      rtt_mac_phy_phase               :  1, //[29]
                      rtt_tx_data_start_x_phase       :  1, //[30]
                      rx_location_info_valid          :  1; //[31]
};

/*

rtt_fac_legacy
			
			RTT first arrival correction value computed from L-LTF.
			Support up to Duplicate40/80
			
			14 bits, signed 10.4, 4 bits for fractional part to
			cover DUP and FAC interpolation
			
			clock unit is 80MHz 
			
			In 80+80 mode, this is the pri80 segment only.
			
			<legal all>

rtt_fac_legacy_status
			
			Status of rtt_fac_legacy
			
			<enum 0 location_fac_legacy_status_not_valid>
			
			<enum 1 location_fac_legacy_status_valid>
			
			<legal all>

rtt_fac_vht
			
			RTT first arrival correction value computed from
			(V)HT-LTF. Support up to VHT80
			
			14 bits, signed 10.4, 4 bits for fractional part to
			cover VHT80 and FAC interpolation.
			
			For 80+80 packet this is primary80 segment only.
			
			clock unit is 80MHz 
			
			<legal all>

rtt_fac_vht_status
			
			Status of rtt_fac_vht. 0: not valid, 1: valid
			
			<enum 0 location_fac_vht_status_not_valid>
			
			<enum 1 location_fac_vht_status_valid>
			
			<legal all>

rtt_strongest_chain
			
			Indicate the strongest chain that is used in HW IFFT
			mode. Digital chain indexed.
			
			<enum 0 location_strongest_chain_is_0>
			
			<enum 1 location_strongest_chain_is_1> 
			
			<enum 2 location_strongest_chain_is_2>
			
			<enum 3 location_strongest_chain_is_3>
			
			<legal all> 

rtt_cfr_status
			
			Status of channel frequency response dump, 
			
			<enum 0 location_CFR_dump_not_valid>
			
			<enum 1 location_CFR_dump_valid>
			
			<legal all>

rtt_cir_status
			
			Status of channel impulse response dump
			
			<enum 0 location_CIR_dump_not_valid>
			
			<enum 1 location_CIR_dump_valid>
			
			<legal all>

rtt_preamble_type
			
			Indicate preamble type, 
			
			<enum 0 location_preamble_type_legacy> 
			
			<enum 1 location_preamble_type_b>
			
			<enum 2 location_preamble_type_ht>
			
			<enum 3 location_preamble_type_vht>
			
			<legal all>

pkt_bw
			
			Indicate packet bandwidth, 
			
			<enum 0 location_legacy>
			
			<enum 1 location_pkt_bw_20MHz>
			
			<enum 2 location_pkt_bw_40MHz>
			
			<enum 3 location_pkt_bw_80MHz>
			
			<legal all>

reserved
			

rtt_gi_type
			
			Indicate GI (guard interval) type
			
			<enum  0 location_normal_gi>
			
			<enum 1 location_short_gi>
			
			<legal all>

skip_p_skip_btcf
			
			Coarse/Fine/BTCF timing correction update to be applied
			to fac by SW.

rtt_msc_rate
			
			Indicate MCS rate, if Legacy, 
			
			0: 48 Mbps, 
			
			1: 24 Mbps, 
			
			2: 12 Mbps, 
			
			3: 6 Mbps, 
			
			4: 54 Mbps, 
			
			5: 36 Mbps, 
			
			6: 18 Mbps, 
			
			7: 9 Mbps, 
			
			if HT, 0~7: MCS0~MCS7, if VHT, 0~9: MCS0~MCS9, 10~15:
			reserved
			
			<legal all>

rtt_pbd_leg_bw
			
			PBD detected BW of L-LTF: 
			
			<enum 0 location_pbd_leg_bw_20MHz>
			
			<enum 1 location_pbd_leg_bw_40MHz>
			
			<enum 2 location_pbd_leg_bw_80MHz>
			
			<enum 3 location_pbd_leg_bw_160MHz>
			
			<legal all>

timing_backoff
			
			Timing backoff indication

rtt_tx_frame_phase
			
			For BW20 only. If rtt_tx_frame_phase == 2'b11, reduce
			TOA by one MAC clock. Otherwise, don't need to adjust
			timestamp.

rtt_mac_phy_phase
			
			Record the phase difference between the PHY clock and
			the MAC clock. It's a fix for a known bug related to 80 MHz
			and 160 MHz TOA correction
			
			<legal all>

rtt_tx_data_start_x_phase
			
			Record the phase difference between the 2x clock and the
			80 MHz clock. It's a fix for a known bug related to 20 MHz
			TOD correction
			
			<legal all>

rx_location_info_valid
			
			<enum 0 rx_location_info_is_not_valid>
			
			<enum 1 rx_location_info_is_valid>
*/


/* Description		RX_LOCATION_INFO_0_RTT_FAC_LEGACY
			
			RTT first arrival correction value computed from L-LTF.
			Support up to Duplicate40/80
			
			14 bits, signed 10.4, 4 bits for fractional part to
			cover DUP and FAC interpolation
			
			clock unit is 80MHz 
			
			In 80+80 mode, this is the pri80 segment only.
			
			<legal all>
*/
#define RX_LOCATION_INFO_0_RTT_FAC_LEGACY_OFFSET                     0x00000000
#define RX_LOCATION_INFO_0_RTT_FAC_LEGACY_LSB                        0
#define RX_LOCATION_INFO_0_RTT_FAC_LEGACY_MASK                       0x00003fff

/* Description		RX_LOCATION_INFO_0_RTT_FAC_LEGACY_STATUS
			
			Status of rtt_fac_legacy
			
			<enum 0 location_fac_legacy_status_not_valid>
			
			<enum 1 location_fac_legacy_status_valid>
			
			<legal all>
*/
#define RX_LOCATION_INFO_0_RTT_FAC_LEGACY_STATUS_OFFSET              0x00000000
#define RX_LOCATION_INFO_0_RTT_FAC_LEGACY_STATUS_LSB                 14
#define RX_LOCATION_INFO_0_RTT_FAC_LEGACY_STATUS_MASK                0x00004000

/* Description		RX_LOCATION_INFO_0_RTT_FAC_VHT
			
			RTT first arrival correction value computed from
			(V)HT-LTF. Support up to VHT80
			
			14 bits, signed 10.4, 4 bits for fractional part to
			cover VHT80 and FAC interpolation.
			
			For 80+80 packet this is primary80 segment only.
			
			clock unit is 80MHz 
			
			<legal all>
*/
#define RX_LOCATION_INFO_0_RTT_FAC_VHT_OFFSET                        0x00000000
#define RX_LOCATION_INFO_0_RTT_FAC_VHT_LSB                           15
#define RX_LOCATION_INFO_0_RTT_FAC_VHT_MASK                          0x1fff8000

/* Description		RX_LOCATION_INFO_0_RTT_FAC_VHT_STATUS
			
			Status of rtt_fac_vht. 0: not valid, 1: valid
			
			<enum 0 location_fac_vht_status_not_valid>
			
			<enum 1 location_fac_vht_status_valid>
			
			<legal all>
*/
#define RX_LOCATION_INFO_0_RTT_FAC_VHT_STATUS_OFFSET                 0x00000000
#define RX_LOCATION_INFO_0_RTT_FAC_VHT_STATUS_LSB                    29
#define RX_LOCATION_INFO_0_RTT_FAC_VHT_STATUS_MASK                   0x20000000

/* Description		RX_LOCATION_INFO_0_RTT_STRONGEST_CHAIN
			
			Indicate the strongest chain that is used in HW IFFT
			mode. Digital chain indexed.
			
			<enum 0 location_strongest_chain_is_0>
			
			<enum 1 location_strongest_chain_is_1> 
			
			<enum 2 location_strongest_chain_is_2>
			
			<enum 3 location_strongest_chain_is_3>
			
			<legal all> 
*/
#define RX_LOCATION_INFO_0_RTT_STRONGEST_CHAIN_OFFSET                0x00000000
#define RX_LOCATION_INFO_0_RTT_STRONGEST_CHAIN_LSB                   30
#define RX_LOCATION_INFO_0_RTT_STRONGEST_CHAIN_MASK                  0xc0000000

/* Description		RX_LOCATION_INFO_1_RTT_CFR_STATUS
			
			Status of channel frequency response dump, 
			
			<enum 0 location_CFR_dump_not_valid>
			
			<enum 1 location_CFR_dump_valid>
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_CFR_STATUS_OFFSET                     0x00000004
#define RX_LOCATION_INFO_1_RTT_CFR_STATUS_LSB                        0
#define RX_LOCATION_INFO_1_RTT_CFR_STATUS_MASK                       0x00000001

/* Description		RX_LOCATION_INFO_1_RTT_CIR_STATUS
			
			Status of channel impulse response dump
			
			<enum 0 location_CIR_dump_not_valid>
			
			<enum 1 location_CIR_dump_valid>
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_CIR_STATUS_OFFSET                     0x00000004
#define RX_LOCATION_INFO_1_RTT_CIR_STATUS_LSB                        1
#define RX_LOCATION_INFO_1_RTT_CIR_STATUS_MASK                       0x00000002

/* Description		RX_LOCATION_INFO_1_RTT_PREAMBLE_TYPE
			
			Indicate preamble type, 
			
			<enum 0 location_preamble_type_legacy> 
			
			<enum 1 location_preamble_type_b>
			
			<enum 2 location_preamble_type_ht>
			
			<enum 3 location_preamble_type_vht>
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_PREAMBLE_TYPE_OFFSET                  0x00000004
#define RX_LOCATION_INFO_1_RTT_PREAMBLE_TYPE_LSB                     2
#define RX_LOCATION_INFO_1_RTT_PREAMBLE_TYPE_MASK                    0x0000000c

/* Description		RX_LOCATION_INFO_1_PKT_BW
			
			Indicate packet bandwidth, 
			
			<enum 0 location_legacy>
			
			<enum 1 location_pkt_bw_20MHz>
			
			<enum 2 location_pkt_bw_40MHz>
			
			<enum 3 location_pkt_bw_80MHz>
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_PKT_BW_OFFSET                             0x00000004
#define RX_LOCATION_INFO_1_PKT_BW_LSB                                4
#define RX_LOCATION_INFO_1_PKT_BW_MASK                               0x00000030

/* Description		RX_LOCATION_INFO_1_RESERVED
			
*/
#define RX_LOCATION_INFO_1_RESERVED_OFFSET                           0x00000004
#define RX_LOCATION_INFO_1_RESERVED_LSB                              6
#define RX_LOCATION_INFO_1_RESERVED_MASK                             0x00000040

/* Description		RX_LOCATION_INFO_1_RTT_GI_TYPE
			
			Indicate GI (guard interval) type
			
			<enum  0 location_normal_gi>
			
			<enum 1 location_short_gi>
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_GI_TYPE_OFFSET                        0x00000004
#define RX_LOCATION_INFO_1_RTT_GI_TYPE_LSB                           7
#define RX_LOCATION_INFO_1_RTT_GI_TYPE_MASK                          0x00000080

/* Description		RX_LOCATION_INFO_1_SKIP_P_SKIP_BTCF
			
			Coarse/Fine/BTCF timing correction update to be applied
			to fac by SW.
*/
#define RX_LOCATION_INFO_1_SKIP_P_SKIP_BTCF_OFFSET                   0x00000004
#define RX_LOCATION_INFO_1_SKIP_P_SKIP_BTCF_LSB                      8
#define RX_LOCATION_INFO_1_SKIP_P_SKIP_BTCF_MASK                     0x0000ff00

/* Description		RX_LOCATION_INFO_1_RTT_MSC_RATE
			
			Indicate MCS rate, if Legacy, 
			
			0: 48 Mbps, 
			
			1: 24 Mbps, 
			
			2: 12 Mbps, 
			
			3: 6 Mbps, 
			
			4: 54 Mbps, 
			
			5: 36 Mbps, 
			
			6: 18 Mbps, 
			
			7: 9 Mbps, 
			
			if HT, 0~7: MCS0~MCS7, if VHT, 0~9: MCS0~MCS9, 10~15:
			reserved
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_MSC_RATE_OFFSET                       0x00000004
#define RX_LOCATION_INFO_1_RTT_MSC_RATE_LSB                          16
#define RX_LOCATION_INFO_1_RTT_MSC_RATE_MASK                         0x000f0000

/* Description		RX_LOCATION_INFO_1_RTT_PBD_LEG_BW
			
			PBD detected BW of L-LTF: 
			
			<enum 0 location_pbd_leg_bw_20MHz>
			
			<enum 1 location_pbd_leg_bw_40MHz>
			
			<enum 2 location_pbd_leg_bw_80MHz>
			
			<enum 3 location_pbd_leg_bw_160MHz>
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_PBD_LEG_BW_OFFSET                     0x00000004
#define RX_LOCATION_INFO_1_RTT_PBD_LEG_BW_LSB                        20
#define RX_LOCATION_INFO_1_RTT_PBD_LEG_BW_MASK                       0x00300000

/* Description		RX_LOCATION_INFO_1_TIMING_BACKOFF
			
			Timing backoff indication
*/
#define RX_LOCATION_INFO_1_TIMING_BACKOFF_OFFSET                     0x00000004
#define RX_LOCATION_INFO_1_TIMING_BACKOFF_LSB                        22
#define RX_LOCATION_INFO_1_TIMING_BACKOFF_MASK                       0x07c00000

/* Description		RX_LOCATION_INFO_1_RTT_TX_FRAME_PHASE
			
			For BW20 only. If rtt_tx_frame_phase == 2'b11, reduce
			TOA by one MAC clock. Otherwise, don't need to adjust
			timestamp.
*/
#define RX_LOCATION_INFO_1_RTT_TX_FRAME_PHASE_OFFSET                 0x00000004
#define RX_LOCATION_INFO_1_RTT_TX_FRAME_PHASE_LSB                    27
#define RX_LOCATION_INFO_1_RTT_TX_FRAME_PHASE_MASK                   0x18000000

/* Description		RX_LOCATION_INFO_1_RTT_MAC_PHY_PHASE
			
			Record the phase difference between the PHY clock and
			the MAC clock. It's a fix for a known bug related to 80 MHz
			and 160 MHz TOA correction
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_MAC_PHY_PHASE_OFFSET                  0x00000004
#define RX_LOCATION_INFO_1_RTT_MAC_PHY_PHASE_LSB                     29
#define RX_LOCATION_INFO_1_RTT_MAC_PHY_PHASE_MASK                    0x20000000

/* Description		RX_LOCATION_INFO_1_RTT_TX_DATA_START_X_PHASE
			
			Record the phase difference between the 2x clock and the
			80 MHz clock. It's a fix for a known bug related to 20 MHz
			TOD correction
			
			<legal all>
*/
#define RX_LOCATION_INFO_1_RTT_TX_DATA_START_X_PHASE_OFFSET          0x00000004
#define RX_LOCATION_INFO_1_RTT_TX_DATA_START_X_PHASE_LSB             30
#define RX_LOCATION_INFO_1_RTT_TX_DATA_START_X_PHASE_MASK            0x40000000

/* Description		RX_LOCATION_INFO_1_RX_LOCATION_INFO_VALID
			
			<enum 0 rx_location_info_is_not_valid>
			
			<enum 1 rx_location_info_is_valid>
*/
#define RX_LOCATION_INFO_1_RX_LOCATION_INFO_VALID_OFFSET             0x00000004
#define RX_LOCATION_INFO_1_RX_LOCATION_INFO_VALID_LSB                31
#define RX_LOCATION_INFO_1_RX_LOCATION_INFO_VALID_MASK               0x80000000


#endif // _RX_LOCATION_INFO_H_
