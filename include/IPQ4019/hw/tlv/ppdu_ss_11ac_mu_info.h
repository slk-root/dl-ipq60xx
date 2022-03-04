// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _PPDU_SS_11AC_MU_INFO_H_
#define _PPDU_SS_11AC_MU_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	struct l_sig_a l_sig_a_bw20;
//	1	struct l_sig_a l_sig_a_bw40;
//	2	struct l_sig_a l_sig_a_bw80;
//	3-4	struct vht_sig_a vht_sig_a_bw20;
//	5-6	struct vht_sig_a vht_sig_a_bw40;
//	7-8	struct vht_sig_a vht_sig_a_bw80;
//	9	struct vht_sig_b_mu20 vht_sig_b_mu20_user0;
//	10	struct vht_sig_b_mac_mu40 vht_sig_b_mu40_user0;
//	11	struct vht_sig_b_mac_mu80 vht_sig_b_mu80_user0;
//	12	struct vht_sig_b_mu20 vht_sig_b_mu20_user1;
//	13	struct vht_sig_b_mac_mu40 vht_sig_b_mu40_user1;
//	14	struct vht_sig_b_mac_mu80 vht_sig_b_mu80_user1;
//	15	struct vht_sig_b_mu20 vht_sig_b_mu20_user2;
//	16	struct vht_sig_b_mac_mu40 vht_sig_b_mu40_user2;
//	17	struct vht_sig_b_mac_mu80 vht_sig_b_mu80_user2;
//	18	struct tx_service tx_service_bw20;
//	19	struct tx_service tx_service_bw40;
//	20	struct tx_service tx_service_bw80;
//	23-21	struct tx_pcu_info tx_pcu_info_bw20_user0;
//	26-24	struct tx_pcu_info tx_pcu_info_bw40_user0;
//	29-27	struct tx_pcu_info tx_pcu_info_bw80_user0;
//	32-30	struct tx_pcu_info tx_pcu_info_bw20_user1;
//	35-33	struct tx_pcu_info tx_pcu_info_bw40_user1;
//	38-36	struct tx_pcu_info tx_pcu_info_bw80_user1;
//	41-39	struct tx_pcu_info tx_pcu_info_bw20_user2;
//	44-42	struct tx_pcu_info tx_pcu_info_bw40_user2;
//	47-45	struct tx_pcu_info tx_pcu_info_bw80_user2;
//	48	duration_bw20[15:0], duration_bw40[31:16]
//	49	duration_bw80[15:0], reserved_31[31:16]
//	50	pcu_data_threshold_20_user0[3:0], pcu_data_threshold_40_user0[7:4], pcu_data_threshold_80_user0[11:8], pcu_data_threshold_20_user1[15:12], pcu_data_threshold_40_user1[19:16], pcu_data_threshold_80_user1[23:20], pcu_data_threshold_20_user2[27:24], pcu_data_threshold_40_user2[31:28]
//	51	pcu_data_threshold_80_user2[3:0], reserved_24[31:4]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_PPDU_SS_11AC_MU_INFO 52

