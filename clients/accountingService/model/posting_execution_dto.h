/*
 * posting_execution_dto.h
 *
 * 
 */

#ifndef _posting_execution_dto_H_
#define _posting_execution_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct posting_execution_dto_t posting_execution_dto_t;

#include "posting_book_result_dto.h"

// Enum STATUS for posting_execution_dto

typedef enum  { accountingservice_posting_execution_dto_STATUS_NULL = 0, accountingservice_posting_execution_dto_STATUS_Received, accountingservice_posting_execution_dto_STATUS_Processing, accountingservice_posting_execution_dto_STATUS_Posted, accountingservice_posting_execution_dto_STATUS_Duplicate, accountingservice_posting_execution_dto_STATUS_PendingMapping, accountingservice_posting_execution_dto_STATUS_PendingPeriod, accountingservice_posting_execution_dto_STATUS_PendingRate, accountingservice_posting_execution_dto_STATUS_Rejected } accountingservice_posting_execution_dto_STATUS_e;

char* posting_execution_dto_status_ToString(accountingservice_posting_execution_dto_STATUS_e status);

accountingservice_posting_execution_dto_STATUS_e posting_execution_dto_status_FromString(char* status);

// Enum FAILUREKIND for posting_execution_dto

typedef enum  { accountingservice_posting_execution_dto_FAILUREKIND_NULL = 0, accountingservice_posting_execution_dto_FAILUREKIND_UnknownOperation, accountingservice_posting_execution_dto_FAILUREKIND_UnknownRole, accountingservice_posting_execution_dto_FAILUREKIND_AmbiguousPolicy, accountingservice_posting_execution_dto_FAILUREKIND_MissingAccountMapping, accountingservice_posting_execution_dto_FAILUREKIND_MissingFinancialBook, accountingservice_posting_execution_dto_FAILUREKIND_MissingJournal, accountingservice_posting_execution_dto_FAILUREKIND_ClosedPeriod, accountingservice_posting_execution_dto_FAILUREKIND_MissingFxRate, accountingservice_posting_execution_dto_FAILUREKIND_InvalidFxEvidence, accountingservice_posting_execution_dto_FAILUREKIND_UnbalancedPlan, accountingservice_posting_execution_dto_FAILUREKIND_DuplicateIntent, accountingservice_posting_execution_dto_FAILUREKIND_DuplicateBookPosting, accountingservice_posting_execution_dto_FAILUREKIND_InvalidPartyReference, accountingservice_posting_execution_dto_FAILUREKIND_InvalidCustodyContext, accountingservice_posting_execution_dto_FAILUREKIND_PolicyConfigurationError } accountingservice_posting_execution_dto_FAILUREKIND_e;

char* posting_execution_dto_failure_kind_ToString(accountingservice_posting_execution_dto_FAILUREKIND_e failure_kind);

accountingservice_posting_execution_dto_FAILUREKIND_e posting_execution_dto_failure_kind_FromString(char* failure_kind);

// Enum FAILURECLASS for posting_execution_dto

typedef enum  { accountingservice_posting_execution_dto_FAILURECLASS_NULL = 0, accountingservice_posting_execution_dto_FAILURECLASS_Retryable, accountingservice_posting_execution_dto_FAILURECLASS_OperatorActionRequired, accountingservice_posting_execution_dto_FAILURECLASS_ConfigurationError, accountingservice_posting_execution_dto_FAILURECLASS_ProducerError } accountingservice_posting_execution_dto_FAILURECLASS_e;

char* posting_execution_dto_failure_class_ToString(accountingservice_posting_execution_dto_FAILURECLASS_e failure_class);

accountingservice_posting_execution_dto_FAILURECLASS_e posting_execution_dto_failure_class_FromString(char* failure_class);



typedef struct posting_execution_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *posting_intent_id; // string
    char *posting_idempotency_key; // string
    char *intent_type; // string
    char *posting_operation; // string
    char *source_document_type; // string
    char *source_document_id; // string
    accountingservice_posting_execution_dto_STATUS_e status; //enum
    accountingservice_posting_execution_dto_FAILUREKIND_e failure_kind; //enum
    char *failure_code; // string
    int retryable; //boolean
    char *correlation_id; // string
    char *causation_id; // string
    char *received_at_utc; //date time
    char *processing_started_at_utc; //date time
    char *completed_at_utc; //date time
    list_t *book_results; //nonprimitive container
    accountingservice_posting_execution_dto_FAILURECLASS_e failure_class; //enum

} posting_execution_dto_t;

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
);

void posting_execution_dto_free(posting_execution_dto_t *posting_execution_dto);

posting_execution_dto_t *posting_execution_dto_parseFromJSON(cJSON *posting_execution_dtoJSON);

cJSON *posting_execution_dto_convertToJSON(posting_execution_dto_t *posting_execution_dto);

#endif /* _posting_execution_dto_H_ */

