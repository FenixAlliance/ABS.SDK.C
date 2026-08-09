#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "assign_journal_to_book_request.h"



assign_journal_to_book_request_t *assign_journal_to_book_request_create(
    char *financial_book_id,
    char *code
    ) {
    assign_journal_to_book_request_t *assign_journal_to_book_request_local_var = malloc(sizeof(assign_journal_to_book_request_t));
    if (!assign_journal_to_book_request_local_var) {
        return NULL;
    }
    assign_journal_to_book_request_local_var->financial_book_id = financial_book_id;
    assign_journal_to_book_request_local_var->code = code;

    return assign_journal_to_book_request_local_var;
}


void assign_journal_to_book_request_free(assign_journal_to_book_request_t *assign_journal_to_book_request) {
    if(NULL == assign_journal_to_book_request){
        return ;
    }
    listEntry_t *listEntry;
    if (assign_journal_to_book_request->financial_book_id) {
        free(assign_journal_to_book_request->financial_book_id);
        assign_journal_to_book_request->financial_book_id = NULL;
    }
    if (assign_journal_to_book_request->code) {
        free(assign_journal_to_book_request->code);
        assign_journal_to_book_request->code = NULL;
    }
    free(assign_journal_to_book_request);
}

cJSON *assign_journal_to_book_request_convertToJSON(assign_journal_to_book_request_t *assign_journal_to_book_request) {
    cJSON *item = cJSON_CreateObject();

    // assign_journal_to_book_request->financial_book_id
    if (!assign_journal_to_book_request->financial_book_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "financialBookId", assign_journal_to_book_request->financial_book_id) == NULL) {
    goto fail; //String
    }


    // assign_journal_to_book_request->code
    if (!assign_journal_to_book_request->code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "code", assign_journal_to_book_request->code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

assign_journal_to_book_request_t *assign_journal_to_book_request_parseFromJSON(cJSON *assign_journal_to_book_requestJSON){

    assign_journal_to_book_request_t *assign_journal_to_book_request_local_var = NULL;

    // assign_journal_to_book_request->financial_book_id
    cJSON *financial_book_id = cJSON_GetObjectItemCaseSensitive(assign_journal_to_book_requestJSON, "financialBookId");
    if (!financial_book_id) {
        goto end;
    }

    
    if(!cJSON_IsString(financial_book_id))
    {
    goto end; //String
    }

    // assign_journal_to_book_request->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(assign_journal_to_book_requestJSON, "code");
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }


    assign_journal_to_book_request_local_var = assign_journal_to_book_request_create (
        strdup(financial_book_id->valuestring),
        strdup(code->valuestring)
        );

    return assign_journal_to_book_request_local_var;
end:
    return NULL;

}
