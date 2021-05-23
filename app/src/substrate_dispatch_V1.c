/*******************************************************************************
*  (c) 2019 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#include "substrate_dispatch_V1.h"
#include "substrate_strings.h"
#include "zxmacros.h"
#include <stdint.h>

__Z_INLINE parser_error_t _readMethod_balances_transfer_V1(
    parser_context_t* c, pd_balances_transfer_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_keep_alive_V1(
    parser_context_t* c, pd_balances_transfer_keep_alive_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_V1(
    parser_context_t* c, pd_utility_batch_V1_t* m)
{
    CHECK_ERROR(_readVecCall(c, &m->calls))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_all_V1(
    parser_context_t* c, pd_utility_batch_all_V1_t* m)
{
    CHECK_ERROR(_readVecCall(c, &m->calls))
    return parser_ok;
}

#ifdef SUBSTRATE_PARSER_FULL
__Z_INLINE parser_error_t _readMethod_system_fill_block_V1(
    parser_context_t* c, pd_system_fill_block_V1_t* m)
{
    CHECK_ERROR(_readPerbill_V1(c, &m->_ratio))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_V1(
    parser_context_t* c, pd_system_remark_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->_remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_heap_pages_V1(
    parser_context_t* c, pd_system_set_heap_pages_V1_t* m)
{
    CHECK_ERROR(_readu64(c, &m->pages))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_V1(
    parser_context_t* c, pd_system_set_code_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_without_checks_V1(
    parser_context_t* c, pd_system_set_code_without_checks_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_changes_trie_config_V1(
    parser_context_t* c, pd_system_set_changes_trie_config_V1_t* m)
{
    CHECK_ERROR(_readOptionChangesTrieConfiguration_V1(c, &m->changes_trie_config))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_storage_V1(
    parser_context_t* c, pd_system_set_storage_V1_t* m)
{
    CHECK_ERROR(_readVecKeyValue_V1(c, &m->items))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_kill_storage_V1(
    parser_context_t* c, pd_system_kill_storage_V1_t* m)
{
    CHECK_ERROR(_readVecKey_V1(c, &m->keys))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_kill_prefix_V1(
    parser_context_t* c, pd_system_kill_prefix_V1_t* m)
{
    CHECK_ERROR(_readKey_V1(c, &m->prefix))
    CHECK_ERROR(_readu32(c, &m->_subkeys))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_with_event_V1(
    parser_context_t* c, pd_system_remark_with_event_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_timestamp_set_V1(
    parser_context_t* c, pd_timestamp_set_V1_t* m)
{
    CHECK_ERROR(_readCompactMoment_V1(c, &m->now))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_authorship_set_uncles_V1(
    parser_context_t* c, pd_authorship_set_uncles_V1_t* m)
{
    CHECK_ERROR(_readVecHeader(c, &m->new_uncles))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_set_balance_V1(
    parser_context_t* c, pd_balances_set_balance_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    CHECK_ERROR(_readCompactBalance(c, &m->new_free))
    CHECK_ERROR(_readCompactBalance(c, &m->new_reserved))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_force_transfer_V1(
    parser_context_t* c, pd_balances_force_transfer_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->source))
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_set_upgrade_block_V1(
    parser_context_t* c, pd_parachainsystem_set_upgrade_block_V1_t* m)
{
    CHECK_ERROR(_readRelayChainBlockNumber_V1(c, &m->relay_chain_block))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_set_validation_data_V1(
    parser_context_t* c, pd_parachainsystem_set_validation_data_V1_t* m)
{
    CHECK_ERROR(_readParachainInherentData_V1(c, &m->data))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_sudo_send_upward_message_V1(
    parser_context_t* c, pd_parachainsystem_sudo_send_upward_message_V1_t* m)
{
    CHECK_ERROR(_readUpwardMessage_V1(c, &m->message))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_authorize_upgrade_V1(
    parser_context_t* c, pd_parachainsystem_authorize_upgrade_V1_t* m)
{
    CHECK_ERROR(_readHash(c, &m->code_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_enact_authorized_upgrade_V1(
    parser_context_t* c, pd_parachainsystem_enact_authorized_upgrade_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_sudo_sudo_V1(
    parser_context_t* c, pd_sudo_sudo_V1_t* m)
{
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_sudo_sudo_unchecked_weight_V1(
    parser_context_t* c, pd_sudo_sudo_unchecked_weight_V1_t* m)
{
    CHECK_ERROR(_readCall(c, &m->call))
    CHECK_ERROR(_readWeight_V1(c, &m->_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_sudo_set_key_V1(
    parser_context_t* c, pd_sudo_set_key_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_sudo_sudo_as_V1(
    parser_context_t* c, pd_sudo_sudo_as_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_create_V1(
    parser_context_t* c, pd_assets_create_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readTAssetBalance_V1(c, &m->min_balance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_create_V1(
    parser_context_t* c, pd_assets_force_create_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readbool(c, &m->is_sufficient))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->min_balance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_destroy_V1(
    parser_context_t* c, pd_assets_destroy_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readAssetDestroyWitness_V1(c, &m->witness))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_mint_V1(
    parser_context_t* c, pd_assets_mint_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->beneficiary))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_burn_V1(
    parser_context_t* c, pd_assets_burn_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_V1(
    parser_context_t* c, pd_assets_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->target))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_keep_alive_V1(
    parser_context_t* c, pd_assets_transfer_keep_alive_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->target))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_transfer_V1(
    parser_context_t* c, pd_assets_force_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->source))
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_freeze_V1(
    parser_context_t* c, pd_assets_freeze_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_thaw_V1(
    parser_context_t* c, pd_assets_thaw_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_freeze_asset_V1(
    parser_context_t* c, pd_assets_freeze_asset_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_thaw_asset_V1(
    parser_context_t* c, pd_assets_thaw_asset_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_ownership_V1(
    parser_context_t* c, pd_assets_transfer_ownership_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_set_team_V1(
    parser_context_t* c, pd_assets_set_team_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->issuer))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readLookupSource_V1(c, &m->freezer))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_set_metadata_V1(
    parser_context_t* c, pd_assets_set_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readBytes(c, &m->name))
    CHECK_ERROR(_readBytes(c, &m->symbol))
    CHECK_ERROR(_readu8(c, &m->decimals))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_clear_metadata_V1(
    parser_context_t* c, pd_assets_clear_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_set_metadata_V1(
    parser_context_t* c, pd_assets_force_set_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readBytes(c, &m->name))
    CHECK_ERROR(_readBytes(c, &m->symbol))
    CHECK_ERROR(_readu8(c, &m->decimals))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_clear_metadata_V1(
    parser_context_t* c, pd_assets_force_clear_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_asset_status_V1(
    parser_context_t* c, pd_assets_force_asset_status_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->issuer))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readLookupSource_V1(c, &m->freezer))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->min_balance))
    CHECK_ERROR(_readbool(c, &m->is_sufficient))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_approve_transfer_V1(
    parser_context_t* c, pd_assets_approve_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_cancel_approval_V1(
    parser_context_t* c, pd_assets_cancel_approval_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_cancel_approval_V1(
    parser_context_t* c, pd_assets_force_cancel_approval_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_approved_V1(
    parser_context_t* c, pd_assets_transfer_approved_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->destination))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_as_multi_threshold_1_V1(
    parser_context_t* c, pd_multisig_as_multi_threshold_1_V1_t* m)
{
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_as_multi_V1(
    parser_context_t* c, pd_multisig_as_multi_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readOptionTimepoint_V1(c, &m->maybe_timepoint))
    CHECK_ERROR(_readOpaqueCall_V1(c, &m->call))
    CHECK_ERROR(_readbool(c, &m->store_call))
    CHECK_ERROR(_readWeight_V1(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_approve_as_multi_V1(
    parser_context_t* c, pd_multisig_approve_as_multi_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readOptionTimepoint_V1(c, &m->maybe_timepoint))
    CHECK_ERROR(_readu8_array_32_V1(c, &m->call_hash))
    CHECK_ERROR(_readWeight_V1(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_cancel_as_multi_V1(
    parser_context_t* c, pd_multisig_cancel_as_multi_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readTimepoint_V1(c, &m->timepoint))
    CHECK_ERROR(_readu8_array_32_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_as_derivative_V1(
    parser_context_t* c, pd_utility_as_derivative_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->index))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_proxy_V1(
    parser_context_t* c, pd_proxy_proxy_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readOptionProxyType_V1(c, &m->force_proxy_type))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_add_proxy_V1(
    parser_context_t* c, pd_proxy_add_proxy_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_proxy_V1(
    parser_context_t* c, pd_proxy_remove_proxy_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_proxies_V1(
    parser_context_t* c, pd_proxy_remove_proxies_V1_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_anonymous_V1(
    parser_context_t* c, pd_proxy_anonymous_V1_t* m)
{
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    CHECK_ERROR(_readu16(c, &m->index))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_kill_anonymous_V1(
    parser_context_t* c, pd_proxy_kill_anonymous_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->spawner))
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readu16(c, &m->index))
    CHECK_ERROR(_readCompactBlockNumber(c, &m->height))
    CHECK_ERROR(_readCompactu32(c, &m->ext_index))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_announce_V1(
    parser_context_t* c, pd_proxy_announce_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readCallHashOf_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_announcement_V1(
    parser_context_t* c, pd_proxy_remove_announcement_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readCallHashOf_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_reject_announcement_V1(
    parser_context_t* c, pd_proxy_reject_announcement_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readCallHashOf_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_proxy_announced_V1(
    parser_context_t* c, pd_proxy_proxy_announced_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readOptionProxyType_V1(c, &m->force_proxy_type))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_polkadotxcm_send_V1(
    parser_context_t* c, pd_polkadotxcm_send_V1_t* m)
{
    CHECK_ERROR(_readMultiLocation_V1(c, &m->dest))
    CHECK_ERROR(_readXcm_V1(c, &m->message))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_polkadotxcm_execute_V1(
    parser_context_t* c, pd_polkadotxcm_execute_V1_t* m)
{
    CHECK_ERROR(_readXcm_V1(c, &m->message))
    CHECK_ERROR(_readWeight_V1(c, &m->max_weight))
    return parser_ok;
}

#endif

parser_error_t _readMethod_V1(
    parser_context_t* c,
    uint8_t moduleIdx,
    uint8_t callIdx,
    pd_Method_V1_t* method)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    case 1024: /* module 4 call 0 */
        CHECK_ERROR(_readMethod_balances_transfer_V1(c, &method->nested.balances_transfer_V1))
        break;
    case 1027: /* module 4 call 3 */
        CHECK_ERROR(_readMethod_balances_transfer_keep_alive_V1(c, &method->nested.balances_transfer_keep_alive_V1))
        break;
    case 2816: /* module 11 call 0 */
        CHECK_ERROR(_readMethod_utility_batch_V1(c, &method->basic.utility_batch_V1))
        break;
    case 2818: /* module 11 call 2 */
        CHECK_ERROR(_readMethod_utility_batch_all_V1(c, &method->basic.utility_batch_all_V1))
        break;

