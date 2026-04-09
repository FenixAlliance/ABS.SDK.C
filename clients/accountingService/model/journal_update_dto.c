#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_update_dto.h"



journal_update_dto_t *journal_update_dto_create(
    char *name,
    char *description,
    char *date_time,
    char *parent_journal_id,
    char *journal_type_id,
    char *ledger_id
    ) {
    journal_update_dto_t *journal_update_dto_local_var = malloc(sizeof(journal_update_dto_t));
    if (!journal_update_dto_local_var) {
        return NULL;
    }
    journal_update_dto_local_var->name = name;
    journal_update_dto_local_var->description = description;
    journal_update_dto_local_var->date_time = date_time;
    journal_update_dto_local_var->parent_journal_id = parent_journal_id;
    journal_update_dto_local_var->journal_type_id = journal_type_id;
    journal_update_dto_local_var->ledger_id = ledger_id;

    return journal_update_dto_local_var;
}


void journal_update_dto_free(journal_update_dto_t *journal_update_dto) {
    if(NULL == journal_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_update_dto->name) {
        free(journal_update_dto->name);
        journal_update_dto->name = NULL;
    }
    if (journal_update_dto->description) {
        free(journal_update_dto->description);
        journal_update_dto->description = NULL;
    }
    if (journal_update_dto->date_time) {
        free(journal_update_dto->date_time);
        journal_update_dto->date_time = NULL;
    }
    if (journal_update_dto->parent_journal_id) {
        free(journal_update_dto->parent_journal_id);
        journal_update_dto->parent_journal_id = NULL;
    }
    if (journal_update_dto->journal_type_id) {
        free(journal_update_dto->journal_type_id);
        journal_update_dto->journal_type_id = NULL;
    }
    if (journal_update_dto->ledger_id) {
        free(journal_update_dto->ledger_id);
        journal_update_dto->ledger_id = NULL;
    }
    free(journal_update_dto);
}

cJSON *journal_update_dto_convertToJSON(journal_update_dto_t *journal_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_update_dto->name
    if(journal_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", journal_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // journal_update_dto->description
    if(journal_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", journal_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // journal_update_dto->date_time
    if(journal_update_dto->date_time) {
    if(cJSON_AddStringToObject(item, "dateTime", journal_update_dto->date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // journal_update_dto->parent_journal_id
    if(journal_update_dto->parent_journal_id) {
    if(cJSON_AddStringToObject(item, "parentJournalID", journal_update_dto->parent_journal_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_update_dto->journal_type_id
    if(journal_update_dto->journal_type_id) {
    if(cJSON_AddStringToObject(item, "journalTypeID", journal_update_dto->journal_type_id) == NULL) {
    goto fail; //String
    }
    }


    // journal_update_dto->ledger_id
    if(journal_update_dto->ledger_id) {
    if(cJSON_AddStringToObject(item, "ledgerID", journal_update_dto->ledger_id) == NULL) {
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

journal_update_dto_t *journal_update_dto_parseFromJSON(cJSON *journal_update_dtoJSON){

    journal_update_dto_t *journal_update_dto_local_var = NULL;

    // journal_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(journal_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // journal_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(journal_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // journal_update_dto->date_time
    cJSON *date_time = cJSON_GetObjectItemCaseSensitive(journal_update_dtoJSON, "dateTime");
    if (date_time) { 
    if(!cJSON_IsString(date_time) && !cJSON_IsNull(date_time))
    {
    goto end; //DateTime
    }
    }

    // journal_update_dto->parent_journal_id
    cJSON *parent_journal_id = cJSON_GetObjectItemCaseSensitive(journal_update_dtoJSON, "parentJournalID");
    if (parent_journal_id) { 
    if(!cJSON_IsString(parent_journal_id) && !cJSON_IsNull(parent_journal_id))
    {
    goto end; //String
    }
    }

    // journal_update_dto->journal_type_id
    cJSON *journal_type_id = cJSON_GetObjectItemCaseSensitive(journal_update_dtoJSON, "journalTypeID");
    if (journal_type_id) { 
    if(!cJSON_IsString(journal_type_id) && !cJSON_IsNull(journal_type_id))
    {
    goto end; //String
    }
    }

    // journal_update_dto->ledger_id
    cJSON *ledger_id = cJSON_GetObjectItemCaseSensitive(journal_update_dtoJSON, "ledgerID");
    if (ledger_id) { 
    if(!cJSON_IsString(ledger_id) && !cJSON_IsNull(ledger_id))
    {
    goto end; //String
    }
    }


    journal_update_dto_local_var = journal_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        date_time && !cJSON_IsNull(date_time) ? strdup(date_time->valuestring) : NULL,
        parent_journal_id && !cJSON_IsNull(parent_journal_id) ? strdup(parent_journal_id->valuestring) : NULL,
        journal_type_id && !cJSON_IsNull(journal_type_id) ? strdup(journal_type_id->valuestring) : NULL,
        ledger_id && !cJSON_IsNull(ledger_id) ? strdup(ledger_id->valuestring) : NULL
        );

    return journal_update_dto_local_var;
end:
    return NULL;

}
