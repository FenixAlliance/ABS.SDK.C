#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "posting_execution_dto.h"


char* posting_execution_dto_status_ToString(accountingservice_posting_execution_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Received", "Processing", "Posted", "Duplicate", "PendingMapping", "PendingPeriod", "PendingRate", "Rejected" };
    return statusArray[status];
}

accountingservice_posting_execution_dto_STATUS_e posting_execution_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Received", "Processing", "Posted", "Duplicate", "PendingMapping", "PendingPeriod", "PendingRate", "Rejected" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* posting_execution_dto_failure_kind_ToString(accountingservice_posting_execution_dto_FAILUREKIND_e failure_kind) {
    char* failure_kindArray[] =  { "NULL", "UnknownOperation", "UnknownRole", "AmbiguousPolicy", "MissingAccountMapping", "MissingFinancialBook", "MissingJournal", "ClosedPeriod", "MissingFxRate", "InvalidFxEvidence", "UnbalancedPlan", "DuplicateIntent", "DuplicateBookPosting", "InvalidPartyReference", "InvalidCustodyContext", "PolicyConfigurationError" };
    return failure_kindArray[failure_kind];
}

accountingservice_posting_execution_dto_FAILUREKIND_e posting_execution_dto_failure_kind_FromString(char* failure_kind){
    int stringToReturn = 0;
    char *failure_kindArray[] =  { "NULL", "UnknownOperation", "UnknownRole", "AmbiguousPolicy", "MissingAccountMapping", "MissingFinancialBook", "MissingJournal", "ClosedPeriod", "MissingFxRate", "InvalidFxEvidence", "UnbalancedPlan", "DuplicateIntent", "DuplicateBookPosting", "InvalidPartyReference", "InvalidCustodyContext", "PolicyConfigurationError" };
    size_t sizeofArray = sizeof(failure_kindArray) / sizeof(failure_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(failure_kind, failure_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* posting_execution_dto_failure_class_ToString(accountingservice_posting_execution_dto_FAILURECLASS_e failure_class) {
    char* failure_classArray[] =  { "NULL", "Retryable", "OperatorActionRequired", "ConfigurationError", "ProducerError" };
    return failure_classArray[failure_class];
}

accountingservice_posting_execution_dto_FAILURECLASS_e posting_execution_dto_failure_class_FromString(char* failure_class){
    int stringToReturn = 0;
    char *failure_classArray[] =  { "NULL", "Retryable", "OperatorActionRequired", "ConfigurationError", "ProducerError" };
    size_t sizeofArray = sizeof(failure_classArray) / sizeof(failure_classArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(failure_class, failure_classArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

posting_execution_dto_t *posting_execution_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *posting_intent_id,
    char *posting_idempotency_key,
    char *intent_type,
    char *posting_operation,
    char *source_document_type,
    char *source_document_id,
    accountingservice_posting_execution_dto_STATUS_e status,
    accountingservice_posting_execution_dto_FAILUREKIND_e failure_kind,
    char *failure_code,
    int retryable,
    char *correlation_id,
    char *causation_id,
    char *received_at_utc,
    char *processing_started_at_utc,
    char *completed_at_utc,
    list_t *book_results,
    accountingservice_posting_execution_dto_FAILURECLASS_e failure_class
    ) {
    posting_execution_dto_t *posting_execution_dto_local_var = malloc(sizeof(posting_execution_dto_t));
    if (!posting_execution_dto_local_var) {
        return NULL;
    }
    posting_execution_dto_local_var->id = id;
    posting_execution_dto_local_var->timestamp = timestamp;
    posting_execution_dto_local_var->tenant_id = tenant_id;
    posting_execution_dto_local_var->enrollment_id = enrollment_id;
    posting_execution_dto_local_var->posting_intent_id = posting_intent_id;
    posting_execution_dto_local_var->posting_idempotency_key = posting_idempotency_key;
    posting_execution_dto_local_var->intent_type = intent_type;
    posting_execution_dto_local_var->posting_operation = posting_operation;
    posting_execution_dto_local_var->source_document_type = source_document_type;
    posting_execution_dto_local_var->source_document_id = source_document_id;
    posting_execution_dto_local_var->status = status;
    posting_execution_dto_local_var->failure_kind = failure_kind;
    posting_execution_dto_local_var->failure_code = failure_code;
    posting_execution_dto_local_var->retryable = retryable;
    posting_execution_dto_local_var->correlation_id = correlation_id;
    posting_execution_dto_local_var->causation_id = causation_id;
    posting_execution_dto_local_var->received_at_utc = received_at_utc;
    posting_execution_dto_local_var->processing_started_at_utc = processing_started_at_utc;
    posting_execution_dto_local_var->completed_at_utc = completed_at_utc;
    posting_execution_dto_local_var->book_results = book_results;
    posting_execution_dto_local_var->failure_class = failure_class;

    return posting_execution_dto_local_var;
}


void posting_execution_dto_free(posting_execution_dto_t *posting_execution_dto) {
    if(NULL == posting_execution_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (posting_execution_dto->id) {
        free(posting_execution_dto->id);
        posting_execution_dto->id = NULL;
    }
    if (posting_execution_dto->timestamp) {
        free(posting_execution_dto->timestamp);
        posting_execution_dto->timestamp = NULL;
    }
    if (posting_execution_dto->tenant_id) {
        free(posting_execution_dto->tenant_id);
        posting_execution_dto->tenant_id = NULL;
    }
    if (posting_execution_dto->enrollment_id) {
        free(posting_execution_dto->enrollment_id);
        posting_execution_dto->enrollment_id = NULL;
    }
    if (posting_execution_dto->posting_intent_id) {
        free(posting_execution_dto->posting_intent_id);
        posting_execution_dto->posting_intent_id = NULL;
    }
    if (posting_execution_dto->posting_idempotency_key) {
        free(posting_execution_dto->posting_idempotency_key);
        posting_execution_dto->posting_idempotency_key = NULL;
    }
    if (posting_execution_dto->intent_type) {
        free(posting_execution_dto->intent_type);
        posting_execution_dto->intent_type = NULL;
    }
    if (posting_execution_dto->posting_operation) {
        free(posting_execution_dto->posting_operation);
        posting_execution_dto->posting_operation = NULL;
    }
    if (posting_execution_dto->source_document_type) {
        free(posting_execution_dto->source_document_type);
        posting_execution_dto->source_document_type = NULL;
    }
    if (posting_execution_dto->source_document_id) {
        free(posting_execution_dto->source_document_id);
        posting_execution_dto->source_document_id = NULL;
    }
    if (posting_execution_dto->failure_code) {
        free(posting_execution_dto->failure_code);
        posting_execution_dto->failure_code = NULL;
    }
    if (posting_execution_dto->correlation_id) {
        free(posting_execution_dto->correlation_id);
        posting_execution_dto->correlation_id = NULL;
    }
    if (posting_execution_dto->causation_id) {
        free(posting_execution_dto->causation_id);
        posting_execution_dto->causation_id = NULL;
    }
    if (posting_execution_dto->received_at_utc) {
        free(posting_execution_dto->received_at_utc);
        posting_execution_dto->received_at_utc = NULL;
    }
    if (posting_execution_dto->processing_started_at_utc) {
        free(posting_execution_dto->processing_started_at_utc);
        posting_execution_dto->processing_started_at_utc = NULL;
    }
    if (posting_execution_dto->completed_at_utc) {
        free(posting_execution_dto->completed_at_utc);
        posting_execution_dto->completed_at_utc = NULL;
    }
    if (posting_execution_dto->book_results) {
        list_ForEach(listEntry, posting_execution_dto->book_results) {
            posting_book_result_dto_free(listEntry->data);
        }
        list_freeList(posting_execution_dto->book_results);
        posting_execution_dto->book_results = NULL;
    }
    free(posting_execution_dto);
}

cJSON *posting_execution_dto_convertToJSON(posting_execution_dto_t *posting_execution_dto) {
    cJSON *item = cJSON_CreateObject();

    // posting_execution_dto->id
    if(posting_execution_dto->id) {
    if(cJSON_AddStringToObject(item, "id", posting_execution_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->timestamp
    if(posting_execution_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", posting_execution_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // posting_execution_dto->tenant_id
    if(posting_execution_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", posting_execution_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->enrollment_id
    if(posting_execution_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", posting_execution_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->posting_intent_id
    if(posting_execution_dto->posting_intent_id) {
    if(cJSON_AddStringToObject(item, "postingIntentId", posting_execution_dto->posting_intent_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->posting_idempotency_key
    if(posting_execution_dto->posting_idempotency_key) {
    if(cJSON_AddStringToObject(item, "postingIdempotencyKey", posting_execution_dto->posting_idempotency_key) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->intent_type
    if(posting_execution_dto->intent_type) {
    if(cJSON_AddStringToObject(item, "intentType", posting_execution_dto->intent_type) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->posting_operation
    if(posting_execution_dto->posting_operation) {
    if(cJSON_AddStringToObject(item, "postingOperation", posting_execution_dto->posting_operation) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->source_document_type
    if(posting_execution_dto->source_document_type) {
    if(cJSON_AddStringToObject(item, "sourceDocumentType", posting_execution_dto->source_document_type) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->source_document_id
    if(posting_execution_dto->source_document_id) {
    if(cJSON_AddStringToObject(item, "sourceDocumentId", posting_execution_dto->source_document_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->status
    if(posting_execution_dto->status != accountingservice_posting_execution_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusposting_execution_dto_ToString(posting_execution_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // posting_execution_dto->failure_kind
    if(posting_execution_dto->failure_kind != accountingservice_posting_execution_dto_FAILUREKIND_NULL) {
    if(cJSON_AddStringToObject(item, "failureKind", failure_kindposting_execution_dto_ToString(posting_execution_dto->failure_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // posting_execution_dto->failure_code
    if(posting_execution_dto->failure_code) {
    if(cJSON_AddStringToObject(item, "failureCode", posting_execution_dto->failure_code) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->retryable
    if(posting_execution_dto->retryable) {
    if(cJSON_AddBoolToObject(item, "retryable", posting_execution_dto->retryable) == NULL) {
    goto fail; //Bool
    }
    }


    // posting_execution_dto->correlation_id
    if(posting_execution_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", posting_execution_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->causation_id
    if(posting_execution_dto->causation_id) {
    if(cJSON_AddStringToObject(item, "causationId", posting_execution_dto->causation_id) == NULL) {
    goto fail; //String
    }
    }


    // posting_execution_dto->received_at_utc
    if(posting_execution_dto->received_at_utc) {
    if(cJSON_AddStringToObject(item, "receivedAtUtc", posting_execution_dto->received_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // posting_execution_dto->processing_started_at_utc
    if(posting_execution_dto->processing_started_at_utc) {
    if(cJSON_AddStringToObject(item, "processingStartedAtUtc", posting_execution_dto->processing_started_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // posting_execution_dto->completed_at_utc
    if(posting_execution_dto->completed_at_utc) {
    if(cJSON_AddStringToObject(item, "completedAtUtc", posting_execution_dto->completed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // posting_execution_dto->book_results
    if(posting_execution_dto->book_results) {
    cJSON *book_results = cJSON_AddArrayToObject(item, "bookResults");
    if(book_results == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *book_resultsListEntry;
    if (posting_execution_dto->book_results) {
    list_ForEach(book_resultsListEntry, posting_execution_dto->book_results) {
    cJSON *itemLocal = posting_book_result_dto_convertToJSON(book_resultsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(book_results, itemLocal);
    }
    }
    }


    // posting_execution_dto->failure_class
    if(posting_execution_dto->failure_class != accountingservice_posting_execution_dto_FAILURECLASS_NULL) {
    if(cJSON_AddStringToObject(item, "failureClass", failure_classposting_execution_dto_ToString(posting_execution_dto->failure_class)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

posting_execution_dto_t *posting_execution_dto_parseFromJSON(cJSON *posting_execution_dtoJSON){

    posting_execution_dto_t *posting_execution_dto_local_var = NULL;

    // define the local list for posting_execution_dto->book_results
    list_t *book_resultsList = NULL;

    // posting_execution_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // posting_execution_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->posting_intent_id
    cJSON *posting_intent_id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "postingIntentId");
    if (posting_intent_id) { 
    if(!cJSON_IsString(posting_intent_id) && !cJSON_IsNull(posting_intent_id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->posting_idempotency_key
    cJSON *posting_idempotency_key = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "postingIdempotencyKey");
    if (posting_idempotency_key) { 
    if(!cJSON_IsString(posting_idempotency_key) && !cJSON_IsNull(posting_idempotency_key))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->intent_type
    cJSON *intent_type = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "intentType");
    if (intent_type) { 
    if(!cJSON_IsString(intent_type) && !cJSON_IsNull(intent_type))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->posting_operation
    cJSON *posting_operation = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "postingOperation");
    if (posting_operation) { 
    if(!cJSON_IsString(posting_operation) && !cJSON_IsNull(posting_operation))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->source_document_type
    cJSON *source_document_type = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "sourceDocumentType");
    if (source_document_type) { 
    if(!cJSON_IsString(source_document_type) && !cJSON_IsNull(source_document_type))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->source_document_id
    cJSON *source_document_id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "sourceDocumentId");
    if (source_document_id) { 
    if(!cJSON_IsString(source_document_id) && !cJSON_IsNull(source_document_id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "status");
    accountingservice_posting_execution_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = posting_execution_dto_status_FromString(status->valuestring);
    }

    // posting_execution_dto->failure_kind
    cJSON *failure_kind = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "failureKind");
    accountingservice_posting_execution_dto_FAILUREKIND_e failure_kindVariable;
    if (failure_kind) { 
    if(!cJSON_IsString(failure_kind))
    {
    goto end; //Enum
    }
    failure_kindVariable = posting_execution_dto_failure_kind_FromString(failure_kind->valuestring);
    }

    // posting_execution_dto->failure_code
    cJSON *failure_code = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "failureCode");
    if (failure_code) { 
    if(!cJSON_IsString(failure_code) && !cJSON_IsNull(failure_code))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->retryable
    cJSON *retryable = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "retryable");
    if (retryable) { 
    if(!cJSON_IsBool(retryable))
    {
    goto end; //Bool
    }
    }

    // posting_execution_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->causation_id
    cJSON *causation_id = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "causationId");
    if (causation_id) { 
    if(!cJSON_IsString(causation_id) && !cJSON_IsNull(causation_id))
    {
    goto end; //String
    }
    }

    // posting_execution_dto->received_at_utc
    cJSON *received_at_utc = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "receivedAtUtc");
    if (received_at_utc) { 
    if(!cJSON_IsString(received_at_utc) && !cJSON_IsNull(received_at_utc))
    {
    goto end; //DateTime
    }
    }

    // posting_execution_dto->processing_started_at_utc
    cJSON *processing_started_at_utc = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "processingStartedAtUtc");
    if (processing_started_at_utc) { 
    if(!cJSON_IsString(processing_started_at_utc) && !cJSON_IsNull(processing_started_at_utc))
    {
    goto end; //DateTime
    }
    }

    // posting_execution_dto->completed_at_utc
    cJSON *completed_at_utc = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "completedAtUtc");
    if (completed_at_utc) { 
    if(!cJSON_IsString(completed_at_utc) && !cJSON_IsNull(completed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // posting_execution_dto->book_results
    cJSON *book_results = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "bookResults");
    if (book_results) { 
    cJSON *book_results_local_nonprimitive = NULL;
    if(!cJSON_IsArray(book_results)){
        goto end; //nonprimitive container
    }

    book_resultsList = list_createList();

    cJSON_ArrayForEach(book_results_local_nonprimitive,book_results )
    {
        if(!cJSON_IsObject(book_results_local_nonprimitive)){
            goto end;
        }
        posting_book_result_dto_t *book_resultsItem = posting_book_result_dto_parseFromJSON(book_results_local_nonprimitive);

        list_addElement(book_resultsList, book_resultsItem);
    }
    }

    // posting_execution_dto->failure_class
    cJSON *failure_class = cJSON_GetObjectItemCaseSensitive(posting_execution_dtoJSON, "failureClass");
    accountingservice_posting_execution_dto_FAILURECLASS_e failure_classVariable;
    if (failure_class) { 
    if(!cJSON_IsString(failure_class))
    {
    goto end; //Enum
    }
    failure_classVariable = posting_execution_dto_failure_class_FromString(failure_class->valuestring);
    }


    posting_execution_dto_local_var = posting_execution_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        posting_intent_id && !cJSON_IsNull(posting_intent_id) ? strdup(posting_intent_id->valuestring) : NULL,
        posting_idempotency_key && !cJSON_IsNull(posting_idempotency_key) ? strdup(posting_idempotency_key->valuestring) : NULL,
        intent_type && !cJSON_IsNull(intent_type) ? strdup(intent_type->valuestring) : NULL,
        posting_operation && !cJSON_IsNull(posting_operation) ? strdup(posting_operation->valuestring) : NULL,
        source_document_type && !cJSON_IsNull(source_document_type) ? strdup(source_document_type->valuestring) : NULL,
        source_document_id && !cJSON_IsNull(source_document_id) ? strdup(source_document_id->valuestring) : NULL,
        status ? statusVariable : accountingservice_posting_execution_dto_STATUS_NULL,
        failure_kind ? failure_kindVariable : accountingservice_posting_execution_dto_FAILUREKIND_NULL,
        failure_code && !cJSON_IsNull(failure_code) ? strdup(failure_code->valuestring) : NULL,
        retryable ? retryable->valueint : 0,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        causation_id && !cJSON_IsNull(causation_id) ? strdup(causation_id->valuestring) : NULL,
        received_at_utc && !cJSON_IsNull(received_at_utc) ? strdup(received_at_utc->valuestring) : NULL,
        processing_started_at_utc && !cJSON_IsNull(processing_started_at_utc) ? strdup(processing_started_at_utc->valuestring) : NULL,
        completed_at_utc && !cJSON_IsNull(completed_at_utc) ? strdup(completed_at_utc->valuestring) : NULL,
        book_results ? book_resultsList : NULL,
        failure_class ? failure_classVariable : accountingservice_posting_execution_dto_FAILURECLASS_NULL
        );

    return posting_execution_dto_local_var;
end:
    if (book_resultsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, book_resultsList) {
            posting_book_result_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(book_resultsList);
        book_resultsList = NULL;
    }
    return NULL;

}
