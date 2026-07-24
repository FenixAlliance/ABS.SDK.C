#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reverse_journal_entry_request.h"



reverse_journal_entry_request_t *reverse_journal_entry_request_create(
    char *reversal_period_id
    ) {
    reverse_journal_entry_request_t *reverse_journal_entry_request_local_var = malloc(sizeof(reverse_journal_entry_request_t));
    if (!reverse_journal_entry_request_local_var) {
        return NULL;
    }
    reverse_journal_entry_request_local_var->reversal_period_id = reversal_period_id;

    return reverse_journal_entry_request_local_var;
}


void reverse_journal_entry_request_free(reverse_journal_entry_request_t *reverse_journal_entry_request) {
    if(NULL == reverse_journal_entry_request){
        return ;
    }
    listEntry_t *listEntry;
    if (reverse_journal_entry_request->reversal_period_id) {
        free(reverse_journal_entry_request->reversal_period_id);
        reverse_journal_entry_request->reversal_period_id = NULL;
    }
    free(reverse_journal_entry_request);
}

cJSON *reverse_journal_entry_request_convertToJSON(reverse_journal_entry_request_t *reverse_journal_entry_request) {
    cJSON *item = cJSON_CreateObject();

    // reverse_journal_entry_request->reversal_period_id
    if (!reverse_journal_entry_request->reversal_period_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "reversalPeriodId", reverse_journal_entry_request->reversal_period_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

reverse_journal_entry_request_t *reverse_journal_entry_request_parseFromJSON(cJSON *reverse_journal_entry_requestJSON){

    reverse_journal_entry_request_t *reverse_journal_entry_request_local_var = NULL;

    // reverse_journal_entry_request->reversal_period_id
    cJSON *reversal_period_id = cJSON_GetObjectItemCaseSensitive(reverse_journal_entry_requestJSON, "reversalPeriodId");
    if (!reversal_period_id) {
        goto end;
    }

    
    if(!cJSON_IsString(reversal_period_id))
    {
    goto end; //String
    }


    reverse_journal_entry_request_local_var = reverse_journal_entry_request_create (
        strdup(reversal_period_id->valuestring)
        );

    return reverse_journal_entry_request_local_var;
end:
    return NULL;

}
