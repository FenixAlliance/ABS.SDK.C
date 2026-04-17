#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "journal_type_update_dto.h"



journal_type_update_dto_t *journal_type_update_dto_create(
    char *name
    ) {
    journal_type_update_dto_t *journal_type_update_dto_local_var = malloc(sizeof(journal_type_update_dto_t));
    if (!journal_type_update_dto_local_var) {
        return NULL;
    }
    journal_type_update_dto_local_var->name = name;

    return journal_type_update_dto_local_var;
}


void journal_type_update_dto_free(journal_type_update_dto_t *journal_type_update_dto) {
    if(NULL == journal_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (journal_type_update_dto->name) {
        free(journal_type_update_dto->name);
        journal_type_update_dto->name = NULL;
    }
    free(journal_type_update_dto);
}

cJSON *journal_type_update_dto_convertToJSON(journal_type_update_dto_t *journal_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // journal_type_update_dto->name
    if(journal_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", journal_type_update_dto->name) == NULL) {
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

journal_type_update_dto_t *journal_type_update_dto_parseFromJSON(cJSON *journal_type_update_dtoJSON){

    journal_type_update_dto_t *journal_type_update_dto_local_var = NULL;

    // journal_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(journal_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    journal_type_update_dto_local_var = journal_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return journal_type_update_dto_local_var;
end:
    return NULL;

}
