/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-pmd.pl
 *
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 *
 * This file provides TXPMD access functions for BCM56996_B0.
 *
 ******************************************************************************/

#include <sal/sal_types.h>
#include <bcmpkt/bcmpkt_txpmd_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))
/*******************************************************************************
 * SWFORMAT:  TXPMD
 * BLOCKS:
 * SIZE:     128
 ******************************************************************************/
static void bcmpkt_txpmd_start_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 30, 2, val);
}

static uint32_t bcmpkt_txpmd_start_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 30, 2);
    return val;
}

static void bcmpkt_txpmd_header_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 24, 6, val);
}

static uint32_t bcmpkt_txpmd_header_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 24, 6);
    return val;
}

static void bcmpkt_txpmd_pkt_length_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 10, 14, val);
}

static uint32_t bcmpkt_txpmd_pkt_length_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 10, 14);
    return val;
}

static void bcmpkt_txpmd_ipcf_ptr_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 24, 8, val);
}

static uint32_t bcmpkt_txpmd_ipcf_ptr_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 24, 8);
    return val;
}

static void bcmpkt_txpmd_sop_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 9, 1, val);
}

static uint32_t bcmpkt_txpmd_sop_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 9, 1);
    return val;
}

static void bcmpkt_txpmd_eop_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 8, 1, val);
}

static uint32_t bcmpkt_txpmd_eop_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 8, 1);
    return val;
}

static void bcmpkt_txpmd_cell_length_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 0, 8, val);
}

static uint32_t bcmpkt_txpmd_cell_length_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 0, 8);
    return val;
}

static void bcmpkt_txpmd_cell_error_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 20, 1, val);
}

static uint32_t bcmpkt_txpmd_cell_error_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 20, 1);
    return val;
}

static void bcmpkt_txpmd_local_dest_port_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 31, 1, val & MASK(1));
    WORD_FIELD_SET(data[1], 0, 8, (val >> 1) & MASK(8));
}

static uint32_t bcmpkt_txpmd_local_dest_port_get(uint32_t *data)
{
    uint32_t val;
    val = (WORD_FIELD_GET(data[2], 31, 1) | (WORD_FIELD_GET(data[1], 0, 8) << 1)) ;
    return val;
}

static void bcmpkt_txpmd_src_modid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 0, 8, val);
}

static uint32_t bcmpkt_txpmd_src_modid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 0, 8);
    return val;
}

static void bcmpkt_txpmd_cos_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 8, 6, val);
}

static uint32_t bcmpkt_txpmd_cos_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 8, 6);
    return val;
}

static void bcmpkt_txpmd_input_pri_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 25, 4, val);
}

static uint32_t bcmpkt_txpmd_input_pri_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 25, 4);
    return val;
}

static void bcmpkt_txpmd_unicast_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 14, 1, val);
}

static uint32_t bcmpkt_txpmd_unicast_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 14, 1);
    return val;
}

static void bcmpkt_txpmd_rqe_q_num_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 16, 4, val);
}

static uint32_t bcmpkt_txpmd_rqe_q_num_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 16, 4);
    return val;
}

static void bcmpkt_txpmd_set_l2bm_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 15, 1, val);
}

static uint32_t bcmpkt_txpmd_set_l2bm_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 15, 1);
    return val;
}

static void bcmpkt_txpmd_ieee1588_one_step_enable_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 19, 1, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_one_step_enable_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 19, 1);
    return val;
}

static void bcmpkt_txpmd_ieee1588_regen_udp_checksum_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 18, 1, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_regen_udp_checksum_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 18, 1);
    return val;
}

static void bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 17, 1, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 17, 1);
    return val;
}

static void bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 8, 8, val);
}

static uint32_t bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 8, 8);
    return val;
}

static void bcmpkt_txpmd_tx_ts_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 16, 1, val);
}

static uint32_t bcmpkt_txpmd_tx_ts_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 16, 1);
    return val;
}

