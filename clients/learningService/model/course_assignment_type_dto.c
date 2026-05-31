#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_assignment_type_dto.h"



course_assignment_type_dto_t *course_assignment_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *abbreviation,
    double weight,
    int quantity,
    int excluded,
    char *course_id,
    char *tenant_id
    ) {
    course_assignment_type_dto_t *course_assignment_type_dto_local_var = malloc(sizeof(course_assignment_type_dto_t));
    if (!course_assignment_type_dto_local_var) {
        return NULL;
    }
    course_assignment_type_dto_local_var->id = id;
    course_assignment_type_dto_local_var->timestamp = timestamp;
    course_assignment_type_dto_local_var->name = name;
    course_assignment_type_dto_local_var->abbreviation = abbreviation;
    course_assignment_type_dto_local_var->weight = weight;
    course_assignment_type_dto_local_var->quantity = quantity;
    course_assignment_type_dto_local_var->excluded = excluded;
    course_assignment_type_dto_local_var->course_id = course_id;
    course_assignment_type_dto_local_var->tenant_id = tenant_id;

    return course_assignment_type_dto_local_var;
}


void course_assignment_type_dto_free(course_assignment_type_dto_t *course_assignment_type_dto) {
    if(NULL == course_assignment_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_assignment_type_dto->id) {
        free(course_assignment_type_dto->id);
        course_assignment_type_dto->id = NULL;
    }
    if (course_assignment_type_dto->timestamp) {
        free(course_assignment_type_dto->timestamp);
        course_assignment_type_dto->timestamp = NULL;
    }
    if (course_assignment_type_dto->name) {
        free(course_assignment_type_dto->name);
        course_assignment_type_dto->name = NULL;
    }
    if (course_assignment_type_dto->abbreviation) {
        free(course_assignment_type_dto->abbreviation);
        course_assignment_type_dto->abbreviation = NULL;
    }
    if (course_assignment_type_dto->course_id) {
        free(course_assignment_type_dto->course_id);
        course_assignment_type_dto->course_id = NULL;
    }
    if (course_assignment_type_dto->tenant_id) {
        free(course_assignment_type_dto->tenant_id);
        course_assignment_type_dto->tenant_id = NULL;
    }
    free(course_assignment_type_dto);
}

cJSON *course_assignment_type_dto_convertToJSON(course_assignment_type_dto_t *course_assignment_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_assignment_type_dto->id
    if(course_assignment_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_assignment_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_type_dto->timestamp
    if(course_assignment_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_assignment_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_assignment_type_dto->name
    if(course_assignment_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_assignment_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_type_dto->abbreviation
    if(course_assignment_type_dto->abbreviation) {
    if(cJSON_AddStringToObject(item, "abbreviation", course_assignment_type_dto->abbreviation) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_type_dto->weight
    if(course_assignment_type_dto->weight) {
    if(cJSON_AddNumberToObject(item, "weight", course_assignment_type_dto->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_type_dto->quantity
    if(course_assignment_type_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", course_assignment_type_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_type_dto->excluded
    if(course_assignment_type_dto->excluded) {
    if(cJSON_AddNumberToObject(item, "excluded", course_assignment_type_dto->excluded) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_assignment_type_dto->course_id
    if(course_assignment_type_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_assignment_type_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_assignment_type_dto->tenant_id
    if(course_assignment_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_assignment_type_dto->tenant_id) == NULL) {
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

course_assignment_type_dto_t *course_assignment_type_dto_parseFromJSON(cJSON *course_assignment_type_dtoJSON){

    course_assignment_type_dto_t *course_assignment_type_dto_local_var = NULL;

    // course_assignment_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_assignment_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_assignment_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_assignment_type_dto->abbreviation
    cJSON *abbreviation = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "abbreviation");
    if (abbreviation) { 
    if(!cJSON_IsString(abbreviation) && !cJSON_IsNull(abbreviation))
    {
    goto end; //String
    }
    }

    // course_assignment_type_dto->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_type_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_type_dto->excluded
    cJSON *excluded = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "excluded");
    if (excluded) { 
    if(!cJSON_IsNumber(excluded))
    {
    goto end; //Numeric
    }
    }

    // course_assignment_type_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_assignment_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_assignment_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_assignment_type_dto_local_var = course_assignment_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        abbreviation && !cJSON_IsNull(abbreviation) ? strdup(abbreviation->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        excluded ? excluded->valuedouble : 0,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_assignment_type_dto_local_var;
end:
    return NULL;

}
