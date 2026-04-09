/*
 * measurement_options.h
 *
 * 
 */

#ifndef _measurement_options_H_
#define _measurement_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct measurement_options_t measurement_options_t;


// Enum DEFAULTWEIGHTUNIT for measurement_options

typedef enum  { contentservice_measurement_options_DEFAULTWEIGHTUNIT_NULL = 0, contentservice_measurement_options_DEFAULTWEIGHTUNIT_Kg, contentservice_measurement_options_DEFAULTWEIGHTUNIT_g, contentservice_measurement_options_DEFAULTWEIGHTUNIT_lbs, contentservice_measurement_options_DEFAULTWEIGHTUNIT_oz } contentservice_measurement_options_DEFAULTWEIGHTUNIT_e;

char* measurement_options_default_weight_unit_ToString(contentservice_measurement_options_DEFAULTWEIGHTUNIT_e default_weight_unit);

contentservice_measurement_options_DEFAULTWEIGHTUNIT_e measurement_options_default_weight_unit_FromString(char* default_weight_unit);

// Enum DEFAULTDIMENSIONUINIT for measurement_options

typedef enum  { contentservice_measurement_options_DEFAULTDIMENSIONUINIT_NULL = 0, contentservice_measurement_options_DEFAULTDIMENSIONUINIT_cms, contentservice_measurement_options_DEFAULTDIMENSIONUINIT_m, contentservice_measurement_options_DEFAULTDIMENSIONUINIT_mm, contentservice_measurement_options_DEFAULTDIMENSIONUINIT_inc, contentservice_measurement_options_DEFAULTDIMENSIONUINIT_yr } contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e;

char* measurement_options_default_dimension_u_init_ToString(contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e default_dimension_u_init);

contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e measurement_options_default_dimension_u_init_FromString(char* default_dimension_u_init);



typedef struct measurement_options_t {
    contentservice_measurement_options_DEFAULTWEIGHTUNIT_e default_weight_unit; //enum
    contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e default_dimension_u_init; //enum

} measurement_options_t;

measurement_options_t *measurement_options_create(
    contentservice_measurement_options_DEFAULTWEIGHTUNIT_e default_weight_unit,
    contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e default_dimension_u_init
);

void measurement_options_free(measurement_options_t *measurement_options);

measurement_options_t *measurement_options_parseFromJSON(cJSON *measurement_optionsJSON);

cJSON *measurement_options_convertToJSON(measurement_options_t *measurement_options);

#endif /* _measurement_options_H_ */

