#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

// Enum PROFILE for DespatchAdvicesAPI_apiV2UblServiceDespatchAdvicesShipmentIdGet
typedef enum  { ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_PROFILE_NULL = 0, ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_PROFILE_Generic, ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_PROFILE_Dian } ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_profile_e;


void
DespatchAdvicesAPI_apiV2UblServiceDespatchAdvicesShipmentIdGet(apiClient_t *apiClient, char *tenantId, char *shipmentId, ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_profile_e profile, char *api_version, char *x_api_version);


