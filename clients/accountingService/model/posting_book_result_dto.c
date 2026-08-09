#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "posting_book_result_dto.h"


char* posting_book_result_dto_status_ToString(accountingservice_posting_book_result_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Posted", "Duplicate", "Rejected" };
    return statusArray[status];
}

accountingservice_posting_book_result_dto_STATUS_e posting_book_result_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Posted", "Duplicate", "Rejected" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

posting_book_result_dto_t *posting_book_result_dto_create(
    char *id,
    char *timestamp,
    char *financial_book_id,
    accountingservice_posting_book_result_dto_STATUS_e status,
    char *journal_entry_id,
    char *failure_code
    ) {
    posting_book_result_dto_t *posting_book_result_dto_local_var = malloc(sizeof(posting_book_result_dto_t));
    if (!posting_book_result_dto_local_var) {
        return NULL;
    }
    posting_book_result_dto_local_var->id = id;
    posting_book_result_dto_local_var->timestamp = timestamp;
    posting_book_result_dto_local_var->financial_book_id = financial_book_id;
    posting_book_result_dto_local_var->status = status;
    posting_book_result_dto_local_var->journal_entry_id = journal_entry_id;
    posting_book_result_dto_local_var->failure_code = failure_code;

    return posting_book_result_dto_local_var;
}


void posting_book_result_dto_free(posting_book_result_dto_t *posting_book_result_dto) {
    if(NULL == posting_book_result_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (posting_book_result_dto->id) {
        free(posting_book_result_dto->id);
        posting_book_result_dto->id = NULL;
    }
    if (posting_book_result_dto->timestamp) {
        free(posting_book_result_dto->timestamp);
        posting_book_result_dto->timestamp = NULL;
    }
    if (posting_book_result_dto->financial_book_id) {
        free(posting_book_result_dto->financial_book_id);
        posting_book_result_dto->financial_book_id = NULL;
    }
    if (posting_book_result_dto->journal_entry_id) {
        free(posting_book_result_dto->journal_entry_id);
        posting_book_result_dto->journal_entry_id = NULL;
    }
    if (posting_book_result_dto->failure_code) {
        free(posting_book_result_dto->failure_code);
        posting_book_result_dto->failure_code = NULL;
    }
    free(posting_book_result_dto);
}

cJSON *posting_book_result_dto_convertToJSON(posting_book_result_dto_t *posting_book_result_dto) {
    cJSON *item = cJSON_CreateObject();

    // posting_book_result_dto->id
    if(posting_book_result_dto->id) {
    if(cJSON_AddStringToObject(item, "id", posting_book_result_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // posting_book_result_dto->timestamp
    if(posting_book_result_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", posting_book_result_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // posting_book_result_dto->financial_book_id
    if(posting_book_result_dto->financial_book_id) {
    if(cJSON_AddStringToObject(item, "financialBookId", posting_book_result_dto->financial_book_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_book_result_dto->status
    if(posting_book_result_dto->status != accountingservice_posting_book_result_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusposting_book_result_dto_ToString(posting_book_result_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // posting_book_result_dto->journal_entry_id
    if(posting_book_result_dto->journal_entry_id) {
    if(cJSON_AddStringToObject(item, "journalEntryId", posting_book_result_dto->journal_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_book_result_dto->failure_code
    if(posting_book_result_dto->failure_code) {
    if(cJSON_AddStringToObject(item, "failureCode", posting_book_result_dto->failure_code) == NULL) {
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

posting_book_result_dto_t *posting_book_result_dto_parseFromJSON(cJSON *posting_book_result_dtoJSON){

    posting_book_result_dto_t *posting_book_result_dto_local_var = NULL;

    // posting_book_result_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(posting_book_result_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // posting_book_result_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(posting_book_result_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // posting_book_result_dto->financial_book_id
    cJSON *financial_book_id = cJSON_GetObjectItemCaseSensitive(posting_book_result_dtoJSON, "financialBookId");
    if (financial_book_id) { 
    if(!cJSON_IsString(financial_book_id) && !cJSON_IsNull(financial_book_id))
    {
    goto end; //String
    }
    }

    // posting_book_result_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(posting_book_result_dtoJSON, "status");
    accountingservice_posting_book_result_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = posting_book_result_dto_status_FromString(status->valuestring);
    }

    // posting_book_result_dto->journal_entry_id
    cJSON *journal_entry_id = cJSON_GetObjectItemCaseSensitive(posting_book_result_dtoJSON, "journalEntryId");
    if (journal_entry_id) { 
    if(!cJSON_IsString(journal_entry_id) && !cJSON_IsNull(journal_entry_id))
    {
    goto end; //String
    }
    }

    // posting_book_result_dto->failure_code
    cJSON *failure_code = cJSON_GetObjectItemCaseSensitive(posting_book_result_dtoJSON, "failureCode");
    if (failure_code) { 
    if(!cJSON_IsString(failure_code) && !cJSON_IsNull(failure_code))
    {
    goto end; //String
    }
    }


    posting_book_result_dto_local_var = posting_book_result_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        financial_book_id && !cJSON_IsNull(financial_book_id) ? strdup(financial_book_id->valuestring) : NULL,
        status ? statusVariable : accountingservice_posting_book_result_dto_STATUS_NULL,
        journal_entry_id && !cJSON_IsNull(journal_entry_id) ? strdup(journal_entry_id->valuestring) : NULL,
        failure_code && !cJSON_IsNull(failure_code) ? strdup(failure_code->valuestring) : NULL
        );

    return posting_book_result_dto_local_var;
end:
    return NULL;

}
