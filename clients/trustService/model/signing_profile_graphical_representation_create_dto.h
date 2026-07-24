/*
 * signing_profile_graphical_representation_create_dto.h
 *
 * 
 */

#ifndef _signing_profile_graphical_representation_create_dto_H_
#define _signing_profile_graphical_representation_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_profile_graphical_representation_create_dto_t signing_profile_graphical_representation_create_dto_t;


// Enum KIND for signing_profile_graphical_representation_create_dto

typedef enum  { trustservice_signing_profile_graphical_representation_create_dto_KIND_NULL = 0, trustservice_signing_profile_graphical_representation_create_dto_KIND_Drawn, trustservice_signing_profile_graphical_representation_create_dto_KIND_UploadedImage, trustservice_signing_profile_graphical_representation_create_dto_KIND_Typed, trustservice_signing_profile_graphical_representation_create_dto_KIND_Initials, trustservice_signing_profile_graphical_representation_create_dto_KIND_Seal, trustservice_signing_profile_graphical_representation_create_dto_KIND_Stamp } trustservice_signing_profile_graphical_representation_create_dto_KIND_e;

char* signing_profile_graphical_representation_create_dto_kind_ToString(trustservice_signing_profile_graphical_representation_create_dto_KIND_e kind);

trustservice_signing_profile_graphical_representation_create_dto_KIND_e signing_profile_graphical_representation_create_dto_kind_FromString(char* kind);



typedef struct signing_profile_graphical_representation_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *signing_profile_id; // string
    trustservice_signing_profile_graphical_representation_create_dto_KIND_e kind; //enum
    char *display_name; // string
    char *file_upload_id; // string
    char *sha256; // string
    char *vector_data_json; // string
    char *text_value; // string
    char *font_family; // string
    int is_default; //boolean
    int is_active; //boolean

} signing_profile_graphical_representation_create_dto_t;

signing_profile_graphical_representation_create_dto_t *signing_profile_graphical_representation_create_dto_create(
    char *id,
    char *timestamp,
    char *signing_profile_id,
    trustservice_signing_profile_graphical_representation_create_dto_KIND_e kind,
    char *display_name,
    char *file_upload_id,
    char *sha256,
    char *vector_data_json,
    char *text_value,
    char *font_family,
    int is_default,
    int is_active
);

void signing_profile_graphical_representation_create_dto_free(signing_profile_graphical_representation_create_dto_t *signing_profile_graphical_representation_create_dto);

signing_profile_graphical_representation_create_dto_t *signing_profile_graphical_representation_create_dto_parseFromJSON(cJSON *signing_profile_graphical_representation_create_dtoJSON);

cJSON *signing_profile_graphical_representation_create_dto_convertToJSON(signing_profile_graphical_representation_create_dto_t *signing_profile_graphical_representation_create_dto);

#endif /* _signing_profile_graphical_representation_create_dto_H_ */

