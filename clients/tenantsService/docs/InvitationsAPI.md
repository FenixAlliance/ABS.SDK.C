# InvitationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InvitationsAPI_acceptTenantInvitation**](InvitationsAPI.md#InvitationsAPI_acceptTenantInvitation) | **POST** /api/v2/TenantsService/Invitations/{invitationId}/Accept | Accept an invitation to join a tenant
[**InvitationsAPI_declineTenantInvitation**](InvitationsAPI.md#InvitationsAPI_declineTenantInvitation) | **POST** /api/v2/TenantsService/Invitations/{invitationId}/Decline | Decline an invitation to join a tenant
[**InvitationsAPI_deleteTenantInvitation**](InvitationsAPI.md#InvitationsAPI_deleteTenantInvitation) | **DELETE** /api/v2/TenantsService/Invitations/{invitationId} | Delete a tenant invitation
[**InvitationsAPI_getTenantInvitationById**](InvitationsAPI.md#InvitationsAPI_getTenantInvitationById) | **GET** /api/v2/TenantsService/Invitations/{invitationId} | Get a tenant invitation by its ID
[**InvitationsAPI_getTenantInvitations**](InvitationsAPI.md#InvitationsAPI_getTenantInvitations) | **GET** /api/v2/TenantsService/Invitations | Retrieve a list of tenant invitations
[**InvitationsAPI_getTenantInvitationsCount**](InvitationsAPI.md#InvitationsAPI_getTenantInvitationsCount) | **GET** /api/v2/TenantsService/Invitations/Count | Get the count of tenant invitations
[**InvitationsAPI_sendTenantInvitation**](InvitationsAPI.md#InvitationsAPI_sendTenantInvitation) | **POST** /api/v2/TenantsService/Invitations | Send an invitation to a user to join a tenant


# **InvitationsAPI_acceptTenantInvitation**
```c
// Accept an invitation to join a tenant
//
// Accept an invitation to join a tenant
//
empty_envelope_t* InvitationsAPI_acceptTenantInvitation(apiClient_t *apiClient, char *invitationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**invitationId** | **char \*** |  | 
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

# **InvitationsAPI_declineTenantInvitation**
```c
// Decline an invitation to join a tenant
//
// Decline an invitation to join a tenant
//
empty_envelope_t* InvitationsAPI_declineTenantInvitation(apiClient_t *apiClient, char *invitationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**invitationId** | **char \*** |  | 
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

# **InvitationsAPI_deleteTenantInvitation**
```c
// Delete a tenant invitation
//
// Delete a tenant invitation
//
empty_envelope_t* InvitationsAPI_deleteTenantInvitation(apiClient_t *apiClient, char *tenantId, char *invitationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invitationId** | **char \*** |  | 
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

# **InvitationsAPI_getTenantInvitationById**
```c
// Get a tenant invitation by its ID
//
// Get a tenant invitation by its ID
//
tenant_invitation_dto_envelope_t* InvitationsAPI_getTenantInvitationById(apiClient_t *apiClient, char *tenantId, char *invitationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invitationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_invitation_dto_envelope_t](tenant_invitation_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InvitationsAPI_getTenantInvitations**
```c
// Retrieve a list of tenant invitations
//
// Retrieve a list of tenant invitations
//
tenant_invitation_dto_list_envelope_t* InvitationsAPI_getTenantInvitations(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **InvitationsAPI_getTenantInvitationsCount**
```c
// Get the count of tenant invitations
//
// Get the count of tenant invitations
//
int32_envelope_t* InvitationsAPI_getTenantInvitationsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **InvitationsAPI_sendTenantInvitation**
```c
// Send an invitation to a user to join a tenant
//
// Send an invitation to a user to join a tenant
//
empty_envelope_t* InvitationsAPI_sendTenantInvitation(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_invitation_create_dto_t *tenant_invitation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_invitation_create_dto** | **[tenant_invitation_create_dto_t](tenant_invitation_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

