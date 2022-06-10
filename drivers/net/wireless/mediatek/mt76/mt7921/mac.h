/* SPDX-License-Identifier: ISC */
/* Copyright (C) 2020 MediaTek Inc. */

#ifndef __MT7921_MAC_H
#define __MT7921_MAC_H

#define MT_CT_PARSE_LEN			72
#define MT_CT_DMA_BUF_NUM		2

#define MT_RXD0_LENGTH			GENMASK(15, 0)
#define MT_RXD0_PKT_FLAG                GENMASK(19, 16)
#define MT_RXD0_PKT_TYPE		GENMASK(31, 27)

#define MT_RXD0_NORMAL_ETH_TYPE_OFS	GENMASK(22, 16)
#define MT_RXD0_NORMAL_IP_SUM		BIT(23)
#define MT_RXD0_NORMAL_UDP_TCP_SUM	BIT(24)

enum rx_pkt_type {
	PKT_TYPE_TXS,
	PKT_TYPE_TXRXV,
	PKT_TYPE_NORMAL,
	PKT_TYPE_RX_DUP_RFB,
	PKT_TYPE_RX_TMR,
	PKT_TYPE_RETRIEVE,
	PKT_TYPE_TXRX_NOTIFY,
	PKT_TYPE_RX_EVENT,
	PKT_TYPE_NORMAL_MCU,
};

/* RXD DW1 */
#define MT_RXD1_NORMAL_WLAN_IDX		GENMASK(9, 0)
#define MT_RXD1_NORMAL_GROUP_1		BIT(11)
#define MT_RXD1_NORMAL_GROUP_2		BIT(12)
#define MT_RXD1_NORMAL_GROUP_3		BIT(13)
#define MT_RXD1_NORMAL_GROUP_4		BIT(14)
#define MT_RXD1_NORMAL_GROUP_5		BIT(15)
#define MT_RXD1_NORMAL_SEC_MODE		GENMASK(20, 16)
#define MT_RXD1_NORMAL_KEY_ID		GENMASK(22, 21)
#define MT_RXD1_NORMAL_CM		BIT(23)
#define MT_RXD1_NORMAL_CLM		BIT(24)
#define MT_RXD1_NORMAL_ICV_ERR		BIT(25)
#define MT_RXD1_NORMAL_TKIP_MIC_ERR	BIT(26)
#define MT_RXD1_NORMAL_FCS_ERR		BIT(27)
#define MT_RXD1_NORMAL_BAND_IDX		BIT(28)
#define MT_RXD1_NORMAL_SPP_EN		BIT(29)
#define MT_RXD1_NORMAL_ADD_OM		BIT(30)
#define MT_RXD1_NORMAL_SEC_DONE		BIT(31)

/* RXD DW2 */
#define MT_RXD2_NORMAL_BSSID		GENMASK(5, 0)
#define MT_RXD2_NORMAL_CO_ANT		BIT(6)
#define MT_RXD2_NORMAL_BF_CQI		BIT(7)
#define MT_RXD2_NORMAL_MAC_HDR_LEN	GENMASK(12, 8)
#define MT_RXD2_NORMAL_HDR_TRANS	BIT(13)
#define MT_RXD2_NORMAL_HDR_OFFSET	GENMASK(15, 14)
#define MT_RXD2_NORMAL_TID		GENMASK(19, 16)
#define MT_RXD2_NORMAL_MU_BAR		BIT(21)
#define MT_RXD2_NORMAL_SW_BIT		BIT(22)
#define MT_RXD2_NORMAL_AMSDU_ERR	BIT(23)
#define MT_RXD2_NORMAL_MAX_LEN_ERROR	BIT(24)
#define MT_RXD2_NORMAL_HDR_TRANS_ERROR	BIT(25)
#define MT_RXD2_NORMAL_INT_FRAME	BIT(26)
#define MT_RXD2_NORMAL_FRAG		BIT(27)
#define MT_RXD2_NORMAL_NULL_FRAME	BIT(28)
#define MT_RXD2_NORMAL_NDATA		BIT(29)
#define MT_RXD2_NORMAL_NON_AMPDU	BIT(30)
#define MT_RXD2_NORMAL_BF_REPORT	BIT(31)

