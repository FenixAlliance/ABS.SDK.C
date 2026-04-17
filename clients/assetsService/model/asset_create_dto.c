#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_create_dto.h"


char* asset_create_dto_asset_class_ToString(assetsservice_asset_create_dto_ASSETCLASS_e asset_class) {
    char* asset_classArray[] =  { "NULL", "Fixed", "Stock" };
    return asset_classArray[asset_class];
}

assetsservice_asset_create_dto_ASSETCLASS_e asset_create_dto_asset_class_FromString(char* asset_class){
    int stringToReturn = 0;
    char *asset_classArray[] =  { "NULL", "Fixed", "Stock" };
    size_t sizeofArray = sizeof(asset_classArray) / sizeof(asset_classArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(asset_class, asset_classArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* asset_create_dto_asset_owner_ToString(assetsservice_asset_create_dto_ASSETOWNER_e asset_owner) {
    char* asset_ownerArray[] =  { "NULL", "Business", "Organization", "Contact", "Supplier" };
    return asset_ownerArray[asset_owner];
}

assetsservice_asset_create_dto_ASSETOWNER_e asset_create_dto_asset_owner_FromString(char* asset_owner){
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

asset_create_dto_t *asset_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    assetsservice_asset_create_dto_ASSETCLASS_e asset_class,
    assetsservice_asset_create_dto_ASSETOWNER_e asset_owner,
    int is_existing_asset,
    int calculate_depreciation,
    int allow_monthly_depreciation,
    double opening_depreciation,
    char *purchase_date,
    double purchase_price,
    char *currency_id,
    char *item_id,
    char *asset_category_id,
    char *purchase_invoice_id,
    char *purchase_receipt_id,
    char *asset_location_id,
    char *contact_id,
    char *organization_department_id
    ) {
    asset_create_dto_t *asset_create_dto_local_var = malloc(sizeof(asset_create_dto_t));
    if (!asset_create_dto_local_var) {
        return NULL;
    }
    asset_create_dto_local_var->id = id;
    asset_create_dto_local_var->timestamp = timestamp;
    asset_create_dto_local_var->name = name;
    asset_create_dto_local_var->description = description;
    asset_create_dto_local_var->asset_class = asset_class;
    asset_create_dto_local_var->asset_owner = asset_owner;
    asset_create_dto_local_var->is_existing_asset = is_existing_asset;
    asset_create_dto_local_var->calculate_depreciation = calculate_depreciation;
    asset_create_dto_local_var->allow_monthly_depreciation = allow_monthly_depreciation;
    asset_create_dto_local_var->opening_depreciation = opening_depreciation;
    asset_create_dto_local_var->purchase_date = purchase_date;
    asset_create_dto_local_var->purchase_price = purchase_price;
    asset_create_dto_local_var->currency_id = currency_id;
    asset_create_dto_local_var->item_id = item_id;
    asset_create_dto_local_var->asset_category_id = asset_category_id;
    asset_create_dto_local_var->purchase_invoice_id = purchase_invoice_id;
    asset_create_dto_local_var->purchase_receipt_id = purchase_receipt_id;
    asset_create_dto_local_var->asset_location_id = asset_location_id;
    asset_create_dto_local_var->contact_id = contact_id;
    asset_create_dto_local_var->organization_department_id = organization_department_id;

    return asset_create_dto_local_var;
}


void asset_create_dto_free(asset_create_dto_t *asset_create_dto) {
    if(NULL == asset_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_create_dto->id) {
        free(asset_create_dto->id);
        asset_create_dto->id = NULL;
    }
    if (asset_create_dto->timestamp) {
        free(asset_create_dto->timestamp);
        asset_create_dto->timestamp = NULL;
    }
    if (asset_create_dto->name) {
        free(asset_create_dto->name);
        asset_create_dto->name = NULL;
    }
    if (asset_create_dto->description) {
        free(asset_create_dto->description);
        asset_create_dto->description = NULL;
    }
    if (asset_create_dto->purchase_date) {
        free(asset_create_dto->purchase_date);
        asset_create_dto->purchase_date = NULL;
    }
    if (asset_create_dto->currency_id) {
        free(asset_create_dto->currency_id);
        asset_create_dto->currency_id = NULL;
    }
    if (asset_create_dto->item_id) {
        free(asset_create_dto->item_id);
        asset_create_dto->item_id = NULL;
    }
    if (asset_create_dto->asset_category_id) {
        free(asset_create_dto->asset_category_id);
        asset_create_dto->asset_category_id = NULL;
    }
    if (asset_create_dto->purchase_invoice_id) {
        free(asset_create_dto->purchase_invoice_id);
        asset_create_dto->purchase_invoice_id = NULL;
    }
    if (asset_create_dto->purchase_receipt_id) {
        free(asset_create_dto->purchase_receipt_id);
        asset_create_dto->purchase_receipt_id = NULL;
    }
    if (asset_create_dto->asset_location_id) {
        free(asset_create_dto->asset_location_id);
        asset_create_dto->asset_location_id = NULL;
    }
    if (asset_create_dto->contact_id) {
        free(asset_create_dto->contact_id);
        asset_create_dto->contact_id = NULL;
    }
    if (asset_create_dto->organization_department_id) {
        free(asset_create_dto->organization_department_id);
        asset_create_dto->organization_department_id = NULL;
    }
    free(asset_create_dto);
}

cJSON *asset_create_dto_convertToJSON(asset_create_dto_t *asset_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_create_dto->id
    if(asset_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->timestamp
    if(asset_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_create_dto->name
    if(asset_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", asset_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->description
    if(asset_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", asset_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->asset_class
    if(asset_create_dto->asset_class != assetsservice_asset_create_dto_ASSETCLASS_NULL) {
    if(cJSON_AddStringToObject(item, "assetClass", asset_classasset_create_dto_ToString(asset_create_dto->asset_class)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_create_dto->asset_owner
    if(asset_create_dto->asset_owner != assetsservice_asset_create_dto_ASSETOWNER_NULL) {
    if(cJSON_AddStringToObject(item, "assetOwner", asset_ownerasset_create_dto_ToString(asset_create_dto->asset_owner)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // asset_create_dto->is_existing_asset
    if(asset_create_dto->is_existing_asset) {
    if(cJSON_AddBoolToObject(item, "isExistingAsset", asset_create_dto->is_existing_asset) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_create_dto->calculate_depreciation
    if(asset_create_dto->calculate_depreciation) {
    if(cJSON_AddBoolToObject(item, "calculateDepreciation", asset_create_dto->calculate_depreciation) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_create_dto->allow_monthly_depreciation
    if(asset_create_dto->allow_monthly_depreciation) {
    if(cJSON_AddBoolToObject(item, "allowMonthlyDepreciation", asset_create_dto->allow_monthly_depreciation) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_create_dto->opening_depreciation
    if(asset_create_dto->opening_depreciation) {
    if(cJSON_AddNumberToObject(item, "openingDepreciation", asset_create_dto->opening_depreciation) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_create_dto->purchase_date
    if(asset_create_dto->purchase_date) {
    if(cJSON_AddStringToObject(item, "purchaseDate", asset_create_dto->purchase_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_create_dto->purchase_price
    if(asset_create_dto->purchase_price) {
    if(cJSON_AddNumberToObject(item, "purchasePrice", asset_create_dto->purchase_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_create_dto->currency_id
    if(asset_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", asset_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->item_id
    if(asset_create_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", asset_create_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->asset_category_id
    if(asset_create_dto->asset_category_id) {
    if(cJSON_AddStringToObject(item, "assetCategoryId", asset_create_dto->asset_category_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->purchase_invoice_id
    if(asset_create_dto->purchase_invoice_id) {
    if(cJSON_AddStringToObject(item, "purchaseInvoiceId", asset_create_dto->purchase_invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->purchase_receipt_id
    if(asset_create_dto->purchase_receipt_id) {
    if(cJSON_AddStringToObject(item, "purchaseReceiptId", asset_create_dto->purchase_receipt_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->asset_location_id
    if(asset_create_dto->asset_location_id) {
    if(cJSON_AddStringToObject(item, "assetLocationId", asset_create_dto->asset_location_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->contact_id
    if(asset_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", asset_create_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_create_dto->organization_department_id
    if(asset_create_dto->organization_department_id) {
    if(cJSON_AddStringToObject(item, "organizationDepartmentId", asset_create_dto->organization_department_id) == NULL) {
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

asset_create_dto_t *asset_create_dto_parseFromJSON(cJSON *asset_create_dtoJSON){

    asset_create_dto_t *asset_create_dto_local_var = NULL;

    // asset_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // asset_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // asset_create_dto->asset_class
    cJSON *asset_class = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "assetClass");
    assetsservice_asset_create_dto_ASSETCLASS_e asset_classVariable;
    if (asset_class) { 
    if(!cJSON_IsString(asset_class))
    {
    goto end; //Enum
    }
    asset_classVariable = asset_create_dto_asset_class_FromString(asset_class->valuestring);
    }

    // asset_create_dto->asset_owner
    cJSON *asset_owner = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "assetOwner");
    assetsservice_asset_create_dto_ASSETOWNER_e asset_ownerVariable;
    if (asset_owner) { 
    if(!cJSON_IsString(asset_owner))
    {
    goto end; //Enum
    }
    asset_ownerVariable = asset_create_dto_asset_owner_FromString(asset_owner->valuestring);
    }

    // asset_create_dto->is_existing_asset
    cJSON *is_existing_asset = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "isExistingAsset");
    if (is_existing_asset) { 
    if(!cJSON_IsBool(is_existing_asset))
    {
    goto end; //Bool
    }
    }

    // asset_create_dto->calculate_depreciation
    cJSON *calculate_depreciation = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "calculateDepreciation");
    if (calculate_depreciation) { 
    if(!cJSON_IsBool(calculate_depreciation))
    {
    goto end; //Bool
    }
    }

    // asset_create_dto->allow_monthly_depreciation
    cJSON *allow_monthly_depreciation = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "allowMonthlyDepreciation");
    if (allow_monthly_depreciation) { 
    if(!cJSON_IsBool(allow_monthly_depreciation))
    {
    goto end; //Bool
    }
    }

    // asset_create_dto->opening_depreciation
    cJSON *opening_depreciation = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "openingDepreciation");
    if (opening_depreciation) { 
    if(!cJSON_IsNumber(opening_depreciation))
    {
    goto end; //Numeric
    }
    }

    // asset_create_dto->purchase_date
    cJSON *purchase_date = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "purchaseDate");
    if (purchase_date) { 
    if(!cJSON_IsString(purchase_date) && !cJSON_IsNull(purchase_date))
    {
    goto end; //DateTime
    }
    }

    // asset_create_dto->purchase_price
    cJSON *purchase_price = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "purchasePrice");
    if (purchase_price) { 
    if(!cJSON_IsNumber(purchase_price))
    {
    goto end; //Numeric
    }
    }

    // asset_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->asset_category_id
    cJSON *asset_category_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "assetCategoryId");
    if (asset_category_id) { 
    if(!cJSON_IsString(asset_category_id) && !cJSON_IsNull(asset_category_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->purchase_invoice_id
    cJSON *purchase_invoice_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "purchaseInvoiceId");
    if (purchase_invoice_id) { 
    if(!cJSON_IsString(purchase_invoice_id) && !cJSON_IsNull(purchase_invoice_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->purchase_receipt_id
    cJSON *purchase_receipt_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "purchaseReceiptId");
    if (purchase_receipt_id) { 
    if(!cJSON_IsString(purchase_receipt_id) && !cJSON_IsNull(purchase_receipt_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->asset_location_id
    cJSON *asset_location_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "assetLocationId");
    if (asset_location_id) { 
    if(!cJSON_IsString(asset_location_id) && !cJSON_IsNull(asset_location_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // asset_create_dto->organization_department_id
    cJSON *organization_department_id = cJSON_GetObjectItemCaseSensitive(asset_create_dtoJSON, "organizationDepartmentId");
    if (organization_department_id) { 
    if(!cJSON_IsString(organization_department_id) && !cJSON_IsNull(organization_department_id))
    {
    goto end; //String
    }
    }


    asset_create_dto_local_var = asset_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        asset_class ? asset_classVariable : assetsservice_asset_create_dto_ASSETCLASS_NULL,
        asset_owner ? asset_ownerVariable : assetsservice_asset_create_dto_ASSETOWNER_NULL,
        is_existing_asset ? is_existing_asset->valueint : 0,
        calculate_depreciation ? calculate_depreciation->valueint : 0,
        allow_monthly_depreciation ? allow_monthly_depreciation->valueint : 0,
        opening_depreciation ? opening_depreciation->valuedouble : 0,
        purchase_date && !cJSON_IsNull(purchase_date) ? strdup(purchase_date->valuestring) : NULL,
        purchase_price ? purchase_price->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        asset_category_id && !cJSON_IsNull(asset_category_id) ? strdup(asset_category_id->valuestring) : NULL,
        purchase_invoice_id && !cJSON_IsNull(purchase_invoice_id) ? strdup(purchase_invoice_id->valuestring) : NULL,
        purchase_receipt_id && !cJSON_IsNull(purchase_receipt_id) ? strdup(purchase_receipt_id->valuestring) : NULL,
        asset_location_id && !cJSON_IsNull(asset_location_id) ? strdup(asset_location_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        organization_department_id && !cJSON_IsNull(organization_department_id) ? strdup(organization_department_id->valuestring) : NULL
        );

    return asset_create_dto_local_var;
end:
    return NULL;

}