struct ppdu_ss_11ac_mu_info {
    struct            l_sig_a                       l_sig_a_bw20;
    struct            l_sig_a                       l_sig_a_bw40;
    struct            l_sig_a                       l_sig_a_bw80;
    struct            vht_sig_a                       vht_sig_a_bw20;
    struct            vht_sig_a                       vht_sig_a_bw40;
    struct            vht_sig_a                       vht_sig_a_bw80;
    struct            vht_sig_b_mu20                       vht_sig_b_mu20_user0;
    struct            vht_sig_b_mac_mu40                       vht_sig_b_mu40_user0;
    struct            vht_sig_b_mac_mu80                       vht_sig_b_mu80_user0;
    struct            vht_sig_b_mu20                       vht_sig_b_mu20_user1;
    struct            vht_sig_b_mac_mu40                       vht_sig_b_mu40_user1;
    struct            vht_sig_b_mac_mu80                       vht_sig_b_mu80_user1;
    struct            vht_sig_b_mu20                       vht_sig_b_mu20_user2;
    struct            vht_sig_b_mac_mu40                       vht_sig_b_mu40_user2;
    struct            vht_sig_b_mac_mu80                       vht_sig_b_mu80_user2;
    struct            tx_service                       tx_service_bw20;
    struct            tx_service                       tx_service_bw40;
    struct            tx_service                       tx_service_bw80;
    struct            tx_pcu_info                       tx_pcu_info_bw20_user0;
    struct            tx_pcu_info                       tx_pcu_info_bw40_user0;
    struct            tx_pcu_info                       tx_pcu_info_bw80_user0;
    struct            tx_pcu_info                       tx_pcu_info_bw20_user1;
    struct            tx_pcu_info                       tx_pcu_info_bw40_user1;
    struct            tx_pcu_info                       tx_pcu_info_bw80_user1;
    struct            tx_pcu_info                       tx_pcu_info_bw20_user2;
    struct            tx_pcu_info                       tx_pcu_info_bw40_user2;
    struct            tx_pcu_info                       tx_pcu_info_bw80_user2;
    volatile uint32_t duration_bw20                   : 16, //[15:0]
                      duration_bw40                   : 16; //[31:16]
    volatile uint32_t duration_bw80                   : 16, //[15:0]
                      reserved_31                     : 16; //[31:16]
    volatile uint32_t pcu_data_threshold_20_user0     :  4, //[3:0]
                      pcu_data_threshold_40_user0     :  4, //[7:4]
                      pcu_data_threshold_80_user0     :  4, //[11:8]
                      pcu_data_threshold_20_user1     :  4, //[15:12]
                      pcu_data_threshold_40_user1     :  4, //[19:16]
                      pcu_data_threshold_80_user1     :  4, //[23:20]
                      pcu_data_threshold_20_user2     :  4, //[27:24]
                      pcu_data_threshold_40_user2     :  4; //[31:28]
    volatile uint32_t pcu_data_threshold_80_user2     :  4, //[3:0]
                      reserved_24                     : 28; //[31:4]
};