/* RXD DW3 */
#define MT_RXD3_NORMAL_RXV_SEQ		GENMASK(7, 0)
#define MT_RXD3_NORMAL_CH_FREQ		GENMASK(15, 8)
#define MT_RXD3_NORMAL_ADDR_TYPE	GENMASK(17, 16)
#define MT_RXD3_NORMAL_U2M		BIT(0)
#define MT_RXD3_NORMAL_HTC_VLD		BIT(0)
#define MT_RXD3_NORMAL_TSF_COMPARE_LOSS	BIT(19)
#define MT_RXD3_NORMAL_BEACON_MC	BIT(20)
#define MT_RXD3_NORMAL_BEACON_UC	BIT(21)
#define MT_RXD3_NORMAL_AMSDU		BIT(22)
#define MT_RXD3_NORMAL_MESH		BIT(23)
#define MT_RXD3_NORMAL_MHCP		BIT(24)
#define MT_RXD3_NORMAL_NO_INFO_WB	BIT(25)
#define MT_RXD3_NORMAL_DISABLE_RX_HDR_TRANS	BIT(26)
#define MT_RXD3_NORMAL_POWER_SAVE_STAT	BIT(27)
#define MT_RXD3_NORMAL_MORE		BIT(28)
#define MT_RXD3_NORMAL_UNWANT		BIT(29)
#define MT_RXD3_NORMAL_RX_DROP		BIT(30)
#define MT_RXD3_NORMAL_VLAN2ETH		BIT(31)

/* RXD DW4 */
#define MT_RXD4_NORMAL_PAYLOAD_FORMAT	GENMASK(1, 0)
#define MT_RXD4_FIRST_AMSDU_FRAME	GENMASK(1, 0)
#define MT_RXD4_MID_AMSDU_FRAME		BIT(1)
#define MT_RXD4_LAST_AMSDU_FRAME	BIT(0)
#define MT_RXD4_NORMAL_PATTERN_DROP	BIT(9)
#define MT_RXD4_NORMAL_CLS		BIT(10)
#define MT_RXD4_NORMAL_OFLD		GENMASK(12, 11)
#define MT_RXD4_NORMAL_MAGIC_PKT	BIT(13)
#define MT_RXD4_NORMAL_WOL		GENMASK(18, 14)
#define MT_RXD4_NORMAL_CLS_BITMAP	GENMASK(28, 19)
#define MT_RXD3_NORMAL_PF_MODE		BIT(29)
#define MT_RXD3_NORMAL_PF_STS		GENMASK(31, 30)

/* RXD GROUP4 */
#define MT_RXD6_FRAME_CONTROL		GENMASK(15, 0)
#define MT_RXD6_TA_LO			GENMASK(31, 16)

#define MT_RXD7_TA_HI			GENMASK(31, 0)

#define MT_RXD8_SEQ_CTRL		GENMASK(15, 0)
#define MT_RXD8_QOS_CTL			GENMASK(31, 16)

#define MT_RXD9_HT_CONTROL		GENMASK(31, 0)

/* P-RXV DW0 */
#define MT_PRXV_TX_RATE			GENMASK(6, 0)
#define MT_PRXV_TX_DCM			BIT(4)
#define MT_PRXV_TX_ER_SU_106T		BIT(5)
#define MT_PRXV_NSTS			GENMASK(9, 7)
#define MT_PRXV_TXBF			BIT(10)
#define MT_PRXV_HT_AD_CODE		BIT(11)
#define MT_PRXV_FRAME_MODE		GENMASK(14, 12)
#define MT_PRXV_SGI			GENMASK(16, 15)
#define MT_PRXV_STBC			GENMASK(23, 22)
#define MT_PRXV_TX_MODE			GENMASK(27, 24)
#define MT_PRXV_HE_RU_ALLOC_L		GENMASK(31, 28)

/* P-RXV DW1 */
#define MT_PRXV_RCPI3			GENMASK(31, 24)
#define MT_PRXV_RCPI2			GENMASK(23, 16)
#define MT_PRXV_RCPI1			GENMASK(15, 8)
#define MT_PRXV_RCPI0			GENMASK(7, 0)
#define MT_PRXV_HE_RU_ALLOC_H		GENMASK(3, 0)

