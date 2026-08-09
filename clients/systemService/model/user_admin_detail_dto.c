#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_admin_detail_dto.h"



user_admin_detail_dto_t *user_admin_detail_dto_create(
    list_t *orders,
    list_t *logins,
    tenant_enrollment_dto_t *enrollment,
    list_t *granted_roles,
    list_t *granted_permissions,
    list_t *role_catalog,
    list_t *permission_catalog
    ) {
    user_admin_detail_dto_t *user_admin_detail_dto_local_var = malloc(sizeof(user_admin_detail_dto_t));
    if (!user_admin_detail_dto_local_var) {
        return NULL;
    }
    user_admin_detail_dto_local_var->orders = orders;
    user_admin_detail_dto_local_var->logins = logins;
    user_admin_detail_dto_local_var->enrollment = enrollment;
    user_admin_detail_dto_local_var->granted_roles = granted_roles;
    user_admin_detail_dto_local_var->granted_permissions = granted_permissions;
    user_admin_detail_dto_local_var->role_catalog = role_catalog;
    user_admin_detail_dto_local_var->permission_catalog = permission_catalog;

    return user_admin_detail_dto_local_var;
}


void user_admin_detail_dto_free(user_admin_detail_dto_t *user_admin_detail_dto) {
    if(NULL == user_admin_detail_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_admin_detail_dto->orders) {
        list_ForEach(listEntry, user_admin_detail_dto->orders) {
            user_order_summary_dto_free(listEntry->data);
        }
        list_freeList(user_admin_detail_dto->orders);
        user_admin_detail_dto->orders = NULL;
    }
    if (user_admin_detail_dto->logins) {
        list_ForEach(listEntry, user_admin_detail_dto->logins) {
            user_external_login_dto_free(listEntry->data);
        }
        list_freeList(user_admin_detail_dto->logins);
        user_admin_detail_dto->logins = NULL;
    }
    if (user_admin_detail_dto->enrollment) {
        tenant_enrollment_dto_free(user_admin_detail_dto->enrollment);
        user_admin_detail_dto->enrollment = NULL;
    }
    if (user_admin_detail_dto->granted_roles) {
        list_ForEach(listEntry, user_admin_detail_dto->granted_roles) {
            security_role_dto_free(listEntry->data);
        }
        list_freeList(user_admin_detail_dto->granted_roles);
        user_admin_detail_dto->granted_roles = NULL;
    }
    if (user_admin_detail_dto->granted_permissions) {
        list_ForEach(listEntry, user_admin_detail_dto->granted_permissions) {
            security_permission_dto_free(listEntry->data);
        }
        list_freeList(user_admin_detail_dto->granted_permissions);
        user_admin_detail_dto->granted_permissions = NULL;
    }
    if (user_admin_detail_dto->role_catalog) {
        list_ForEach(listEntry, user_admin_detail_dto->role_catalog) {
            security_role_dto_free(listEntry->data);
        }
        list_freeList(user_admin_detail_dto->role_catalog);
        user_admin_detail_dto->role_catalog = NULL;
    }
    if (user_admin_detail_dto->permission_catalog) {
        list_ForEach(listEntry, user_admin_detail_dto->permission_catalog) {
            security_permission_dto_free(listEntry->data);
        }
        list_freeList(user_admin_detail_dto->permission_catalog);
        user_admin_detail_dto->permission_catalog = NULL;
    }
    free(user_admin_detail_dto);
}

