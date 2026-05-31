/*
 * marketing_lead_update_dto.h
 *
 * 
 */

#ifndef _marketing_lead_update_dto_H_
#define _marketing_lead_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketing_lead_update_dto_t marketing_lead_update_dto_t;




typedef struct marketing_lead_update_dto_t {
    char *first_name; // string
    char *last_name; // string
    char *email; // string
    char *phone; // string
    char *company; // string
    char *job_title; // string
    char *source; // string
    char *status; // string
    char *notes; // string
    int score; //numeric

} marketing_lead_update_dto_t;

marketing_lead_update_dto_t *marketing_lead_update_dto_create(
    char *first_name,
    char *last_name,
    char *email,
    char *phone,
    char *company,
    char *job_title,
    char *source,
    char *status,
    char *notes,
    int score
);

void marketing_lead_update_dto_free(marketing_lead_update_dto_t *marketing_lead_update_dto);

marketing_lead_update_dto_t *marketing_lead_update_dto_parseFromJSON(cJSON *marketing_lead_update_dtoJSON);

cJSON *marketing_lead_update_dto_convertToJSON(marketing_lead_update_dto_t *marketing_lead_update_dto);

#endif /* _marketing_lead_update_dto_H_ */

