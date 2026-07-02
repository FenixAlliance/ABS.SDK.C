/*
 * item_attachment_create_dto.h
 *
 * 
 */

#ifndef _item_attachment_create_dto_H_
#define _item_attachment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attachment_create_dto_t item_attachment_create_dto_t;


// Enum PUBLICACCESSTYPE for item_attachment_create_dto

typedef enum  { catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_NULL = 0, catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE__false, catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_Container, catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_Blob, catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_Unknown } catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_e;

char* item_attachment_create_dto_public_access_type_ToString(catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_e public_access_type);

catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_e item_attachment_create_dto_public_access_type_FromString(char* public_access_type);



typedef struct item_attachment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *notes; // string
    char *title; // string
    char *author; // string
    int is_folder; //boolean
    char *file_name; // string
    char *abstract; // string
    char *key_words; // string
    int valid_response; //boolean
    char *parent_file_upload_id; // string
    char *file_path; // string
    catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_e public_access_type; //enum
    char *item_id; // string

} item_attachment_create_dto_t;

item_attachment_create_dto_t *item_attachment_create_dto_create(
    char *id,
    char *timestamp,
    char *notes,
    char *title,
    char *author,
    int is_folder,
    char *file_name,
    char *abstract,
    char *key_words,
    int valid_response,
    char *parent_file_upload_id,
    char *file_path,
    catalogservice_item_attachment_create_dto_PUBLICACCESSTYPE_e public_access_type,
    char *item_id
);

void item_attachment_create_dto_free(item_attachment_create_dto_t *item_attachment_create_dto);

item_attachment_create_dto_t *item_attachment_create_dto_parseFromJSON(cJSON *item_attachment_create_dtoJSON);

cJSON *item_attachment_create_dto_convertToJSON(item_attachment_create_dto_t *item_attachment_create_dto);

#endif /* _item_attachment_create_dto_H_ */