/* C-RXV */
#define MT_CRXV_HT_STBC			GENMASK(1, 0)
#define MT_CRXV_TX_MODE			GENMASK(7, 4)
#define MT_CRXV_FRAME_MODE		GENMASK(10, 8)
#define MT_CRXV_HT_SHORT_GI		GENMASK(14, 13)
#define MT_CRXV_HE_LTF_SIZE		GENMASK(18, 17)
#define MT_CRXV_HE_LDPC_EXT_SYM		BIT(20)
#define MT_CRXV_HE_PE_DISAMBIG		BIT(23)
#define MT_CRXV_HE_NUM_USER		GENMASK(30, 24)
#define MT_CRXV_HE_UPLINK		BIT(31)

#define MT_CRXV_HE_RU0			GENMASK(7, 0)
#define MT_CRXV_HE_RU1			GENMASK(15, 8)
#define MT_CRXV_HE_RU2			GENMASK(23, 16)
#define MT_CRXV_HE_RU3			GENMASK(31, 24)
#define MT_CRXV_HE_MU_AID		GENMASK(30, 20)

#define MT_CRXV_HE_SR_MASK		GENMASK(11, 8)
#define MT_CRXV_HE_SR1_MASK		GENMASK(16, 12)
#define MT_CRXV_HE_SR2_MASK             GENMASK(20, 17)
#define MT_CRXV_HE_SR3_MASK             GENMASK(24, 21)

#define MT_CRXV_HE_BSS_COLOR		GENMASK(5, 0)
#define MT_CRXV_HE_TXOP_DUR		GENMASK(12, 6)
#define MT_CRXV_HE_BEAM_CHNG		BIT(13)
#define MT_CRXV_HE_DOPPLER		BIT(16)

#define MT_CRXV_SNR		GENMASK(18, 13)
#define MT_CRXV_FOE_LO		GENMASK(31, 19)
#define MT_CRXV_FOE_HI		GENMASK(6, 0)
#define MT_CRXV_FOE_SHIFT	13

enum tx_header_format {
	MT_HDR_FORMAT_802_3,
	MT_HDR_FORMAT_CMD,
	MT_HDR_FORMAT_802_11,
	MT_HDR_FORMAT_802_11_EXT,
};

enum tx_pkt_type {
	MT_TX_TYPE_CT,
	MT_TX_TYPE_SF,
	MT_TX_TYPE_CMD,
	MT_TX_TYPE_FW,
};

enum tx_port_idx {
	MT_TX_PORT_IDX_LMAC,
	MT_TX_PORT_IDX_MCU
};

enum tx_mcu_port_q_idx {
	MT_TX_MCU_PORT_RX_Q0 = 0x20,
	MT_TX_MCU_PORT_RX_Q1,
	MT_TX_MCU_PORT_RX_Q2,
	MT_TX_MCU_PORT_RX_Q3,
	MT_TX_MCU_PORT_RX_FWDL = 0x3e
};

#define MT_CT_INFO_APPLY_TXD		BIT(0)
#define MT_CT_INFO_COPY_HOST_TXD_ALL	BIT(1)
#define MT_CT_INFO_MGMT_FRAME		BIT(2)
#define MT_CT_INFO_NONE_CIPHER_FRAME	BIT(3)
#define MT_CT_INFO_HSR2_TX		BIT(4)
#define MT_CT_INFO_FROM_HOST		BIT(7)

#define MT_TXD_SIZE			(8 * 4)

#define MT_SDIO_TXD_SIZE		(MT_TXD_SIZE + 8 * 4)
#define MT_SDIO_TAIL_SIZE		8
#define MT_SDIO_HDR_SIZE		4

#define MT_TXD0_Q_IDX			GENMASK(31, 25)
#define MT_TXD0_PKT_FMT			GENMASK(24, 23)
#define MT_TXD0_ETH_TYPE_OFFSET		GENMASK(22, 16)
#define MT_TXD0_TX_BYTES		GENMASK(15, 0)

