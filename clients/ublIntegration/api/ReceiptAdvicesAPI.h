#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

// Enum PROFILE for ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet
typedef enum  { ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_NULL = 0, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_Generic, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_Dian } ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e;

// Enum PROFILE for ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet
typedef enum  { ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_NULL = 0, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_Generic, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_Dian } ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e;


void
ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet(apiClient_t *apiClient, char *tenantId, char *itemRestockId, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e profile, char *api_version, char *x_api_version);


void
ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet(apiClient_t *apiClient, char *tenantId, char *itemRestockId, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e profile, char *api_version, char *x_api_version);


