/*
 * suite_module.h
 *
 * 
 */

#ifndef _suite_module_H_
#define _suite_module_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct suite_module_t suite_module_t;

#include "i_open_api_definition_spec.h"

// Enum TYPE for suite_module

typedef enum  { systemservice_suite_module_TYPE_NULL = 0, systemservice_suite_module_TYPE_Module, systemservice_suite_module_TYPE_Integration, systemservice_suite_module_TYPE_StudioModule, systemservice_suite_module_TYPE_StudioIntegration, systemservice_suite_module_TYPE_WasmModule, systemservice_suite_module_TYPE_WasmIntegration } systemservice_suite_module_TYPE_e;

char* suite_module_type_ToString(systemservice_suite_module_TYPE_e type);

systemservice_suite_module_TYPE_e suite_module_type_FromString(char* type);

// Enum CATEGORY for suite_module

typedef enum  { systemservice_suite_module_CATEGORY_NULL = 0, systemservice_suite_module_CATEGORY_Other, systemservice_suite_module_CATEGORY_FinanceAndAccounting, systemservice_suite_module_CATEGORY_SalesAndCommerce, systemservice_suite_module_CATEGORY_MarketingAndEngagement, systemservice_suite_module_CATEGORY_CustomerRelations, systemservice_suite_module_CATEGORY_OperationsAndSupplyChain, systemservice_suite_module_CATEGORY_ProjectsAndProductivity, systemservice_suite_module_CATEGORY_PeopleAndWorkforce, systemservice_suite_module_CATEGORY_LearningAndEducation, systemservice_suite_module_CATEGORY_ContentAndWeb, systemservice_suite_module_CATEGORY_DataAndAnalytics, systemservice_suite_module_CATEGORY_ArtificialIntelligence, systemservice_suite_module_CATEGORY_SecurityAndIdentity, systemservice_suite_module_CATEGORY_TrustAndCompliance, systemservice_suite_module_CATEGORY_Communication, systemservice_suite_module_CATEGORY_DeveloperAndPlatform, systemservice_suite_module_CATEGORY_IndustrySolutions } systemservice_suite_module_CATEGORY_e;

char* suite_module_category_ToString(systemservice_suite_module_CATEGORY_e category);

systemservice_suite_module_CATEGORY_e suite_module_category_FromString(char* category);



typedef struct suite_module_t {
    int enable; //boolean
    int marked_for_deletion; //boolean
    int active; //boolean
    int order; //numeric
    char *id; // string
    char *name; // string
    char *full_name; // string
    char *description; // string
    systemservice_suite_module_TYPE_e type; //enum
    systemservice_suite_module_CATEGORY_e category; //enum
    char *configuration; // string
    char *author; // string
    char *author_url; // string
    char *license; // string
    int require_license_acceptance; //boolean
    char *repository; // string
    char *icon; // string
    char *image; // string
    char *nu_spec_path; // string
    char *manifest; // string
    char *logo; // string
    char *website; // string
    char *documentation; // string
    char *url; // string
    char *path; // string
    struct i_open_api_definition_spec_t *open_api_definition_spec; //model
    list_t *swagger_specs; //nonprimitive container
    list_t *assembly_paths; //primitive container
    list_t *required_permissions; //primitive container
    char *version; // string

} suite_module_t;

suite_module_t *suite_module_create(
    int enable,
    int marked_for_deletion,
    int active,
    int order,
    char *id,
    char *name,
    char *full_name,
    char *description,
    systemservice_suite_module_TYPE_e type,
    systemservice_suite_module_CATEGORY_e category,
    char *configuration,
    char *author,
    char *author_url,
    char *license,
    int require_license_acceptance,
    char *repository,
    char *icon,
    char *image,
    char *nu_spec_path,
    char *manifest,
    char *logo,
    char *website,
    char *documentation,
    char *url,
    char *path,
    i_open_api_definition_spec_t *open_api_definition_spec,
    list_t *swagger_specs,
    list_t *assembly_paths,
    list_t *required_permissions,
    char *version
);

void suite_module_free(suite_module_t *suite_module);

suite_module_t *suite_module_parseFromJSON(cJSON *suite_moduleJSON);

cJSON *suite_module_convertToJSON(suite_module_t *suite_module);

#endif /* _suite_module_H_ */