#define MT_TXD1_LONG_FORMAT		BIT(31)
#define MT_TXD1_TGID			BIT(30)
#define MT_TXD1_OWN_MAC			GENMASK(29, 24)
#define MT_TXD1_AMSDU			BIT(23)
#define MT_TXD1_TID			GENMASK(22, 20)
#define MT_TXD1_HDR_PAD			GENMASK(19, 18)
#define MT_TXD1_HDR_FORMAT		GENMASK(17, 16)
#define MT_TXD1_HDR_INFO		GENMASK(15, 11)
#define MT_TXD1_ETH_802_3		BIT(15)
#define MT_TXD1_VTA			BIT(10)
#define MT_TXD1_WLAN_IDX		GENMASK(9, 0)

#define MT_TXD2_FIX_RATE		BIT(31)
#define MT_TXD2_FIXED_RATE		BIT(30)
#define MT_TXD2_POWER_OFFSET		GENMASK(29, 24)
#define MT_TXD2_MAX_TX_TIME		GENMASK(23, 16)
#define MT_TXD2_FRAG			GENMASK(15, 14)
#define MT_TXD2_HTC_VLD			BIT(13)
#define MT_TXD2_DURATION		BIT(12)
#define MT_TXD2_BIP			BIT(11)
#define MT_TXD2_MULTICAST		BIT(10)
#define MT_TXD2_RTS			BIT(9)
#define MT_TXD2_SOUNDING		BIT(8)
#define MT_TXD2_NDPA			BIT(7)
#define MT_TXD2_NDP			BIT(6)
#define MT_TXD2_FRAME_TYPE		GENMASK(5, 4)
#define MT_TXD2_SUB_TYPE		GENMASK(3, 0)

#define MT_TXD3_SN_VALID		BIT(31)
#define MT_TXD3_PN_VALID		BIT(30)
#define MT_TXD3_SW_POWER_MGMT		BIT(29)
#define MT_TXD3_BA_DISABLE		BIT(28)
#define MT_TXD3_SEQ			GENMASK(27, 16)
#define MT_TXD3_REM_TX_COUNT		GENMASK(15, 11)
#define MT_TXD3_TX_COUNT		GENMASK(10, 6)
#define MT_TXD3_TIMING_MEASURE		BIT(5)
#define MT_TXD3_DAS			BIT(4)
#define MT_TXD3_EEOSP			BIT(3)
#define MT_TXD3_EMRD			BIT(2)
#define MT_TXD3_PROTECT_FRAME		BIT(1)
#define MT_TXD3_NO_ACK			BIT(0)

#define MT_TXD4_PN_LOW			GENMASK(31, 0)

#define MT_TXD5_PN_HIGH			GENMASK(31, 16)
#define MT_TXD5_MD			BIT(15)
#define MT_TXD5_ADD_BA			BIT(14)
#define MT_TXD5_TX_STATUS_HOST		BIT(10)
#define MT_TXD5_TX_STATUS_MCU		BIT(9)
#define MT_TXD5_TX_STATUS_FMT		BIT(8)
#define MT_TXD5_PID			GENMASK(7, 0)

#define MT_TXD6_TX_IBF			BIT(31)
#define MT_TXD6_TX_EBF			BIT(30)
#define MT_TXD6_TX_RATE			GENMASK(29, 16)
#define MT_TXD6_SGI			GENMASK(15, 14)
#define MT_TXD6_HELTF			GENMASK(13, 12)
#define MT_TXD6_LDPC			BIT(11)
#define MT_TXD6_SPE_ID_IDX		BIT(10)
#define MT_TXD6_ANT_ID			GENMASK(7, 4)
#define MT_TXD6_DYN_BW			BIT(3)
#define MT_TXD6_FIXED_BW		BIT(2)
#define MT_TXD6_BW			GENMASK(1, 0)

#define MT_TXD7_TXD_LEN			GENMASK(31, 30)
#define MT_TXD7_UDP_TCP_SUM		BIT(29)
#define MT_TXD7_IP_SUM			BIT(28)

#define MT_TXD7_TYPE			GENMASK(21, 20)
#define MT_TXD7_SUB_TYPE		GENMASK(19, 16)

