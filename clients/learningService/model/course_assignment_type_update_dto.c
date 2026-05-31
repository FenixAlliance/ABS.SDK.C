#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_assignment_type_update_dto.h"



course_assignment_type_update_dto_t *course_assignment_type_update_dto_create(
    char *name,
    char *abbreviation,
    double weight,
    int quantity,
    int excluded
    ) {
    course_assignment_type_update_dto_t *course_assignment_type_update_dto_local_var = malloc(sizeof(course_assignment_type_update_dto_t));
    if (!course_assignment_type_update_dto_local_var) {
        return NULL;
    }
    course_assignment_type_update_dto_local_var->name = name;
    course_assignment_type_update_dto_local_var->abbreviation = abbreviation;
    course_assignment_type_update_dto_local_var->weight = weight;
    course_assignment_type_update_dto_local_var->quantity = quantity;
    course_assignment_type_update_dto_local_var->excluded = excluded;

    return course_assignment_type_update_dto_local_var;
}


void course_assignment_type_update_dto_free(course_assignment_type_update_dto_t *course_assignment_type_update_dto) {
    if(NULL == course_assignment_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_assignment_type_update_dto->name) {
        free(course_assignment_type_update_dto->name);
        course_assignment_type_update_dto->name = NULL;
    }
    if (course_assignment_type_update_dto->abbreviation) {
        free(course_assignment_type_update_dto->abbreviation);
        course_assignment_type_update_dto->abbreviation = NULL;
    }
    free(course_assignment_type_update_dto);
}

cJSON *course_assignment_type_update_dto_convertToJSON(course_assignment_type_update_dto_t *course_assignment_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_assignment_type_update_dto->name
    if(course_assignment_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_assignment_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_type_update_dto->abbreviation
    if(course_assignment_type_update_dto->abbreviation) {
    if(cJSON_AddStringToObject(item, "abbreviation", course_assignment_type_update_dto->abbreviation) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_type_update_dto->weight
    if(course_assignment_type_update_dto->weight) {
    if(cJSON_AddNumberToObject(item, "weight", course_assignment_type_update_dto->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_type_update_dto->quantity
    if(course_assignment_type_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", course_assignment_type_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_type_update_dto->excluded
    if(course_assignment_type_update_dto->excluded) {
    if(cJSON_AddNumberToObject(item, "excluded", course_assignment_type_update_dto->excluded) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

course_assignment_type_update_dto_t *course_assignment_type_update_dto_parseFromJSON(cJSON *course_assignment_type_update_dtoJSON){

    course_assignment_type_update_dto_t *course_assignment_type_update_dto_local_var = NULL;

    // course_assignment_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_assignment_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_assignment_type_update_dto->abbreviation
    cJSON *abbreviation = cJSON_GetObjectItemCaseSensitive(course_assignment_type_update_dtoJSON, "abbreviation");
    if (abbreviation) { 
    if(!cJSON_IsString(abbreviation) && !cJSON_IsNull(abbreviation))
    {
    goto end; //String
    }
    }

    // course_assignment_type_update_dto->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(course_assignment_type_update_dtoJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_type_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(course_assignment_type_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_type_update_dto->excluded
    cJSON *excluded = cJSON_GetObjectItemCaseSensitive(course_assignment_type_update_dtoJSON, "excluded");
    if (excluded) { 
    if(!cJSON_IsNumber(excluded))
    {
    goto end; //Numeric
    }
    }


    course_assignment_type_update_dto_local_var = course_assignment_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        abbreviation && !cJSON_IsNull(abbreviation) ? strdup(abbreviation->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        excluded ? excluded->valuedouble : 0
        );

    return course_assignment_type_update_dto_local_var;
end:
    return NULL;

}
