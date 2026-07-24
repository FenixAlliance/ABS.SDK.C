#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"


binary_t**
EditorAssetsAPI_getEditorAssetAsync(apiClient_t *apiClient, char *fileId, char *api_version, char *x_api_version);


