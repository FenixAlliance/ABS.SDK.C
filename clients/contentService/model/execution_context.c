#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execution_context.h"



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
    ) {
    execution_context_t *execution_context_local_var = malloc(sizeof(execution_context_t));
    if (!execution_context_local_var) {
        return NULL;
    }
    execution_context_local_var->is_authenticated = is_authenticated;
    execution_context_local_var->current_cart_id = current_cart_id;
    execution_context_local_var->current_user_id = current_user_id;
    execution_context_local_var->current_tenant_id = current_tenant_id;
    execution_context_local_var->current_portal_id = current_portal_id;
    execution_context_local_var->current_enrollment_id = current_enrollment_id;
    execution_context_local_var->currency_id = currency_id;
    execution_context_local_var->page_size = page_size;
    execution_context_local_var->date_format = date_format;
    execution_context_local_var->currency_format = currency_format;
    execution_context_local_var->date_time_format = date_time_format;
    execution_context_local_var->to_date_data_summaries = to_date_data_summaries;
    execution_context_local_var->from_date_data_summaries = from_date_data_summaries;
    execution_context_local_var->authorization = authorization;
    execution_context_local_var->user = user;
    execution_context_local_var->current_tenant = current_tenant;
    execution_context_local_var->current_enrollment = current_enrollment;
    execution_context_local_var->selected_tenant_mappings = selected_tenant_mappings;
    execution_context_local_var->portal_owner_mappings = portal_owner_mappings;
    execution_context_local_var->root_tenant_mappings = root_tenant_mappings;
    execution_context_local_var->cart = cart;
    execution_context_local_var->currency = currency;
    execution_context_local_var->forex_rates = forex_rates;
    execution_context_local_var->exchange_rate = exchange_rate;
    execution_context_local_var->country = country;
    execution_context_local_var->root_tenant = root_tenant;
    execution_context_local_var->current_portal = current_portal;
    execution_context_local_var->tenants = tenants;
    execution_context_local_var->enrollments = enrollments;
    execution_context_local_var->available_portals = available_portals;
    execution_context_local_var->invitations = invitations;
    execution_context_local_var->granted_permissions = granted_permissions;
    execution_context_local_var->accessible_features = accessible_features;
    execution_context_local_var->culture_name = culture_name;
    execution_context_local_var->timezone_id = timezone_id;

    return execution_context_local_var;
}


