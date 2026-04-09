#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_create_dto.h"



journal_create_dto_t *journal_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *date_time,
    char *tenant_id,
    char *enrollment_id,
    char *parent_journal_id,
    char *journal_type_id,
    char *ledger_id
    ) {
    journal_create_dto_t *journal_create_dto_local_var = malloc(sizeof(journal_create_dto_t));
    if (!journal_create_dto_local_var) {
        return NULL;
    }
    journal_create_dto_local_var->id = id;
    journal_create_dto_local_var->timestamp = timestamp;
    journal_create_dto_local_var->name = name;
    journal_create_dto_local_var->description = description;
    journal_create_dto_local_var->date_time = date_time;
    journal_create_dto_local_var->tenant_id = tenant_id;
    journal_create_dto_local_var->enrollment_id = enrollment_id;
    journal_create_dto_local_var->parent_journal_id = parent_journal_id;
    journal_create_dto_local_var->journal_type_id = journal_type_id;
    journal_create_dto_local_var->ledger_id = ledger_id;

    return journal_create_dto_local_var;
}


void journal_create_dto_free(journal_create_dto_t *journal_create_dto) {
    if(NULL == journal_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_create_dto->id) {
        free(journal_create_dto->id);
        journal_create_dto->id = NULL;
    }
    if (journal_create_dto->timestamp) {
        free(journal_create_dto->timestamp);
        journal_create_dto->timestamp = NULL;
    }
    if (journal_create_dto->name) {
        free(journal_create_dto->name);
        journal_create_dto->name = NULL;
    }
    if (journal_create_dto->description) {
        free(journal_create_dto->description);
        journal_create_dto->description = NULL;
    }
    if (journal_create_dto->date_time) {
        free(journal_create_dto->date_time);
        journal_create_dto->date_time = NULL;
    }
    if (journal_create_dto->tenant_id) {
        free(journal_create_dto->tenant_id);
        journal_create_dto->tenant_id = NULL;
    }
    if (journal_create_dto->enrollment_id) {
        free(journal_create_dto->enrollment_id);
        journal_create_dto->enrollment_id = NULL;
    }
    if (journal_create_dto->parent_journal_id) {
        free(journal_create_dto->parent_journal_id);
        journal_create_dto->parent_journal_id = NULL;
    }
    if (journal_create_dto->journal_type_id) {
        free(journal_create_dto->journal_type_id);
        journal_create_dto->journal_type_id = NULL;
    }
    if (journal_create_dto->ledger_id) {
        free(journal_create_dto->ledger_id);
        journal_create_dto->ledger_id = NULL;
    }
    free(journal_create_dto);
}

cJSON *journal_create_dto_convertToJSON(journal_create_dto_t *journal_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_create_dto->id
    if(journal_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", journal_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // journal_create_dto->timestamp
    if(journal_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", journal_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_create_dto->name
    if (!journal_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", journal_create_dto->name) == NULL) {
    goto fail; //String
    }


    // journal_create_dto->description
    if(journal_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", journal_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // journal_create_dto->date_time
    if(journal_create_dto->date_time) {
    if(cJSON_AddStringToObject(item, "dateTime", journal_create_dto->date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_create_dto->tenant_id
    if(journal_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantID", journal_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_create_dto->enrollment_id
    if(journal_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentID", journal_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_create_dto->parent_journal_id
    if(journal_create_dto->parent_journal_id) {
    if(cJSON_AddStringToObject(item, "parentJournalID", journal_create_dto->parent_journal_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_create_dto->journal_type_id
    if(journal_create_dto->journal_type_id) {
    if(cJSON_AddStringToObject(item, "journalTypeID", journal_create_dto->journal_type_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_create_dto->ledger_id
    if(journal_create_dto->ledger_id) {
    if(cJSON_AddStringToObject(item, "ledgerID", journal_create_dto->ledger_id) == NULL) {
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

journal_create_dto_t *journal_create_dto_parseFromJSON(cJSON *journal_create_dtoJSON){

    journal_create_dto_t *journal_create_dto_local_var = NULL;

    // journal_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // journal_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // journal_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // journal_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // journal_create_dto->date_time
    cJSON *date_time = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "dateTime");
    if (date_time) { 
    if(!cJSON_IsString(date_time) && !cJSON_IsNull(date_time))
    {
    goto end; //DateTime
    }
    }

    // journal_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "tenantID");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // journal_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "enrollmentID");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // journal_create_dto->parent_journal_id
    cJSON *parent_journal_id = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "parentJournalID");
    if (parent_journal_id) { 
    if(!cJSON_IsString(parent_journal_id) && !cJSON_IsNull(parent_journal_id))
    {
    goto end; //String
    }
    }

    // journal_create_dto->journal_type_id
    cJSON *journal_type_id = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "journalTypeID");
    if (journal_type_id) { 
    if(!cJSON_IsString(journal_type_id) && !cJSON_IsNull(journal_type_id))
    {
    goto end; //String
    }
    }

    // journal_create_dto->ledger_id
    cJSON *ledger_id = cJSON_GetObjectItemCaseSensitive(journal_create_dtoJSON, "ledgerID");
    if (ledger_id) { 
    if(!cJSON_IsString(ledger_id) && !cJSON_IsNull(ledger_id))
    {
    goto end; //String
    }
    }


    journal_create_dto_local_var = journal_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        date_time && !cJSON_IsNull(date_time) ? strdup(date_time->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        parent_journal_id && !cJSON_IsNull(parent_journal_id) ? strdup(parent_journal_id->valuestring) : NULL,
        journal_type_id && !cJSON_IsNull(journal_type_id) ? strdup(journal_type_id->valuestring) : NULL,
        ledger_id && !cJSON_IsNull(ledger_id) ? strdup(ledger_id->valuestring) : NULL
        );

    return journal_create_dto_local_var;
end:
    return NULL;

}
