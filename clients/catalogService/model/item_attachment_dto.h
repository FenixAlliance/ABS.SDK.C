/*
 * item_attachment_dto.h
 *
 * 
 */

#ifndef _item_attachment_dto_H_
#define _item_attachment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attachment_dto_t item_attachment_dto_t;


// Enum SCANSTATUS for item_attachment_dto

typedef enum  { catalogservice_item_attachment_dto_SCANSTATUS_NULL = 0, catalogservice_item_attachment_dto_SCANSTATUS_NotRequired, catalogservice_item_attachment_dto_SCANSTATUS_Pending, catalogservice_item_attachment_dto_SCANSTATUS_Clean, catalogservice_item_attachment_dto_SCANSTATUS_Infected, catalogservice_item_attachment_dto_SCANSTATUS_Failed, catalogservice_item_attachment_dto_SCANSTATUS_Quarantined } catalogservice_item_attachment_dto_SCANSTATUS_e;

char* item_attachment_dto_scan_status_ToString(catalogservice_item_attachment_dto_SCANSTATUS_e scan_status);

catalogservice_item_attachment_dto_SCANSTATUS_e item_attachment_dto_scan_status_FromString(char* scan_status);

// Enum THUMBNAILSTATUS for item_attachment_dto

typedef enum  { catalogservice_item_attachment_dto_THUMBNAILSTATUS_NULL = 0, catalogservice_item_attachment_dto_THUMBNAILSTATUS_NotRequired, catalogservice_item_attachment_dto_THUMBNAILSTATUS_Pending, catalogservice_item_attachment_dto_THUMBNAILSTATUS_Ready, catalogservice_item_attachment_dto_THUMBNAILSTATUS_Failed, catalogservice_item_attachment_dto_THUMBNAILSTATUS_Unsupported } catalogservice_item_attachment_dto_THUMBNAILSTATUS_e;

char* item_attachment_dto_thumbnail_status_ToString(catalogservice_item_attachment_dto_THUMBNAILSTATUS_e thumbnail_status);

catalogservice_item_attachment_dto_THUMBNAILSTATUS_e item_attachment_dto_thumbnail_status_FromString(char* thumbnail_status);

// Enum PUBLICACCESSTYPE for item_attachment_dto

typedef enum  { catalogservice_item_attachment_dto_PUBLICACCESSTYPE_NULL = 0, catalogservice_item_attachment_dto_PUBLICACCESSTYPE__false, catalogservice_item_attachment_dto_PUBLICACCESSTYPE_Container, catalogservice_item_attachment_dto_PUBLICACCESSTYPE_Blob, catalogservice_item_attachment_dto_PUBLICACCESSTYPE_Unknown } catalogservice_item_attachment_dto_PUBLICACCESSTYPE_e;

char* item_attachment_dto_public_access_type_ToString(catalogservice_item_attachment_dto_PUBLICACCESSTYPE_e public_access_type);

catalogservice_item_attachment_dto_PUBLICACCESSTYPE_e item_attachment_dto_public_access_type_FromString(char* public_access_type);



typedef struct item_attachment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *notes; // string
    char *title; // string
    char *author; // string
    int is_folder; //boolean
    char *hash; // string
    char *file_url; // string
    char *file_path; // string
    char *storage_key; // string
    char *storage_provider_key; // string
    char *file_name; // string
    char *abstract; // string
    char *key_words; // string
    char *metadata; // string
    long file_length; //numeric
    char *content_type; // string
    char *parent_file_id; // string
    int valid_response; //boolean
    char *user_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *social_profile_id; // string
    char *folder_path; // string
    catalogservice_item_attachment_dto_SCANSTATUS_e scan_status; //enum
    catalogservice_item_attachment_dto_THUMBNAILSTATUS_e thumbnail_status; //enum
    int has_thumbnail; //boolean
    char *thumbnail_storage_key; // string
    char *thumbnail_content_type; // string
    int thumbnail_width; //numeric
    int thumbnail_height; //numeric
    catalogservice_item_attachment_dto_PUBLICACCESSTYPE_e public_access_type; //enum
    char *item_id; // string

} item_attachment_dto_t;

item_attachment_dto_t *item_attachment_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *hash,
    char *file_url,
    char *file_path,
    char *storage_key,
    char *storage_provider_key,
    char *file_name,
    char *abstract,
    char *key_words,
    char *metadata,
    long file_length,
    char *content_type,
    char *parent_file_id,
    int valid_response,
    char *user_id,
    char *tenant_id,
    char *enrollment_id,
    char *social_profile_id,
    char *folder_path,
    catalogservice_item_attachment_dto_SCANSTATUS_e scan_status,
    catalogservice_item_attachment_dto_THUMBNAILSTATUS_e thumbnail_status,
    int has_thumbnail,
    char *thumbnail_storage_key,
    char *thumbnail_content_type,
    int thumbnail_width,
    int thumbnail_height,
    catalogservice_item_attachment_dto_PUBLICACCESSTYPE_e public_access_type,
    char *item_id
);

void item_attachment_dto_free(item_attachment_dto_t *item_attachment_dto);

item_attachment_dto_t *item_attachment_dto_parseFromJSON(cJSON *item_attachment_dtoJSON);

cJSON *item_attachment_dto_convertToJSON(item_attachment_dto_t *item_attachment_dto);

#endif /* _item_attachment_dto_H_ */

