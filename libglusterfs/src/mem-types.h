/*
  Copyright (c) 2008-2016 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

#ifndef __MEM_TYPES_H__
#define __MEM_TYPES_H__


enum gf_common_mem_types_ {
        gf_common_mt_call_stub_t,
        gf_common_mt_dnscache6,
        gf_common_mt_data_pair_t,
        gf_common_mt_data_t,
        gf_common_mt_dict_t,
        gf_common_mt_event_pool,
        gf_common_mt_reg,
        gf_common_mt_pollfd,
        gf_common_mt_epoll_event,
        gf_common_mt_fdentry_t,
        gf_common_mt_fdtable_t,
        gf_common_mt_fd_t,
        gf_common_mt_fd_ctx,
        gf_common_mt_gf_dirent_t,
        gf_common_mt_glusterfs_ctx_t,
        gf_common_mt_dentry_t,
        gf_common_mt_inode_t,
        gf_common_mt_inode_ctx,
        gf_common_mt_list_head,
        gf_common_mt_inode_table_t,
        gf_common_mt_xlator_t,
        gf_common_mt_xlator_list_t,
        gf_common_mt_log_msg,
        gf_common_mt_client_log,
        gf_common_mt_volume_opt_list_t,
        gf_common_mt_gf_hdr_common_t,
        gf_common_mt_call_frame_t,
        gf_common_mt_call_stack_t,
        gf_common_mt_gf_timer_t,
        gf_common_mt_gf_timer_registry_t,
        gf_common_mt_transport,
        gf_common_mt_transport_msg,
        gf_common_mt_auth_handle_t,
        gf_common_mt_iobuf,
        gf_common_mt_iobuf_arena,
        gf_common_mt_iobref,
        gf_common_mt_iobuf_pool,
        gf_common_mt_iovec,
        gf_common_mt_memdup,
        gf_common_mt_asprintf,
        gf_common_mt_strdup,
        gf_common_mt_socket_private_t,
        gf_common_mt_ioq,
        gf_common_mt_transport_t,
        gf_common_mt_socket_local_t,
        gf_common_mt_char,
        gf_common_mt_rbthash_table_t,
        gf_common_mt_rbthash_bucket,
        gf_common_mt_mem_pool,
        gf_common_mt_long,
        gf_common_mt_rpcsvc_auth_list,
        gf_common_mt_rpcsvc_t,
        gf_common_mt_rpcsvc_conn_t,
        gf_common_mt_rpcsvc_program_t,
        gf_common_mt_rpcsvc_listener_t,
        gf_common_mt_rpcsvc_wrapper_t,
        gf_common_mt_rpcsvc_stage_t,
        gf_common_mt_rpcclnt_t,
        gf_common_mt_rpcclnt_savedframe_t,
        gf_common_mt_rpc_trans_t,
        gf_common_mt_rpc_trans_pollin_t,
        gf_common_mt_rpc_trans_handover_t,
        gf_common_mt_rpc_trans_reqinfo_t,
        gf_common_mt_rpc_trans_rsp_t,
        gf_common_mt_glusterfs_graph_t,
        gf_common_mt_rdma_private_t,
        gf_common_mt_rdma_ioq_t,
        gf_common_mt_rpc_transport_t,
        gf_common_mt_rdma_local_t,
        gf_common_mt_rdma_post_t,
        gf_common_mt_qpent,
        gf_common_mt_rdma_device_t,
        gf_common_mt_rdma_context_t,
        gf_common_mt_sge,
        gf_common_mt_rpcclnt_cb_program_t,
        gf_common_mt_libxl_marker_local,
        gf_common_mt_graph_buf,
        gf_common_mt_trie_trie,
        gf_common_mt_trie_data,
        gf_common_mt_trie_node,
        gf_common_mt_trie_buf,
        gf_common_mt_trie_end,
        gf_common_mt_run_argv,
        gf_common_mt_run_logbuf,
        gf_common_mt_fd_lk_ctx_t,
        gf_common_mt_fd_lk_ctx_node_t,
        gf_common_mt_buffer_t,
        gf_common_mt_circular_buffer_t,
        gf_common_mt_eh_t,
        gf_common_mt_store_handle_t,
        gf_common_mt_store_iter_t,
        gf_common_mt_drc_client_t,
        gf_common_mt_drc_globals_t,
        gf_common_mt_drc_rbtree_node_t,
        gf_common_mt_iov_base_t,
        gf_common_mt_groups_t,
        gf_common_mt_cliententry_t,
        gf_common_mt_clienttable_t,
        gf_common_mt_client_t,
        gf_common_mt_client_ctx,
        gf_common_mt_lock_table,
        gf_common_mt_locker,
        gf_common_mt_auxgids,
        gf_common_mt_syncopctx,
        gf_common_mt_iobrefs,
        gf_common_mt_gsync_status_t,
        gf_common_mt_uuid_t,
        gf_common_mt_mgmt_v3_lock_obj_t,
        gf_common_mt_txn_opinfo_obj_t,
	gf_common_mt_strfd_t,
	gf_common_mt_strfd_data_t,
        gf_common_mt_regex_t,
        gf_common_mt_ereg,
        gf_common_mt_wr,
        gf_common_mt_rdma_arena_mr,
        gf_common_mt_dnscache             = 115,
        gf_common_mt_dnscache_entry       = 116,
        gf_common_mt_parser_t,
        gf_common_quota_meta_t,
        /*related to gfdb library*/
        gfdb_mt_time_t,
        gf_mt_sql_cbk_args_t,
        gf_mt_gfdb_query_record_t,
        gf_mt_gfdb_link_info_t,
        gf_mt_gfdb_db_operations_t,
        gf_mt_sql_connection_t,
        gf_mt_sql_conn_node_t,
        gf_mt_db_conn_node_t,
        gf_mt_db_connection_t,
        gfdb_mt_db_record_t,
        /*related to gfdb library*/
        gf_common_mt_rbuf_t,
        gf_common_mt_rlist_t,
        gf_common_mt_rvec_t,
        /* glusterd can load the nfs-xlator dynamically and needs these two */
        gf_common_mt_nfs_netgroups,
        gf_common_mt_nfs_exports,
        gf_common_mt_gf_brick_spec_t,
        gf_common_mt_gf_timer_entry_t,
        gf_common_mt_int,
        gf_common_mt_pointer,
        gf_common_mt_synctask,
        gf_common_mt_syncstack,
        gf_common_mt_syncenv,
        gf_common_mt_scan_data,
        gf_common_list_node,
        gf_mt_default_args_t,
        gf_mt_default_args_cbk_t,
        /*used for compound fops*/
        gf_mt_compound_req_t,
        gf_mt_compound_rsp_t,
        gf_common_mt_tw_timer_list,
        /*lock migration*/
        gf_common_mt_lock_mig,
        /* throttle */
        gf_common_mt_tbf_t,
        gf_common_mt_tbf_bucket_t,
        gf_common_mt_tbf_throttle_t,
        gf_common_mt_pthread_t,
        gf_common_mt_end
};
#endif
