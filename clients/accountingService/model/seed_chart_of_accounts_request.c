#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "seed_chart_of_accounts_request.h"



seed_chart_of_accounts_request_t *seed_chart_of_accounts_request_create(
    char *file_url
    ) {
    seed_chart_of_accounts_request_t *seed_chart_of_accounts_request_local_var = malloc(sizeof(seed_chart_of_accounts_request_t));
    if (!seed_chart_of_accounts_request_local_var) {
        return NULL;
    }
    seed_chart_of_accounts_request_local_var->file_url = file_url;

    return seed_chart_of_accounts_request_local_var;
}


void seed_chart_of_accounts_request_free(seed_chart_of_accounts_request_t *seed_chart_of_accounts_request) {
    if(NULL == seed_chart_of_accounts_request){
        return ;
    }
    listEntry_t *listEntry;
    if (seed_chart_of_accounts_request->file_url) {
        free(seed_chart_of_accounts_request->file_url);
        seed_chart_of_accounts_request->file_url = NULL;
    }
    free(seed_chart_of_accounts_request);
}

cJSON *seed_chart_of_accounts_request_convertToJSON(seed_chart_of_accounts_request_t *seed_chart_of_accounts_request) {
    cJSON *item = cJSON_CreateObject();

    // seed_chart_of_accounts_request->file_url
    if(seed_chart_of_accounts_request->file_url) {
    if(cJSON_AddStringToObject(item, "fileUrl", seed_chart_of_accounts_request->file_url) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

seed_chart_of_accounts_request_t *seed_chart_of_accounts_request_parseFromJSON(cJSON *seed_chart_of_accounts_requestJSON){

    seed_chart_of_accounts_request_t *seed_chart_of_accounts_request_local_var = NULL;

    // seed_chart_of_accounts_request->file_url
    cJSON *file_url = cJSON_GetObjectItemCaseSensitive(seed_chart_of_accounts_requestJSON, "fileUrl");
    if (file_url) { 
    if(!cJSON_IsString(file_url) && !cJSON_IsNull(file_url))
    {
    goto end; //String
    }
    }


    seed_chart_of_accounts_request_local_var = seed_chart_of_accounts_request_create (
        file_url && !cJSON_IsNull(file_url) ? strdup(file_url->valuestring) : NULL
        );

    return seed_chart_of_accounts_request_local_var;
end:
    return NULL;

}