cJSON *user_admin_detail_dto_convertToJSON(user_admin_detail_dto_t *user_admin_detail_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_admin_detail_dto->orders
    if(user_admin_detail_dto->orders) {
    cJSON *orders = cJSON_AddArrayToObject(item, "orders");
    if(orders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ordersListEntry;
    if (user_admin_detail_dto->orders) {
    list_ForEach(ordersListEntry, user_admin_detail_dto->orders) {
    cJSON *itemLocal = user_order_summary_dto_convertToJSON(ordersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(orders, itemLocal);
    }
    }
    }


    // user_admin_detail_dto->logins
    if(user_admin_detail_dto->logins) {
    cJSON *logins = cJSON_AddArrayToObject(item, "logins");
    if(logins == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *loginsListEntry;
    if (user_admin_detail_dto->logins) {
    list_ForEach(loginsListEntry, user_admin_detail_dto->logins) {
    cJSON *itemLocal = user_external_login_dto_convertToJSON(loginsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(logins, itemLocal);
    }
    }
    }


    // user_admin_detail_dto->enrollment
    if(user_admin_detail_dto->enrollment) {
    cJSON *enrollment_local_JSON = tenant_enrollment_dto_convertToJSON(user_admin_detail_dto->enrollment);
    if(enrollment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enrollment", enrollment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // user_admin_detail_dto->granted_roles
    if(user_admin_detail_dto->granted_roles) {
    cJSON *granted_roles = cJSON_AddArrayToObject(item, "grantedRoles");
    if(granted_roles == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *granted_rolesListEntry;
    if (user_admin_detail_dto->granted_roles) {
    list_ForEach(granted_rolesListEntry, user_admin_detail_dto->granted_roles) {
    cJSON *itemLocal = security_role_dto_convertToJSON(granted_rolesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(granted_roles, itemLocal);
    }
    }
    }


    // user_admin_detail_dto->granted_permissions
    if(user_admin_detail_dto->granted_permissions) {
    cJSON *granted_permissions = cJSON_AddArrayToObject(item, "grantedPermissions");
    if(granted_permissions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *granted_permissionsListEntry;
    if (user_admin_detail_dto->granted_permissions) {
    list_ForEach(granted_permissionsListEntry, user_admin_detail_dto->granted_permissions) {
    cJSON *itemLocal = security_permission_dto_convertToJSON(granted_permissionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(granted_permissions, itemLocal);
    }
    }
    }


    // user_admin_detail_dto->role_catalog
    if(user_admin_detail_dto->role_catalog) {
    cJSON *role_catalog = cJSON_AddArrayToObject(item, "roleCatalog");
    if(role_catalog == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *role_catalogListEntry;
    if (user_admin_detail_dto->role_catalog) {
    list_ForEach(role_catalogListEntry, user_admin_detail_dto->role_catalog) {
    cJSON *itemLocal = security_role_dto_convertToJSON(role_catalogListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(role_catalog, itemLocal);
    }
    }
    }


    // user_admin_detail_dto->permission_catalog
    if(user_admin_detail_dto->permission_catalog) {
    cJSON *permission_catalog = cJSON_AddArrayToObject(item, "permissionCatalog");
    if(permission_catalog == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *permission_catalogListEntry;
    if (user_admin_detail_dto->permission_catalog) {
    list_ForEach(permission_catalogListEntry, user_admin_detail_dto->permission_catalog) {
    cJSON *itemLocal = security_permission_dto_convertToJSON(permission_catalogListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(permission_catalog, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_admin_detail_dto_t *user_admin_detail_dto_parseFromJSON(cJSON *user_admin_detail_dtoJSON){

    user_admin_detail_dto_t *user_admin_detail_dto_local_var = NULL;

    // define the local list for user_admin_detail_dto->orders
    list_t *ordersList = NULL;

    // define the local list for user_admin_detail_dto->logins
    list_t *loginsList = NULL;

    // define the local variable for user_admin_detail_dto->enrollment
    tenant_enrollment_dto_t *enrollment_local_nonprim = NULL;

    // define the local list for user_admin_detail_dto->granted_roles
    list_t *granted_rolesList = NULL;

    // define the local list for user_admin_detail_dto->granted_permissions
    list_t *granted_permissionsList = NULL;

    // define the local list for user_admin_detail_dto->role_catalog
    list_t *role_catalogList = NULL;

    // define the local list for user_admin_detail_dto->permission_catalog
    list_t *permission_catalogList = NULL;

    // user_admin_detail_dto->orders
    cJSON *orders = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "orders");
    if (orders) { 
    cJSON *orders_local_nonprimitive = NULL;
    if(!cJSON_IsArray(orders)){
        goto end; //nonprimitive container
    }

    ordersList = list_createList();

    cJSON_ArrayForEach(orders_local_nonprimitive,orders )
    {
        if(!cJSON_IsObject(orders_local_nonprimitive)){
            goto end;
        }
        user_order_summary_dto_t *ordersItem = user_order_summary_dto_parseFromJSON(orders_local_nonprimitive);

        list_addElement(ordersList, ordersItem);
    }
    }

    // user_admin_detail_dto->logins
    cJSON *logins = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "logins");
    if (logins) { 
    cJSON *logins_local_nonprimitive = NULL;
    if(!cJSON_IsArray(logins)){
        goto end; //nonprimitive container
    }

    loginsList = list_createList();

    cJSON_ArrayForEach(logins_local_nonprimitive,logins )
    {
        if(!cJSON_IsObject(logins_local_nonprimitive)){
            goto end;
        }
        user_external_login_dto_t *loginsItem = user_external_login_dto_parseFromJSON(logins_local_nonprimitive);

        list_addElement(loginsList, loginsItem);
    }
    }

    // user_admin_detail_dto->enrollment
    cJSON *enrollment = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "enrollment");
    if (enrollment) { 
    enrollment_local_nonprim = tenant_enrollment_dto_parseFromJSON(enrollment); //nonprimitive
    }

    // user_admin_detail_dto->granted_roles
    cJSON *granted_roles = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "grantedRoles");
    if (granted_roles) { 
    cJSON *granted_roles_local_nonprimitive = NULL;
    if(!cJSON_IsArray(granted_roles)){
        goto end; //nonprimitive container
    }

    granted_rolesList = list_createList();

    cJSON_ArrayForEach(granted_roles_local_nonprimitive,granted_roles )
    {
        if(!cJSON_IsObject(granted_roles_local_nonprimitive)){
            goto end;
        }
        security_role_dto_t *granted_rolesItem = security_role_dto_parseFromJSON(granted_roles_local_nonprimitive);

        list_addElement(granted_rolesList, granted_rolesItem);
    }
    }

    // user_admin_detail_dto->granted_permissions
    cJSON *granted_permissions = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "grantedPermissions");
    if (granted_permissions) { 
    cJSON *granted_permissions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(granted_permissions)){
        goto end; //nonprimitive container
    }

    granted_permissionsList = list_createList();

    cJSON_ArrayForEach(granted_permissions_local_nonprimitive,granted_permissions )
    {
        if(!cJSON_IsObject(granted_permissions_local_nonprimitive)){
            goto end;
        }
        security_permission_dto_t *granted_permissionsItem = security_permission_dto_parseFromJSON(granted_permissions_local_nonprimitive);

        list_addElement(granted_permissionsList, granted_permissionsItem);
    }
    }

    // user_admin_detail_dto->role_catalog
    cJSON *role_catalog = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "roleCatalog");
    if (role_catalog) { 
    cJSON *role_catalog_local_nonprimitive = NULL;
    if(!cJSON_IsArray(role_catalog)){
        goto end; //nonprimitive container
    }

    role_catalogList = list_createList();

    cJSON_ArrayForEach(role_catalog_local_nonprimitive,role_catalog )
    {
        if(!cJSON_IsObject(role_catalog_local_nonprimitive)){
            goto end;
        }
        security_role_dto_t *role_catalogItem = security_role_dto_parseFromJSON(role_catalog_local_nonprimitive);

        list_addElement(role_catalogList, role_catalogItem);
    }
    }

    // user_admin_detail_dto->permission_catalog
    cJSON *permission_catalog = cJSON_GetObjectItemCaseSensitive(user_admin_detail_dtoJSON, "permissionCatalog");
    if (permission_catalog) { 
    cJSON *permission_catalog_local_nonprimitive = NULL;
    if(!cJSON_IsArray(permission_catalog)){
        goto end; //nonprimitive container
    }

    permission_catalogList = list_createList();

    cJSON_ArrayForEach(permission_catalog_local_nonprimitive,permission_catalog )
    {
        if(!cJSON_IsObject(permission_catalog_local_nonprimitive)){
            goto end;
        }
        security_permission_dto_t *permission_catalogItem = security_permission_dto_parseFromJSON(permission_catalog_local_nonprimitive);

        list_addElement(permission_catalogList, permission_catalogItem);
    }
    }


    user_admin_detail_dto_local_var = user_admin_detail_dto_create (
        orders ? ordersList : NULL,
        logins ? loginsList : NULL,
        enrollment ? enrollment_local_nonprim : NULL,
        granted_roles ? granted_rolesList : NULL,
        granted_permissions ? granted_permissionsList : NULL,
        role_catalog ? role_catalogList : NULL,
        permission_catalog ? permission_catalogList : NULL
        );

    return user_admin_detail_dto_local_var;
end:
    if (ordersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ordersList) {
            user_order_summary_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ordersList);
        ordersList = NULL;
    }
    if (loginsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, loginsList) {
            user_external_login_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(loginsList);
        loginsList = NULL;
    }
    if (enrollment_local_nonprim) {
        tenant_enrollment_dto_free(enrollment_local_nonprim);
        enrollment_local_nonprim = NULL;
    }
    if (granted_rolesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, granted_rolesList) {
            security_role_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(granted_rolesList);
        granted_rolesList = NULL;
    }
    if (granted_permissionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, granted_permissionsList) {
            security_permission_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(granted_permissionsList);
        granted_permissionsList = NULL;
    }
    if (role_catalogList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, role_catalogList) {
            security_role_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(role_catalogList);
        role_catalogList = NULL;
    }
    if (permission_catalogList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, permission_catalogList) {
            security_permission_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(permission_catalogList);
        permission_catalogList = NULL;
    }
    return NULL;

}
