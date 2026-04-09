#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "measurement_options.h"


char* measurement_options_default_weight_unit_ToString(contentservice_measurement_options_DEFAULTWEIGHTUNIT_e default_weight_unit) {
    char* default_weight_unitArray[] =  { "NULL", "Kg", "g", "lbs", "oz" };
    return default_weight_unitArray[default_weight_unit];
}

contentservice_measurement_options_DEFAULTWEIGHTUNIT_e measurement_options_default_weight_unit_FromString(char* default_weight_unit){
    int stringToReturn = 0;
    char *default_weight_unitArray[] =  { "NULL", "Kg", "g", "lbs", "oz" };
    size_t sizeofArray = sizeof(default_weight_unitArray) / sizeof(default_weight_unitArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(default_weight_unit, default_weight_unitArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* measurement_options_default_dimension_u_init_ToString(contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e default_dimension_u_init) {
    char* default_dimension_u_initArray[] =  { "NULL", "cms", "m", "mm", "inc", "yr" };
    return default_dimension_u_initArray[default_dimension_u_init];
}

contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e measurement_options_default_dimension_u_init_FromString(char* default_dimension_u_init){
    int stringToReturn = 0;
    char *default_dimension_u_initArray[] =  { "NULL", "cms", "m", "mm", "inc", "yr" };
    size_t sizeofArray = sizeof(default_dimension_u_initArray) / sizeof(default_dimension_u_initArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(default_dimension_u_init, default_dimension_u_initArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

measurement_options_t *measurement_options_create(
    contentservice_measurement_options_DEFAULTWEIGHTUNIT_e default_weight_unit,
    contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e default_dimension_u_init
    ) {
    measurement_options_t *measurement_options_local_var = malloc(sizeof(measurement_options_t));
    if (!measurement_options_local_var) {
        return NULL;
    }
    measurement_options_local_var->default_weight_unit = default_weight_unit;
    measurement_options_local_var->default_dimension_u_init = default_dimension_u_init;

    return measurement_options_local_var;
}


void measurement_options_free(measurement_options_t *measurement_options) {
    if(NULL == measurement_options){
        return ;
    }
    listEntry_t *listEntry;
    free(measurement_options);
}

cJSON *measurement_options_convertToJSON(measurement_options_t *measurement_options) {
    cJSON *item = cJSON_CreateObject();

    // measurement_options->default_weight_unit
    if(measurement_options->default_weight_unit != contentservice_measurement_options_DEFAULTWEIGHTUNIT_NULL) {
    if(cJSON_AddStringToObject(item, "defaultWeightUnit", default_weight_unitmeasurement_options_ToString(measurement_options->default_weight_unit)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // measurement_options->default_dimension_u_init
    if(measurement_options->default_dimension_u_init != contentservice_measurement_options_DEFAULTDIMENSIONUINIT_NULL) {
    if(cJSON_AddStringToObject(item, "defaultDimensionUInit", default_dimension_u_initmeasurement_options_ToString(measurement_options->default_dimension_u_init)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

measurement_options_t *measurement_options_parseFromJSON(cJSON *measurement_optionsJSON){

    measurement_options_t *measurement_options_local_var = NULL;

    // measurement_options->default_weight_unit
    cJSON *default_weight_unit = cJSON_GetObjectItemCaseSensitive(measurement_optionsJSON, "defaultWeightUnit");
    contentservice_measurement_options_DEFAULTWEIGHTUNIT_e default_weight_unitVariable;
    if (default_weight_unit) { 
    if(!cJSON_IsString(default_weight_unit))
    {
    goto end; //Enum
    }
    default_weight_unitVariable = measurement_options_default_weight_unit_FromString(default_weight_unit->valuestring);
    }

    // measurement_options->default_dimension_u_init
    cJSON *default_dimension_u_init = cJSON_GetObjectItemCaseSensitive(measurement_optionsJSON, "defaultDimensionUInit");
    contentservice_measurement_options_DEFAULTDIMENSIONUINIT_e default_dimension_u_initVariable;
    if (default_dimension_u_init) { 
    if(!cJSON_IsString(default_dimension_u_init))
    {
    goto end; //Enum
    }
    default_dimension_u_initVariable = measurement_options_default_dimension_u_init_FromString(default_dimension_u_init->valuestring);
    }


    measurement_options_local_var = measurement_options_create (
        default_weight_unit ? default_weight_unitVariable : contentservice_measurement_options_DEFAULTWEIGHTUNIT_NULL,
        default_dimension_u_init ? default_dimension_u_initVariable : contentservice_measurement_options_DEFAULTDIMENSIONUINIT_NULL
        );

    return measurement_options_local_var;
end:
    return NULL;

}
