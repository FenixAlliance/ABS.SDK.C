#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/order_dto_envelope.h"


// Get a tracking pixel
//
// Retrieves a tracking pixel by its ID.
//
order_dto_envelope_t*
TrackingPixelsAPI_getTrackingPixelAsync(apiClient_t *apiClient, char *pixelId, char *api_version, char *x_api_version);


