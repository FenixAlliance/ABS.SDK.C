#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/record_signing_participant_outcome_dto.h"
#include "../model/signing_participant_dto.h"
#include "../model/signing_participant_dto_collection_query_parameters.h"
#include "../model/signing_participant_dto_list_envelope.h"


// Get signing participant by ID
//
signing_participant_dto_t*
SigningParticipantsAPI_getSigningParticipantByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all signing participants
//
signing_participant_dto_list_envelope_t*
SigningParticipantsAPI_getSigningParticipantsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_participant_dto_collection_query_parameters_t *signing_participant_dto_collection_query_parameters);


// Get signing participants count
//
int32_envelope_t*
SigningParticipantsAPI_getSigningParticipantsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_participant_dto_collection_query_parameters_t *signing_participant_dto_collection_query_parameters);


// Mark a participant as having viewed the request
//
void
SigningParticipantsAPI_markViewedAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Record a manual/external participant outcome
//
void
SigningParticipantsAPI_recordOutcomeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, record_signing_participant_outcome_dto_t *record_signing_participant_outcome_dto);