/*

struct l_sig_a l_sig_a_bw20
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct l_sig_a l_sig_a_bw40
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct l_sig_a l_sig_a_bw80
			
			This field has exactly the same contents as the L_SIG_A
			TLV (without the tag/length word)

struct vht_sig_a vht_sig_a_bw20
			
			VHT_SIG_A field setting for 20 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_A TLV (without the tag/length word)

struct vht_sig_a vht_sig_a_bw40
			
			VHT_SIG_A field setting for 40 MHz transmission
			
			 This field has exactly the same contents as the
			VHT_SIG_A TLV (without the tag/length word)

struct vht_sig_a vht_sig_a_bw80
			
			VHT_SIG_A field setting for 40 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_A TLV (without the tag/length word)

struct vht_sig_b_mu20 vht_sig_b_mu20_user0
			
			VHT_SIG_B field setting for 20 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_B_MU20 TLV (without the tag/length word)

struct vht_sig_b_mac_mu40 vht_sig_b_mu40_user0
			
			VHT_SIG_B field setting for 40 MHz transmission
			
			 This field has exactly the same contents as the
			VHT_SIG_B_MAC_MU40 TLV (without the tag/length word)

struct vht_sig_b_mac_mu80 vht_sig_b_mu80_user0
			
			VHT_SIG_B field setting for 40 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_B_MAC_MU80 TLV (without the tag/length word)

struct vht_sig_b_mu20 vht_sig_b_mu20_user1
			
			VHT_SIG_B field setting for 20 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_B_MU20 TLV (without the tag/length word)

struct vht_sig_b_mac_mu40 vht_sig_b_mu40_user1
			
			VHT_SIG_B field setting for 40 MHz transmission
			
			 This field has exactly the same contents as the
			VHT_SIG_B_MAC_MU40 TLV (without the tag/length word)

struct vht_sig_b_mac_mu80 vht_sig_b_mu80_user1
			
			VHT_SIG_B field setting for 40 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_B_MAC_MU80 TLV (without the tag/length word)

struct vht_sig_b_mu20 vht_sig_b_mu20_user2
			
			VHT_SIG_B field setting for 20 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_B_MU20 TLV (without the tag/length word)

struct vht_sig_b_mac_mu40 vht_sig_b_mu40_user2
			
			VHT_SIG_B field setting for 40 MHz transmission
			
			 This field has exactly the same contents as the
			VHT_SIG_B_MAC_MU40 TLV (without the tag/length word)

struct vht_sig_b_mac_mu80 vht_sig_b_mu80_user2
			
			VHT_SIG_B field setting for 40 MHz transmission
			
			This field has exactly the same contents as the
			VHT_SIG_B_MAC_MU80 TLV (without the tag/length word)

struct tx_service tx_service_bw20
			
			HT SERVICE field setting for 20 MHz transmission
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

struct tx_service tx_service_bw40
			
			HT SERVICE field setting for 40 MHz transmission
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

struct tx_service tx_service_bw80
			
			HT SERVICE field setting for 80 MHz transmission
			
			This field has exactly the same contents as the
			TX_SERVICE TLV (without the tag/length word)

struct tx_pcu_info tx_pcu_info_bw20_user0
			
			Info for tx_pcu for 20 MHz BW for user0

struct tx_pcu_info tx_pcu_info_bw40_user0
			
			Info for tx_pcu for 40 MHz BW for user0

struct tx_pcu_info tx_pcu_info_bw80_user0
			
			Info for tx_pcu for 80 MHz BW for user0

struct tx_pcu_info tx_pcu_info_bw20_user1
			
			Info for tx_pcu for 20 MHz BW for user1

struct tx_pcu_info tx_pcu_info_bw40_user1
			
			Info for tx_pcu for 40 MHz BW for user1

struct tx_pcu_info tx_pcu_info_bw80_user1
			
			Info for tx_pcu for 80 MHz BW for user1

struct tx_pcu_info tx_pcu_info_bw20_user2
			
			Info for tx_pcu for 20 MHz BW for user2

struct tx_pcu_info tx_pcu_info_bw40_user2
			
			Info for tx_pcu for 40 MHz BW for user2

struct tx_pcu_info tx_pcu_info_bw80_user2
			
			Info for tx_pcu for 80 MHz BW for user2

duration_bw20
			
			Duration field value to be inserted in the MPDUs when
			transmitting at 20 MHz BW.
			
			<legal all>

duration_bw40
			
			Duration field value to be inserted in the MPDUs when
			transmitting at 40 MHz BW
			
			<legal all>

duration_bw80
			
			Duration field value to be inserted in the MPDUs when
			transmitting at 80 MHz BW
			
			<legal all>

reserved_31
			
			<legal 0>

pcu_data_threshold_20_user0
			
			Field only used in case of 20 MHz transmission.
			
			Applicable for user 0 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_40_user0
			
			Field only used in case of 40 MHz transmission.
			
			Applicable for user 0 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_80_user0
			
			Field only used in case of 80 MHz transmission.
			
			Applicable for user 0 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_20_user1
			
			Field only used in case of 20 MHz transmission.
			
			Applicable for user 1 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_40_user1
			
			Field only used in case of 40 MHz transmission.
			
			Applicable for user 1 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_80_user1
			
			Field only used in case of 80 MHz transmission.
			
			Applicable for user 1 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_20_user2
			
			Field only used in case of 20 MHz transmission.
			
			Applicable for user 2 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_40_user2
			
			Field only used in case of 40 MHz transmission.
			
			Applicable for user 2 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

pcu_data_threshold_80_user2
			
			Field only used in case of 80 MHz transmission.
			
			Applicable for user 2 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>

reserved_24
			
			<legal 0>
*/

