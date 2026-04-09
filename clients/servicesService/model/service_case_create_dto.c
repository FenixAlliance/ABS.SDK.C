#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_case_create_dto.h"



service_case_create_dto_t *service_case_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    int taxable,
    char *work_location,
    char *service_id,
    char *service_queue_id,
    char *service_case_type_id,
    char *service_level_agreement_id,
    char *individual_id,
    char *organization_id,
    char *account_holder_id,
    char *receiver_business_id,
    char *currency_id,
    char *territory_id,
    char *price_list_id,
    char *promised_start_date,
    char *promised_end_date
    ) {
    service_case_create_dto_t *service_case_create_dto_local_var = malloc(sizeof(service_case_create_dto_t));
    if (!service_case_create_dto_local_var) {
        return NULL;
    }
    service_case_create_dto_local_var->id = id;
    service_case_create_dto_local_var->timestamp = timestamp;
    service_case_create_dto_local_var->title = title;
    service_case_create_dto_local_var->description = description;
    service_case_create_dto_local_var->instructions = instructions;
    service_case_create_dto_local_var->taxable = taxable;
    service_case_create_dto_local_var->work_location = work_location;
    service_case_create_dto_local_var->service_id = service_id;
    service_case_create_dto_local_var->service_queue_id = service_queue_id;
    service_case_create_dto_local_var->service_case_type_id = service_case_type_id;
    service_case_create_dto_local_var->service_level_agreement_id = service_level_agreement_id;
    service_case_create_dto_local_var->individual_id = individual_id;
    service_case_create_dto_local_var->organization_id = organization_id;
    service_case_create_dto_local_var->account_holder_id = account_holder_id;
    service_case_create_dto_local_var->receiver_business_id = receiver_business_id;
    service_case_create_dto_local_var->currency_id = currency_id;
    service_case_create_dto_local_var->territory_id = territory_id;
    service_case_create_dto_local_var->price_list_id = price_list_id;
    service_case_create_dto_local_var->promised_start_date = promised_start_date;
    service_case_create_dto_local_var->promised_end_date = promised_end_date;

    return service_case_create_dto_local_var;
}


