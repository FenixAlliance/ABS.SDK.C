/*
 * gig_update_dto.h
 *
 * 
 */

#ifndef _gig_update_dto_H_
#define _gig_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct gig_update_dto_t gig_update_dto_t;




typedef struct gig_update_dto_t {
    int remote; //boolean
    char *type; // string
    char *title; // string
    char *description; // string
    char *expected_delivery_date; //date time
    char *employer_profile_id; // string
    double min_budget; //numeric
    double max_budget; //numeric
    char *currency_id; // string
    char *country_id; // string
    char *country_state_id; // string
    char *city_id; // string
    char *location; // string
    char *external_url; // string
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

} gig_update_dto_t;

gig_update_dto_t *gig_update_dto_create(
    int remote,
    char *type,
    char *title,
    char *description,
    char *expected_delivery_date,
    char *employer_profile_id,
    double min_budget,
    double max_budget,
    char *currency_id,
    char *country_id,
    char *country_state_id,
    char *city_id,
    char *location,
    char *external_url,
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

void gig_update_dto_free(gig_update_dto_t *gig_update_dto);

gig_update_dto_t *gig_update_dto_parseFromJSON(cJSON *gig_update_dtoJSON);

cJSON *gig_update_dto_convertToJSON(gig_update_dto_t *gig_update_dto);

#endif /* _gig_update_dto_H_ */

