#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_update_dto.h"


char* asset_update_dto_asset_type_ToString(assetsservice_asset_update_dto_ASSETTYPE_e asset_type) {
    char* asset_typeArray[] =  { "NULL", "Fixed", "Stock" };
    return asset_typeArray[asset_type];
}

assetsservice_asset_update_dto_ASSETTYPE_e asset_update_dto_asset_type_FromString(char* asset_type){
    int stringToReturn = 0;
    char *asset_typeArray[] =  { "NULL", "Fixed", "Stock" };
    size_t sizeofArray = sizeof(asset_typeArray) / sizeof(asset_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(asset_type, asset_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* asset_update_dto_asset_owner_ToString(assetsservice_asset_update_dto_ASSETOWNER_e asset_owner) {
    char* asset_ownerArray[] =  { "NULL", "Business", "Organization", "Contact", "Supplier" };
    return asset_ownerArray[asset_owner];
}

assetsservice_asset_update_dto_ASSETOWNER_e asset_update_dto_asset_owner_FromString(char* asset_owner){
    int stringToReturn = 0;
    char *asset_ownerArray[] =  { "NULL", "Business", "Organization", "Contact", "Supplier" };
    size_t sizeofArray = sizeof(asset_ownerArray) / sizeof(asset_ownerArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(asset_owner, asset_ownerArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

asset_update_dto_t *asset_update_dto_create(
    char *name,
    char *description,
    assetsservice_asset_update_dto_ASSETTYPE_e asset_type,
    assetsservice_asset_update_dto_ASSETOWNER_e asset_owner,
    int calculate_depreciation,
    int allow_monthly_depreciation,
    double opening_depreciation,
    char *purchase_date,
    double purchase_price,
    char *currency_id,
    char *currency_code,
    char *item_id,
    char *asset_category_id,
    char *purchase_invoice_id,
    char *purchase_receipt_id,
    char *asset_location_id,
    char *contact_id,
    char *organization_department_id
    ) {
    asset_update_dto_t *asset_update_dto_local_var = malloc(sizeof(asset_update_dto_t));
    if (!asset_update_dto_local_var) {
        return NULL;
    }
    asset_update_dto_local_var->name = name;
    asset_update_dto_local_var->description = description;
    asset_update_dto_local_var->asset_type = asset_type;
    asset_update_dto_local_var->asset_owner = asset_owner;
    asset_update_dto_local_var->calculate_depreciation = calculate_depreciation;
    asset_update_dto_local_var->allow_monthly_depreciation = allow_monthly_depreciation;
    asset_update_dto_local_var->opening_depreciation = opening_depreciation;
    asset_update_dto_local_var->purchase_date = purchase_date;
    asset_update_dto_local_var->purchase_price = purchase_price;
    asset_update_dto_local_var->currency_id = currency_id;
    asset_update_dto_local_var->currency_code = currency_code;
    asset_update_dto_local_var->item_id = item_id;
    asset_update_dto_local_var->asset_category_id = asset_category_id;
    asset_update_dto_local_var->purchase_invoice_id = purchase_invoice_id;
    asset_update_dto_local_var->purchase_receipt_id = purchase_receipt_id;
    asset_update_dto_local_var->asset_location_id = asset_location_id;
    asset_update_dto_local_var->contact_id = contact_id;
    asset_update_dto_local_var->organization_department_id = organization_department_id;

    return asset_update_dto_local_var;
}


void asset_update_dto_free(asset_update_dto_t *asset_update_dto) {
    if(NULL == asset_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_update_dto->name) {
        free(asset_update_dto->name);
        asset_update_dto->name = NULL;
    }
    if (asset_update_dto->description) {
        free(asset_update_dto->description);
        asset_update_dto->description = NULL;
    }
    if (asset_update_dto->purchase_date) {
        free(asset_update_dto->purchase_date);
        asset_update_dto->purchase_date = NULL;
    }
    if (asset_update_dto->currency_id) {
        free(asset_update_dto->currency_id);
        asset_update_dto->currency_id = NULL;
    }
    if (asset_update_dto->currency_code) {
        free(asset_update_dto->currency_code);
        asset_update_dto->currency_code = NULL;
    }
    if (asset_update_dto->item_id) {
        free(asset_update_dto->item_id);
        asset_update_dto->item_id = NULL;
    }
    if (asset_update_dto->asset_category_id) {
        free(asset_update_dto->asset_category_id);
        asset_update_dto->asset_category_id = NULL;
    }
    if (asset_update_dto->purchase_invoice_id) {
        free(asset_update_dto->purchase_invoice_id);
        asset_update_dto->purchase_invoice_id = NULL;
    }
    if (asset_update_dto->purchase_receipt_id) {
        free(asset_update_dto->purchase_receipt_id);
        asset_update_dto->purchase_receipt_id = NULL;
    }
    if (asset_update_dto->asset_location_id) {
        free(asset_update_dto->asset_location_id);
        asset_update_dto->asset_location_id = NULL;
    }
    if (asset_update_dto->contact_id) {
        free(asset_update_dto->contact_id);
        asset_update_dto->contact_id = NULL;
    }
    if (asset_update_dto->organization_department_id) {
        free(asset_update_dto->organization_department_id);
        asset_update_dto->organization_department_id = NULL;
    }
    free(asset_update_dto);
}

cJSON *asset_update_dto_convertToJSON(asset_update_dto_t *asset_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_update_dto->name
    if(asset_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", asset_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->description
    if(asset_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", asset_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->asset_type
    if(asset_update_dto->asset_type != assetsservice_asset_update_dto_ASSETTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "assetType", asset_typeasset_update_dto_ToString(asset_update_dto->asset_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_update_dto->asset_owner
    if(asset_update_dto->asset_owner != assetsservice_asset_update_dto_ASSETOWNER_NULL) {
    if(cJSON_AddStringToObject(item, "assetOwner", asset_ownerasset_update_dto_ToString(asset_update_dto->asset_owner)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_update_dto->calculate_depreciation
    if(asset_update_dto->calculate_depreciation) {
    if(cJSON_AddBoolToObject(item, "calculateDepreciation", asset_update_dto->calculate_depreciation) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_update_dto->allow_monthly_depreciation
    if(asset_update_dto->allow_monthly_depreciation) {
    if(cJSON_AddBoolToObject(item, "allowMonthlyDepreciation", asset_update_dto->allow_monthly_depreciation) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_update_dto->opening_depreciation
    if(asset_update_dto->opening_depreciation) {
    if(cJSON_AddNumberToObject(item, "openingDepreciation", asset_update_dto->opening_depreciation) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_update_dto->purchase_date
    if(asset_update_dto->purchase_date) {
    if(cJSON_AddStringToObject(item, "purchaseDate", asset_update_dto->purchase_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_update_dto->purchase_price
    if(asset_update_dto->purchase_price) {
    if(cJSON_AddNumberToObject(item, "purchasePrice", asset_update_dto->purchase_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_update_dto->currency_id
    if(asset_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", asset_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->currency_code
    if(asset_update_dto->currency_code) {
    if(cJSON_AddStringToObject(item, "currencyCode", asset_update_dto->currency_code) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->item_id
    if(asset_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", asset_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->asset_category_id
    if(asset_update_dto->asset_category_id) {
    if(cJSON_AddStringToObject(item, "assetCategoryId", asset_update_dto->asset_category_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->purchase_invoice_id
    if(asset_update_dto->purchase_invoice_id) {
    if(cJSON_AddStringToObject(item, "purchaseInvoiceId", asset_update_dto->purchase_invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->purchase_receipt_id
    if(asset_update_dto->purchase_receipt_id) {
    if(cJSON_AddStringToObject(item, "purchaseReceiptId", asset_update_dto->purchase_receipt_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->asset_location_id
    if(asset_update_dto->asset_location_id) {
    if(cJSON_AddStringToObject(item, "assetLocationId", asset_update_dto->asset_location_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->contact_id
    if(asset_update_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", asset_update_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_update_dto->organization_department_id
    if(asset_update_dto->organization_department_id) {
    if(cJSON_AddStringToObject(item, "organizationDepartmentId", asset_update_dto->organization_department_id) == NULL) {
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

asset_update_dto_t *asset_update_dto_parseFromJSON(cJSON *asset_update_dtoJSON){

    asset_update_dto_t *asset_update_dto_local_var = NULL;

    // asset_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // asset_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // asset_update_dto->asset_type
    cJSON *asset_type = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "assetType");
    assetsservice_asset_update_dto_ASSETTYPE_e asset_typeVariable;
    if (asset_type) { 
    if(!cJSON_IsString(asset_type))
    {
    goto end; //Enum
    }
    asset_typeVariable = asset_update_dto_asset_type_FromString(asset_type->valuestring);
    }

    // asset_update_dto->asset_owner
    cJSON *asset_owner = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "assetOwner");
    assetsservice_asset_update_dto_ASSETOWNER_e asset_ownerVariable;
    if (asset_owner) { 
    if(!cJSON_IsString(asset_owner))
    {
    goto end; //Enum
    }
    asset_ownerVariable = asset_update_dto_asset_owner_FromString(asset_owner->valuestring);
    }

    // asset_update_dto->calculate_depreciation
    cJSON *calculate_depreciation = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "calculateDepreciation");
    if (calculate_depreciation) { 
    if(!cJSON_IsBool(calculate_depreciation))
    {
    goto end; //Bool
    }
    }

    // asset_update_dto->allow_monthly_depreciation
    cJSON *allow_monthly_depreciation = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "allowMonthlyDepreciation");
    if (allow_monthly_depreciation) { 
    if(!cJSON_IsBool(allow_monthly_depreciation))
    {
    goto end; //Bool
    }
    }

    // asset_update_dto->opening_depreciation
    cJSON *opening_depreciation = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "openingDepreciation");
    if (opening_depreciation) { 
    if(!cJSON_IsNumber(opening_depreciation))
    {
    goto end; //Numeric
    }
    }

    // asset_update_dto->purchase_date
    cJSON *purchase_date = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "purchaseDate");
    if (purchase_date) { 
    if(!cJSON_IsString(purchase_date) && !cJSON_IsNull(purchase_date))
    {
    goto end; //DateTime
    }
    }

    // asset_update_dto->purchase_price
    cJSON *purchase_price = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "purchasePrice");
    if (purchase_price) { 
    if(!cJSON_IsNumber(purchase_price))
    {
    goto end; //Numeric
    }
    }

    // asset_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->currency_code
    cJSON *currency_code = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "currencyCode");
    if (currency_code) { 
    if(!cJSON_IsString(currency_code) && !cJSON_IsNull(currency_code))
    {
    goto end; //String
    }
    }

    // asset_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->asset_category_id
    cJSON *asset_category_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "assetCategoryId");
    if (asset_category_id) { 
    if(!cJSON_IsString(asset_category_id) && !cJSON_IsNull(asset_category_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->purchase_invoice_id
    cJSON *purchase_invoice_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "purchaseInvoiceId");
    if (purchase_invoice_id) { 
    if(!cJSON_IsString(purchase_invoice_id) && !cJSON_IsNull(purchase_invoice_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->purchase_receipt_id
    cJSON *purchase_receipt_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "purchaseReceiptId");
    if (purchase_receipt_id) { 
    if(!cJSON_IsString(purchase_receipt_id) && !cJSON_IsNull(purchase_receipt_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->asset_location_id
    cJSON *asset_location_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "assetLocationId");
    if (asset_location_id) { 
    if(!cJSON_IsString(asset_location_id) && !cJSON_IsNull(asset_location_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // asset_update_dto->organization_department_id
    cJSON *organization_department_id = cJSON_GetObjectItemCaseSensitive(asset_update_dtoJSON, "organizationDepartmentId");
    if (organization_department_id) { 
    if(!cJSON_IsString(organization_department_id) && !cJSON_IsNull(organization_department_id))
    {
    goto end; //String
    }
    }


    asset_update_dto_local_var = asset_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        asset_type ? asset_typeVariable : assetsservice_asset_update_dto_ASSETTYPE_NULL,
        asset_owner ? asset_ownerVariable : assetsservice_asset_update_dto_ASSETOWNER_NULL,
        calculate_depreciation ? calculate_depreciation->valueint : 0,
        allow_monthly_depreciation ? allow_monthly_depreciation->valueint : 0,
        opening_depreciation ? opening_depreciation->valuedouble : 0,
        purchase_date && !cJSON_IsNull(purchase_date) ? strdup(purchase_date->valuestring) : NULL,
        purchase_price ? purchase_price->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        currency_code && !cJSON_IsNull(currency_code) ? strdup(currency_code->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        asset_category_id && !cJSON_IsNull(asset_category_id) ? strdup(asset_category_id->valuestring) : NULL,
        purchase_invoice_id && !cJSON_IsNull(purchase_invoice_id) ? strdup(purchase_invoice_id->valuestring) : NULL,
        purchase_receipt_id && !cJSON_IsNull(purchase_receipt_id) ? strdup(purchase_receipt_id->valuestring) : NULL,
        asset_location_id && !cJSON_IsNull(asset_location_id) ? strdup(asset_location_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        organization_department_id && !cJSON_IsNull(organization_department_id) ? strdup(organization_department_id->valuestring) : NULL
        );

    return asset_update_dto_local_var;
end:
    return NULL;

}
