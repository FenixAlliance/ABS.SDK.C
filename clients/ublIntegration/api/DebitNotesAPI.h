#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

// Enum PROFILE for DebitNotesAPI_apiV2UblServiceDebitNotesInvoiceIdGet
typedef enum  { ublintegration_apiV2UblServiceDebitNotesInvoiceIdGet_PROFILE_NULL = 0, ublintegration_apiV2UblServiceDebitNotesInvoiceIdGet_PROFILE_Generic, ublintegration_apiV2UblServiceDebitNotesInvoiceIdGet_PROFILE_Dian } ublintegration_apiV2UblServiceDebitNotesInvoiceIdGet_profile_e;


void
DebitNotesAPI_apiV2UblServiceDebitNotesInvoiceIdGet(apiClient_t *apiClient, char *tenantId, char *invoiceId, ublintegration_apiV2UblServiceDebitNotesInvoiceIdGet_profile_e profile, char *api_version, char *x_api_version);


