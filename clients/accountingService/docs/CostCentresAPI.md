# CostCentresAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CostCentresAPI_createCostCentre**](CostCentresAPI.md#CostCentresAPI_createCostCentre) | **POST** /api/v2/AccountingService/CostCentres | Create a cost centre
[**CostCentresAPI_createCostCentreBudget**](CostCentresAPI.md#CostCentresAPI_createCostCentreBudget) | **POST** /api/v2/AccountingService/CostCentres/CostCentreBudgets | Create a cost centre budget
[**CostCentresAPI_createCostCentreGroup**](CostCentresAPI.md#CostCentresAPI_createCostCentreGroup) | **POST** /api/v2/AccountingService/CostCentres/CostCentreGroups | Create a cost centre group
[**CostCentresAPI_deleteCostCentre**](CostCentresAPI.md#CostCentresAPI_deleteCostCentre) | **DELETE** /api/v2/AccountingService/CostCentres/{costCentreId} | Delete a cost centre
[**CostCentresAPI_deleteCostCentreBudget**](CostCentresAPI.md#CostCentresAPI_deleteCostCentreBudget) | **DELETE** /api/v2/AccountingService/CostCentres/CostCentreBudgets/{budgetId} | Delete a cost centre budget
[**CostCentresAPI_deleteCostCentreGroup**](CostCentresAPI.md#CostCentresAPI_deleteCostCentreGroup) | **DELETE** /api/v2/AccountingService/CostCentres/CostCentreGroups/{groupId} | Delete a cost centre group
[**CostCentresAPI_getCostCentre**](CostCentresAPI.md#CostCentresAPI_getCostCentre) | **GET** /api/v2/AccountingService/CostCentres/{costCentreId} | Get a cost centre by id
[**CostCentresAPI_getCostCentreBudget**](CostCentresAPI.md#CostCentresAPI_getCostCentreBudget) | **GET** /api/v2/AccountingService/CostCentres/CostCentreBudgets/{budgetId} | Get a cost centre budget by id
[**CostCentresAPI_getCostCentreBudgets**](CostCentresAPI.md#CostCentresAPI_getCostCentreBudgets) | **GET** /api/v2/AccountingService/CostCentres/CostCentreBudgets | Get all cost centre budgets for a tenant
[**CostCentresAPI_getCostCentreGroup**](CostCentresAPI.md#CostCentresAPI_getCostCentreGroup) | **GET** /api/v2/AccountingService/CostCentres/CostCentreGroups/{groupId} | Get a cost centre group by id
[**CostCentresAPI_getCostCentreGroups**](CostCentresAPI.md#CostCentresAPI_getCostCentreGroups) | **GET** /api/v2/AccountingService/CostCentres/CostCentreGroups | Get all cost centre groups for a tenant
[**CostCentresAPI_getCostCentreGroupsCount**](CostCentresAPI.md#CostCentresAPI_getCostCentreGroupsCount) | **GET** /api/v2/AccountingService/CostCentres/CostCentreGroups/Count | Get the count of cost centre groups for a tenant
[**CostCentresAPI_getCostCentres**](CostCentresAPI.md#CostCentresAPI_getCostCentres) | **GET** /api/v2/AccountingService/CostCentres | Get all cost centres for a tenant
[**CostCentresAPI_getCostCentresCount**](CostCentresAPI.md#CostCentresAPI_getCostCentresCount) | **GET** /api/v2/AccountingService/CostCentres/Count | Get the count of cost centres for a tenant
[**CostCentresAPI_updateCostCentre**](CostCentresAPI.md#CostCentresAPI_updateCostCentre) | **PUT** /api/v2/AccountingService/CostCentres/{costCentreId} | Update a cost centre
[**CostCentresAPI_updateCostCentreBudget**](CostCentresAPI.md#CostCentresAPI_updateCostCentreBudget) | **PUT** /api/v2/AccountingService/CostCentres/CostCentreBudgets/{budgetId} | Update a cost centre budget
[**CostCentresAPI_updateCostCentreGroup**](CostCentresAPI.md#CostCentresAPI_updateCostCentreGroup) | **PUT** /api/v2/AccountingService/CostCentres/CostCentreGroups/{groupId} | Update a cost centre group


# **CostCentresAPI_createCostCentre**
```c
// Create a cost centre
//
// Creates a new cost centre.
//
empty_envelope_t* CostCentresAPI_createCostCentre(apiClient_t *apiClient, char *tenantId, cost_centre_create_dto_t *cost_centre_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**cost_centre_create_dto** | **[cost_centre_create_dto_t](cost_centre_create_dto.md) \*** |  | 
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

# **CostCentresAPI_createCostCentreBudget**
```c
// Create a cost centre budget
//
// Creates a new cost centre budget.
//
empty_envelope_t* CostCentresAPI_createCostCentreBudget(apiClient_t *apiClient, char *tenantId, cost_centre_budget_create_dto_t *cost_centre_budget_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**cost_centre_budget_create_dto** | **[cost_centre_budget_create_dto_t](cost_centre_budget_create_dto.md) \*** |  | 
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

# **CostCentresAPI_createCostCentreGroup**
```c
// Create a cost centre group
//
// Creates a new cost centre group.
//
empty_envelope_t* CostCentresAPI_createCostCentreGroup(apiClient_t *apiClient, char *tenantId, cost_centre_group_create_dto_t *cost_centre_group_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**cost_centre_group_create_dto** | **[cost_centre_group_create_dto_t](cost_centre_group_create_dto.md) \*** |  | 
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

# **CostCentresAPI_deleteCostCentre**
```c
// Delete a cost centre
//
// Deletes a cost centre.
//
empty_envelope_t* CostCentresAPI_deleteCostCentre(apiClient_t *apiClient, char *tenantId, char *costCentreId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**costCentreId** | **char \*** |  | 
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

# **CostCentresAPI_deleteCostCentreBudget**
```c
// Delete a cost centre budget
//
// Deletes a cost centre budget.
//
empty_envelope_t* CostCentresAPI_deleteCostCentreBudget(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
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

# **CostCentresAPI_deleteCostCentreGroup**
```c
// Delete a cost centre group
//
// Deletes a cost centre group.
//
empty_envelope_t* CostCentresAPI_deleteCostCentreGroup(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**groupId** | **char \*** |  | 
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

# **CostCentresAPI_getCostCentre**
```c
// Get a cost centre by id
//
// Retrieves a cost centre by its identifier.
//
cost_centre_dto_envelope_t* CostCentresAPI_getCostCentre(apiClient_t *apiClient, char *tenantId, char *costCentreId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**costCentreId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cost_centre_dto_envelope_t](cost_centre_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CostCentresAPI_getCostCentreBudget**
```c
// Get a cost centre budget by id
//
// Retrieves a cost centre budget by its identifier.
//
cost_centre_budget_dto_envelope_t* CostCentresAPI_getCostCentreBudget(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cost_centre_budget_dto_envelope_t](cost_centre_budget_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CostCentresAPI_getCostCentreBudgets**
```c
// Get all cost centre budgets for a tenant
//
// Retrieves all cost centre budgets for the specified tenant using OData query options.
//
cost_centre_budget_dto_list_envelope_t* CostCentresAPI_getCostCentreBudgets(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cost_centre_budget_dto_list_envelope_t](cost_centre_budget_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CostCentresAPI_getCostCentreGroup**
```c
// Get a cost centre group by id
//
// Retrieves a cost centre group by its identifier.
//
cost_centre_group_dto_envelope_t* CostCentresAPI_getCostCentreGroup(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**groupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cost_centre_group_dto_envelope_t](cost_centre_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CostCentresAPI_getCostCentreGroups**
```c
// Get all cost centre groups for a tenant
//
// Retrieves all cost centre groups for the specified tenant using OData query options.
//
cost_centre_group_dto_list_envelope_t* CostCentresAPI_getCostCentreGroups(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cost_centre_group_dto_list_envelope_t](cost_centre_group_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CostCentresAPI_getCostCentreGroupsCount**
```c
// Get the count of cost centre groups for a tenant
//
// Retrieves the count of cost centre groups for the specified tenant using OData query options.
//
int32_envelope_t* CostCentresAPI_getCostCentreGroupsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CostCentresAPI_getCostCentres**
```c
// Get all cost centres for a tenant
//
// Retrieves all cost centres for the specified tenant using OData query options.
//
cost_centre_dto_list_envelope_t* CostCentresAPI_getCostCentres(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cost_centre_dto_list_envelope_t](cost_centre_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CostCentresAPI_getCostCentresCount**
```c
// Get the count of cost centres for a tenant
//
// Retrieves the count of cost centres for the specified tenant using OData query options.
//
int32_envelope_t* CostCentresAPI_getCostCentresCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **CostCentresAPI_updateCostCentre**
```c
// Update a cost centre
//
// Updates an existing cost centre.
//
empty_envelope_t* CostCentresAPI_updateCostCentre(apiClient_t *apiClient, char *tenantId, char *costCentreId, cost_centre_update_dto_t *cost_centre_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**costCentreId** | **char \*** |  | 
**cost_centre_update_dto** | **[cost_centre_update_dto_t](cost_centre_update_dto.md) \*** |  | 
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

# **CostCentresAPI_updateCostCentreBudget**
```c
// Update a cost centre budget
//
// Updates an existing cost centre budget.
//
empty_envelope_t* CostCentresAPI_updateCostCentreBudget(apiClient_t *apiClient, char *tenantId, char *budgetId, cost_centre_budget_update_dto_t *cost_centre_budget_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**cost_centre_budget_update_dto** | **[cost_centre_budget_update_dto_t](cost_centre_budget_update_dto.md) \*** |  | 
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

# **CostCentresAPI_updateCostCentreGroup**
```c
// Update a cost centre group
//
// Updates an existing cost centre group.
//
empty_envelope_t* CostCentresAPI_updateCostCentreGroup(apiClient_t *apiClient, char *tenantId, char *groupId, cost_centre_group_update_dto_t *cost_centre_group_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**groupId** | **char \*** |  | 
**cost_centre_group_update_dto** | **[cost_centre_group_update_dto_t](cost_centre_group_update_dto.md) \*** |  | 
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

