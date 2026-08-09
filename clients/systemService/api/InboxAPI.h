#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/inbox_admin_reason_dto.h"
#include "../model/inbox_health_dto_envelope.h"
#include "../model/inbox_message_dto_collection_query_parameters.h"
#include "../model/inbox_message_dto_envelope.h"
#include "../model/inbox_message_dto_i_read_only_list_envelope.h"
#include "../model/inbox_replay_result_dto_envelope.h"
#include "../model/int32_envelope.h"


// Cancel a scheduled inbox retry
//
// Stops a RetryScheduled message from retrying by operator decision, moving it to the terminal Cancelled state (deliberately distinct from DeadLettered so the dead-letter gauge stays honest). The reason is audit-critical. Only a RetryScheduled message can be cancelled. Global-administrator only.
//
empty_envelope_t*
InboxAPI_cancelInboxMessageRetry(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);


// Manually dead-letter an inbox message
//
// Manually moves a non-terminal message to the terminal DeadLettered state. The reason is audit-critical. Global-administrator only.
//
empty_envelope_t*
InboxAPI_deadLetterInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);


// Expedite a retry-scheduled inbox message
//
// Pulls a RetryScheduled message's scheduled instant forward to now so the processor claims it on the next poll, bypassing the remaining backoff. Same row, retry budget untouched. Only a RetryScheduled message can be expedited. Global-administrator only.
//
empty_envelope_t*
InboxAPI_expediteInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);


// List duplicate-bearing inbox messages
//
// Lists inbox messages that have observed a re-delivery (DeliveryCount > 1) — durable evidence that a source is re-sending, surfaced with DeliveryCount / LastDuplicateReceivedAtUtc. Further OData filtering/paging applies. Global-administrator only.
//
inbox_message_dto_i_read_only_list_envelope_t*
InboxAPI_getDuplicateInboxMessages(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);


// Count duplicate-bearing inbox messages
//
// Returns the count of duplicate-bearing inbox messages under the same OData shaping as the duplicates list. Global-administrator only.
//
int32_envelope_t*
InboxAPI_getDuplicateInboxMessagesCount(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);


// Get an inbox correlation chain
//
// Returns every inbox message that shares a correlation id — one logical inbound interaction end-to-end, including its replay generations — oldest-received first. Global-administrator only.
//
inbox_message_dto_i_read_only_list_envelope_t*
InboxAPI_getInboxCorrelationChain(apiClient_t *apiClient, char *correlationId, char *api_version, char *x_api_version);


// Get durable-inbox processor health
//
// Returns a single snapshot of the durable-inbox processor: whether it is enabled, the per-status counts (received/accepted/processing/retry-scheduled/rejected/quarantined/dead-lettered/cancelled), the age of the oldest accepted message, and the last successful processing instant. Global-administrator only.
//
inbox_health_dto_envelope_t*
InboxAPI_getInboxHealth(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get one inbox message
//
// Returns one inbox message's payload-safe detail by id — both lifecycle axes (processing status + independent verification status), the dedup lineage, attempt/generation counters, the recorded failure, and the timestamps. Global-administrator only.
//
inbox_message_dto_envelope_t*
InboxAPI_getInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);


// List inbox messages
//
// Lists durable-inbox messages (payload-safe fields only). Use OData to scope by any projected field — e.g. $filter=Status eq 'Quarantined' for the quarantine review, Status eq 'DeadLettered' for terminal failures, VerificationStatus eq 'Failed' for forged/untrusted callbacks, SourceSystem eq 'stripe', or a ReceivedAtUtc range — and to page/order. Global-administrator only.
//
inbox_message_dto_i_read_only_list_envelope_t*
InboxAPI_getInboxMessages(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);


// Count inbox messages
//
// Returns the count of durable-inbox messages under the same OData shaping as the list read (e.g. $filter=Status eq 'Quarantined'). Global-administrator only.
//
int32_envelope_t*
InboxAPI_getInboxMessagesCount(apiClient_t *apiClient, char *api_version, char *x_api_version, inbox_message_dto_collection_query_parameters_t *inbox_message_dto_collection_query_parameters);


// Manually quarantine an inbox message
//
// Manually holds a non-terminal message for review in the terminal Quarantined state (e.g. an operator judges it suspicious). The reason is audit-critical. Global-administrator only.
//
empty_envelope_t*
InboxAPI_quarantineInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);


// Release a stuck inbox lease
//
// Force-releases the lease on a message wedged in Processing (a crashed/hung processor) and returns it to the claimable Accepted state, due now, so the next poll re-drives it. The in-flight attempt is NOT counted — a crash is not a business failure. Only a Processing message can have its lease released. Global-administrator only.
//
empty_envelope_t*
InboxAPI_releaseInboxMessageLease(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version);


// Replay a terminal inbox message as a new generation
//
// Replays a terminal message as a NEW processing generation over its immutable received evidence — the inbox's recovery lever (distinct from the outbox's same-row requeue). A selected replay-generation row is resolved back to its lineage root before replaying, so numbering stays global and collision-free; the new row is claimable at once with a fresh retry budget, and the root's evidence and budget are never mutated. Legal only from a terminal state whose authenticity passed. Returns the new generation's identity. The reason is audit-critical. Global-administrator only.
//
inbox_replay_result_dto_envelope_t*
InboxAPI_replayInboxMessage(apiClient_t *apiClient, char *id, char *api_version, char *x_api_version, inbox_admin_reason_dto_t *inbox_admin_reason_dto);


