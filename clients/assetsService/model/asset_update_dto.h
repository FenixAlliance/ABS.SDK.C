/*
 * asset_update_dto.h
 *
 * 
 */

#ifndef _asset_update_dto_H_
#define _asset_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_update_dto_t asset_update_dto_t;


// Enum ASSETTYPE for asset_update_dto

typedef enum  { assetsservice_asset_update_dto_ASSETTYPE_NULL = 0, assetsservice_asset_update_dto_ASSETTYPE_Fixed, assetsservice_asset_update_dto_ASSETTYPE_Stock } assetsservice_asset_update_dto_ASSETTYPE_e;

char* asset_update_dto_asset_type_ToString(assetsservice_asset_update_dto_ASSETTYPE_e asset_type);

assetsservice_asset_update_dto_ASSETTYPE_e asset_update_dto_asset_type_FromString(char* asset_type);

// Enum ASSETOWNER for asset_update_dto

typedef enum  { assetsservice_asset_update_dto_ASSETOWNER_NULL = 0, assetsservice_asset_update_dto_ASSETOWNER_Business, assetsservice_asset_update_dto_ASSETOWNER_Organization, assetsservice_asset_update_dto_ASSETOWNER_Contact, assetsservice_asset_update_dto_ASSETOWNER_Supplier } assetsservice_asset_update_dto_ASSETOWNER_e;

char* asset_update_dto_asset_owner_ToString(assetsservice_asset_update_dto_ASSETOWNER_e asset_owner);

assetsservice_asset_update_dto_ASSETOWNER_e asset_update_dto_asset_owner_FromString(char* asset_owner);



typedef struct asset_update_dto_t {
    char *name; // string
    char *description; // string
    assetsservice_asset_update_dto_ASSETTYPE_e asset_type; //enum
    assetsservice_asset_update_dto_ASSETOWNER_e asset_owner; //enum
    int calculate_depreciation; //boolean
    int allow_monthly_depreciation; //boolean
    double opening_depreciation; //numeric
    char *purchase_date; //date time
    double purchase_price; //numeric
    char *currency_id; // string
    char *currency_code; // string
    char *item_id; // string
    char *asset_category_id; // string
    char *purchase_invoice_id; // string
    char *purchase_receipt_id; // string
    char *asset_location_id; // string
    char *contact_id; // string
    char *organization_department_id; // string

} asset_update_dto_t;

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
);

void asset_update_dto_free(asset_update_dto_t *asset_update_dto);

asset_update_dto_t *asset_update_dto_parseFromJSON(cJSON *asset_update_dtoJSON);

cJSON *asset_update_dto_convertToJSON(asset_update_dto_t *asset_update_dto);

#endif /* _asset_update_dto_H_ */

