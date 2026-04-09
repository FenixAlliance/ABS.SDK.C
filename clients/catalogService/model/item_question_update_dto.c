#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_question_update_dto.h"



item_question_update_dto_t *item_question_update_dto_create(
    char *title,
    int needs_revision,
    char *question
    ) {
    item_question_update_dto_t *item_question_update_dto_local_var = malloc(sizeof(item_question_update_dto_t));
    if (!item_question_update_dto_local_var) {
        return NULL;
    }
    item_question_update_dto_local_var->title = title;
    item_question_update_dto_local_var->needs_revision = needs_revision;
    item_question_update_dto_local_var->question = question;

    return item_question_update_dto_local_var;
}


void item_question_update_dto_free(item_question_update_dto_t *item_question_update_dto) {
    if(NULL == item_question_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_question_update_dto->title) {
        free(item_question_update_dto->title);
        item_question_update_dto->title = NULL;
    }
    if (item_question_update_dto->question) {
        free(item_question_update_dto->question);
        item_question_update_dto->question = NULL;
    }
    free(item_question_update_dto);
}

cJSON *item_question_update_dto_convertToJSON(item_question_update_dto_t *item_question_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_question_update_dto->title
    if(item_question_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", item_question_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // item_question_update_dto->needs_revision
    if (!item_question_update_dto->needs_revision) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "needsRevision", item_question_update_dto->needs_revision) == NULL) {
    goto fail; //Bool
    }


    // item_question_update_dto->question
    if(item_question_update_dto->question) {
    if(cJSON_AddStringToObject(item, "question", item_question_update_dto->question) == NULL) {
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

item_question_update_dto_t *item_question_update_dto_parseFromJSON(cJSON *item_question_update_dtoJSON){

    item_question_update_dto_t *item_question_update_dto_local_var = NULL;

    // item_question_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_question_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // item_question_update_dto->needs_revision
    cJSON *needs_revision = cJSON_GetObjectItemCaseSensitive(item_question_update_dtoJSON, "needsRevision");
    if (!needs_revision) {
        goto end;
    }

    
    if(!cJSON_IsBool(needs_revision))
    {
    goto end; //Bool
    }

    // item_question_update_dto->question
    cJSON *question = cJSON_GetObjectItemCaseSensitive(item_question_update_dtoJSON, "question");
    if (question) { 
    if(!cJSON_IsString(question) && !cJSON_IsNull(question))
    {
    goto end; //String
    }
    }


    item_question_update_dto_local_var = item_question_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        needs_revision->valueint,
        question && !cJSON_IsNull(question) ? strdup(question->valuestring) : NULL
        );

    return item_question_update_dto_local_var;
end:
    return NULL;

}
