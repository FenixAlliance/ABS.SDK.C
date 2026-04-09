#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Get inventory details for a stock item
//
// Retrieves the inventory details for a specific stock item by its ID.
//
void
InventoryAPI_getInventoryDetailsAsync(apiClient_t *apiClient, char *stockItemId, char *api_version, char *x_api_version);


