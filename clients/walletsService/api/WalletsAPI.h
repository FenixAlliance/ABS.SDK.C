#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_order_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/invoice_dto_list_envelope.h"
#include "../model/location_create_dto.h"
#include "../model/location_dto_envelope.h"
#include "../model/location_dto_list_envelope.h"
#include "../model/location_update_dto.h"
#include "../model/order_dto_list_envelope.h"
#include "../model/payment_dto_list_envelope.h"
#include "../model/wallet_dto_envelope.h"


// Create Wallet Location
//
// Create a new location for a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_createWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, location_create_dto_t *location_create_dto);


// Delete Wallet Location
//
// Delete a specific location of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_deleteWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);


// Get Incoming Payments
//
// Get incoming payments of a specific wallet by ID.
//
payment_dto_list_envelope_t*
WalletsAPI_getIncomingPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Incoming Payments Count
//
// Get incoming payments count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getIncomingPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Incoming Wallet Invoices
//
// Get incoming invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t*
WalletsAPI_getIncomingWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Incoming Wallet Invoices Count
//
// Get incoming invoices count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getIncomingWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Payments
//
// Get outgoing payments of a specific wallet by ID.
//
payment_dto_list_envelope_t*
WalletsAPI_getOutgoingPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Payments Count
//
// Get outgoing payments count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getOutgoingPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Wallet Invoices
//
// Get outgoing invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t*
WalletsAPI_getOutgoingWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Wallet Invoices Count
//
// Get outgoing invoices count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getOutgoingWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Details
//
// Get details of a specific wallet by ID.
//
wallet_dto_envelope_t*
WalletsAPI_getWalletDetailsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Extended Orders
//
// Get extended orders of a specific wallet by ID.
//
extended_order_dto_list_envelope_t*
WalletsAPI_getWalletExtendedOrdersAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Invoices
//
// Get invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t*
WalletsAPI_getWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Invoices Count
//
// Get invoices count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Location
//
// Get a specific location of a specific wallet by ID.
//
location_dto_envelope_t*
WalletsAPI_getWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);


// Get Wallet Locations
//
// Get locations of a specific wallet by ID.
//
location_dto_list_envelope_t*
WalletsAPI_getWalletLocationsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Locations Count
//
// Get locations count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletLocationsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Orders
//
// Get orders of a specific wallet by ID.
//
order_dto_list_envelope_t*
WalletsAPI_getWalletOrdersAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Orders Count
//
// Get orders count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletOrdersCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Payments
//
// Get payments of a specific wallet by ID.
//
payment_dto_list_envelope_t*
WalletsAPI_getWalletPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Payments Count
//
// Get payments count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Update Wallet Location
//
// Update a specific location of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_updateWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version, location_update_dto_t *location_update_dto);