void execution_context_free(execution_context_t *execution_context) {
    if(NULL == execution_context){
        return ;
    }
    listEntry_t *listEntry;
    if (execution_context->current_cart_id) {
        free(execution_context->current_cart_id);
        execution_context->current_cart_id = NULL;
    }
    if (execution_context->current_user_id) {
        free(execution_context->current_user_id);
        execution_context->current_user_id = NULL;
    }
    if (execution_context->current_tenant_id) {
        free(execution_context->current_tenant_id);
        execution_context->current_tenant_id = NULL;
    }
    if (execution_context->current_portal_id) {
        free(execution_context->current_portal_id);
        execution_context->current_portal_id = NULL;
    }
    if (execution_context->current_enrollment_id) {
        free(execution_context->current_enrollment_id);
        execution_context->current_enrollment_id = NULL;
    }
    if (execution_context->currency_id) {
        free(execution_context->currency_id);
        execution_context->currency_id = NULL;
    }
    if (execution_context->date_format) {
        free(execution_context->date_format);
        execution_context->date_format = NULL;
    }
    if (execution_context->currency_format) {
        free(execution_context->currency_format);
        execution_context->currency_format = NULL;
    }
    if (execution_context->date_time_format) {
        free(execution_context->date_time_format);
        execution_context->date_time_format = NULL;
    }
    if (execution_context->to_date_data_summaries) {
        free(execution_context->to_date_data_summaries);
        execution_context->to_date_data_summaries = NULL;
    }
    if (execution_context->from_date_data_summaries) {
        free(execution_context->from_date_data_summaries);
        execution_context->from_date_data_summaries = NULL;
    }
    if (execution_context->authorization) {
        auth_result_free(execution_context->authorization);
        execution_context->authorization = NULL;
    }
    if (execution_context->user) {
        extended_user_dto_free(execution_context->user);
        execution_context->user = NULL;
    }
    if (execution_context->current_tenant) {
        extended_tenant_dto_free(execution_context->current_tenant);
        execution_context->current_tenant = NULL;
    }
    if (execution_context->current_enrollment) {
        tenant_enrollment_dto_free(execution_context->current_enrollment);
        execution_context->current_enrollment = NULL;
    }
    if (execution_context->selected_tenant_mappings) {
        crm_context_free(execution_context->selected_tenant_mappings);
        execution_context->selected_tenant_mappings = NULL;
    }
    if (execution_context->portal_owner_mappings) {
        crm_context_free(execution_context->portal_owner_mappings);
        execution_context->portal_owner_mappings = NULL;
    }
    if (execution_context->root_tenant_mappings) {
        crm_context_free(execution_context->root_tenant_mappings);
        execution_context->root_tenant_mappings = NULL;
    }
    if (execution_context->cart) {
        cart_dto_free(execution_context->cart);
        execution_context->cart = NULL;
    }
    if (execution_context->currency) {
        currency_dto_free(execution_context->currency);
        execution_context->currency = NULL;
    }
    if (execution_context->forex_rates) {
        forex_rates_dto_free(execution_context->forex_rates);
        execution_context->forex_rates = NULL;
    }
    if (execution_context->exchange_rate) {
        money_free(execution_context->exchange_rate);
        execution_context->exchange_rate = NULL;
    }
    if (execution_context->country) {
        country_dto_free(execution_context->country);
        execution_context->country = NULL;
    }
    if (execution_context->root_tenant) {
        tenant_dto_free(execution_context->root_tenant);
        execution_context->root_tenant = NULL;
    }
    if (execution_context->current_portal) {
        web_portal_dto_free(execution_context->current_portal);
        execution_context->current_portal = NULL;
    }
    if (execution_context->tenants) {
        list_ForEach(listEntry, execution_context->tenants) {
            extended_tenant_dto_free(listEntry->data);
        }
        list_freeList(execution_context->tenants);
        execution_context->tenants = NULL;
    }
    if (execution_context->enrollments) {
        list_ForEach(listEntry, execution_context->enrollments) {
            extended_tenant_enrollment_dto_free(listEntry->data);
        }
        list_freeList(execution_context->enrollments);
        execution_context->enrollments = NULL;
    }
    if (execution_context->available_portals) {
        list_ForEach(listEntry, execution_context->available_portals) {
            web_portal_dto_free(listEntry->data);
        }
        list_freeList(execution_context->available_portals);
        execution_context->available_portals = NULL;
    }
    if (execution_context->invitations) {
        list_ForEach(listEntry, execution_context->invitations) {
            extended_invite_dto_free(listEntry->data);
        }
        list_freeList(execution_context->invitations);
        execution_context->invitations = NULL;
    }
    if (execution_context->granted_permissions) {
        list_ForEach(listEntry, execution_context->granted_permissions) {
            free(listEntry->data);
        }
        list_freeList(execution_context->granted_permissions);
        execution_context->granted_permissions = NULL;
    }
    if (execution_context->accessible_features) {
        list_ForEach(listEntry, execution_context->accessible_features) {
            suite_license_feature_dto_free(listEntry->data);
        }
        list_freeList(execution_context->accessible_features);
        execution_context->accessible_features = NULL;
    }
    if (execution_context->culture_name) {
        free(execution_context->culture_name);
        execution_context->culture_name = NULL;
    }
    if (execution_context->timezone_id) {
        free(execution_context->timezone_id);
        execution_context->timezone_id = NULL;
    }
    free(execution_context);
}