#define PPDU_SS_11AC_MU_INFO_0_L_SIG_A_L_SIG_A_BW20_OFFSET           0x00000000
#define PPDU_SS_11AC_MU_INFO_0_L_SIG_A_L_SIG_A_BW20_LSB              4
#define PPDU_SS_11AC_MU_INFO_0_L_SIG_A_L_SIG_A_BW20_MASK             0xffffffff
#define PPDU_SS_11AC_MU_INFO_1_L_SIG_A_L_SIG_A_BW40_OFFSET           0x00000004
#define PPDU_SS_11AC_MU_INFO_1_L_SIG_A_L_SIG_A_BW40_LSB              4
#define PPDU_SS_11AC_MU_INFO_1_L_SIG_A_L_SIG_A_BW40_MASK             0xffffffff
#define PPDU_SS_11AC_MU_INFO_2_L_SIG_A_L_SIG_A_BW80_OFFSET           0x00000008
#define PPDU_SS_11AC_MU_INFO_2_L_SIG_A_L_SIG_A_BW80_LSB              4
#define PPDU_SS_11AC_MU_INFO_2_L_SIG_A_L_SIG_A_BW80_MASK             0xffffffff
#define PPDU_SS_11AC_MU_INFO_3_VHT_SIG_A_VHT_SIG_A_BW20_OFFSET       0x0000000c
#define PPDU_SS_11AC_MU_INFO_3_VHT_SIG_A_VHT_SIG_A_BW20_LSB          4
#define PPDU_SS_11AC_MU_INFO_3_VHT_SIG_A_VHT_SIG_A_BW20_MASK         0xffffffff
#define PPDU_SS_11AC_MU_INFO_4_VHT_SIG_A_VHT_SIG_A_BW20_OFFSET       0x00000010
#define PPDU_SS_11AC_MU_INFO_4_VHT_SIG_A_VHT_SIG_A_BW20_LSB          4
#define PPDU_SS_11AC_MU_INFO_4_VHT_SIG_A_VHT_SIG_A_BW20_MASK         0xffffffff
#define PPDU_SS_11AC_MU_INFO_5_VHT_SIG_A_VHT_SIG_A_BW40_OFFSET       0x00000014
#define PPDU_SS_11AC_MU_INFO_5_VHT_SIG_A_VHT_SIG_A_BW40_LSB          4
#define PPDU_SS_11AC_MU_INFO_5_VHT_SIG_A_VHT_SIG_A_BW40_MASK         0xffffffff
#define PPDU_SS_11AC_MU_INFO_6_VHT_SIG_A_VHT_SIG_A_BW40_OFFSET       0x00000018
#define PPDU_SS_11AC_MU_INFO_6_VHT_SIG_A_VHT_SIG_A_BW40_LSB          4
#define PPDU_SS_11AC_MU_INFO_6_VHT_SIG_A_VHT_SIG_A_BW40_MASK         0xffffffff
#define PPDU_SS_11AC_MU_INFO_7_VHT_SIG_A_VHT_SIG_A_BW80_OFFSET       0x0000001c
#define PPDU_SS_11AC_MU_INFO_7_VHT_SIG_A_VHT_SIG_A_BW80_LSB          4
#define PPDU_SS_11AC_MU_INFO_7_VHT_SIG_A_VHT_SIG_A_BW80_MASK         0xffffffff
#define PPDU_SS_11AC_MU_INFO_8_VHT_SIG_A_VHT_SIG_A_BW80_OFFSET       0x00000020
#define PPDU_SS_11AC_MU_INFO_8_VHT_SIG_A_VHT_SIG_A_BW80_LSB          4
#define PPDU_SS_11AC_MU_INFO_8_VHT_SIG_A_VHT_SIG_A_BW80_MASK         0xffffffff
#define PPDU_SS_11AC_MU_INFO_9_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER0_OFFSET 0x00000024
#define PPDU_SS_11AC_MU_INFO_9_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER0_LSB 4
#define PPDU_SS_11AC_MU_INFO_9_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER0_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_10_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER0_OFFSET 0x00000028
#define PPDU_SS_11AC_MU_INFO_10_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER0_LSB 4
#define PPDU_SS_11AC_MU_INFO_10_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER0_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_11_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER0_OFFSET 0x0000002c
#define PPDU_SS_11AC_MU_INFO_11_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER0_LSB 4
#define PPDU_SS_11AC_MU_INFO_11_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER0_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_12_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER1_OFFSET 0x00000030
#define PPDU_SS_11AC_MU_INFO_12_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER1_LSB 4
#define PPDU_SS_11AC_MU_INFO_12_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER1_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_13_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER1_OFFSET 0x00000034
#define PPDU_SS_11AC_MU_INFO_13_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER1_LSB 4
#define PPDU_SS_11AC_MU_INFO_13_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER1_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_14_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER1_OFFSET 0x00000038
#define PPDU_SS_11AC_MU_INFO_14_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER1_LSB 4
#define PPDU_SS_11AC_MU_INFO_14_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER1_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_15_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER2_OFFSET 0x0000003c
#define PPDU_SS_11AC_MU_INFO_15_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER2_LSB 4
#define PPDU_SS_11AC_MU_INFO_15_VHT_SIG_B_MU20_VHT_SIG_B_MU20_USER2_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_16_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER2_OFFSET 0x00000040
#define PPDU_SS_11AC_MU_INFO_16_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER2_LSB 4
#define PPDU_SS_11AC_MU_INFO_16_VHT_SIG_B_MAC_MU40_VHT_SIG_B_MU40_USER2_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_17_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER2_OFFSET 0x00000044
#define PPDU_SS_11AC_MU_INFO_17_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER2_LSB 4
#define PPDU_SS_11AC_MU_INFO_17_VHT_SIG_B_MAC_MU80_VHT_SIG_B_MU80_USER2_MASK 0xffffffff
#define PPDU_SS_11AC_MU_INFO_18_TX_SERVICE_TX_SERVICE_BW20_OFFSET    0x00000048
#define PPDU_SS_11AC_MU_INFO_18_TX_SERVICE_TX_SERVICE_BW20_LSB       4
#define PPDU_SS_11AC_MU_INFO_18_TX_SERVICE_TX_SERVICE_BW20_MASK      0xffffffff
#define PPDU_SS_11AC_MU_INFO_19_TX_SERVICE_TX_SERVICE_BW40_OFFSET    0x0000004c
#define PPDU_SS_11AC_MU_INFO_19_TX_SERVICE_TX_SERVICE_BW40_LSB       4
#define PPDU_SS_11AC_MU_INFO_19_TX_SERVICE_TX_SERVICE_BW40_MASK      0xffffffff
#define PPDU_SS_11AC_MU_INFO_20_TX_SERVICE_TX_SERVICE_BW80_OFFSET    0x00000050
#define PPDU_SS_11AC_MU_INFO_20_TX_SERVICE_TX_SERVICE_BW80_LSB       4
#define PPDU_SS_11AC_MU_INFO_20_TX_SERVICE_TX_SERVICE_BW80_MASK      0xffffffff

