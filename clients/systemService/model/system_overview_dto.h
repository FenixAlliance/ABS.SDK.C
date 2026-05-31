/*
 * system_overview_dto.h
 *
 * 
 */

#ifndef _system_overview_dto_H_
#define _system_overview_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct system_overview_dto_t system_overview_dto_t;




typedef struct system_overview_dto_t {
    char *uptime; // string
    char *os_description; // string
    char *machine_name; // string
    char *process_name; // string
    char *product_version; // string
    long private_memory_mb; //numeric
    long paged_memory_mb; //numeric
    long memory_working_set_mb; //numeric
    int is_debug_mode; //boolean
    int is_dev_mode; //boolean
    char *framework_description; // string
    char *runtime_identifier; // string
    char *os_architecture; // string
    char *os_platform; // string
    char *process_architecture; // string
    int users_count; //numeric
    int orders_count; //numeric
    int contacts_count; //numeric

} system_overview_dto_t;

system_overview_dto_t *system_overview_dto_create(
    char *uptime,
    char *os_description,
    char *machine_name,
    char *process_name,
    char *product_version,
    long private_memory_mb,
    long paged_memory_mb,
    long memory_working_set_mb,
    int is_debug_mode,
    int is_dev_mode,
    char *framework_description,
    char *runtime_identifier,
    char *os_architecture,
    char *os_platform,
    char *process_architecture,
    int users_count,
    int orders_count,
    int contacts_count
);

void system_overview_dto_free(system_overview_dto_t *system_overview_dto);

system_overview_dto_t *system_overview_dto_parseFromJSON(cJSON *system_overview_dtoJSON);

cJSON *system_overview_dto_convertToJSON(system_overview_dto_t *system_overview_dto);

#endif /* _system_overview_dto_H_ */

