# TenantsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TenantsAPI_assignLicenseAsync**](TenantsAPI.md#TenantsAPI_assignLicenseAsync) | **POST** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Licenses/{licenseId} | Assign a license to a specific enrollment
[**TenantsAPI_createTenantAsync**](TenantsAPI.md#TenantsAPI_createTenantAsync) | **POST** /api/v2/TenantsService/Tenants | Create a new business tenant
[**TenantsAPI_deSelectTenantAsync**](TenantsAPI.md#TenantsAPI_deSelectTenantAsync) | **POST** /api/v2/TenantsService/Tenants/Deselect | Deselect the user&#39;s default tenant
[**TenantsAPI_deleteTenantAsync**](TenantsAPI.md#TenantsAPI_deleteTenantAsync) | **DELETE** /api/v2/TenantsService/Tenants | Delete a tenant
[**TenantsAPI_getAccessibleFeaturesAsync**](TenantsAPI.md#TenantsAPI_getAccessibleFeaturesAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Features | Get the list of features accessible to a specific enrollment
[**TenantsAPI_getCurrentTenantAsync**](TenantsAPI.md#TenantsAPI_getCurrentTenantAsync) | **GET** /api/v2/TenantsService/Tenants/Current | Get the user&#39;s current default tenant
[**TenantsAPI_getEnrollmentLicenseByIdAsync**](TenantsAPI.md#TenantsAPI_getEnrollmentLicenseByIdAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Licenses/{licenseId} | Get a specific license for an enrollment
[**TenantsAPI_getEnrollmentLicensesAsync**](TenantsAPI.md#TenantsAPI_getEnrollmentLicensesAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Licenses | Get the list of licenses available to a specific enrollment
[**TenantsAPI_getEnrollmentPermissionsAsync**](TenantsAPI.md#TenantsAPI_getEnrollmentPermissionsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Permissions | Get a specific tenant enrollment&#39;s permissions list
[**TenantsAPI_getExtendedTenantAsync**](TenantsAPI.md#TenantsAPI_getExtendedTenantAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Extended | Get an extended tenant&#39;s business profile
[**TenantsAPI_getExtendedTenantEnrollmentAsync**](TenantsAPI.md#TenantsAPI_getExtendedTenantEnrollmentAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Extended | Get a specific tenant enrollment
[**TenantsAPI_getRootTenantAsync**](TenantsAPI.md#TenantsAPI_getRootTenantAsync) | **GET** /api/v2/TenantsService/Tenants/Root | Get the root tenant of the platform
[**TenantsAPI_getTenantAsync**](TenantsAPI.md#TenantsAPI_getTenantAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId} | Get a specific tenant by ID
[**TenantsAPI_getTenantAvatarAsync**](TenantsAPI.md#TenantsAPI_getTenantAvatarAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Avatar | Get a tenant&#39;s avatar
[**TenantsAPI_getTenantCartAsync**](TenantsAPI.md#TenantsAPI_getTenantCartAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Cart | Get a tenant&#39;s default cart
[**TenantsAPI_getTenantEnrollmentAsync**](TenantsAPI.md#TenantsAPI_getTenantEnrollmentAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId} | Get a specific tenant enrollment
[**TenantsAPI_getTenantEnrollmentsAsync**](TenantsAPI.md#TenantsAPI_getTenantEnrollmentsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments | Get the list of user enrollments for a tenant
[**TenantsAPI_getTenantInvitationsAsync**](TenantsAPI.md#TenantsAPI_getTenantInvitationsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Invitations | Get the list of invitations issued by a tenant
[**TenantsAPI_getTenantLicensesAsync**](TenantsAPI.md#TenantsAPI_getTenantLicensesAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Licenses | Get the list of licenses available to a tenant
[**TenantsAPI_getTenantNotificationsAsync**](TenantsAPI.md#TenantsAPI_getTenantNotificationsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Notifications | Get the list of notifications for a tenant
[**TenantsAPI_getTenantNotificationsCountAsync**](TenantsAPI.md#TenantsAPI_getTenantNotificationsCountAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Notifications/Count | Get the count of notifications for a tenant
[**TenantsAPI_getTenantPendingInvitationsAsync**](TenantsAPI.md#TenantsAPI_getTenantPendingInvitationsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Invitations/Pending | Get the list of invitations issued by a tenant that are pending
[**TenantsAPI_getTenantRedeemedInvitationsAsync**](TenantsAPI.md#TenantsAPI_getTenantRedeemedInvitationsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Invitations/Redeemed | Get the list of invitations issued by a tenant that have been redeemed
[**TenantsAPI_getTenantRevokedInvitationsAsync**](TenantsAPI.md#TenantsAPI_getTenantRevokedInvitationsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Invitations/Revoked | Get the list of invitations issued by a tenant that have been revoked
[**TenantsAPI_getTenantSocialProfileAsync**](TenantsAPI.md#TenantsAPI_getTenantSocialProfileAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/SocialProfile | Get a tenant&#39;s social profile
[**TenantsAPI_getTenantUsersAsync**](TenantsAPI.md#TenantsAPI_getTenantUsersAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Users | Get the list of users enrolled in a tenant
[**TenantsAPI_getTenantWalletAsync**](TenantsAPI.md#TenantsAPI_getTenantWalletAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Wallet | Get a tenant&#39;s billing profile (A.K.A. Wallet Account)
[**TenantsAPI_getTenantWebPortalsAsync**](TenantsAPI.md#TenantsAPI_getTenantWebPortalsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/WebPortals | Get the list of web portals for a tenant
[**TenantsAPI_patchTenantAsync**](TenantsAPI.md#TenantsAPI_patchTenantAsync) | **PATCH** /api/v2/TenantsService/Tenants/{tenantId} | Patch a tenant&#39;s profile
[**TenantsAPI_revokeLicenseAsync**](TenantsAPI.md#TenantsAPI_revokeLicenseAsync) | **DELETE** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Licenses/{licenseId} | Revoke a license from a specific enrollment
[**TenantsAPI_selectTenantAsync**](TenantsAPI.md#TenantsAPI_selectTenantAsync) | **POST** /api/v2/TenantsService/Tenants/{tenantId}/Select | Select a business tenant as the user&#39;s default tenant
[**TenantsAPI_updateAvatarAsync**](TenantsAPI.md#TenantsAPI_updateAvatarAsync) | **POST** /api/v2/TenantsService/Tenants/{tenantId}/Avatar | Update a tenant&#39;s avatar
[**TenantsAPI_updateTenantAsync**](TenantsAPI.md#TenantsAPI_updateTenantAsync) | **PUT** /api/v2/TenantsService/Tenants/{tenantId} | Update a tenant&#39;s profile
[**TenantsAPI_validateEnrollmentFeatureAccess**](TenantsAPI.md#TenantsAPI_validateEnrollmentFeatureAccess) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/HasAccess | Validate the access to a specific feature for a specific enrollment
[**TenantsAPI_validateEnrollmentPermissionsAsync**](TenantsAPI.md#TenantsAPI_validateEnrollmentPermissionsAsync) | **GET** /api/v2/TenantsService/Tenants/{tenantId}/Enrollments/{enrollmentId}/Permissions/Validate | Validate the existence of a list of roles and permissions for a specific enrollment


# **TenantsAPI_assignLicenseAsync**
```c
// Assign a license to a specific enrollment
//
// Assign a license to a specific enrollment
//
suite_license_dto_list_envelope_t* TenantsAPI_assignLicenseAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *licenseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**licenseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[suite_license_dto_list_envelope_t](suite_license_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_createTenantAsync**
```c
// Create a new business tenant
//
// Create a new business tenant
//
empty_envelope_t* TenantsAPI_createTenantAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_create_dto_t *tenant_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_create_dto** | **[tenant_create_dto_t](tenant_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_deSelectTenantAsync**
```c
// Deselect the user's default tenant
//
// Deselect the user's default tenant
//
empty_envelope_t* TenantsAPI_deSelectTenantAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_deleteTenantAsync**
```c
// Delete a tenant
//
// Delete a business tenant
//
empty_envelope_t* TenantsAPI_deleteTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getAccessibleFeaturesAsync**
```c
// Get the list of features accessible to a specific enrollment
//
// Get the list of features accessible to a specific enrollment
//
suite_license_feature_dto_list_envelope_t* TenantsAPI_getAccessibleFeaturesAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[suite_license_feature_dto_list_envelope_t](suite_license_feature_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getCurrentTenantAsync**
```c
// Get the user's current default tenant
//
// Get the user's current default tenant
//
tenant_dto_envelope_t* TenantsAPI_getCurrentTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_dto_envelope_t](tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getEnrollmentLicenseByIdAsync**
```c
// Get a specific license for an enrollment
//
// Get a specific license for an enrollment
//
suite_license_dto_list_envelope_t* TenantsAPI_getEnrollmentLicenseByIdAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *licenseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**licenseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[suite_license_dto_list_envelope_t](suite_license_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getEnrollmentLicensesAsync**
```c
// Get the list of licenses available to a specific enrollment
//
// Get the list of licenses available to a specific enrollment
//
suite_license_assignment_dto_list_envelope_t* TenantsAPI_getEnrollmentLicensesAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[suite_license_assignment_dto_list_envelope_t](suite_license_assignment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getEnrollmentPermissionsAsync**
```c
// Get a specific tenant enrollment's permissions list
//
// Get a specific tenant enrollment's permissions list
//
string_list_envelope_t* TenantsAPI_getEnrollmentPermissionsAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[string_list_envelope_t](string_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getExtendedTenantAsync**
```c
// Get an extended tenant's business profile
//
// Get an extended tenant's business profile
//
extended_tenant_dto_envelope_t* TenantsAPI_getExtendedTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_tenant_dto_envelope_t](extended_tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getExtendedTenantEnrollmentAsync**
```c
// Get a specific tenant enrollment
//
// Get a specific tenant enrollment
//
extended_tenant_enrollment_dto_envelope_t* TenantsAPI_getExtendedTenantEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_tenant_enrollment_dto_envelope_t](extended_tenant_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getRootTenantAsync**
```c
// Get the root tenant of the platform
//
// Get the root tenant of the platform
//
tenant_dto_envelope_t* TenantsAPI_getRootTenantAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_dto_envelope_t](tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantAsync**
```c
// Get a specific tenant by ID
//
// Get a specific tenant by ID
//
tenant_dto_envelope_t* TenantsAPI_getTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_dto_envelope_t](tenant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantAvatarAsync**
```c
// Get a tenant's avatar
//
// Get a tenant's avatar
//
empty_envelope_t* TenantsAPI_getTenantAvatarAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantCartAsync**
```c
// Get a tenant's default cart
//
// Get a tenant's default cart
//
cart_dto_envelope_t* TenantsAPI_getTenantCartAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantEnrollmentAsync**
```c
// Get a specific tenant enrollment
//
// Get a specific tenant enrollment
//
tenant_enrollment_dto_envelope_t* TenantsAPI_getTenantEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_envelope_t](tenant_enrollment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantEnrollmentsAsync**
```c
// Get the list of user enrollments for a tenant
//
// Get the list of user enrollments for a tenant
//
tenant_enrollment_dto_list_envelope_t* TenantsAPI_getTenantEnrollmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_enrollment_dto_list_envelope_t](tenant_enrollment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantInvitationsAsync**
```c
// Get the list of invitations issued by a tenant
//
// Get the list of invitations issued by a tenant
//
tenant_invitation_dto_list_envelope_t* TenantsAPI_getTenantInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_invitation_dto_list_envelope_t](tenant_invitation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantLicensesAsync**
```c
// Get the list of licenses available to a tenant
//
// Get the list of licenses available to a tenant
//
suite_license_dto_list_envelope_t* TenantsAPI_getTenantLicensesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[suite_license_dto_list_envelope_t](suite_license_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantNotificationsAsync**
```c
// Get the list of notifications for a tenant
//
// Get the list of notifications for a tenant
//
notification_dto_list_envelope_t* TenantsAPI_getTenantNotificationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[notification_dto_list_envelope_t](notification_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantNotificationsCountAsync**
```c
// Get the count of notifications for a tenant
//
// Get the count of notifications for a tenant
//
int32_envelope_t* TenantsAPI_getTenantNotificationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantPendingInvitationsAsync**
```c
// Get the list of invitations issued by a tenant that are pending
//
// Get the list of invitations issued by a tenant that are pending
//
tenant_invitation_dto_list_envelope_t* TenantsAPI_getTenantPendingInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_invitation_dto_list_envelope_t](tenant_invitation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantRedeemedInvitationsAsync**
```c
// Get the list of invitations issued by a tenant that have been redeemed
//
// Get the list of invitations issued by a tenant that have been redeemed
//
tenant_invitation_dto_list_envelope_t* TenantsAPI_getTenantRedeemedInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_invitation_dto_list_envelope_t](tenant_invitation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantRevokedInvitationsAsync**
```c
// Get the list of invitations issued by a tenant that have been revoked
//
// Get the list of invitations issued by a tenant that have been revoked
//
tenant_invitation_dto_list_envelope_t* TenantsAPI_getTenantRevokedInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_invitation_dto_list_envelope_t](tenant_invitation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantSocialProfileAsync**
```c
// Get a tenant's social profile
//
// Get a tenant's social profile
//
social_profile_dto_envelope_t* TenantsAPI_getTenantSocialProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_envelope_t](social_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantUsersAsync**
```c
// Get the list of users enrolled in a tenant
//
// Get the list of users enrolled in a tenant
//
user_dto_list_envelope_t* TenantsAPI_getTenantUsersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[user_dto_list_envelope_t](user_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantWalletAsync**
```c
// Get a tenant's billing profile (A.K.A. Wallet Account)
//
// Get a tenant's billing profile (A.K.A. Wallet Account)
//
wallet_dto_envelope_t* TenantsAPI_getTenantWalletAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wallet_dto_envelope_t](wallet_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_getTenantWebPortalsAsync**
```c
// Get the list of web portals for a tenant
//
// Get the list of web portals for a tenant
//
web_portal_dto_list_envelope_t* TenantsAPI_getTenantWebPortalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_list_envelope_t](web_portal_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_patchTenantAsync**
```c
// Patch a tenant's profile
//
// Patch a tenant's profile
//
empty_envelope_t* TenantsAPI_patchTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_revokeLicenseAsync**
```c
// Revoke a license from a specific enrollment
//
// Revoke a license from a specific enrollment
//
suite_license_dto_list_envelope_t* TenantsAPI_revokeLicenseAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *licenseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**licenseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[suite_license_dto_list_envelope_t](suite_license_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_selectTenantAsync**
```c
// Select a business tenant as the user's default tenant
//
// Select a business tenant as the user's default tenant
//
empty_envelope_t* TenantsAPI_selectTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_updateAvatarAsync**
```c
// Update a tenant's avatar
//
// Update a tenant's avatar
//
empty_envelope_t* TenantsAPI_updateAvatarAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**avatar** | **binary_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: image/png, application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_updateTenantAsync**
```c
// Update a tenant's profile
//
// Update a tenant's profile
//
empty_envelope_t* TenantsAPI_updateTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_update_dto_t *tenant_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_update_dto** | **[tenant_update_dto_t](tenant_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_validateEnrollmentFeatureAccess**
```c
// Validate the access to a specific feature for a specific enrollment
//
// Validate the access to a specific feature for a specific enrollment
//
boolean_envelope_t* TenantsAPI_validateEnrollmentFeatureAccess(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *feature, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**feature** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TenantsAPI_validateEnrollmentPermissionsAsync**
```c
// Validate the existence of a list of roles and permissions for a specific enrollment
//
// Validate the existence of a list of roles and permissions for a specific enrollment
//
boolean_envelope_t* TenantsAPI_validateEnrollmentPermissionsAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, list_t *roles, list_t *permissions, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**enrollmentId** | **char \*** |  | 
**roles** | **[list_t](char.md) \*** |  | [optional] 
**permissions** | **[list_t](char.md) \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