/* Description		PPDU_SS_11AC_MU_INFO_48_DURATION_BW20
			
			Duration field value to be inserted in the MPDUs when
			transmitting at 20 MHz BW.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_48_DURATION_BW20_OFFSET                 0x000000c0
#define PPDU_SS_11AC_MU_INFO_48_DURATION_BW20_LSB                    0
#define PPDU_SS_11AC_MU_INFO_48_DURATION_BW20_MASK                   0x0000ffff

/* Description		PPDU_SS_11AC_MU_INFO_48_DURATION_BW40
			
			Duration field value to be inserted in the MPDUs when
			transmitting at 40 MHz BW
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_48_DURATION_BW40_OFFSET                 0x000000c0
#define PPDU_SS_11AC_MU_INFO_48_DURATION_BW40_LSB                    16
#define PPDU_SS_11AC_MU_INFO_48_DURATION_BW40_MASK                   0xffff0000

/* Description		PPDU_SS_11AC_MU_INFO_49_DURATION_BW80
			
			Duration field value to be inserted in the MPDUs when
			transmitting at 80 MHz BW
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_49_DURATION_BW80_OFFSET                 0x000000c4
#define PPDU_SS_11AC_MU_INFO_49_DURATION_BW80_LSB                    0
#define PPDU_SS_11AC_MU_INFO_49_DURATION_BW80_MASK                   0x0000ffff

/* Description		PPDU_SS_11AC_MU_INFO_49_RESERVED_31
			
			<legal 0>
*/
#define PPDU_SS_11AC_MU_INFO_49_RESERVED_31_OFFSET                   0x000000c4
#define PPDU_SS_11AC_MU_INFO_49_RESERVED_31_LSB                      16
#define PPDU_SS_11AC_MU_INFO_49_RESERVED_31_MASK                     0xffff0000

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER0
			
			Field only used in case of 20 MHz transmission.
			
			Applicable for user 0 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER0_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER0_LSB      0
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER0_MASK     0x0000000f

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER0
			
			Field only used in case of 40 MHz transmission.
			
			Applicable for user 0 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER0_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER0_LSB      4
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER0_MASK     0x000000f0

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER0
			
			Field only used in case of 80 MHz transmission.
			
			Applicable for user 0 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER0_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER0_LSB      8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER0_MASK     0x00000f00

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER1
			
			Field only used in case of 20 MHz transmission.
			
			Applicable for user 1 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER1_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER1_LSB      12
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER1_MASK     0x0000f000

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER1
			
			Field only used in case of 40 MHz transmission.
			
			Applicable for user 1 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER1_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER1_LSB      16
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER1_MASK     0x000f0000

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER1
			
			Field only used in case of 80 MHz transmission.
			
			Applicable for user 1 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER1_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER1_LSB      20
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_80_USER1_MASK     0x00f00000

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER2
			
			Field only used in case of 20 MHz transmission.
			
			Applicable for user 2 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER2_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER2_LSB      24
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_20_USER2_MASK     0x0f000000

