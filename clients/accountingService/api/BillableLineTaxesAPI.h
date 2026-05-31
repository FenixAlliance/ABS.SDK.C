#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/applied_item_tax_record_create_dto.h"
#include "../model/applied_item_tax_record_dto_i_read_only_list_envelope.h"
#include "../model/applied_item_tax_record_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/int32_envelope.h"


// Create a new tax for a billable line.
//
// Creates a new tax entry for the specified billable line.
//
empty_envelope_t*
BillableLineTaxesAPI_createBillableLineTax(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *api_version, char *x_api_version, applied_item_tax_record_create_dto_t *applied_item_tax_record_create_dto);


// Delete a tax from a billable line.
//
// Deletes the specified tax entry from the billable line.
//
empty_envelope_t*
BillableLineTaxesAPI_deleteBillableLineTax(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *taxId, char *api_version, char *x_api_version);


// Get taxes for a billable line.
//
// Retrieves the taxes applied to the specified billable line.
//
applied_item_tax_record_dto_i_read_only_list_envelope_t*
BillableLineTaxesAPI_getBillableLineTaxes(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *api_version, char *x_api_version);


// Get the count of taxes for a billable line.
//
// Retrieves the total count of taxes applied to the specified billable line.
//
int32_envelope_t*
BillableLineTaxesAPI_getBillableLineTaxesCount(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *api_version, char *x_api_version);


// Update a tax for a billable line.
//
// Updates the specified tax entry for the billable line.
//
empty_envelope_t*
BillableLineTaxesAPI_updateBillableLineTax(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *taxId, char *api_version, char *x_api_version, applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto);


