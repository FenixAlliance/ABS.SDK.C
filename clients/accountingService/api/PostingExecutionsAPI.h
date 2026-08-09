#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/posting_execution_dto_collection_query_parameters.h"
#include "../model/posting_execution_dto_i_read_only_list_envelope.h"


// Count posting executions
//
// Returns the count of the tenant's posting-inbox executions under the same OData shaping as the list read (e.g. $filter=Status eq 'Rejected' to count rejected intents). Requires journals_read.
//
int32_envelope_t*
PostingExecutionsAPI_countPostingExecutionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters);


// List posting executions
//
// Lists the tenant's posting-inbox executions (the durable evidence of every posting intent). Use OData to scope to a state — e.g. $filter=Status eq 'Rejected' for rejected intents, or Status eq 'PendingMapping'/'PendingPeriod'/'PendingRate' for the retryable pending set — and to page/order. Requires journals_read.
//
posting_execution_dto_i_read_only_list_envelope_t*
PostingExecutionsAPI_getPostingExecutionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, posting_execution_dto_collection_query_parameters_t *posting_execution_dto_collection_query_parameters);