/* Description		PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER2
			
			Field only used in case of 40 MHz transmission.
			
			Applicable for user 2 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER2_OFFSET   0x000000c8
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER2_LSB      28
#define PPDU_SS_11AC_MU_INFO_50_PCU_DATA_THRESHOLD_40_USER2_MASK     0xf0000000

/* Description		PPDU_SS_11AC_MU_INFO_51_PCU_DATA_THRESHOLD_80_USER2
			
			Field only used in case of 80 MHz transmission.
			
			Applicable for user 2 only.
			
			The minimum amount of MPDU data present in the TX PCU
			buffer, before TX PCU allows this MPDU data to transfer to
			the PHY. This threshold prevents or reduces data underrun
			conditions during an MPDU transmission. 
			
			If an entire MPDU frame is present in the TX PCU buffer
			that is smaller than this threshold value, this threshold is
			ignored, and MPDU data transfer to the PHY is allowed to
			start.
			
			In units of 256 bytes, except for value 0xF, which means
			that only when the entire frame is present in the TX PCU
			buffer, the transmission is allowed to start.
			
			<legal all>
*/
#define PPDU_SS_11AC_MU_INFO_51_PCU_DATA_THRESHOLD_80_USER2_OFFSET   0x000000cc
#define PPDU_SS_11AC_MU_INFO_51_PCU_DATA_THRESHOLD_80_USER2_LSB      0
#define PPDU_SS_11AC_MU_INFO_51_PCU_DATA_THRESHOLD_80_USER2_MASK     0x0000000f

/* Description		PPDU_SS_11AC_MU_INFO_51_RESERVED_24
			
			<legal 0>
*/
#define PPDU_SS_11AC_MU_INFO_51_RESERVED_24_OFFSET                   0x000000cc
#define PPDU_SS_11AC_MU_INFO_51_RESERVED_24_LSB                      4
#define PPDU_SS_11AC_MU_INFO_51_RESERVED_24_MASK                     0xfffffff0


#endif // _PPDU_SS_11AC_MU_INFO_H_
