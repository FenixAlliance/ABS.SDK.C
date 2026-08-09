/*
 * execution_context.h
 *
 * 
 */

#ifndef _execution_context_H_
#define _execution_context_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execution_context_t execution_context_t;

#include "auth_result.h"
#include "cart_dto.h"
#include "country_dto.h"
#include "crm_context.h"
#include "currency_dto.h"
#include "extended_invite_dto.h"
#include "extended_tenant_dto.h"
#include "extended_tenant_enrollment_dto.h"
#include "extended_user_dto.h"
#include "forex_rates_dto.h"
#include "money.h"
#include "suite_license_feature_dto.h"
#include "tenant_dto.h"
#include "tenant_enrollment_dto.h"
#include "web_portal_dto.h"



typedef struct execution_context_t {
    int is_authenticated; //boolean
    char *current_cart_id; // string
    char *current_user_id; // string
    char *current_tenant_id; // string
    char *current_portal_id; // string
    char *current_enrollment_id; // string
    char *currency_id; // string
    int page_size; //numeric
    char *date_format; // string
    char *currency_format; // string
    char *date_time_format; // string
    char *to_date_data_summaries; //date time
    char *from_date_data_summaries; //date time
    struct auth_result_t *authorization; //model
    struct extended_user_dto_t *user; //model
    struct extended_tenant_dto_t *current_tenant; //model
    struct tenant_enrollment_dto_t *current_enrollment; //model
    struct crm_context_t *selected_tenant_mappings; //model
    struct crm_context_t *portal_owner_mappings; //model
    struct crm_context_t *root_tenant_mappings; //model
    struct cart_dto_t *cart; //model
    struct currency_dto_t *currency; //model
    struct forex_rates_dto_t *forex_rates; //model
    struct money_t *exchange_rate; //model
    struct country_dto_t *country; //model
    struct tenant_dto_t *root_tenant; //model
    struct web_portal_dto_t *current_portal; //model
    list_t *tenants; //nonprimitive container
    list_t *enrollments; //nonprimitive container
    list_t *available_portals; //nonprimitive container
    list_t *invitations; //nonprimitive container
    list_t *granted_permissions; //primitive container
    list_t *accessible_features; //nonprimitive container
    char *culture_name; // string
    char *timezone_id; // string

} execution_context_t;

execution_context_t *execution_context_create(
    int is_authenticated,
    char *current_cart_id,
    char *current_user_id,
    char *current_tenant_id,
    char *current_portal_id,
    char *current_enrollment_id,
    char *currency_id,
    int page_size,
    char *date_format,
    char *currency_format,
    char *date_time_format,
    char *to_date_data_summaries,
    char *from_date_data_summaries,
    auth_result_t *authorization,
    extended_user_dto_t *user,
    extended_tenant_dto_t *current_tenant,
    tenant_enrollment_dto_t *current_enrollment,
    crm_context_t *selected_tenant_mappings,
    crm_context_t *portal_owner_mappings,
    crm_context_t *root_tenant_mappings,
    cart_dto_t *cart,
    currency_dto_t *currency,
    forex_rates_dto_t *forex_rates,
    money_t *exchange_rate,
    country_dto_t *country,
    tenant_dto_t *root_tenant,
    web_portal_dto_t *current_portal,
    list_t *tenants,
    list_t *enrollments,
    list_t *available_portals,
    list_t *invitations,
    list_t *granted_permissions,
    list_t *accessible_features,
    char *culture_name,
    char *timezone_id
);

void execution_context_free(execution_context_t *execution_context);

execution_context_t *execution_context_parseFromJSON(cJSON *execution_contextJSON);

cJSON *execution_context_convertToJSON(execution_context_t *execution_context);

#endif /* _execution_context_H_ */