#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        CHECK_ERROR(_readMethod_system_fill_block_V1(c, &method->nested.system_fill_block_V1))
        break;
    case 1: /* module 0 call 1 */
        CHECK_ERROR(_readMethod_system_remark_V1(c, &method->nested.system_remark_V1))
        break;
    case 2: /* module 0 call 2 */
        CHECK_ERROR(_readMethod_system_set_heap_pages_V1(c, &method->nested.system_set_heap_pages_V1))
        break;
    case 3: /* module 0 call 3 */
        CHECK_ERROR(_readMethod_system_set_code_V1(c, &method->nested.system_set_code_V1))
        break;
    case 4: /* module 0 call 4 */
        CHECK_ERROR(_readMethod_system_set_code_without_checks_V1(c, &method->nested.system_set_code_without_checks_V1))
        break;
    case 5: /* module 0 call 5 */
        CHECK_ERROR(_readMethod_system_set_changes_trie_config_V1(c, &method->nested.system_set_changes_trie_config_V1))
        break;
    case 6: /* module 0 call 6 */
        CHECK_ERROR(_readMethod_system_set_storage_V1(c, &method->nested.system_set_storage_V1))
        break;
    case 7: /* module 0 call 7 */
        CHECK_ERROR(_readMethod_system_kill_storage_V1(c, &method->nested.system_kill_storage_V1))
        break;
    case 8: /* module 0 call 8 */
        CHECK_ERROR(_readMethod_system_kill_prefix_V1(c, &method->nested.system_kill_prefix_V1))
        break;
    case 9: /* module 0 call 9 */
        CHECK_ERROR(_readMethod_system_remark_with_event_V1(c, &method->basic.system_remark_with_event_V1))
        break;
    case 512: /* module 2 call 0 */
        CHECK_ERROR(_readMethod_timestamp_set_V1(c, &method->basic.timestamp_set_V1))
        break;
    case 768: /* module 3 call 0 */
        CHECK_ERROR(_readMethod_authorship_set_uncles_V1(c, &method->basic.authorship_set_uncles_V1))
        break;
    case 1025: /* module 4 call 1 */
        CHECK_ERROR(_readMethod_balances_set_balance_V1(c, &method->nested.balances_set_balance_V1))
        break;
    case 1026: /* module 4 call 2 */
        CHECK_ERROR(_readMethod_balances_force_transfer_V1(c, &method->nested.balances_force_transfer_V1))
        break;
    case 1280: /* module 5 call 0 */
        CHECK_ERROR(_readMethod_parachainsystem_set_upgrade_block_V1(c, &method->basic.parachainsystem_set_upgrade_block_V1))
        break;
    case 1281: /* module 5 call 1 */
        CHECK_ERROR(_readMethod_parachainsystem_set_validation_data_V1(c, &method->basic.parachainsystem_set_validation_data_V1))
        break;
    case 1282: /* module 5 call 2 */
        CHECK_ERROR(_readMethod_parachainsystem_sudo_send_upward_message_V1(c, &method->basic.parachainsystem_sudo_send_upward_message_V1))
        break;
    case 1283: /* module 5 call 3 */
        CHECK_ERROR(_readMethod_parachainsystem_authorize_upgrade_V1(c, &method->basic.parachainsystem_authorize_upgrade_V1))
        break;
    case 1284: /* module 5 call 4 */
        CHECK_ERROR(_readMethod_parachainsystem_enact_authorized_upgrade_V1(c, &method->basic.parachainsystem_enact_authorized_upgrade_V1))
        break;
    case 2048: /* module 8 call 0 */
        CHECK_ERROR(_readMethod_sudo_sudo_V1(c, &method->basic.sudo_sudo_V1))
        break;
    case 2049: /* module 8 call 1 */
        CHECK_ERROR(_readMethod_sudo_sudo_unchecked_weight_V1(c, &method->basic.sudo_sudo_unchecked_weight_V1))
        break;
    case 2050: /* module 8 call 2 */
        CHECK_ERROR(_readMethod_sudo_set_key_V1(c, &method->basic.sudo_set_key_V1))
        break;
    case 2051: /* module 8 call 3 */
        CHECK_ERROR(_readMethod_sudo_sudo_as_V1(c, &method->basic.sudo_sudo_as_V1))
        break;
    case 2304: /* module 9 call 0 */
        CHECK_ERROR(_readMethod_assets_create_V1(c, &method->nested.assets_create_V1))
        break;
    case 2305: /* module 9 call 1 */
        CHECK_ERROR(_readMethod_assets_force_create_V1(c, &method->nested.assets_force_create_V1))
        break;
    case 2306: /* module 9 call 2 */
        CHECK_ERROR(_readMethod_assets_destroy_V1(c, &method->nested.assets_destroy_V1))
        break;
    case 2307: /* module 9 call 3 */
        CHECK_ERROR(_readMethod_assets_mint_V1(c, &method->nested.assets_mint_V1))
        break;
    case 2308: /* module 9 call 4 */
        CHECK_ERROR(_readMethod_assets_burn_V1(c, &method->nested.assets_burn_V1))
        break;
    case 2309: /* module 9 call 5 */
        CHECK_ERROR(_readMethod_assets_transfer_V1(c, &method->nested.assets_transfer_V1))
        break;
    case 2310: /* module 9 call 6 */
        CHECK_ERROR(_readMethod_assets_transfer_keep_alive_V1(c, &method->nested.assets_transfer_keep_alive_V1))
        break;
    case 2311: /* module 9 call 7 */
        CHECK_ERROR(_readMethod_assets_force_transfer_V1(c, &method->nested.assets_force_transfer_V1))
        break;
    case 2312: /* module 9 call 8 */
        CHECK_ERROR(_readMethod_assets_freeze_V1(c, &method->nested.assets_freeze_V1))
        break;
    case 2313: /* module 9 call 9 */
        CHECK_ERROR(_readMethod_assets_thaw_V1(c, &method->nested.assets_thaw_V1))
        break;
    case 2314: /* module 9 call 10 */
        CHECK_ERROR(_readMethod_assets_freeze_asset_V1(c, &method->nested.assets_freeze_asset_V1))
        break;
    case 2315: /* module 9 call 11 */
        CHECK_ERROR(_readMethod_assets_thaw_asset_V1(c, &method->nested.assets_thaw_asset_V1))
        break;
    case 2316: /* module 9 call 12 */
        CHECK_ERROR(_readMethod_assets_transfer_ownership_V1(c, &method->nested.assets_transfer_ownership_V1))
        break;
    case 2317: /* module 9 call 13 */
        CHECK_ERROR(_readMethod_assets_set_team_V1(c, &method->nested.assets_set_team_V1))
        break;
    case 2318: /* module 9 call 14 */
        CHECK_ERROR(_readMethod_assets_set_metadata_V1(c, &method->nested.assets_set_metadata_V1))
        break;
    case 2319: /* module 9 call 15 */
        CHECK_ERROR(_readMethod_assets_clear_metadata_V1(c, &method->nested.assets_clear_metadata_V1))
        break;
    case 2320: /* module 9 call 16 */
        CHECK_ERROR(_readMethod_assets_force_set_metadata_V1(c, &method->nested.assets_force_set_metadata_V1))
        break;
    case 2321: /* module 9 call 17 */
        CHECK_ERROR(_readMethod_assets_force_clear_metadata_V1(c, &method->nested.assets_force_clear_metadata_V1))
        break;
    case 2322: /* module 9 call 18 */
        CHECK_ERROR(_readMethod_assets_force_asset_status_V1(c, &method->nested.assets_force_asset_status_V1))
        break;
    case 2323: /* module 9 call 19 */
        CHECK_ERROR(_readMethod_assets_approve_transfer_V1(c, &method->nested.assets_approve_transfer_V1))
        break;
    case 2324: /* module 9 call 20 */
        CHECK_ERROR(_readMethod_assets_cancel_approval_V1(c, &method->nested.assets_cancel_approval_V1))
        break;
    case 2325: /* module 9 call 21 */
        CHECK_ERROR(_readMethod_assets_force_cancel_approval_V1(c, &method->nested.assets_force_cancel_approval_V1))
        break;
    case 2326: /* module 9 call 22 */
        CHECK_ERROR(_readMethod_assets_transfer_approved_V1(c, &method->nested.assets_transfer_approved_V1))
        break;
    case 2560: /* module 10 call 0 */
        CHECK_ERROR(_readMethod_multisig_as_multi_threshold_1_V1(c, &method->nested.multisig_as_multi_threshold_1_V1))
        break;
    case 2561: /* module 10 call 1 */
        CHECK_ERROR(_readMethod_multisig_as_multi_V1(c, &method->nested.multisig_as_multi_V1))
        break;
    case 2562: /* module 10 call 2 */
        CHECK_ERROR(_readMethod_multisig_approve_as_multi_V1(c, &method->nested.multisig_approve_as_multi_V1))
        break;
    case 2563: /* module 10 call 3 */
        CHECK_ERROR(_readMethod_multisig_cancel_as_multi_V1(c, &method->nested.multisig_cancel_as_multi_V1))
        break;
    case 2817: /* module 11 call 1 */
        CHECK_ERROR(_readMethod_utility_as_derivative_V1(c, &method->basic.utility_as_derivative_V1))
        break;
    case 3072: /* module 12 call 0 */
        CHECK_ERROR(_readMethod_proxy_proxy_V1(c, &method->nested.proxy_proxy_V1))
        break;
    case 3073: /* module 12 call 1 */
        CHECK_ERROR(_readMethod_proxy_add_proxy_V1(c, &method->basic.proxy_add_proxy_V1))
        break;
    case 3074: /* module 12 call 2 */
        CHECK_ERROR(_readMethod_proxy_remove_proxy_V1(c, &method->basic.proxy_remove_proxy_V1))
        break;
    case 3075: /* module 12 call 3 */
        CHECK_ERROR(_readMethod_proxy_remove_proxies_V1(c, &method->basic.proxy_remove_proxies_V1))
        break;
    case 3076: /* module 12 call 4 */
        CHECK_ERROR(_readMethod_proxy_anonymous_V1(c, &method->basic.proxy_anonymous_V1))
        break;
    case 3077: /* module 12 call 5 */
        CHECK_ERROR(_readMethod_proxy_kill_anonymous_V1(c, &method->basic.proxy_kill_anonymous_V1))
        break;
    case 3078: /* module 12 call 6 */
        CHECK_ERROR(_readMethod_proxy_announce_V1(c, &method->basic.proxy_announce_V1))
        break;
    case 3079: /* module 12 call 7 */
        CHECK_ERROR(_readMethod_proxy_remove_announcement_V1(c, &method->basic.proxy_remove_announcement_V1))
        break;
    case 3080: /* module 12 call 8 */
        CHECK_ERROR(_readMethod_proxy_reject_announcement_V1(c, &method->basic.proxy_reject_announcement_V1))
        break;
    case 3081: /* module 12 call 9 */
        CHECK_ERROR(_readMethod_proxy_proxy_announced_V1(c, &method->basic.proxy_proxy_announced_V1))
        break;
    case 3584: /* module 14 call 0 */
        CHECK_ERROR(_readMethod_polkadotxcm_send_V1(c, &method->basic.polkadotxcm_send_V1))
        break;
    case 3585: /* module 14 call 1 */
        CHECK_ERROR(_readMethod_polkadotxcm_execute_V1(c, &method->basic.polkadotxcm_execute_V1))
        break;
