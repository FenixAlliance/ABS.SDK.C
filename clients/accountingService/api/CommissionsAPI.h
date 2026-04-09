#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/commission_create_dto.h"
#include "../model/commission_dto_envelope.h"
#include "../model/commission_dto_list_envelope.h"
#include "../model/commission_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/payment_commission_create_dto.h"
#include "../model/payment_commission_dto_envelope.h"
#include "../model/payment_commission_dto_list_envelope.h"
#include "../model/payment_commission_update_dto.h"


// Create a commission
//
// Creates a new commission.
//
empty_envelope_t*
CommissionsAPI_createCommissionAsync(apiClient_t *apiClient, char *tenantId, commission_create_dto_t *commission_create_dto, char *api_version, char *x_api_version);


// Create a payment commission
//
// Creates a new payment commission.
//
empty_envelope_t*
CommissionsAPI_createPaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, payment_commission_create_dto_t *payment_commission_create_dto, char *api_version, char *x_api_version);


// Delete a commission
//
// Deletes a commission.
//
empty_envelope_t*
CommissionsAPI_deleteCommissionAsync(apiClient_t *apiClient, char *tenantId, char *commissionId, char *api_version, char *x_api_version);


// Delete a payment commission
//
// Deletes a payment commission.
//
empty_envelope_t*
CommissionsAPI_deletePaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, char *paymentCommissionId, char *api_version, char *x_api_version);


// Get a commission by id
//
// Retrieves a commission by its identifier.
//
commission_dto_envelope_t*
CommissionsAPI_getCommissionAsync(apiClient_t *apiClient, char *tenantId, char *commissionId, char *api_version, char *x_api_version);


// Get all commissions for a tenant
//
// Retrieves all commissions for the specified tenant using OData query options.
//
commission_dto_list_envelope_t*
CommissionsAPI_getCommissionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of commissions for a tenant
//
// Retrieves the count of commissions for the specified tenant using OData query options.
//
int32_envelope_t*
CommissionsAPI_getCommissionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a payment commission by id
//
// Retrieves a payment commission by its identifier.
//
payment_commission_dto_envelope_t*
CommissionsAPI_getPaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, char *paymentCommissionId, char *api_version, char *x_api_version);


// Get all payment commissions for a tenant
//
// Retrieves all payment commissions for the specified tenant using OData query options.
//
payment_commission_dto_list_envelope_t*
CommissionsAPI_getPaymentCommissionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of payment commissions for a tenant
//
// Retrieves the count of payment commissions for the specified tenant using OData query options.
//
int32_envelope_t*
CommissionsAPI_getPaymentCommissionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a commission
//
// Updates an existing commission.
//
empty_envelope_t*
CommissionsAPI_updateCommissionAsync(apiClient_t *apiClient, char *tenantId, char *commissionId, commission_update_dto_t *commission_update_dto, char *api_version, char *x_api_version);


// Update a payment commission
//
// Updates an existing payment commission.
//
empty_envelope_t*
CommissionsAPI_updatePaymentCommissionAsync(apiClient_t *apiClient, char *tenantId, char *paymentCommissionId, payment_commission_update_dto_t *payment_commission_update_dto, char *api_version, char *x_api_version);


