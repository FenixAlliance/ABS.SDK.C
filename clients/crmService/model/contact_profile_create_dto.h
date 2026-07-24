/*
 * contact_profile_create_dto.h
 *
 * 
 */

#ifndef _contact_profile_create_dto_H_
#define _contact_profile_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_profile_create_dto_t contact_profile_create_dto_t;

#include "contact_create_dto.h"



typedef struct contact_profile_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *contact_id; // string
    struct contact_create_dto_t *contact; //model
    char *about; // string
    char *avatar_url; // string
    char *data; // string
    char *data_label; // string
    char *data1; // string
    char *data1_label; // string
    char *data2; // string
    char *data2_label; // string
    char *data3; // string
    char *data3_label; // string
    char *data4; // string
    char *data4_label; // string
    char *data5; // string
    char *data5_label; // string
    char *data6; // string
    char *data6_label; // string
    char *data7; // string
    char *data7_label; // string
    char *data8; // string
    char *data8_label; // string
    char *data9; // string
    char *data9_label; // string

} contact_profile_create_dto_t;

contact_profile_create_dto_t *contact_profile_create_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *contact_id,
    contact_create_dto_t *contact,
    char *about,
    char *avatar_url,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label
);

void contact_profile_create_dto_free(contact_profile_create_dto_t *contact_profile_create_dto);

contact_profile_create_dto_t *contact_profile_create_dto_parseFromJSON(cJSON *contact_profile_create_dtoJSON);

cJSON *contact_profile_create_dto_convertToJSON(contact_profile_create_dto_t *contact_profile_create_dto);

#endif /* _contact_profile_create_dto_H_ */