#endif
    default:
        return parser_not_supported;
    }

    return parser_ok;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

const char* _getMethod_ModuleName_V1(uint8_t moduleIdx)
{
    switch (moduleIdx) {
    case 4:
        return STR_MO_BALANCES;
    case 11:
        return STR_MO_UTILITY;
#ifdef SUBSTRATE_PARSER_FULL
    case 0:
        return STR_MO_SYSTEM;
    case 1:
        return STR_MO_RANDOMNESSCOLLECTIVEFLIP;
    case 2:
        return STR_MO_TIMESTAMP;
    case 3:
        return STR_MO_AUTHORSHIP;
    case 5:
        return STR_MO_PARACHAINSYSTEM;
    case 8:
        return STR_MO_SUDO;
    case 9:
        return STR_MO_ASSETS;
    case 10:
        return STR_MO_MULTISIG;
    case 12:
        return STR_MO_PROXY;
    case 13:
        return STR_MO_XCMPQUEUE;
    case 14:
        return STR_MO_POLKADOTXCM;
#endif
    default:
        return NULL;
    }

    return NULL;
}

const char* _getMethod_Name_V1(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 1024: /* module 4 call 0 */
        return STR_ME_TRANSFER;
    case 1027: /* module 4 call 3 */
        return STR_ME_TRANSFER_KEEP_ALIVE;
    case 2816: /* module 11 call 0 */
        return STR_ME_BATCH;
    case 2818: /* module 11 call 2 */
        return STR_ME_BATCH_ALL;
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        return STR_ME_FILL_BLOCK;
    case 1: /* module 0 call 1 */
        return STR_ME_REMARK;
    case 2: /* module 0 call 2 */
        return STR_ME_SET_HEAP_PAGES;
    case 3: /* module 0 call 3 */
        return STR_ME_SET_CODE;
    case 4: /* module 0 call 4 */
        return STR_ME_SET_CODE_WITHOUT_CHECKS;
    case 5: /* module 0 call 5 */
        return STR_ME_SET_CHANGES_TRIE_CONFIG;
    case 6: /* module 0 call 6 */
        return STR_ME_SET_STORAGE;
    case 7: /* module 0 call 7 */
        return STR_ME_KILL_STORAGE;
    case 8: /* module 0 call 8 */
        return STR_ME_KILL_PREFIX;
    case 9: /* module 0 call 9 */
        return STR_ME_REMARK_WITH_EVENT;
    case 512: /* module 2 call 0 */
        return STR_ME_SET;
    case 768: /* module 3 call 0 */
        return STR_ME_SET_UNCLES;
    case 1025: /* module 4 call 1 */
        return STR_ME_SET_BALANCE;
    case 1026: /* module 4 call 2 */
        return STR_ME_FORCE_TRANSFER;
    case 1280: /* module 5 call 0 */
        return STR_ME_SET_UPGRADE_BLOCK;
    case 1281: /* module 5 call 1 */
        return STR_ME_SET_VALIDATION_DATA;
    case 1282: /* module 5 call 2 */
        return STR_ME_SUDO_SEND_UPWARD_MESSAGE;
    case 1283: /* module 5 call 3 */
        return STR_ME_AUTHORIZE_UPGRADE;
    case 1284: /* module 5 call 4 */
        return STR_ME_ENACT_AUTHORIZED_UPGRADE;
    case 2048: /* module 8 call 0 */
        return STR_ME_SUDO;
    case 2049: /* module 8 call 1 */
        return STR_ME_SUDO_UNCHECKED_WEIGHT;
    case 2050: /* module 8 call 2 */
        return STR_ME_SET_KEY;
    case 2051: /* module 8 call 3 */
        return STR_ME_SUDO_AS;
    case 2304: /* module 9 call 0 */
        return STR_ME_CREATE;
    case 2305: /* module 9 call 1 */
        return STR_ME_FORCE_CREATE;
    case 2306: /* module 9 call 2 */
        return STR_ME_DESTROY;
    case 2307: /* module 9 call 3 */
        return STR_ME_MINT;
    case 2308: /* module 9 call 4 */
        return STR_ME_BURN;
    case 2309: /* module 9 call 5 */
        return STR_ME_TRANSFER;
    case 2310: /* module 9 call 6 */
        return STR_ME_TRANSFER_KEEP_ALIVE;
    case 2311: /* module 9 call 7 */
        return STR_ME_FORCE_TRANSFER;
    case 2312: /* module 9 call 8 */
        return STR_ME_FREEZE;
    case 2313: /* module 9 call 9 */
        return STR_ME_THAW;
    case 2314: /* module 9 call 10 */
        return STR_ME_FREEZE_ASSET;
    case 2315: /* module 9 call 11 */
        return STR_ME_THAW_ASSET;
    case 2316: /* module 9 call 12 */
        return STR_ME_TRANSFER_OWNERSHIP;
    case 2317: /* module 9 call 13 */
        return STR_ME_SET_TEAM;
    case 2318: /* module 9 call 14 */
        return STR_ME_SET_METADATA;
    case 2319: /* module 9 call 15 */
        return STR_ME_CLEAR_METADATA;
    case 2320: /* module 9 call 16 */
        return STR_ME_FORCE_SET_METADATA;
    case 2321: /* module 9 call 17 */
        return STR_ME_FORCE_CLEAR_METADATA;
    case 2322: /* module 9 call 18 */
        return STR_ME_FORCE_ASSET_STATUS;
    case 2323: /* module 9 call 19 */
        return STR_ME_APPROVE_TRANSFER;
    case 2324: /* module 9 call 20 */
        return STR_ME_CANCEL_APPROVAL;
    case 2325: /* module 9 call 21 */
        return STR_ME_FORCE_CANCEL_APPROVAL;
    case 2326: /* module 9 call 22 */
        return STR_ME_TRANSFER_APPROVED;
    case 2560: /* module 10 call 0 */
        return STR_ME_AS_MULTI_THRESHOLD_1;
    case 2561: /* module 10 call 1 */
        return STR_ME_AS_MULTI;
    case 2562: /* module 10 call 2 */
        return STR_ME_APPROVE_AS_MULTI;
    case 2563: /* module 10 call 3 */
        return STR_ME_CANCEL_AS_MULTI;
    case 2817: /* module 11 call 1 */
        return STR_ME_AS_DERIVATIVE;
    case 3072: /* module 12 call 0 */
        return STR_ME_PROXY;
    case 3073: /* module 12 call 1 */
        return STR_ME_ADD_PROXY;
    case 3074: /* module 12 call 2 */
        return STR_ME_REMOVE_PROXY;
    case 3075: /* module 12 call 3 */
        return STR_ME_REMOVE_PROXIES;
    case 3076: /* module 12 call 4 */
        return STR_ME_ANONYMOUS;
    case 3077: /* module 12 call 5 */
        return STR_ME_KILL_ANONYMOUS;
    case 3078: /* module 12 call 6 */
        return STR_ME_ANNOUNCE;
    case 3079: /* module 12 call 7 */
        return STR_ME_REMOVE_ANNOUNCEMENT;
    case 3080: /* module 12 call 8 */
        return STR_ME_REJECT_ANNOUNCEMENT;
    case 3081: /* module 12 call 9 */
        return STR_ME_PROXY_ANNOUNCED;
    case 3584: /* module 14 call 0 */
        return STR_ME_SEND;
    case 3585: /* module 14 call 1 */
        return STR_ME_EXECUTE;
#endif
    default:
        return NULL;
    }

    return NULL;
}

