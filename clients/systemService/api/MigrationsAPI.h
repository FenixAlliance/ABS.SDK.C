#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/string_list_envelope.h"


// Apply pending database migrations
//
// Applies all pending database migrations and returns the list of migrations that were applied.
//
string_list_envelope_t*
MigrationsAPI_migrate(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Retrieve database migrations
//
// Retrieves the list of applied or pending database migrations.
//
string_list_envelope_t*
MigrationsAPI_migrations(apiClient_t *apiClient, int *pending, char *api_version, char *x_api_version);


