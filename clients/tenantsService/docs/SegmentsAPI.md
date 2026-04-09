# SegmentsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SegmentsAPI_createTenantSegment**](SegmentsAPI.md#SegmentsAPI_createTenantSegment) | **POST** /api/v2/TenantsService/Segments | Create a new tenant segment
[**SegmentsAPI_deleteTenantSegment**](SegmentsAPI.md#SegmentsAPI_deleteTenantSegment) | **DELETE** /api/v2/TenantsService/Segments/{tenantSegmentId} | Delete a tenant segment
[**SegmentsAPI_getTenantSegmentById**](SegmentsAPI.md#SegmentsAPI_getTenantSegmentById) | **GET** /api/v2/TenantsService/Segments/{tenantSegmentId} | Retrieve a single tenant segment by its ID
[**SegmentsAPI_getTenantSegments**](SegmentsAPI.md#SegmentsAPI_getTenantSegments) | **GET** /api/v2/TenantsService/Segments | Retrieve a list of tenant segments
[**SegmentsAPI_getTenantSegmentsCount**](SegmentsAPI.md#SegmentsAPI_getTenantSegmentsCount) | **GET** /api/v2/TenantsService/Segments/Count | Get the count of tenant segments
[**SegmentsAPI_updateTenantSegment**](SegmentsAPI.md#SegmentsAPI_updateTenantSegment) | **PUT** /api/v2/TenantsService/Segments/{tenantSegmentId} | Update a tenant segment


# **SegmentsAPI_createTenantSegment**
```c
// Create a new tenant segment
//
// Create a new tenant segment
//
empty_envelope_t* SegmentsAPI_createTenantSegment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_segment_create_dto_t *tenant_segment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_segment_create_dto** | **[tenant_segment_create_dto_t](tenant_segment_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SegmentsAPI_deleteTenantSegment**
```c
// Delete a tenant segment
//
// Delete a tenant segment
//
empty_envelope_t* SegmentsAPI_deleteTenantSegment(apiClient_t *apiClient, char *tenantId, char *tenantSegmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantSegmentId** | **char \*** |  | 
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

# **SegmentsAPI_getTenantSegmentById**
```c
// Retrieve a single tenant segment by its ID
//
// Retrieve a single tenant segment by its ID
//
tenant_segment_dto_envelope_t* SegmentsAPI_getTenantSegmentById(apiClient_t *apiClient, char *tenantId, char *tenantSegmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantSegmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_segment_dto_envelope_t](tenant_segment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SegmentsAPI_getTenantSegments**
```c
// Retrieve a list of tenant segments
//
// Retrieve a list of tenant segments
//
tenant_segment_dto_list_envelope_t* SegmentsAPI_getTenantSegments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_segment_dto_list_envelope_t](tenant_segment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SegmentsAPI_getTenantSegmentsCount**
```c
// Get the count of tenant segments
//
// Get the count of tenant segments
//
int32_envelope_t* SegmentsAPI_getTenantSegmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SegmentsAPI_updateTenantSegment**
```c
// Update a tenant segment
//
// Update a tenant segment
//
empty_envelope_t* SegmentsAPI_updateTenantSegment(apiClient_t *apiClient, char *tenantId, char *tenantSegmentId, char *api_version, char *x_api_version, tenant_segment_update_dto_t *tenant_segment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantSegmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_segment_update_dto** | **[tenant_segment_update_dto_t](tenant_segment_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