uint8_t _getMethod_NumItems_V1(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 1024: /* module 4 call 0 */
        return 2;
    case 1027: /* module 4 call 3 */
        return 2;
    case 2816: /* module 11 call 0 */
        return 1;
    case 2818: /* module 11 call 2 */
        return 1;
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        return 1;
    case 1: /* module 0 call 1 */
        return 1;
    case 2: /* module 0 call 2 */
        return 1;
    case 3: /* module 0 call 3 */
        return 1;
    case 4: /* module 0 call 4 */
        return 1;
    case 5: /* module 0 call 5 */
        return 1;
    case 6: /* module 0 call 6 */
        return 1;
    case 7: /* module 0 call 7 */
        return 1;
    case 8: /* module 0 call 8 */
        return 2;
    case 9: /* module 0 call 9 */
        return 1;
    case 512: /* module 2 call 0 */
        return 1;
    case 768: /* module 3 call 0 */
        return 1;
    case 1025: /* module 4 call 1 */
        return 3;
    case 1026: /* module 4 call 2 */
        return 3;
    case 1280: /* module 5 call 0 */
        return 1;
    case 1281: /* module 5 call 1 */
        return 1;
    case 1282: /* module 5 call 2 */
        return 1;
    case 1283: /* module 5 call 3 */
        return 1;
    case 1284: /* module 5 call 4 */
        return 1;
    case 2048: /* module 8 call 0 */
        return 1;
    case 2049: /* module 8 call 1 */
        return 2;
    case 2050: /* module 8 call 2 */
        return 1;
    case 2051: /* module 8 call 3 */
        return 2;
    case 2304: /* module 9 call 0 */
        return 3;
    case 2305: /* module 9 call 1 */
        return 4;
    case 2306: /* module 9 call 2 */
        return 2;
    case 2307: /* module 9 call 3 */
        return 3;
    case 2308: /* module 9 call 4 */
        return 3;
    case 2309: /* module 9 call 5 */
        return 3;
    case 2310: /* module 9 call 6 */
        return 3;
    case 2311: /* module 9 call 7 */
        return 4;
    case 2312: /* module 9 call 8 */
        return 2;
    case 2313: /* module 9 call 9 */
        return 2;
    case 2314: /* module 9 call 10 */
        return 1;
    case 2315: /* module 9 call 11 */
        return 1;
    case 2316: /* module 9 call 12 */
        return 2;
    case 2317: /* module 9 call 13 */
        return 4;
    case 2318: /* module 9 call 14 */
        return 4;
    case 2319: /* module 9 call 15 */
        return 1;
    case 2320: /* module 9 call 16 */
        return 5;
    case 2321: /* module 9 call 17 */
        return 1;
    case 2322: /* module 9 call 18 */
        return 8;
    case 2323: /* module 9 call 19 */
        return 3;
    case 2324: /* module 9 call 20 */
        return 2;
    case 2325: /* module 9 call 21 */
        return 3;
    case 2326: /* module 9 call 22 */
        return 4;
    case 2560: /* module 10 call 0 */
        return 2;
    case 2561: /* module 10 call 1 */
        return 6;
    case 2562: /* module 10 call 2 */
        return 5;
    case 2563: /* module 10 call 3 */
        return 4;
    case 2817: /* module 11 call 1 */
        return 2;
    case 3072: /* module 12 call 0 */
        return 3;
    case 3073: /* module 12 call 1 */
        return 3;
    case 3074: /* module 12 call 2 */
        return 3;
    case 3075: /* module 12 call 3 */
        return 0;
    case 3076: /* module 12 call 4 */
        return 3;
    case 3077: /* module 12 call 5 */
        return 5;
    case 3078: /* module 12 call 6 */
        return 2;
    case 3079: /* module 12 call 7 */
        return 2;
    case 3080: /* module 12 call 8 */
        return 2;
    case 3081: /* module 12 call 9 */
        return 4;
    case 3584: /* module 14 call 0 */
        return 2;
    case 3585: /* module 14 call 1 */
        return 2;
#endif
    default:
        return 0;
    }

    return 0;
}