void service_case_create_dto_free(service_case_create_dto_t *service_case_create_dto) {
    if(NULL == service_case_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (service_case_create_dto->id) {
        free(service_case_create_dto->id);
        service_case_create_dto->id = NULL;
    }
    if (service_case_create_dto->timestamp) {
        free(service_case_create_dto->timestamp);
        service_case_create_dto->timestamp = NULL;
    }
    if (service_case_create_dto->title) {
        free(service_case_create_dto->title);
        service_case_create_dto->title = NULL;
    }
    if (service_case_create_dto->description) {
        free(service_case_create_dto->description);
        service_case_create_dto->description = NULL;
    }
    if (service_case_create_dto->instructions) {
        free(service_case_create_dto->instructions);
        service_case_create_dto->instructions = NULL;
    }
    if (service_case_create_dto->work_location) {
        free(service_case_create_dto->work_location);
        service_case_create_dto->work_location = NULL;
    }
    if (service_case_create_dto->service_id) {
        free(service_case_create_dto->service_id);
        service_case_create_dto->service_id = NULL;
    }
    if (service_case_create_dto->service_queue_id) {
        free(service_case_create_dto->service_queue_id);
        service_case_create_dto->service_queue_id = NULL;
    }
    if (service_case_create_dto->service_case_type_id) {
        free(service_case_create_dto->service_case_type_id);
        service_case_create_dto->service_case_type_id = NULL;
    }
    if (service_case_create_dto->service_level_agreement_id) {
        free(service_case_create_dto->service_level_agreement_id);
        service_case_create_dto->service_level_agreement_id = NULL;
    }
    if (service_case_create_dto->individual_id) {
        free(service_case_create_dto->individual_id);
        service_case_create_dto->individual_id = NULL;
    }
    if (service_case_create_dto->organization_id) {
        free(service_case_create_dto->organization_id);
        service_case_create_dto->organization_id = NULL;
    }
    if (service_case_create_dto->account_holder_id) {
        free(service_case_create_dto->account_holder_id);
        service_case_create_dto->account_holder_id = NULL;
    }
    if (service_case_create_dto->receiver_business_id) {
        free(service_case_create_dto->receiver_business_id);
        service_case_create_dto->receiver_business_id = NULL;
    }
    if (service_case_create_dto->currency_id) {
        free(service_case_create_dto->currency_id);
        service_case_create_dto->currency_id = NULL;
    }
    if (service_case_create_dto->territory_id) {
        free(service_case_create_dto->territory_id);
        service_case_create_dto->territory_id = NULL;
    }
    if (service_case_create_dto->price_list_id) {
        free(service_case_create_dto->price_list_id);
        service_case_create_dto->price_list_id = NULL;
    }
    if (service_case_create_dto->promised_start_date) {
        free(service_case_create_dto->promised_start_date);
        service_case_create_dto->promised_start_date = NULL;
    }
    if (service_case_create_dto->promised_end_date) {
        free(service_case_create_dto->promised_end_date);
        service_case_create_dto->promised_end_date = NULL;
    }
    free(service_case_create_dto);
}

cJSON *service_case_create_dto_convertToJSON(service_case_create_dto_t *service_case_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // service_case_create_dto->id
    if(service_case_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", service_case_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->timestamp
    if(service_case_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", service_case_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // service_case_create_dto->title
    if(service_case_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", service_case_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->description
    if(service_case_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", service_case_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->instructions
    if(service_case_create_dto->instructions) {
    if(cJSON_AddStringToObject(item, "instructions", service_case_create_dto->instructions) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->taxable
    if(service_case_create_dto->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", service_case_create_dto->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // service_case_create_dto->work_location
    if(service_case_create_dto->work_location) {
    if(cJSON_AddStringToObject(item, "workLocation", service_case_create_dto->work_location) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->service_id
    if(service_case_create_dto->service_id) {
    if(cJSON_AddStringToObject(item, "serviceId", service_case_create_dto->service_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->service_queue_id
    if(service_case_create_dto->service_queue_id) {
    if(cJSON_AddStringToObject(item, "serviceQueueId", service_case_create_dto->service_queue_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->service_case_type_id
    if(service_case_create_dto->service_case_type_id) {
    if(cJSON_AddStringToObject(item, "serviceCaseTypeId", service_case_create_dto->service_case_type_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->service_level_agreement_id
    if(service_case_create_dto->service_level_agreement_id) {
    if(cJSON_AddStringToObject(item, "serviceLevelAgreementId", service_case_create_dto->service_level_agreement_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->individual_id
    if(service_case_create_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", service_case_create_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->organization_id
    if(service_case_create_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", service_case_create_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->account_holder_id
    if(service_case_create_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderId", service_case_create_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->receiver_business_id
    if(service_case_create_dto->receiver_business_id) {
    if(cJSON_AddStringToObject(item, "receiverBusinessId", service_case_create_dto->receiver_business_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->currency_id
    if(service_case_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", service_case_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->territory_id
    if(service_case_create_dto->territory_id) {
    if(cJSON_AddStringToObject(item, "territoryId", service_case_create_dto->territory_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->price_list_id
    if(service_case_create_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", service_case_create_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // service_case_create_dto->promised_start_date
    if(service_case_create_dto->promised_start_date) {
    if(cJSON_AddStringToObject(item, "promisedStartDate", service_case_create_dto->promised_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // service_case_create_dto->promised_end_date
    if(service_case_create_dto->promised_end_date) {
    if(cJSON_AddStringToObject(item, "promisedEndDate", service_case_create_dto->promised_end_date) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

service_case_create_dto_t *service_case_create_dto_parseFromJSON(cJSON *service_case_create_dtoJSON){

    service_case_create_dto_t *service_case_create_dto_local_var = NULL;

    // service_case_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // service_case_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->instructions
    cJSON *instructions = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "instructions");
    if (instructions) { 
    if(!cJSON_IsString(instructions) && !cJSON_IsNull(instructions))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // service_case_create_dto->work_location
    cJSON *work_location = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "workLocation");
    if (work_location) { 
    if(!cJSON_IsString(work_location) && !cJSON_IsNull(work_location))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "serviceId");
    if (service_id) { 
    if(!cJSON_IsString(service_id) && !cJSON_IsNull(service_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->service_queue_id
    cJSON *service_queue_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "serviceQueueId");
    if (service_queue_id) { 
    if(!cJSON_IsString(service_queue_id) && !cJSON_IsNull(service_queue_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->service_case_type_id
    cJSON *service_case_type_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "serviceCaseTypeId");
    if (service_case_type_id) { 
    if(!cJSON_IsString(service_case_type_id) && !cJSON_IsNull(service_case_type_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->service_level_agreement_id
    cJSON *service_level_agreement_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "serviceLevelAgreementId");
    if (service_level_agreement_id) { 
    if(!cJSON_IsString(service_level_agreement_id) && !cJSON_IsNull(service_level_agreement_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "accountHolderId");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->receiver_business_id
    cJSON *receiver_business_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "receiverBusinessId");
    if (receiver_business_id) { 
    if(!cJSON_IsString(receiver_business_id) && !cJSON_IsNull(receiver_business_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->territory_id
    cJSON *territory_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "territoryId");
    if (territory_id) { 
    if(!cJSON_IsString(territory_id) && !cJSON_IsNull(territory_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // service_case_create_dto->promised_start_date
    cJSON *promised_start_date = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "promisedStartDate");
    if (promised_start_date) { 
    if(!cJSON_IsString(promised_start_date) && !cJSON_IsNull(promised_start_date))
    {
    goto end; //DateTime
    }
    }

    // service_case_create_dto->promised_end_date
    cJSON *promised_end_date = cJSON_GetObjectItemCaseSensitive(service_case_create_dtoJSON, "promisedEndDate");
    if (promised_end_date) { 
    if(!cJSON_IsString(promised_end_date) && !cJSON_IsNull(promised_end_date))
    {
    goto end; //DateTime
    }
    }


    service_case_create_dto_local_var = service_case_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        instructions && !cJSON_IsNull(instructions) ? strdup(instructions->valuestring) : NULL,
        taxable ? taxable->valueint : 0,
        work_location && !cJSON_IsNull(work_location) ? strdup(work_location->valuestring) : NULL,
        service_id && !cJSON_IsNull(service_id) ? strdup(service_id->valuestring) : NULL,
        service_queue_id && !cJSON_IsNull(service_queue_id) ? strdup(service_queue_id->valuestring) : NULL,
        service_case_type_id && !cJSON_IsNull(service_case_type_id) ? strdup(service_case_type_id->valuestring) : NULL,
        service_level_agreement_id && !cJSON_IsNull(service_level_agreement_id) ? strdup(service_level_agreement_id->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        receiver_business_id && !cJSON_IsNull(receiver_business_id) ? strdup(receiver_business_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        territory_id && !cJSON_IsNull(territory_id) ? strdup(territory_id->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        promised_start_date && !cJSON_IsNull(promised_start_date) ? strdup(promised_start_date->valuestring) : NULL,
        promised_end_date && !cJSON_IsNull(promised_end_date) ? strdup(promised_end_date->valuestring) : NULL
        );

    return service_case_create_dto_local_var;
end:
    return NULL;

}
