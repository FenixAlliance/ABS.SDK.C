#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "suite_license_dto.h"



suite_license_dto_t *suite_license_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *license_string,
    char *enrollment_id,
    char *expiration_date,
    int available_seats,
    int total_seats
    ) {
    suite_license_dto_t *suite_license_dto_local_var = malloc(sizeof(suite_license_dto_t));
    if (!suite_license_dto_local_var) {
        return NULL;
    }
    suite_license_dto_local_var->id = id;
    suite_license_dto_local_var->timestamp = timestamp;
    suite_license_dto_local_var->tenant_id = tenant_id;
    suite_license_dto_local_var->license_string = license_string;
    suite_license_dto_local_var->enrollment_id = enrollment_id;
    suite_license_dto_local_var->expiration_date = expiration_date;
    suite_license_dto_local_var->available_seats = available_seats;
    suite_license_dto_local_var->total_seats = total_seats;

    return suite_license_dto_local_var;
}


void suite_license_dto_free(suite_license_dto_t *suite_license_dto) {
    if(NULL == suite_license_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (suite_license_dto->id) {
        free(suite_license_dto->id);
        suite_license_dto->id = NULL;
    }
    if (suite_license_dto->timestamp) {
        free(suite_license_dto->timestamp);
        suite_license_dto->timestamp = NULL;
    }
    if (suite_license_dto->tenant_id) {
        free(suite_license_dto->tenant_id);
        suite_license_dto->tenant_id = NULL;
    }
    if (suite_license_dto->license_string) {
        free(suite_license_dto->license_string);
        suite_license_dto->license_string = NULL;
    }
    if (suite_license_dto->enrollment_id) {
        free(suite_license_dto->enrollment_id);
        suite_license_dto->enrollment_id = NULL;
    }
    if (suite_license_dto->expiration_date) {
        free(suite_license_dto->expiration_date);
        suite_license_dto->expiration_date = NULL;
    }
    free(suite_license_dto);
}

cJSON *suite_license_dto_convertToJSON(suite_license_dto_t *suite_license_dto) {
    cJSON *item = cJSON_CreateObject();

    // suite_license_dto->id
    if(suite_license_dto->id) {
    if(cJSON_AddStringToObject(item, "id", suite_license_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto->timestamp
    if(suite_license_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", suite_license_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // suite_license_dto->tenant_id
    if(suite_license_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", suite_license_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto->license_string
    if(suite_license_dto->license_string) {
    if(cJSON_AddStringToObject(item, "licenseString", suite_license_dto->license_string) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto->enrollment_id
    if(suite_license_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", suite_license_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_dto->expiration_date
    if(suite_license_dto->expiration_date) {
    if(cJSON_AddStringToObject(item, "expirationDate", suite_license_dto->expiration_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // suite_license_dto->available_seats
    if(suite_license_dto->available_seats) {
    if(cJSON_AddNumberToObject(item, "availableSeats", suite_license_dto->available_seats) == NULL) {
    goto fail; //Numeric
    }
    }


    // suite_license_dto->total_seats
    if(suite_license_dto->total_seats) {
    if(cJSON_AddNumberToObject(item, "totalSeats", suite_license_dto->total_seats) == NULL) {
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

suite_license_dto_t *suite_license_dto_parseFromJSON(cJSON *suite_license_dtoJSON){

    suite_license_dto_t *suite_license_dto_local_var = NULL;

    // suite_license_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // suite_license_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // suite_license_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // suite_license_dto->license_string
    cJSON *license_string = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "licenseString");
    if (license_string) { 
    if(!cJSON_IsString(license_string) && !cJSON_IsNull(license_string))
    {
    goto end; //String
    }
    }

    // suite_license_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // suite_license_dto->expiration_date
    cJSON *expiration_date = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "expirationDate");
    if (expiration_date) { 
    if(!cJSON_IsString(expiration_date) && !cJSON_IsNull(expiration_date))
    {
    goto end; //DateTime
    }
    }

    // suite_license_dto->available_seats
    cJSON *available_seats = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "availableSeats");
    if (available_seats) { 
    if(!cJSON_IsNumber(available_seats))
    {
    goto end; //Numeric
    }
    }

    // suite_license_dto->total_seats
    cJSON *total_seats = cJSON_GetObjectItemCaseSensitive(suite_license_dtoJSON, "totalSeats");
    if (total_seats) { 
    if(!cJSON_IsNumber(total_seats))
    {
    goto end; //Numeric
    }
    }


    suite_license_dto_local_var = suite_license_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        license_string && !cJSON_IsNull(license_string) ? strdup(license_string->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        expiration_date && !cJSON_IsNull(expiration_date) ? strdup(expiration_date->valuestring) : NULL,
        available_seats ? available_seats->valuedouble : 0,
        total_seats ? total_seats->valuedouble : 0
        );

    return suite_license_dto_local_var;
end:
    return NULL;

}
