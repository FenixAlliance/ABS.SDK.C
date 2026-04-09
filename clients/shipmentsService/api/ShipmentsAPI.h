#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/shipment_dto_list_envelope.h"


// Retrieve a list of shipments
//
// Retrieves a list of shipments for the specified tenant.
//
shipment_dto_list_envelope_t*
ShipmentsAPI_getShipmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


