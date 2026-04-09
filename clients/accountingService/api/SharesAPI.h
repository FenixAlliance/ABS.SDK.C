#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/share_class_create_dto.h"
#include "../model/share_class_dto_envelope.h"
#include "../model/share_class_dto_list_envelope.h"
#include "../model/share_class_update_dto.h"
#include "../model/share_issuance_create_dto.h"
#include "../model/share_issuance_dto_envelope.h"
#include "../model/share_issuance_dto_list_envelope.h"
#include "../model/share_issuance_update_dto.h"
#include "../model/share_transfer_create_dto.h"
#include "../model/share_transfer_dto_envelope.h"
#include "../model/share_transfer_dto_list_envelope.h"
#include "../model/share_transfer_reason_create_dto.h"
#include "../model/share_transfer_reason_dto_envelope.h"
#include "../model/share_transfer_reason_dto_list_envelope.h"
#include "../model/share_transfer_reason_update_dto.h"
#include "../model/share_transfer_update_dto.h"


// Creates a new share class
//
// Creates a new share class.
//
share_class_dto_envelope_t*
SharesAPI_createShareClass(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_class_create_dto_t *share_class_create_dto);


// Creates a new share issuance
//
// Creates a new share issuance.
//
share_issuance_dto_envelope_t*
SharesAPI_createShareIssuance(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_issuance_create_dto_t *share_issuance_create_dto);


// Creates a new share transfer
//
// Creates a new share transfer.
//
share_transfer_dto_envelope_t*
SharesAPI_createShareTransfer(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_transfer_create_dto_t *share_transfer_create_dto);


// Creates a new share transfer reason
//
// Creates a new share transfer reason.
//
share_transfer_reason_dto_envelope_t*
SharesAPI_createShareTransferReason(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, share_transfer_reason_create_dto_t *share_transfer_reason_create_dto);


// Deletes an existing share class
//
// Deletes an existing share class.
//
void
SharesAPI_deleteShareClass(apiClient_t *apiClient, char *tenantId, char *shareClassId, char *api_version, char *x_api_version);


// Deletes an existing share issuance
//
// Deletes an existing share issuance.
//
void
SharesAPI_deleteShareIssuance(apiClient_t *apiClient, char *tenantId, char *issuanceId, char *api_version, char *x_api_version);


// Deletes an existing share transfer
//
// Deletes an existing share transfer.
//
void
SharesAPI_deleteShareTransfer(apiClient_t *apiClient, char *tenantId, char *transferId, char *api_version, char *x_api_version);


// Deletes an existing share transfer reason
//
// Deletes an existing share transfer reason.
//
void
SharesAPI_deleteShareTransferReason(apiClient_t *apiClient, char *tenantId, char *reasonId, char *api_version, char *x_api_version);


// Gets a share class by id
//
// Get a specific share class by its identifier.
//
share_class_dto_envelope_t*
SharesAPI_getShareClass(apiClient_t *apiClient, char *tenantId, char *shareClassId, char *api_version, char *x_api_version);


// Gets the current tenant share classes
//
// Get the currently acting tenant share classes.
//
share_class_dto_list_envelope_t*
SharesAPI_getShareClasses(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant share classes count
//
// Get the currently acting tenant share classes count.
//
int32_envelope_t*
SharesAPI_getShareClassesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets a share issuance by id
//
// Get a specific share issuance by its identifier.
//
share_issuance_dto_envelope_t*
SharesAPI_getShareIssuance(apiClient_t *apiClient, char *tenantId, char *issuanceId, char *api_version, char *x_api_version);


// Gets the current tenant share issuances
//
// Get the currently acting tenant share issuances.
//
share_issuance_dto_list_envelope_t*
SharesAPI_getShareIssuances(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant share issuances count
//
// Get the currently acting tenant share issuances count.
//
int32_envelope_t*
SharesAPI_getShareIssuancesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets a share transfer by id
//
// Get a specific share transfer by its identifier.
//
share_transfer_dto_envelope_t*
SharesAPI_getShareTransfer(apiClient_t *apiClient, char *tenantId, char *transferId, char *api_version, char *x_api_version);


// Gets a share transfer reason by id
//
// Get a specific share transfer reason by its identifier.
//
share_transfer_reason_dto_envelope_t*
SharesAPI_getShareTransferReason(apiClient_t *apiClient, char *tenantId, char *reasonId, char *api_version, char *x_api_version);


// Gets the current tenant share transfer reasons
//
// Get the currently acting tenant share transfer reasons.
//
share_transfer_reason_dto_list_envelope_t*
SharesAPI_getShareTransferReasons(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant share transfer reasons count
//
// Get the currently acting tenant share transfer reasons count.
//
int32_envelope_t*
SharesAPI_getShareTransferReasonsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant share transfers
//
// Get the currently acting tenant share transfers.
//
share_transfer_dto_list_envelope_t*
SharesAPI_getShareTransfers(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Gets the current tenant share transfers count
//
// Get the currently acting tenant share transfers count.
//
int32_envelope_t*
SharesAPI_getShareTransfersCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Updates an existing share class
//
// Updates an existing share class.
//
share_class_dto_envelope_t*
SharesAPI_updateShareClass(apiClient_t *apiClient, char *tenantId, char *shareClassId, char *api_version, char *x_api_version, share_class_update_dto_t *share_class_update_dto);


// Updates an existing share issuance
//
// Updates an existing share issuance.
//
share_issuance_dto_envelope_t*
SharesAPI_updateShareIssuance(apiClient_t *apiClient, char *tenantId, char *issuanceId, char *api_version, char *x_api_version, share_issuance_update_dto_t *share_issuance_update_dto);


// Updates an existing share transfer
//
// Updates an existing share transfer.
//
share_transfer_dto_envelope_t*
SharesAPI_updateShareTransfer(apiClient_t *apiClient, char *tenantId, char *transferId, char *api_version, char *x_api_version, share_transfer_update_dto_t *share_transfer_update_dto);


// Updates an existing share transfer reason
//
// Updates an existing share transfer reason.
//
share_transfer_reason_dto_envelope_t*
SharesAPI_updateShareTransferReason(apiClient_t *apiClient, char *tenantId, char *reasonId, char *api_version, char *x_api_version, share_transfer_reason_update_dto_t *share_transfer_reason_update_dto);