const char* _getMethod_ItemName_V1(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 1024: /* module 4 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 1027: /* module 4 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 2816: /* module 11 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_calls;
        default:
            return NULL;
        }
    case 2818: /* module 11 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_calls;
        default:
            return NULL;
        }
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT__ratio;
        default:
            return NULL;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT__remark;
        default:
            return NULL;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_pages;
        default:
            return NULL;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 5: /* module 0 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_changes_trie_config;
        default:
            return NULL;
        }
    case 6: /* module 0 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_items;
        default:
            return NULL;
        }
    case 7: /* module 0 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_keys;
        default:
            return NULL;
        }
    case 8: /* module 0 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_prefix;
        case 1:
            return STR_IT__subkeys;
        default:
            return NULL;
        }
    case 9: /* module 0 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remark;
        default:
            return NULL;
        }
    case 512: /* module 2 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_now;
        default:
            return NULL;
        }
    case 768: /* module 3 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_uncles;
        default:
            return NULL;
        }
    case 1025: /* module 4 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_new_free;
        case 2:
            return STR_IT_new_reserved;
        default:
            return NULL;
        }
    case 1026: /* module 4 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_source;
        case 1:
            return STR_IT_dest;
        case 2:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 1280: /* module 5 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_relay_chain_block;
        default:
            return NULL;
        }
    case 1281: /* module 5 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_data;
        default:
            return NULL;
        }
    case 1282: /* module 5 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_message;
        default:
            return NULL;
        }
    case 1283: /* module 5 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code_hash;
        default:
            return NULL;
        }
    case 1284: /* module 5 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 2048: /* module 8 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 2049: /* module 8 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_call;
        case 1:
            return STR_IT__weight;
        default:
            return NULL;
        }
    case 2050: /* module 8 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 2051: /* module 8 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 2304: /* module 9 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_admin;
        case 2:
            return STR_IT_min_balance;
        default:
            return NULL;
        }
    case 2305: /* module 9 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_is_sufficient;
        case 3:
            return STR_IT_min_balance;
        default:
            return NULL;
        }
    case 2306: /* module 9 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_witness;
        default:
            return NULL;
        }
    case 2307: /* module 9 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_beneficiary;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2308: /* module 9 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_who;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2309: /* module 9 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_target;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2310: /* module 9 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_target;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2311: /* module 9 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_source;
        case 2:
            return STR_IT_dest;
        case 3:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2312: /* module 9 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 2313: /* module 9 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 2314: /* module 9 call 10 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 2315: /* module 9 call 11 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 2316: /* module 9 call 12 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        default:
            return NULL;
        }
    case 2317: /* module 9 call 13 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_issuer;
        case 2:
            return STR_IT_admin;
        case 3:
            return STR_IT_freezer;
        default:
            return NULL;
        }
    case 2318: /* module 9 call 14 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_name;
        case 2:
            return STR_IT_symbol;
        case 3:
            return STR_IT_decimals;
        default:
            return NULL;
        }
    case 2319: /* module 9 call 15 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 2320: /* module 9 call 16 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_name;
        case 2:
            return STR_IT_symbol;
        case 3:
            return STR_IT_decimals;
        case 4:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 2321: /* module 9 call 17 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 2322: /* module 9 call 18 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_issuer;
        case 3:
            return STR_IT_admin;
        case 4:
            return STR_IT_freezer;
        case 5:
            return STR_IT_min_balance;
        case 6:
            return STR_IT_is_sufficient;
        case 7:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 2323: /* module 9 call 19 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_delegate;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2324: /* module 9 call 20 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_delegate;
        default:
            return NULL;
        }
    case 2325: /* module 9 call 21 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_delegate;
        default:
            return NULL;
        }
    case 2326: /* module 9 call 22 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_destination;
        case 3:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 2560: /* module 10 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_other_signatories;
        case 1:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 2561: /* module 10 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_maybe_timepoint;
        case 3:
            return STR_IT_call;
        case 4:
            return STR_IT_store_call;
        case 5:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 2562: /* module 10 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_maybe_timepoint;
        case 3:
            return STR_IT_call_hash;
        case 4:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 2563: /* module 10 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_timepoint;
        case 3:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 2817: /* module 11 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_index;
        case 1:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 3072: /* module 12 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_force_proxy_type;
        case 2:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 3073: /* module 12 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_delay;
        default:
            return NULL;
        }
    case 3074: /* module 12 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_delay;
        default:
            return NULL;
        }
    case 3075: /* module 12 call 3 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 3076: /* module 12 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proxy_type;
        case 1:
            return STR_IT_delay;
        case 2:
            return STR_IT_index;
        default:
            return NULL;
        }
    case 3077: /* module 12 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_spawner;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_index;
        case 3:
            return STR_IT_height;
        case 4:
            return STR_IT_ext_index;
        default:
            return NULL;
        }
    case 3078: /* module 12 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 3079: /* module 12 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 3080: /* module 12 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 3081: /* module 12 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_real;
        case 2:
            return STR_IT_force_proxy_type;
        case 3:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 3584: /* module 14 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_message;
        default:
            return NULL;
        }
    case 3585: /* module 14 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_message;
        case 1:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
#endif
    default:
        return NULL;
    }

    return NULL;
}

parser_error_t _getMethod_ItemValue_V1(
    pd_Method_V1_t* m,
    uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx,
    char* outValue, uint16_t outValueLen,
    uint8_t pageIdx, uint8_t* pageCount)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 1024: /* module 4 call 0 */
        switch (itemIdx) {
        case 0: /* balances_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.balances_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_V1 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1027: /* module 4 call 3 */
        switch (itemIdx) {
        case 0: /* balances_transfer_keep_alive_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.balances_transfer_keep_alive_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_keep_alive_V1 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_keep_alive_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2816: /* module 11 call 0 */
        switch (itemIdx) {
        case 0: /* utility_batch_V1 - calls */;
            return _toStringVecCall(
                &m->basic.utility_batch_V1.calls,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2818: /* module 11 call 2 */
        switch (itemIdx) {
        case 0: /* utility_batch_all_V1 - calls */;
            return _toStringVecCall(
                &m->basic.utility_batch_all_V1.calls,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0: /* system_fill_block_V1 - _ratio */;
            return _toStringPerbill_V1(
                &m->nested.system_fill_block_V1._ratio,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0: /* system_remark_V1 - _remark */;
            return _toStringBytes(
                &m->nested.system_remark_V1._remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0: /* system_set_heap_pages_V1 - pages */;
            return _toStringu64(
                &m->nested.system_set_heap_pages_V1.pages,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0: /* system_set_code_V1 - code */;
            return _toStringBytes(
                &m->nested.system_set_code_V1.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0: /* system_set_code_without_checks_V1 - code */;
            return _toStringBytes(
                &m->nested.system_set_code_without_checks_V1.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5: /* module 0 call 5 */
        switch (itemIdx) {
        case 0: /* system_set_changes_trie_config_V1 - changes_trie_config */;
            return _toStringOptionChangesTrieConfiguration_V1(
                &m->nested.system_set_changes_trie_config_V1.changes_trie_config,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6: /* module 0 call 6 */
        switch (itemIdx) {
        case 0: /* system_set_storage_V1 - items */;
            return _toStringVecKeyValue_V1(
                &m->nested.system_set_storage_V1.items,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7: /* module 0 call 7 */
        switch (itemIdx) {
        case 0: /* system_kill_storage_V1 - keys */;
            return _toStringVecKey_V1(
                &m->nested.system_kill_storage_V1.keys,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8: /* module 0 call 8 */
        switch (itemIdx) {
        case 0: /* system_kill_prefix_V1 - prefix */;
            return _toStringKey_V1(
                &m->nested.system_kill_prefix_V1.prefix,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* system_kill_prefix_V1 - _subkeys */;
            return _toStringu32(
                &m->nested.system_kill_prefix_V1._subkeys,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 9: /* module 0 call 9 */
        switch (itemIdx) {
        case 0: /* system_remark_with_event_V1 - remark */;
            return _toStringBytes(
                &m->basic.system_remark_with_event_V1.remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 512: /* module 2 call 0 */
        switch (itemIdx) {
        case 0: /* timestamp_set_V1 - now */;
            return _toStringCompactMoment_V1(
                &m->basic.timestamp_set_V1.now,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 768: /* module 3 call 0 */
        switch (itemIdx) {
        case 0: /* authorship_set_uncles_V1 - new_uncles */;
            return _toStringVecHeader(
                &m->basic.authorship_set_uncles_V1.new_uncles,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1025: /* module 4 call 1 */
        switch (itemIdx) {
        case 0: /* balances_set_balance_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.balances_set_balance_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_set_balance_V1 - new_free */;
            return _toStringCompactBalance(
                &m->nested.balances_set_balance_V1.new_free,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_set_balance_V1 - new_reserved */;
            return _toStringCompactBalance(
                &m->nested.balances_set_balance_V1.new_reserved,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1026: /* module 4 call 2 */
        switch (itemIdx) {
        case 0: /* balances_force_transfer_V1 - source */;
            return _toStringLookupSource_V1(
                &m->nested.balances_force_transfer_V1.source,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_force_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.balances_force_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_force_transfer_V1 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_force_transfer_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1280: /* module 5 call 0 */
        switch (itemIdx) {
        case 0: /* parachainsystem_set_upgrade_block_V1 - relay_chain_block */;
            return _toStringRelayChainBlockNumber_V1(
                &m->basic.parachainsystem_set_upgrade_block_V1.relay_chain_block,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1281: /* module 5 call 1 */
        switch (itemIdx) {
        case 0: /* parachainsystem_set_validation_data_V1 - data */;
            return _toStringParachainInherentData_V1(
                &m->basic.parachainsystem_set_validation_data_V1.data,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1282: /* module 5 call 2 */
        switch (itemIdx) {
        case 0: /* parachainsystem_sudo_send_upward_message_V1 - message */;
            return _toStringUpwardMessage_V1(
                &m->basic.parachainsystem_sudo_send_upward_message_V1.message,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1283: /* module 5 call 3 */
        switch (itemIdx) {
        case 0: /* parachainsystem_authorize_upgrade_V1 - code_hash */;
            return _toStringHash(
                &m->basic.parachainsystem_authorize_upgrade_V1.code_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1284: /* module 5 call 4 */
        switch (itemIdx) {
        case 0: /* parachainsystem_enact_authorized_upgrade_V1 - code */;
            return _toStringBytes(
                &m->basic.parachainsystem_enact_authorized_upgrade_V1.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2048: /* module 8 call 0 */
        switch (itemIdx) {
        case 0: /* sudo_sudo_V1 - call */;
            return _toStringCall(
                &m->basic.sudo_sudo_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2049: /* module 8 call 1 */
        switch (itemIdx) {
        case 0: /* sudo_sudo_unchecked_weight_V1 - call */;
            return _toStringCall(
                &m->basic.sudo_sudo_unchecked_weight_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* sudo_sudo_unchecked_weight_V1 - _weight */;
            return _toStringWeight_V1(
                &m->basic.sudo_sudo_unchecked_weight_V1._weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2050: /* module 8 call 2 */
        switch (itemIdx) {
        case 0: /* sudo_set_key_V1 - new_ */;
            return _toStringLookupSource_V1(
                &m->basic.sudo_set_key_V1.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2051: /* module 8 call 3 */
        switch (itemIdx) {
        case 0: /* sudo_sudo_as_V1 - who */;
            return _toStringLookupSource_V1(
                &m->basic.sudo_sudo_as_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* sudo_sudo_as_V1 - call */;
            return _toStringCall(
                &m->basic.sudo_sudo_as_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2304: /* module 9 call 0 */
        switch (itemIdx) {
        case 0: /* assets_create_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_create_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_create_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->nested.assets_create_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_create_V1 - min_balance */;
            return _toStringTAssetBalance_V1(
                &m->nested.assets_create_V1.min_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2305: /* module 9 call 1 */
        switch (itemIdx) {
        case 0: /* assets_force_create_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_create_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_create_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_create_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_create_V1 - is_sufficient */;
            return _toStringbool(
                &m->nested.assets_force_create_V1.is_sufficient,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_create_V1 - min_balance */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_force_create_V1.min_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2306: /* module 9 call 2 */
        switch (itemIdx) {
        case 0: /* assets_destroy_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_destroy_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_destroy_V1 - witness */;
            return _toStringAssetDestroyWitness_V1(
                &m->nested.assets_destroy_V1.witness,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2307: /* module 9 call 3 */
        switch (itemIdx) {
        case 0: /* assets_mint_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_mint_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_mint_V1 - beneficiary */;
            return _toStringLookupSource_V1(
                &m->nested.assets_mint_V1.beneficiary,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_mint_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_mint_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2308: /* module 9 call 4 */
        switch (itemIdx) {
        case 0: /* assets_burn_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_burn_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_burn_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.assets_burn_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_burn_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_burn_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2309: /* module 9 call 5 */
        switch (itemIdx) {
        case 0: /* assets_transfer_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_V1 - target */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_V1.target,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_transfer_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_transfer_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2310: /* module 9 call 6 */
        switch (itemIdx) {
        case 0: /* assets_transfer_keep_alive_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_keep_alive_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_keep_alive_V1 - target */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_keep_alive_V1.target,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_transfer_keep_alive_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_transfer_keep_alive_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2311: /* module 9 call 7 */
        switch (itemIdx) {
        case 0: /* assets_force_transfer_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_transfer_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_transfer_V1 - source */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_transfer_V1.source,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_transfer_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_force_transfer_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2312: /* module 9 call 8 */
        switch (itemIdx) {
        case 0: /* assets_freeze_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_freeze_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_freeze_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.assets_freeze_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2313: /* module 9 call 9 */
        switch (itemIdx) {
        case 0: /* assets_thaw_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_thaw_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_thaw_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.assets_thaw_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2314: /* module 9 call 10 */
        switch (itemIdx) {
        case 0: /* assets_freeze_asset_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_freeze_asset_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2315: /* module 9 call 11 */
        switch (itemIdx) {
        case 0: /* assets_thaw_asset_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_thaw_asset_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2316: /* module 9 call 12 */
        switch (itemIdx) {
        case 0: /* assets_transfer_ownership_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_ownership_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_ownership_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_ownership_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2317: /* module 9 call 13 */
        switch (itemIdx) {
        case 0: /* assets_set_team_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_set_team_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_set_team_V1 - issuer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_set_team_V1.issuer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_set_team_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->nested.assets_set_team_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_set_team_V1 - freezer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_set_team_V1.freezer,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2318: /* module 9 call 14 */
        switch (itemIdx) {
        case 0: /* assets_set_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_set_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_set_metadata_V1 - name */;
            return _toStringBytes(
                &m->nested.assets_set_metadata_V1.name,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_set_metadata_V1 - symbol */;
            return _toStringBytes(
                &m->nested.assets_set_metadata_V1.symbol,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_set_metadata_V1 - decimals */;
            return _toStringu8(
                &m->nested.assets_set_metadata_V1.decimals,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2319: /* module 9 call 15 */
        switch (itemIdx) {
        case 0: /* assets_clear_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_clear_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2320: /* module 9 call 16 */
        switch (itemIdx) {
        case 0: /* assets_force_set_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_set_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_set_metadata_V1 - name */;
            return _toStringBytes(
                &m->nested.assets_force_set_metadata_V1.name,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_set_metadata_V1 - symbol */;
            return _toStringBytes(
                &m->nested.assets_force_set_metadata_V1.symbol,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_set_metadata_V1 - decimals */;
            return _toStringu8(
                &m->nested.assets_force_set_metadata_V1.decimals,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* assets_force_set_metadata_V1 - is_frozen */;
            return _toStringbool(
                &m->nested.assets_force_set_metadata_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2321: /* module 9 call 17 */
        switch (itemIdx) {
        case 0: /* assets_force_clear_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_clear_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2322: /* module 9 call 18 */
        switch (itemIdx) {
        case 0: /* assets_force_asset_status_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_asset_status_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_asset_status_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_asset_status_V1 - issuer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.issuer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_asset_status_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* assets_force_asset_status_V1 - freezer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.freezer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 5: /* assets_force_asset_status_V1 - min_balance */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_force_asset_status_V1.min_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 6: /* assets_force_asset_status_V1 - is_sufficient */;
            return _toStringbool(
                &m->nested.assets_force_asset_status_V1.is_sufficient,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 7: /* assets_force_asset_status_V1 - is_frozen */;
            return _toStringbool(
                &m->nested.assets_force_asset_status_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2323: /* module 9 call 19 */
        switch (itemIdx) {
        case 0: /* assets_approve_transfer_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_approve_transfer_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_approve_transfer_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->nested.assets_approve_transfer_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_approve_transfer_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_approve_transfer_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2324: /* module 9 call 20 */
        switch (itemIdx) {
        case 0: /* assets_cancel_approval_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_cancel_approval_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_cancel_approval_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->nested.assets_cancel_approval_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2325: /* module 9 call 21 */
        switch (itemIdx) {
        case 0: /* assets_force_cancel_approval_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_cancel_approval_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_cancel_approval_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_cancel_approval_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_cancel_approval_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_cancel_approval_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2326: /* module 9 call 22 */
        switch (itemIdx) {
        case 0: /* assets_transfer_approved_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_approved_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_approved_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_approved_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_transfer_approved_V1 - destination */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_approved_V1.destination,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_transfer_approved_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_transfer_approved_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2560: /* module 10 call 0 */
        switch (itemIdx) {
        case 0: /* multisig_as_multi_threshold_1_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_as_multi_threshold_1_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_as_multi_threshold_1_V1 - call */;
            return _toStringCall(
                &m->nested.multisig_as_multi_threshold_1_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2561: /* module 10 call 1 */
        switch (itemIdx) {
        case 0: /* multisig_as_multi_V1 - threshold */;
            return _toStringu16(
                &m->nested.multisig_as_multi_V1.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_as_multi_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_as_multi_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_as_multi_V1 - maybe_timepoint */;
            return _toStringOptionTimepoint_V1(
                &m->nested.multisig_as_multi_V1.maybe_timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_as_multi_V1 - call */;
            return _toStringOpaqueCall_V1(
                &m->nested.multisig_as_multi_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* multisig_as_multi_V1 - store_call */;
            return _toStringbool(
                &m->nested.multisig_as_multi_V1.store_call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 5: /* multisig_as_multi_V1 - max_weight */;
            return _toStringWeight_V1(
                &m->nested.multisig_as_multi_V1.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2562: /* module 10 call 2 */
        switch (itemIdx) {
        case 0: /* multisig_approve_as_multi_V1 - threshold */;
            return _toStringu16(
                &m->nested.multisig_approve_as_multi_V1.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_approve_as_multi_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_approve_as_multi_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_approve_as_multi_V1 - maybe_timepoint */;
            return _toStringOptionTimepoint_V1(
                &m->nested.multisig_approve_as_multi_V1.maybe_timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_approve_as_multi_V1 - call_hash */;
            return _toStringu8_array_32_V1(
                &m->nested.multisig_approve_as_multi_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* multisig_approve_as_multi_V1 - max_weight */;
            return _toStringWeight_V1(
                &m->nested.multisig_approve_as_multi_V1.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2563: /* module 10 call 3 */
        switch (itemIdx) {
        case 0: /* multisig_cancel_as_multi_V1 - threshold */;
            return _toStringu16(
                &m->nested.multisig_cancel_as_multi_V1.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_cancel_as_multi_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_cancel_as_multi_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_cancel_as_multi_V1 - timepoint */;
            return _toStringTimepoint_V1(
                &m->nested.multisig_cancel_as_multi_V1.timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_cancel_as_multi_V1 - call_hash */;
            return _toStringu8_array_32_V1(
                &m->nested.multisig_cancel_as_multi_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2817: /* module 11 call 1 */
        switch (itemIdx) {
        case 0: /* utility_as_derivative_V1 - index */;
            return _toStringu16(
                &m->basic.utility_as_derivative_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* utility_as_derivative_V1 - call */;
            return _toStringCall(
                &m->basic.utility_as_derivative_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3072: /* module 12 call 0 */
        switch (itemIdx) {
        case 0: /* proxy_proxy_V1 - real */;
            return _toStringAccountId_V1(
                &m->nested.proxy_proxy_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_proxy_V1 - force_proxy_type */;
            return _toStringOptionProxyType_V1(
                &m->nested.proxy_proxy_V1.force_proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_proxy_V1 - call */;
            return _toStringCall(
                &m->nested.proxy_proxy_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3073: /* module 12 call 1 */
        switch (itemIdx) {
        case 0: /* proxy_add_proxy_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_add_proxy_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_add_proxy_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_add_proxy_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_add_proxy_V1 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_add_proxy_V1.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3074: /* module 12 call 2 */
        switch (itemIdx) {
        case 0: /* proxy_remove_proxy_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_remove_proxy_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_remove_proxy_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_remove_proxy_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_remove_proxy_V1 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_remove_proxy_V1.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3075: /* module 12 call 3 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 3076: /* module 12 call 4 */
        switch (itemIdx) {
        case 0: /* proxy_anonymous_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_anonymous_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_anonymous_V1 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_anonymous_V1.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_anonymous_V1 - index */;
            return _toStringu16(
                &m->basic.proxy_anonymous_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3077: /* module 12 call 5 */
        switch (itemIdx) {
        case 0: /* proxy_kill_anonymous_V1 - spawner */;
            return _toStringAccountId_V1(
                &m->basic.proxy_kill_anonymous_V1.spawner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_kill_anonymous_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_kill_anonymous_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_kill_anonymous_V1 - index */;
            return _toStringu16(
                &m->basic.proxy_kill_anonymous_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* proxy_kill_anonymous_V1 - height */;
            return _toStringCompactBlockNumber(
                &m->basic.proxy_kill_anonymous_V1.height,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* proxy_kill_anonymous_V1 - ext_index */;
            return _toStringCompactu32(
                &m->basic.proxy_kill_anonymous_V1.ext_index,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3078: /* module 12 call 6 */
        switch (itemIdx) {
        case 0: /* proxy_announce_V1 - real */;
            return _toStringAccountId_V1(
                &m->basic.proxy_announce_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_announce_V1 - call_hash */;
            return _toStringCallHashOf_V1(
                &m->basic.proxy_announce_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3079: /* module 12 call 7 */
        switch (itemIdx) {
        case 0: /* proxy_remove_announcement_V1 - real */;
            return _toStringAccountId_V1(
                &m->basic.proxy_remove_announcement_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_remove_announcement_V1 - call_hash */;
            return _toStringCallHashOf_V1(
                &m->basic.proxy_remove_announcement_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3080: /* module 12 call 8 */
        switch (itemIdx) {
        case 0: /* proxy_reject_announcement_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_reject_announcement_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_reject_announcement_V1 - call_hash */;
            return _toStringCallHashOf_V1(
                &m->basic.proxy_reject_announcement_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3081: /* module 12 call 9 */
        switch (itemIdx) {
        case 0: /* proxy_proxy_announced_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_proxy_announced_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_proxy_announced_V1 - real */;
            return _toStringAccountId_V1(
                &m->basic.proxy_proxy_announced_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_proxy_announced_V1 - force_proxy_type */;
            return _toStringOptionProxyType_V1(
                &m->basic.proxy_proxy_announced_V1.force_proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* proxy_proxy_announced_V1 - call */;
            return _toStringCall(
                &m->basic.proxy_proxy_announced_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3584: /* module 14 call 0 */
        switch (itemIdx) {
        case 0: /* polkadotxcm_send_V1 - dest */;
            return _toStringMultiLocation_V1(
                &m->basic.polkadotxcm_send_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* polkadotxcm_send_V1 - message */;
            return _toStringXcm_V1(
                &m->basic.polkadotxcm_send_V1.message,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3585: /* module 14 call 1 */
        switch (itemIdx) {
        case 0: /* polkadotxcm_execute_V1 - message */;
            return _toStringXcm_V1(
                &m->basic.polkadotxcm_execute_V1.message,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* polkadotxcm_execute_V1 - max_weight */;
            return _toStringWeight_V1(
                &m->basic.polkadotxcm_execute_V1.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#endif
    default:
        return parser_ok;
    }

    return parser_ok;
}

bool _getMethod_ItemIsExpert_V1(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    default:
        return false;
    }
}

bool _getMethod_IsNestingSupported_V1(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 9: // System:Remark with event
    case 512: // Timestamp:Set
    case 768: // Authorship:Set uncles
    case 1280: // ParachainSystem:Set upgrade block
    case 1281: // ParachainSystem:Set validation data
    case 1282: // ParachainSystem:Sudo send upward message
    case 1283: // ParachainSystem:Authorize upgrade
    case 1284: // ParachainSystem:Enact authorized upgrade
    case 2048: // Sudo:Sudo
    case 2049: // Sudo:Sudo unchecked weight
    case 2050: // Sudo:Set key
    case 2051: // Sudo:Sudo as
    case 2816: // Utility:Batch
    case 2817: // Utility:As derivative
    case 2818: // Utility:Batch all
    case 3073: // Proxy:Add proxy
    case 3074: // Proxy:Remove proxy
    case 3075: // Proxy:Remove proxies
    case 3076: // Proxy:Anonymous
    case 3077: // Proxy:Kill anonymous
    case 3078: // Proxy:Announce
    case 3079: // Proxy:Remove announcement
    case 3080: // Proxy:Reject announcement
    case 3081: // Proxy:Proxy announced
    case 3584: // PolkadotXcm:Send
    case 3585: // PolkadotXcm:Execute
        return false;
    default:
        return true;
    }
}