#define MT_TXD7_PSE_FID			GENMASK(27, 16)
#define MT_TXD7_SPE_IDX			GENMASK(15, 11)
#define MT_TXD7_HW_AMSDU		BIT(10)
#define MT_TXD7_TX_TIME			GENMASK(9, 0)

#define MT_TXD8_L_TYPE			GENMASK(5, 4)
#define MT_TXD8_L_SUB_TYPE		GENMASK(3, 0)

#define MT_TX_RATE_STBC			BIT(13)
#define MT_TX_RATE_NSS			GENMASK(12, 10)
#define MT_TX_RATE_MODE			GENMASK(9, 6)
#define MT_TX_RATE_SU_EXT_TONE		BIT(5)
#define MT_TX_RATE_DCM			BIT(4)
#define MT_TX_RATE_IDX			GENMASK(3, 0)

#define MT_TXP_MAX_BUF_NUM		6

struct mt7921_txp {
	__le16 flags;
	__le16 token;
	u8 bss_idx;
	__le16 rept_wds_wcid;
	u8 nbuf;
	__le32 buf[MT_TXP_MAX_BUF_NUM];
	__le16 len[MT_TXP_MAX_BUF_NUM];
} __packed __aligned(4);

struct mt7921_tx_free {
	__le16 rx_byte_cnt;
	__le16 ctrl;
	u8 txd_cnt;
	u8 rsv[3];
	__le32 info[];
} __packed __aligned(4);

#define MT_TX_FREE_MSDU_CNT		GENMASK(9, 0)
#define MT_TX_FREE_WLAN_ID		GENMASK(23, 14)
#define MT_TX_FREE_LATENCY		GENMASK(12, 0)
/* 0: success, others: dropped */
#define MT_TX_FREE_STATUS		GENMASK(14, 13)
#define MT_TX_FREE_MSDU_ID		GENMASK(30, 16)
#define MT_TX_FREE_PAIR			BIT(31)
/* will support this field in further revision */
#define MT_TX_FREE_RATE			GENMASK(13, 0)

#define MT_TXS0_BW			GENMASK(30, 29)
#define MT_TXS0_TXS_FORMAT		GENMASK(24, 23)
#define MT_TXS0_ACK_ERROR_MASK		GENMASK(18, 16)
#define MT_TXS0_TX_RATE			GENMASK(13, 0)

#define MT_TXS2_WCID			GENMASK(25, 16)

#define MT_TXS3_PID			GENMASK(31, 24)

static inline struct mt7921_txp_common *
mt7921_txwi_to_txp(struct mt76_dev *dev, struct mt76_txwi_cache *t)
{
	u8 *txwi;

	if (!t)
		return NULL;

	txwi = mt76_get_txwi_ptr(dev, t);

	return (struct mt7921_txp_common *)(txwi + MT_TXD_SIZE);
}

#define MT_HW_TXP_MAX_MSDU_NUM		4
#define MT_HW_TXP_MAX_BUF_NUM		4

#define MT_MSDU_ID_VALID		BIT(15)

#define MT_TXD_LEN_MASK			GENMASK(11, 0)
#define MT_TXD_LEN_MSDU_LAST		BIT(14)
#define MT_TXD_LEN_AMSDU_LAST		BIT(15)
#define MT_TXD_LEN_LAST			BIT(15)

struct mt7921_txp_ptr {
	__le32 buf0;
	__le16 len0;
	__le16 len1;
	__le32 buf1;
} __packed __aligned(4);

struct mt7921_hw_txp {
	__le16 msdu_id[MT_HW_TXP_MAX_MSDU_NUM];
	struct mt7921_txp_ptr ptr[MT_HW_TXP_MAX_BUF_NUM / 2];
} __packed __aligned(4);

struct mt7921_txp_common {
	union {
		struct mt7921_hw_txp hw;
	};
};

#define MT_WTBL_TXRX_CAP_RATE_OFFSET	7
#define MT_WTBL_TXRX_RATE_G2_HE		24
#define MT_WTBL_TXRX_RATE_G2		12

#define MT_WTBL_AC0_CTT_OFFSET		20

static inline u32 mt7921_mac_wtbl_lmac_addr(int idx, u8 offset)
{
	return MT_WTBL_LMAC_OFFS(idx, 0) + offset * 4;
}

#endif
