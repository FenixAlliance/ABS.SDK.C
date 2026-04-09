#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/blob_envelope.h"
#include "../model/error_envelope.h"


blob_envelope_t*
BlobsAPI_getBlobAsync(apiClient_t *apiClient, char *tenantId, char *filePath, char *api_version, char *x_api_version);


blob_envelope_t*
BlobsAPI_getBlobsAsync(apiClient_t *apiClient, char *tenantId, char *folderPath, char *browseFilter, char *filePrefix, int *recurse, int *maxResults, int *includeAttributes, char *api_version, char *x_api_version);


