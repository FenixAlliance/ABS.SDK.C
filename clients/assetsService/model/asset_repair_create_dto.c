#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_repair_create_dto.h"


char* asset_repair_create_dto_repair_status_ToString(assetsservice_asset_repair_create_dto_REPAIRSTATUS_e repair_status) {
    char* repair_statusArray[] =  { "NULL", "Scheduled", "InProgress", "Completed", "Cancelled" };
    return repair_statusArray[repair_status];
}

assetsservice_asset_repair_create_dto_REPAIRSTATUS_e asset_repair_create_dto_repair_status_FromString(char* repair_status){
    int stringToReturn = 0;
    char *repair_statusArray[] =  { "NULL", "Scheduled", "InProgress", "Completed", "Cancelled" };
    size_t sizeofArray = sizeof(repair_statusArray) / sizeof(repair_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(repair_status, repair_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

asset_repair_create_dto_t *asset_repair_create_dto_create(
    char *id,
    char *timestamp,
    char *asset_id,
    assetsservice_asset_repair_create_dto_REPAIRSTATUS_e repair_status,
    char *scheduled_date,
    char *completion_date,
    char *reported_date,
    double estimated_cost,
    double actual_cost,
    char *problem_description,
    char *repair_description,
    char *notes,
    char *asset_maintenance_team_id
    ) {
    asset_repair_create_dto_t *asset_repair_create_dto_local_var = malloc(sizeof(asset_repair_create_dto_t));
    if (!asset_repair_create_dto_local_var) {
        return NULL;
    }
    asset_repair_create_dto_local_var->id = id;
    asset_repair_create_dto_local_var->timestamp = timestamp;
    asset_repair_create_dto_local_var->asset_id = asset_id;
    asset_repair_create_dto_local_var->repair_status = repair_status;
    asset_repair_create_dto_local_var->scheduled_date = scheduled_date;
    asset_repair_create_dto_local_var->completion_date = completion_date;
    asset_repair_create_dto_local_var->reported_date = reported_date;
    asset_repair_create_dto_local_var->estimated_cost = estimated_cost;
    asset_repair_create_dto_local_var->actual_cost = actual_cost;
    asset_repair_create_dto_local_var->problem_description = problem_description;
    asset_repair_create_dto_local_var->repair_description = repair_description;
    asset_repair_create_dto_local_var->notes = notes;
    asset_repair_create_dto_local_var->asset_maintenance_team_id = asset_maintenance_team_id;

    return asset_repair_create_dto_local_var;
}


void asset_repair_create_dto_free(asset_repair_create_dto_t *asset_repair_create_dto) {
    if(NULL == asset_repair_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_repair_create_dto->id) {
        free(asset_repair_create_dto->id);
        asset_repair_create_dto->id = NULL;
    }
    if (asset_repair_create_dto->timestamp) {
        free(asset_repair_create_dto->timestamp);
        asset_repair_create_dto->timestamp = NULL;
    }
    if (asset_repair_create_dto->asset_id) {
        free(asset_repair_create_dto->asset_id);
        asset_repair_create_dto->asset_id = NULL;
    }
    if (asset_repair_create_dto->scheduled_date) {
        free(asset_repair_create_dto->scheduled_date);
        asset_repair_create_dto->scheduled_date = NULL;
    }
    if (asset_repair_create_dto->completion_date) {
        free(asset_repair_create_dto->completion_date);
        asset_repair_create_dto->completion_date = NULL;
    }
    if (asset_repair_create_dto->reported_date) {
        free(asset_repair_create_dto->reported_date);
        asset_repair_create_dto->reported_date = NULL;
    }
    if (asset_repair_create_dto->problem_description) {
        free(asset_repair_create_dto->problem_description);
        asset_repair_create_dto->problem_description = NULL;
    }
    if (asset_repair_create_dto->repair_description) {
        free(asset_repair_create_dto->repair_description);
        asset_repair_create_dto->repair_description = NULL;
    }
    if (asset_repair_create_dto->notes) {
        free(asset_repair_create_dto->notes);
        asset_repair_create_dto->notes = NULL;
    }
    if (asset_repair_create_dto->asset_maintenance_team_id) {
        free(asset_repair_create_dto->asset_maintenance_team_id);
        asset_repair_create_dto->asset_maintenance_team_id = NULL;
    }
    free(asset_repair_create_dto);
}

cJSON *asset_repair_create_dto_convertToJSON(asset_repair_create_dto_t *asset_repair_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_repair_create_dto->id
    if(asset_repair_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_repair_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_repair_create_dto->timestamp
    if(asset_repair_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_repair_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_repair_create_dto->asset_id
    if(asset_repair_create_dto->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", asset_repair_create_dto->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_repair_create_dto->repair_status
    if(asset_repair_create_dto->repair_status != assetsservice_asset_repair_create_dto_REPAIRSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "repairStatus", repair_statusasset_repair_create_dto_ToString(asset_repair_create_dto->repair_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_repair_create_dto->scheduled_date
    if(asset_repair_create_dto->scheduled_date) {
    if(cJSON_AddStringToObject(item, "scheduledDate", asset_repair_create_dto->scheduled_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_repair_create_dto->completion_date
    if(asset_repair_create_dto->completion_date) {
    if(cJSON_AddStringToObject(item, "completionDate", asset_repair_create_dto->completion_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_repair_create_dto->reported_date
    if(asset_repair_create_dto->reported_date) {
    if(cJSON_AddStringToObject(item, "reportedDate", asset_repair_create_dto->reported_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_repair_create_dto->estimated_cost
    if(asset_repair_create_dto->estimated_cost) {
    if(cJSON_AddNumberToObject(item, "estimatedCost", asset_repair_create_dto->estimated_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_repair_create_dto->actual_cost
    if(asset_repair_create_dto->actual_cost) {
    if(cJSON_AddNumberToObject(item, "actualCost", asset_repair_create_dto->actual_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_repair_create_dto->problem_description
    if(asset_repair_create_dto->problem_description) {
    if(cJSON_AddStringToObject(item, "problemDescription", asset_repair_create_dto->problem_description) == NULL) {
    goto fail; //String
    }
    }


    // asset_repair_create_dto->repair_description
    if(asset_repair_create_dto->repair_description) {
    if(cJSON_AddStringToObject(item, "repairDescription", asset_repair_create_dto->repair_description) == NULL) {
    goto fail; //String
    }
    }


    // asset_repair_create_dto->notes
    if(asset_repair_create_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", asset_repair_create_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // asset_repair_create_dto->asset_maintenance_team_id
    if(asset_repair_create_dto->asset_maintenance_team_id) {
    if(cJSON_AddStringToObject(item, "assetMaintenanceTeamId", asset_repair_create_dto->asset_maintenance_team_id) == NULL) {
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

asset_repair_create_dto_t *asset_repair_create_dto_parseFromJSON(cJSON *asset_repair_create_dtoJSON){

    asset_repair_create_dto_t *asset_repair_create_dto_local_var = NULL;

    // asset_repair_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_repair_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_repair_create_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "assetId");
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // asset_repair_create_dto->repair_status
    cJSON *repair_status = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "repairStatus");
    assetsservice_asset_repair_create_dto_REPAIRSTATUS_e repair_statusVariable;
    if (repair_status) { 
    if(!cJSON_IsString(repair_status))
    {
    goto end; //Enum
    }
    repair_statusVariable = asset_repair_create_dto_repair_status_FromString(repair_status->valuestring);
    }

    // asset_repair_create_dto->scheduled_date
    cJSON *scheduled_date = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "scheduledDate");
    if (scheduled_date) { 
    if(!cJSON_IsString(scheduled_date) && !cJSON_IsNull(scheduled_date))
    {
    goto end; //DateTime
    }
    }

    // asset_repair_create_dto->completion_date
    cJSON *completion_date = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "completionDate");
    if (completion_date) { 
    if(!cJSON_IsString(completion_date) && !cJSON_IsNull(completion_date))
    {
    goto end; //DateTime
    }
    }

    // asset_repair_create_dto->reported_date
    cJSON *reported_date = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "reportedDate");
    if (reported_date) { 
    if(!cJSON_IsString(reported_date) && !cJSON_IsNull(reported_date))
    {
    goto end; //DateTime
    }
    }

    // asset_repair_create_dto->estimated_cost
    cJSON *estimated_cost = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "estimatedCost");
    if (estimated_cost) { 
    if(!cJSON_IsNumber(estimated_cost))
    {
    goto end; //Numeric
    }
    }

    // asset_repair_create_dto->actual_cost
    cJSON *actual_cost = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "actualCost");
    if (actual_cost) { 
    if(!cJSON_IsNumber(actual_cost))
    {
    goto end; //Numeric
    }
    }

    // asset_repair_create_dto->problem_description
    cJSON *problem_description = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "problemDescription");
    if (problem_description) { 
    if(!cJSON_IsString(problem_description) && !cJSON_IsNull(problem_description))
    {
    goto end; //String
    }
    }

    // asset_repair_create_dto->repair_description
    cJSON *repair_description = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "repairDescription");
    if (repair_description) { 
    if(!cJSON_IsString(repair_description) && !cJSON_IsNull(repair_description))
    {
    goto end; //String
    }
    }

    // asset_repair_create_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // asset_repair_create_dto->asset_maintenance_team_id
    cJSON *asset_maintenance_team_id = cJSON_GetObjectItemCaseSensitive(asset_repair_create_dtoJSON, "assetMaintenanceTeamId");
    if (asset_maintenance_team_id) { 
    if(!cJSON_IsString(asset_maintenance_team_id) && !cJSON_IsNull(asset_maintenance_team_id))
    {
    goto end; //String
    }
    }


    asset_repair_create_dto_local_var = asset_repair_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        repair_status ? repair_statusVariable : assetsservice_asset_repair_create_dto_REPAIRSTATUS_NULL,
        scheduled_date && !cJSON_IsNull(scheduled_date) ? strdup(scheduled_date->valuestring) : NULL,
        completion_date && !cJSON_IsNull(completion_date) ? strdup(completion_date->valuestring) : NULL,
        reported_date && !cJSON_IsNull(reported_date) ? strdup(reported_date->valuestring) : NULL,
        estimated_cost ? estimated_cost->valuedouble : 0,
        actual_cost ? actual_cost->valuedouble : 0,
        problem_description && !cJSON_IsNull(problem_description) ? strdup(problem_description->valuestring) : NULL,
        repair_description && !cJSON_IsNull(repair_description) ? strdup(repair_description->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        asset_maintenance_team_id && !cJSON_IsNull(asset_maintenance_team_id) ? strdup(asset_maintenance_team_id->valuestring) : NULL
        );

    return asset_repair_create_dto_local_var;
end:
    return NULL;

}