cJSON *execution_context_convertToJSON(execution_context_t *execution_context) {
    cJSON *item = cJSON_CreateObject();

    // execution_context->is_authenticated
    if(execution_context->is_authenticated) {
    if(cJSON_AddBoolToObject(item, "isAuthenticated", execution_context->is_authenticated) == NULL) {
    goto fail; //Bool
    }
    }


    // execution_context->current_cart_id
    if(execution_context->current_cart_id) {
    if(cJSON_AddStringToObject(item, "currentCartId", execution_context->current_cart_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->current_user_id
    if(execution_context->current_user_id) {
    if(cJSON_AddStringToObject(item, "currentUserId", execution_context->current_user_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->current_tenant_id
    if(execution_context->current_tenant_id) {
    if(cJSON_AddStringToObject(item, "currentTenantId", execution_context->current_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->current_portal_id
    if(execution_context->current_portal_id) {
    if(cJSON_AddStringToObject(item, "currentPortalId", execution_context->current_portal_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->current_enrollment_id
    if(execution_context->current_enrollment_id) {
    if(cJSON_AddStringToObject(item, "currentEnrollmentId", execution_context->current_enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->currency_id
    if(execution_context->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", execution_context->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->page_size
    if(execution_context->page_size) {
    if(cJSON_AddNumberToObject(item, "pageSize", execution_context->page_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // execution_context->date_format
    if(execution_context->date_format) {
    if(cJSON_AddStringToObject(item, "dateFormat", execution_context->date_format) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->currency_format
    if(execution_context->currency_format) {
    if(cJSON_AddStringToObject(item, "currencyFormat", execution_context->currency_format) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->date_time_format
    if(execution_context->date_time_format) {
    if(cJSON_AddStringToObject(item, "dateTimeFormat", execution_context->date_time_format) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->to_date_data_summaries
    if(execution_context->to_date_data_summaries) {
    if(cJSON_AddStringToObject(item, "toDateDataSummaries", execution_context->to_date_data_summaries) == NULL) {
    goto fail; //Date-Time
    }
    }


    // execution_context->from_date_data_summaries
    if(execution_context->from_date_data_summaries) {
    if(cJSON_AddStringToObject(item, "fromDateDataSummaries", execution_context->from_date_data_summaries) == NULL) {
    goto fail; //Date-Time
    }
    }


    // execution_context->authorization
    if(execution_context->authorization) {
    cJSON *authorization_local_JSON = auth_result_convertToJSON(execution_context->authorization);
    if(authorization_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "authorization", authorization_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->user
    if(execution_context->user) {
    cJSON *user_local_JSON = extended_user_dto_convertToJSON(execution_context->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->current_tenant
    if(execution_context->current_tenant) {
    cJSON *current_tenant_local_JSON = extended_tenant_dto_convertToJSON(execution_context->current_tenant);
    if(current_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currentTenant", current_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->current_enrollment
    if(execution_context->current_enrollment) {
    cJSON *current_enrollment_local_JSON = tenant_enrollment_dto_convertToJSON(execution_context->current_enrollment);
    if(current_enrollment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currentEnrollment", current_enrollment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->selected_tenant_mappings
    if(execution_context->selected_tenant_mappings) {
    cJSON *selected_tenant_mappings_local_JSON = crm_context_convertToJSON(execution_context->selected_tenant_mappings);
    if(selected_tenant_mappings_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selectedTenantMappings", selected_tenant_mappings_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->portal_owner_mappings
    if(execution_context->portal_owner_mappings) {
    cJSON *portal_owner_mappings_local_JSON = crm_context_convertToJSON(execution_context->portal_owner_mappings);
    if(portal_owner_mappings_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portalOwnerMappings", portal_owner_mappings_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->root_tenant_mappings
    if(execution_context->root_tenant_mappings) {
    cJSON *root_tenant_mappings_local_JSON = crm_context_convertToJSON(execution_context->root_tenant_mappings);
    if(root_tenant_mappings_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rootTenantMappings", root_tenant_mappings_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->cart
    if(execution_context->cart) {
    cJSON *cart_local_JSON = cart_dto_convertToJSON(execution_context->cart);
    if(cart_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cart", cart_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->currency
    if(execution_context->currency) {
    cJSON *currency_local_JSON = currency_dto_convertToJSON(execution_context->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->forex_rates
    if(execution_context->forex_rates) {
    cJSON *forex_rates_local_JSON = forex_rates_dto_convertToJSON(execution_context->forex_rates);
    if(forex_rates_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "forexRates", forex_rates_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->exchange_rate
    if(execution_context->exchange_rate) {
    cJSON *exchange_rate_local_JSON = money_convertToJSON(execution_context->exchange_rate);
    if(exchange_rate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exchangeRate", exchange_rate_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->country
    if(execution_context->country) {
    cJSON *country_local_JSON = country_dto_convertToJSON(execution_context->country);
    if(country_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "country", country_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->root_tenant
    if(execution_context->root_tenant) {
    cJSON *root_tenant_local_JSON = tenant_dto_convertToJSON(execution_context->root_tenant);
    if(root_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rootTenant", root_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->current_portal
    if(execution_context->current_portal) {
    cJSON *current_portal_local_JSON = web_portal_dto_convertToJSON(execution_context->current_portal);
    if(current_portal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currentPortal", current_portal_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_context->tenants
    if(execution_context->tenants) {
    cJSON *tenants = cJSON_AddArrayToObject(item, "tenants");
    if(tenants == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tenantsListEntry;
    if (execution_context->tenants) {
    list_ForEach(tenantsListEntry, execution_context->tenants) {
    cJSON *itemLocal = extended_tenant_dto_convertToJSON(tenantsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tenants, itemLocal);
    }
    }
    }


    // execution_context->enrollments
    if(execution_context->enrollments) {
    cJSON *enrollments = cJSON_AddArrayToObject(item, "enrollments");
    if(enrollments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *enrollmentsListEntry;
    if (execution_context->enrollments) {
    list_ForEach(enrollmentsListEntry, execution_context->enrollments) {
    cJSON *itemLocal = extended_tenant_enrollment_dto_convertToJSON(enrollmentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(enrollments, itemLocal);
    }
    }
    }


    // execution_context->available_portals
    if(execution_context->available_portals) {
    cJSON *available_portals = cJSON_AddArrayToObject(item, "availablePortals");
    if(available_portals == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *available_portalsListEntry;
    if (execution_context->available_portals) {
    list_ForEach(available_portalsListEntry, execution_context->available_portals) {
    cJSON *itemLocal = web_portal_dto_convertToJSON(available_portalsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(available_portals, itemLocal);
    }
    }
    }


    // execution_context->invitations
    if(execution_context->invitations) {
    cJSON *invitations = cJSON_AddArrayToObject(item, "invitations");
    if(invitations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *invitationsListEntry;
    if (execution_context->invitations) {
    list_ForEach(invitationsListEntry, execution_context->invitations) {
    cJSON *itemLocal = extended_invite_dto_convertToJSON(invitationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(invitations, itemLocal);
    }
    }
    }


    // execution_context->granted_permissions
    if(execution_context->granted_permissions) {
    cJSON *granted_permissions = cJSON_AddArrayToObject(item, "grantedPermissions");
    if(granted_permissions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *granted_permissionsListEntry;
    list_ForEach(granted_permissionsListEntry, execution_context->granted_permissions) {
    if(cJSON_AddStringToObject(granted_permissions, "", (char*)granted_permissionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // execution_context->accessible_features
    if(execution_context->accessible_features) {
    cJSON *accessible_features = cJSON_AddArrayToObject(item, "accessibleFeatures");
    if(accessible_features == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *accessible_featuresListEntry;
    if (execution_context->accessible_features) {
    list_ForEach(accessible_featuresListEntry, execution_context->accessible_features) {
    cJSON *itemLocal = suite_license_feature_dto_convertToJSON(accessible_featuresListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(accessible_features, itemLocal);
    }
    }
    }


    // execution_context->culture_name
    if(execution_context->culture_name) {
    if(cJSON_AddStringToObject(item, "cultureName", execution_context->culture_name) == NULL) {
    goto fail; //String
    }
    }


    // execution_context->timezone_id
    if(execution_context->timezone_id) {
    if(cJSON_AddStringToObject(item, "timezoneId", execution_context->timezone_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

execution_context_t *execution_context_parseFromJSON(cJSON *execution_contextJSON){

    execution_context_t *execution_context_local_var = NULL;

    // define the local variable for execution_context->authorization
    auth_result_t *authorization_local_nonprim = NULL;

    // define the local variable for execution_context->user
    extended_user_dto_t *user_local_nonprim = NULL;

    // define the local variable for execution_context->current_tenant
    extended_tenant_dto_t *current_tenant_local_nonprim = NULL;

    // define the local variable for execution_context->current_enrollment
    tenant_enrollment_dto_t *current_enrollment_local_nonprim = NULL;

    // define the local variable for execution_context->selected_tenant_mappings
    crm_context_t *selected_tenant_mappings_local_nonprim = NULL;

    // define the local variable for execution_context->portal_owner_mappings
    crm_context_t *portal_owner_mappings_local_nonprim = NULL;

    // define the local variable for execution_context->root_tenant_mappings
    crm_context_t *root_tenant_mappings_local_nonprim = NULL;

    // define the local variable for execution_context->cart
    cart_dto_t *cart_local_nonprim = NULL;

    // define the local variable for execution_context->currency
    currency_dto_t *currency_local_nonprim = NULL;

    // define the local variable for execution_context->forex_rates
    forex_rates_dto_t *forex_rates_local_nonprim = NULL;

    // define the local variable for execution_context->exchange_rate
    money_t *exchange_rate_local_nonprim = NULL;

    // define the local variable for execution_context->country
    country_dto_t *country_local_nonprim = NULL;

    // define the local variable for execution_context->root_tenant
    tenant_dto_t *root_tenant_local_nonprim = NULL;

    // define the local variable for execution_context->current_portal
    web_portal_dto_t *current_portal_local_nonprim = NULL;

    // define the local list for execution_context->tenants
    list_t *tenantsList = NULL;

    // define the local list for execution_context->enrollments
    list_t *enrollmentsList = NULL;

    // define the local list for execution_context->available_portals
    list_t *available_portalsList = NULL;

    // define the local list for execution_context->invitations
    list_t *invitationsList = NULL;

    // define the local list for execution_context->granted_permissions
    list_t *granted_permissionsList = NULL;

    // define the local list for execution_context->accessible_features
    list_t *accessible_featuresList = NULL;

    // execution_context->is_authenticated
    cJSON *is_authenticated = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "isAuthenticated");
    if (is_authenticated) { 
    if(!cJSON_IsBool(is_authenticated))
    {
    goto end; //Bool
    }
    }

    // execution_context->current_cart_id
    cJSON *current_cart_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentCartId");
    if (current_cart_id) { 
    if(!cJSON_IsString(current_cart_id) && !cJSON_IsNull(current_cart_id))
    {
    goto end; //String
    }
    }

    // execution_context->current_user_id
    cJSON *current_user_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentUserId");
    if (current_user_id) { 
    if(!cJSON_IsString(current_user_id) && !cJSON_IsNull(current_user_id))
    {
    goto end; //String
    }
    }

    // execution_context->current_tenant_id
    cJSON *current_tenant_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentTenantId");
    if (current_tenant_id) { 
    if(!cJSON_IsString(current_tenant_id) && !cJSON_IsNull(current_tenant_id))
    {
    goto end; //String
    }
    }

    // execution_context->current_portal_id
    cJSON *current_portal_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentPortalId");
    if (current_portal_id) { 
    if(!cJSON_IsString(current_portal_id) && !cJSON_IsNull(current_portal_id))
    {
    goto end; //String
    }
    }

    // execution_context->current_enrollment_id
    cJSON *current_enrollment_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentEnrollmentId");
    if (current_enrollment_id) { 
    if(!cJSON_IsString(current_enrollment_id) && !cJSON_IsNull(current_enrollment_id))
    {
    goto end; //String
    }
    }

    // execution_context->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // execution_context->page_size
    cJSON *page_size = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "pageSize");
    if (page_size) { 
    if(!cJSON_IsNumber(page_size))
    {
    goto end; //Numeric
    }
    }

    // execution_context->date_format
    cJSON *date_format = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "dateFormat");
    if (date_format) { 
    if(!cJSON_IsString(date_format) && !cJSON_IsNull(date_format))
    {
    goto end; //String
    }
    }

    // execution_context->currency_format
    cJSON *currency_format = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currencyFormat");
    if (currency_format) { 
    if(!cJSON_IsString(currency_format) && !cJSON_IsNull(currency_format))
    {
    goto end; //String
    }
    }

    // execution_context->date_time_format
    cJSON *date_time_format = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "dateTimeFormat");
    if (date_time_format) { 
    if(!cJSON_IsString(date_time_format) && !cJSON_IsNull(date_time_format))
    {
    goto end; //String
    }
    }

    // execution_context->to_date_data_summaries
    cJSON *to_date_data_summaries = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "toDateDataSummaries");
    if (to_date_data_summaries) { 
    if(!cJSON_IsString(to_date_data_summaries) && !cJSON_IsNull(to_date_data_summaries))
    {
    goto end; //DateTime
    }
    }

    // execution_context->from_date_data_summaries
    cJSON *from_date_data_summaries = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "fromDateDataSummaries");
    if (from_date_data_summaries) { 
    if(!cJSON_IsString(from_date_data_summaries) && !cJSON_IsNull(from_date_data_summaries))
    {
    goto end; //DateTime
    }
    }

    // execution_context->authorization
    cJSON *authorization = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "authorization");
    if (authorization) { 
    authorization_local_nonprim = auth_result_parseFromJSON(authorization); //nonprimitive
    }

    // execution_context->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "user");
    if (user) { 
    user_local_nonprim = extended_user_dto_parseFromJSON(user); //nonprimitive
    }

    // execution_context->current_tenant
    cJSON *current_tenant = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentTenant");
    if (current_tenant) { 
    current_tenant_local_nonprim = extended_tenant_dto_parseFromJSON(current_tenant); //nonprimitive
    }

    // execution_context->current_enrollment
    cJSON *current_enrollment = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentEnrollment");
    if (current_enrollment) { 
    current_enrollment_local_nonprim = tenant_enrollment_dto_parseFromJSON(current_enrollment); //nonprimitive
    }

    // execution_context->selected_tenant_mappings
    cJSON *selected_tenant_mappings = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "selectedTenantMappings");
    if (selected_tenant_mappings) { 
    selected_tenant_mappings_local_nonprim = crm_context_parseFromJSON(selected_tenant_mappings); //nonprimitive
    }

    // execution_context->portal_owner_mappings
    cJSON *portal_owner_mappings = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "portalOwnerMappings");
    if (portal_owner_mappings) { 
    portal_owner_mappings_local_nonprim = crm_context_parseFromJSON(portal_owner_mappings); //nonprimitive
    }

    // execution_context->root_tenant_mappings
    cJSON *root_tenant_mappings = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "rootTenantMappings");
    if (root_tenant_mappings) { 
    root_tenant_mappings_local_nonprim = crm_context_parseFromJSON(root_tenant_mappings); //nonprimitive
    }

    // execution_context->cart
    cJSON *cart = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "cart");
    if (cart) { 
    cart_local_nonprim = cart_dto_parseFromJSON(cart); //nonprimitive
    }

    // execution_context->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currency");
    if (currency) { 
    currency_local_nonprim = currency_dto_parseFromJSON(currency); //nonprimitive
    }

    // execution_context->forex_rates
    cJSON *forex_rates = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "forexRates");
    if (forex_rates) { 
    forex_rates_local_nonprim = forex_rates_dto_parseFromJSON(forex_rates); //nonprimitive
    }

    // execution_context->exchange_rate
    cJSON *exchange_rate = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "exchangeRate");
    if (exchange_rate) { 
    exchange_rate_local_nonprim = money_parseFromJSON(exchange_rate); //nonprimitive
    }

    // execution_context->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "country");
    if (country) { 
    country_local_nonprim = country_dto_parseFromJSON(country); //nonprimitive
    }

    // execution_context->root_tenant
    cJSON *root_tenant = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "rootTenant");
    if (root_tenant) { 
    root_tenant_local_nonprim = tenant_dto_parseFromJSON(root_tenant); //nonprimitive
    }

    // execution_context->current_portal
    cJSON *current_portal = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "currentPortal");
    if (current_portal) { 
    current_portal_local_nonprim = web_portal_dto_parseFromJSON(current_portal); //nonprimitive
    }

    // execution_context->tenants
    cJSON *tenants = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "tenants");
    if (tenants) { 
    cJSON *tenants_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tenants)){
        goto end; //nonprimitive container
    }

    tenantsList = list_createList();

    cJSON_ArrayForEach(tenants_local_nonprimitive,tenants )
    {
        if(!cJSON_IsObject(tenants_local_nonprimitive)){
            goto end;
        }
        extended_tenant_dto_t *tenantsItem = extended_tenant_dto_parseFromJSON(tenants_local_nonprimitive);

        list_addElement(tenantsList, tenantsItem);
    }
    }

    // execution_context->enrollments
    cJSON *enrollments = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "enrollments");
    if (enrollments) { 
    cJSON *enrollments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(enrollments)){
        goto end; //nonprimitive container
    }

    enrollmentsList = list_createList();

    cJSON_ArrayForEach(enrollments_local_nonprimitive,enrollments )
    {
        if(!cJSON_IsObject(enrollments_local_nonprimitive)){
            goto end;
        }
        extended_tenant_enrollment_dto_t *enrollmentsItem = extended_tenant_enrollment_dto_parseFromJSON(enrollments_local_nonprimitive);

        list_addElement(enrollmentsList, enrollmentsItem);
    }
    }

    // execution_context->available_portals
    cJSON *available_portals = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "availablePortals");
    if (available_portals) { 
    cJSON *available_portals_local_nonprimitive = NULL;
    if(!cJSON_IsArray(available_portals)){
        goto end; //nonprimitive container
    }

    available_portalsList = list_createList();

    cJSON_ArrayForEach(available_portals_local_nonprimitive,available_portals )
    {
        if(!cJSON_IsObject(available_portals_local_nonprimitive)){
            goto end;
        }
        web_portal_dto_t *available_portalsItem = web_portal_dto_parseFromJSON(available_portals_local_nonprimitive);

        list_addElement(available_portalsList, available_portalsItem);
    }
    }

    // execution_context->invitations
    cJSON *invitations = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "invitations");
    if (invitations) { 
    cJSON *invitations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(invitations)){
        goto end; //nonprimitive container
    }

    invitationsList = list_createList();

    cJSON_ArrayForEach(invitations_local_nonprimitive,invitations )
    {
        if(!cJSON_IsObject(invitations_local_nonprimitive)){
            goto end;
        }
        extended_invite_dto_t *invitationsItem = extended_invite_dto_parseFromJSON(invitations_local_nonprimitive);

        list_addElement(invitationsList, invitationsItem);
    }
    }

    // execution_context->granted_permissions
    cJSON *granted_permissions = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "grantedPermissions");
    if (granted_permissions) { 
    cJSON *granted_permissions_local = NULL;
    if(!cJSON_IsArray(granted_permissions)) {
        goto end;//primitive container
    }
    granted_permissionsList = list_createList();

    cJSON_ArrayForEach(granted_permissions_local, granted_permissions)
    {
        if(!cJSON_IsString(granted_permissions_local))
        {
            goto end;
        }
        list_addElement(granted_permissionsList , strdup(granted_permissions_local->valuestring));
    }
    }

    // execution_context->accessible_features
    cJSON *accessible_features = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "accessibleFeatures");
    if (accessible_features) { 
    cJSON *accessible_features_local_nonprimitive = NULL;
    if(!cJSON_IsArray(accessible_features)){
        goto end; //nonprimitive container
    }

    accessible_featuresList = list_createList();

    cJSON_ArrayForEach(accessible_features_local_nonprimitive,accessible_features )
    {
        if(!cJSON_IsObject(accessible_features_local_nonprimitive)){
            goto end;
        }
        suite_license_feature_dto_t *accessible_featuresItem = suite_license_feature_dto_parseFromJSON(accessible_features_local_nonprimitive);

        list_addElement(accessible_featuresList, accessible_featuresItem);
    }
    }

    // execution_context->culture_name
    cJSON *culture_name = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "cultureName");
    if (culture_name) { 
    if(!cJSON_IsString(culture_name) && !cJSON_IsNull(culture_name))
    {
    goto end; //String
    }
    }

    // execution_context->timezone_id
    cJSON *timezone_id = cJSON_GetObjectItemCaseSensitive(execution_contextJSON, "timezoneId");
    if (timezone_id) { 
    if(!cJSON_IsString(timezone_id) && !cJSON_IsNull(timezone_id))
    {
    goto end; //String
    }
    }


    execution_context_local_var = execution_context_create (
        is_authenticated ? is_authenticated->valueint : 0,
        current_cart_id && !cJSON_IsNull(current_cart_id) ? strdup(current_cart_id->valuestring) : NULL,
        current_user_id && !cJSON_IsNull(current_user_id) ? strdup(current_user_id->valuestring) : NULL,
        current_tenant_id && !cJSON_IsNull(current_tenant_id) ? strdup(current_tenant_id->valuestring) : NULL,
        current_portal_id && !cJSON_IsNull(current_portal_id) ? strdup(current_portal_id->valuestring) : NULL,
        current_enrollment_id && !cJSON_IsNull(current_enrollment_id) ? strdup(current_enrollment_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        page_size ? page_size->valuedouble : 0,
        date_format && !cJSON_IsNull(date_format) ? strdup(date_format->valuestring) : NULL,
        currency_format && !cJSON_IsNull(currency_format) ? strdup(currency_format->valuestring) : NULL,
        date_time_format && !cJSON_IsNull(date_time_format) ? strdup(date_time_format->valuestring) : NULL,
        to_date_data_summaries && !cJSON_IsNull(to_date_data_summaries) ? strdup(to_date_data_summaries->valuestring) : NULL,
        from_date_data_summaries && !cJSON_IsNull(from_date_data_summaries) ? strdup(from_date_data_summaries->valuestring) : NULL,
        authorization ? authorization_local_nonprim : NULL,
        user ? user_local_nonprim : NULL,
        current_tenant ? current_tenant_local_nonprim : NULL,
        current_enrollment ? current_enrollment_local_nonprim : NULL,
        selected_tenant_mappings ? selected_tenant_mappings_local_nonprim : NULL,
        portal_owner_mappings ? portal_owner_mappings_local_nonprim : NULL,
        root_tenant_mappings ? root_tenant_mappings_local_nonprim : NULL,
        cart ? cart_local_nonprim : NULL,
        currency ? currency_local_nonprim : NULL,
        forex_rates ? forex_rates_local_nonprim : NULL,
        exchange_rate ? exchange_rate_local_nonprim : NULL,
        country ? country_local_nonprim : NULL,
        root_tenant ? root_tenant_local_nonprim : NULL,
        current_portal ? current_portal_local_nonprim : NULL,
        tenants ? tenantsList : NULL,
        enrollments ? enrollmentsList : NULL,
        available_portals ? available_portalsList : NULL,
        invitations ? invitationsList : NULL,
        granted_permissions ? granted_permissionsList : NULL,
        accessible_features ? accessible_featuresList : NULL,
        culture_name && !cJSON_IsNull(culture_name) ? strdup(culture_name->valuestring) : NULL,
        timezone_id && !cJSON_IsNull(timezone_id) ? strdup(timezone_id->valuestring) : NULL
        );

    return execution_context_local_var;
end:
    if (authorization_local_nonprim) {
        auth_result_free(authorization_local_nonprim);
        authorization_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        extended_user_dto_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    if (current_tenant_local_nonprim) {
        extended_tenant_dto_free(current_tenant_local_nonprim);
        current_tenant_local_nonprim = NULL;
    }
    if (current_enrollment_local_nonprim) {
        tenant_enrollment_dto_free(current_enrollment_local_nonprim);
        current_enrollment_local_nonprim = NULL;
    }
    if (selected_tenant_mappings_local_nonprim) {
        crm_context_free(selected_tenant_mappings_local_nonprim);
        selected_tenant_mappings_local_nonprim = NULL;
    }
    if (portal_owner_mappings_local_nonprim) {
        crm_context_free(portal_owner_mappings_local_nonprim);
        portal_owner_mappings_local_nonprim = NULL;
    }
    if (root_tenant_mappings_local_nonprim) {
        crm_context_free(root_tenant_mappings_local_nonprim);
        root_tenant_mappings_local_nonprim = NULL;
    }
    if (cart_local_nonprim) {
        cart_dto_free(cart_local_nonprim);
        cart_local_nonprim = NULL;
    }
    if (currency_local_nonprim) {
        currency_dto_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (forex_rates_local_nonprim) {
        forex_rates_dto_free(forex_rates_local_nonprim);
        forex_rates_local_nonprim = NULL;
    }
    if (exchange_rate_local_nonprim) {
        money_free(exchange_rate_local_nonprim);
        exchange_rate_local_nonprim = NULL;
    }
    if (country_local_nonprim) {
        country_dto_free(country_local_nonprim);
        country_local_nonprim = NULL;
    }
    if (root_tenant_local_nonprim) {
        tenant_dto_free(root_tenant_local_nonprim);
        root_tenant_local_nonprim = NULL;
    }
    if (current_portal_local_nonprim) {
        web_portal_dto_free(current_portal_local_nonprim);
        current_portal_local_nonprim = NULL;
    }
    if (tenantsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tenantsList) {
            extended_tenant_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tenantsList);
        tenantsList = NULL;
    }
    if (enrollmentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, enrollmentsList) {
            extended_tenant_enrollment_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(enrollmentsList);
        enrollmentsList = NULL;
    }
    if (available_portalsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, available_portalsList) {
            web_portal_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(available_portalsList);
        available_portalsList = NULL;
    }
    if (invitationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, invitationsList) {
            extended_invite_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(invitationsList);
        invitationsList = NULL;
    }
    if (granted_permissionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, granted_permissionsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(granted_permissionsList);
        granted_permissionsList = NULL;
    }
    if (accessible_featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, accessible_featuresList) {
            suite_license_feature_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(accessible_featuresList);
        accessible_featuresList = NULL;
    }
    return NULL;

}