static void bcmpkt_txpmd_spid_override_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 24, 1, val);
}

static uint32_t bcmpkt_txpmd_spid_override_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 24, 1);
    return val;
}

static void bcmpkt_txpmd_spid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 22, 2, val);
}

static uint32_t bcmpkt_txpmd_spid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 22, 2);
    return val;
}

static void bcmpkt_txpmd_spap_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 20, 2, val);
}

static uint32_t bcmpkt_txpmd_spap_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[2], 20, 2);
    return val;
}

static uint32_t bcmpkt_txpmd_i_size_get(uint32_t *data, uint32_t **addr)
{
    return 4;
}


const bcmpkt_txpmd_fget_t bcm56996_b0_txpmd_fget = {
    {
        bcmpkt_txpmd_start_get,
        bcmpkt_txpmd_header_type_get,
        bcmpkt_txpmd_pkt_length_get,
        bcmpkt_txpmd_ipcf_ptr_get,
        bcmpkt_txpmd_sop_get,
        bcmpkt_txpmd_eop_get,
        bcmpkt_txpmd_cell_length_get,
        bcmpkt_txpmd_cell_error_get,
        bcmpkt_txpmd_local_dest_port_get,
        bcmpkt_txpmd_src_modid_get,
        bcmpkt_txpmd_cos_get,
        bcmpkt_txpmd_input_pri_get,
        bcmpkt_txpmd_unicast_get,
        bcmpkt_txpmd_rqe_q_num_get,
        bcmpkt_txpmd_set_l2bm_get,
        bcmpkt_txpmd_ieee1588_one_step_enable_get,
        bcmpkt_txpmd_ieee1588_regen_udp_checksum_get,
        bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_get,
        bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_get,
        bcmpkt_txpmd_tx_ts_get,
        bcmpkt_txpmd_spid_override_get,
        bcmpkt_txpmd_spid_get,
        bcmpkt_txpmd_spap_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_txpmd_fset_t bcm56996_b0_txpmd_fset = {
    {
        bcmpkt_txpmd_start_set,
        bcmpkt_txpmd_header_type_set,
        bcmpkt_txpmd_pkt_length_set,
        bcmpkt_txpmd_ipcf_ptr_set,
        bcmpkt_txpmd_sop_set,
        bcmpkt_txpmd_eop_set,
        bcmpkt_txpmd_cell_length_set,
        bcmpkt_txpmd_cell_error_set,
        bcmpkt_txpmd_local_dest_port_set,
        bcmpkt_txpmd_src_modid_set,
        bcmpkt_txpmd_cos_set,
        bcmpkt_txpmd_input_pri_set,
        bcmpkt_txpmd_unicast_set,
        bcmpkt_txpmd_rqe_q_num_set,
        bcmpkt_txpmd_set_l2bm_set,
        bcmpkt_txpmd_ieee1588_one_step_enable_set,
        bcmpkt_txpmd_ieee1588_regen_udp_checksum_set,
        bcmpkt_txpmd_ieee1588_ingress_timestamp_sign_set,
        bcmpkt_txpmd_ieee1588_timestamp_hdr_offset_set,
        bcmpkt_txpmd_tx_ts_set,
        bcmpkt_txpmd_spid_override_set,
        bcmpkt_txpmd_spid_set,
        bcmpkt_txpmd_spap_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_txpmd_figet_t bcm56996_b0_txpmd_figet = {
    {
        bcmpkt_txpmd_i_size_get
    }
};

static shr_enum_map_t bcm56996_b0_txpmd_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56996_b0_txpmd_view_infos[BCMPKT_TXPMD_FID_COUNT] = {
     -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2,
};


void bcm56996_b0_txpmd_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56996_b0_txpmd_view_infos;
    info->view_types = bcm56996_b0_txpmd_view_types;
    info->view_type_get = NULL;
}
