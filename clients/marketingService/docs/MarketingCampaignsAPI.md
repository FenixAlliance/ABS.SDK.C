# MarketingCampaignsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketingCampaignsAPI_createMarketingCampaignAsync**](MarketingCampaignsAPI.md#MarketingCampaignsAPI_createMarketingCampaignAsync) | **POST** /api/v2/MarketingService/MarketingCampaigns | Create a marketing campaign
[**MarketingCampaignsAPI_deleteMarketingCampaignAsync**](MarketingCampaignsAPI.md#MarketingCampaignsAPI_deleteMarketingCampaignAsync) | **DELETE** /api/v2/MarketingService/MarketingCampaigns/{marketingcampaignId} | Delete a marketing campaign
[**MarketingCampaignsAPI_getMarketingCampaignDetailsAsync**](MarketingCampaignsAPI.md#MarketingCampaignsAPI_getMarketingCampaignDetailsAsync) | **GET** /api/v2/MarketingService/MarketingCampaigns/{marketingcampaignId} | Get marketing campaign by ID
[**MarketingCampaignsAPI_getMarketingCampaignODataAsync**](MarketingCampaignsAPI.md#MarketingCampaignsAPI_getMarketingCampaignODataAsync) | **GET** /api/v2/MarketingService/MarketingCampaigns | Get marketing campaigns
[**MarketingCampaignsAPI_getMarketingCampaignsCountAsync**](MarketingCampaignsAPI.md#MarketingCampaignsAPI_getMarketingCampaignsCountAsync) | **GET** /api/v2/MarketingService/MarketingCampaigns/Count | Get marketing campaigns count
[**MarketingCampaignsAPI_updateMarketingCampaignAsync**](MarketingCampaignsAPI.md#MarketingCampaignsAPI_updateMarketingCampaignAsync) | **PUT** /api/v2/MarketingService/MarketingCampaigns/{marketingcampaignId} | Update a marketing campaign


# **MarketingCampaignsAPI_createMarketingCampaignAsync**
```c
// Create a marketing campaign
//
// Creates a new marketing campaign for the specified tenant.
//
empty_envelope_t* MarketingCampaignsAPI_createMarketingCampaignAsync(apiClient_t *apiClient, char *tenantId, marketing_campaign_create_dto_t *marketing_campaign_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketing_campaign_create_dto** | **[marketing_campaign_create_dto_t](marketing_campaign_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingCampaignsAPI_deleteMarketingCampaignAsync**
```c
// Delete a marketing campaign
//
// Deletes a marketing campaign by its ID.
//
empty_envelope_t* MarketingCampaignsAPI_deleteMarketingCampaignAsync(apiClient_t *apiClient, char *tenantId, char *marketingcampaignId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingcampaignId** | **char \*** |  | 
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

# **MarketingCampaignsAPI_getMarketingCampaignDetailsAsync**
```c
// Get marketing campaign by ID
//
// Retrieves the details of a specific marketing campaign by its ID.
//
marketing_campaign_dto_envelope_t* MarketingCampaignsAPI_getMarketingCampaignDetailsAsync(apiClient_t *apiClient, char *tenantId, char *marketingcampaignId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingcampaignId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_campaign_dto_envelope_t](marketing_campaign_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingCampaignsAPI_getMarketingCampaignODataAsync**
```c
// Get marketing campaigns
//
// Retrieves a collection of marketing campaigns for the specified tenant using OData query options.
//
void MarketingCampaignsAPI_getMarketingCampaignODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingCampaignsAPI_getMarketingCampaignsCountAsync**
```c
// Get marketing campaigns count
//
// Returns the count of marketing campaigns for the specified tenant using OData query options.
//
int32_envelope_t* MarketingCampaignsAPI_getMarketingCampaignsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **MarketingCampaignsAPI_updateMarketingCampaignAsync**
```c
// Update a marketing campaign
//
// Updates an existing marketing campaign by its ID.
//
empty_envelope_t* MarketingCampaignsAPI_updateMarketingCampaignAsync(apiClient_t *apiClient, char *tenantId, char *marketingcampaignId, marketing_campaign_update_dto_t *marketing_campaign_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingcampaignId** | **char \*** |  | 
**marketing_campaign_update_dto** | **[marketing_campaign_update_dto_t](marketing_campaign_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

