cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "logisticsservice")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/access_token_response.c
    model/airway_bill_create_dto.c
    model/airway_bill_dto.c
    model/airway_bill_dto_envelope.c
    model/airway_bill_dto_list_envelope.c
    model/airway_bill_update_dto.c
    model/contact_dto.c
    model/delivery_note_create_dto.c
    model/delivery_note_dto.c
    model/delivery_note_dto_envelope.c
    model/delivery_note_dto_list_envelope.c
    model/delivery_note_update_dto.c
    model/dispute_proof_of_delivery_request.c
    model/empty_envelope.c
    model/error_envelope.c
    model/forgot_password_request.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/item_packing_slip_create_dto.c
    model/item_packing_slip_dto.c
    model/item_packing_slip_dto_envelope.c
    model/item_packing_slip_dto_list_envelope.c
    model/item_packing_slip_entry_create_dto.c
    model/item_packing_slip_entry_dto.c
    model/item_packing_slip_entry_dto_envelope.c
    model/item_packing_slip_entry_dto_list_envelope.c
    model/item_packing_slip_entry_update_dto.c
    model/item_packing_slip_update_dto.c
    model/item_pick_list_create_dto.c
    model/item_pick_list_dto.c
    model/item_pick_list_dto_envelope.c
    model/item_pick_list_dto_list_envelope.c
    model/item_pick_list_entry_create_dto.c
    model/item_pick_list_entry_dto.c
    model/item_pick_list_entry_dto_envelope.c
    model/item_pick_list_entry_dto_list_envelope.c
    model/item_pick_list_entry_update_dto.c
    model/item_pick_list_update_dto.c
    model/item_restock_create_dto.c
    model/item_restock_dto.c
    model/item_restock_dto_envelope.c
    model/item_restock_dto_list_envelope.c
    model/item_restock_entry_create_dto.c
    model/item_restock_entry_dto.c
    model/item_restock_entry_dto_envelope.c
    model/item_restock_entry_dto_list_envelope.c
    model/item_restock_entry_update_dto.c
    model/item_restock_update_dto.c
    model/item_retain_sample_create_dto.c
    model/item_retain_sample_dto.c
    model/item_retain_sample_dto_envelope.c
    model/item_retain_sample_dto_list_envelope.c
    model/item_retain_sample_update_dto.c
    model/login_request.c
    model/operation.c
    model/port_create_dto.c
    model/port_dto.c
    model/port_dto_envelope.c
    model/port_dto_list_envelope.c
    model/port_update_dto.c
    model/proof_of_delivery_create_dto.c
    model/proof_of_delivery_dto.c
    model/proof_of_delivery_dto_envelope.c
    model/proof_of_delivery_dto_list_envelope.c
    model/proof_of_delivery_line_create_dto.c
    model/proof_of_delivery_line_dto.c
    model/proof_of_delivery_line_dto_list_envelope.c
    model/proof_of_delivery_line_update_dto.c
    model/proof_of_delivery_update_dto.c
    model/rail_waybill_create_dto.c
    model/rail_waybill_dto.c
    model/rail_waybill_dto_envelope.c
    model/rail_waybill_dto_list_envelope.c
    model/rail_waybill_update_dto.c
    model/refresh_request.c
    model/register_request.c
    model/reject_proof_of_delivery_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/road_waybill_create_dto.c
    model/road_waybill_dto.c
    model/road_waybill_dto_envelope.c
    model/road_waybill_dto_list_envelope.c
    model/road_waybill_update_dto.c
    model/seaway_bill_create_dto.c
    model/seaway_bill_dto.c
    model/seaway_bill_dto_envelope.c
    model/seaway_bill_dto_list_envelope.c
    model/seaway_bill_update_dto.c
    model/sign_proof_of_delivery_request.c
    model/supplier_profile_create_dto.c
    model/supplier_profile_dto.c
    model/supplier_profile_dto_envelope.c
    model/supplier_profile_dto_list_envelope.c
    model/supplier_profile_update_dto.c
    model/truck_create_dto.c
    model/truck_driver_create_dto.c
    model/truck_driver_dto.c
    model/truck_driver_dto_envelope.c
    model/truck_driver_dto_list_envelope.c
    model/truck_driver_update_dto.c
    model/truck_dto.c
    model/truck_dto_envelope.c
    model/truck_dto_list_envelope.c
    model/truck_trip_create_dto.c
    model/truck_trip_dto.c
    model/truck_trip_dto_list_envelope.c
    model/truck_trip_update_dto.c
    model/truck_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/vessel_create_dto.c
    model/vessel_dto.c
    model/vessel_dto_envelope.c
    model/vessel_dto_list_envelope.c
    model/vessel_update_dto.c
    model/voyage_create_dto.c
    model/voyage_dto.c
    model/voyage_dto_envelope.c
    model/voyage_dto_list_envelope.c
    model/voyage_port_call_create_dto.c
    model/voyage_port_call_dto.c
    model/voyage_port_call_dto_list_envelope.c
    model/voyage_port_call_update_dto.c
    model/voyage_update_dto.c
    model/warehouse_create_dto.c
    model/warehouse_dto.c
    model/warehouse_dto_envelope.c
    model/warehouse_dto_list_envelope.c
    model/warehouse_update_dto.c
    model/waybill_line_create_dto.c
    model/waybill_line_dto.c
    model/waybill_line_dto_list_envelope.c
    model/waybill_line_update_dto.c
    api/AirwayBillsAPI.c
    api/CompletionsAPI.c
    api/DeliveryNotesAPI.c
    api/FenixAlliancePortalsWebsiteAPI.c
    api/ItemPackingSlipsAPI.c
    api/ItemPickListsAPI.c
    api/ItemRestocksAPI.c
    api/ItemRetainSamplesAPI.c
    api/PortsAPI.c
    api/ProofsOfDeliveryAPI.c
    api/RailWaybillsAPI.c
    api/RoadWaybillsAPI.c
    api/SeawayBillsAPI.c
    api/SupplierProfilesAPI.c
    api/TruckDriversAPI.c
    api/TrucksAPI.c
    api/VesselsAPI.c
    api/VoyagesAPI.c
    api/WarehousesAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/airway_bill_create_dto.h
    model/airway_bill_dto.h
    model/airway_bill_dto_envelope.h
    model/airway_bill_dto_list_envelope.h
    model/airway_bill_update_dto.h
    model/contact_dto.h
    model/delivery_note_create_dto.h
    model/delivery_note_dto.h
    model/delivery_note_dto_envelope.h
    model/delivery_note_dto_list_envelope.h
    model/delivery_note_update_dto.h
    model/dispute_proof_of_delivery_request.h
    model/empty_envelope.h
    model/error_envelope.h
    model/forgot_password_request.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/item_packing_slip_create_dto.h
    model/item_packing_slip_dto.h
    model/item_packing_slip_dto_envelope.h
    model/item_packing_slip_dto_list_envelope.h
    model/item_packing_slip_entry_create_dto.h
    model/item_packing_slip_entry_dto.h
    model/item_packing_slip_entry_dto_envelope.h
    model/item_packing_slip_entry_dto_list_envelope.h
    model/item_packing_slip_entry_update_dto.h
    model/item_packing_slip_update_dto.h
    model/item_pick_list_create_dto.h
    model/item_pick_list_dto.h
    model/item_pick_list_dto_envelope.h
    model/item_pick_list_dto_list_envelope.h
    model/item_pick_list_entry_create_dto.h
    model/item_pick_list_entry_dto.h
    model/item_pick_list_entry_dto_envelope.h
    model/item_pick_list_entry_dto_list_envelope.h
    model/item_pick_list_entry_update_dto.h
    model/item_pick_list_update_dto.h
    model/item_restock_create_dto.h
    model/item_restock_dto.h
    model/item_restock_dto_envelope.h
    model/item_restock_dto_list_envelope.h
    model/item_restock_entry_create_dto.h
    model/item_restock_entry_dto.h
    model/item_restock_entry_dto_envelope.h
    model/item_restock_entry_dto_list_envelope.h
    model/item_restock_entry_update_dto.h
    model/item_restock_update_dto.h
    model/item_retain_sample_create_dto.h
    model/item_retain_sample_dto.h
    model/item_retain_sample_dto_envelope.h
    model/item_retain_sample_dto_list_envelope.h
    model/item_retain_sample_update_dto.h
    model/login_request.h
    model/operation.h
    model/port_create_dto.h
    model/port_dto.h
    model/port_dto_envelope.h
    model/port_dto_list_envelope.h
    model/port_update_dto.h
    model/proof_of_delivery_create_dto.h
    model/proof_of_delivery_dto.h
    model/proof_of_delivery_dto_envelope.h
    model/proof_of_delivery_dto_list_envelope.h
    model/proof_of_delivery_line_create_dto.h
    model/proof_of_delivery_line_dto.h
    model/proof_of_delivery_line_dto_list_envelope.h
    model/proof_of_delivery_line_update_dto.h
    model/proof_of_delivery_update_dto.h
    model/rail_waybill_create_dto.h
    model/rail_waybill_dto.h
    model/rail_waybill_dto_envelope.h
    model/rail_waybill_dto_list_envelope.h
    model/rail_waybill_update_dto.h
    model/refresh_request.h
    model/register_request.h
    model/reject_proof_of_delivery_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/road_waybill_create_dto.h
    model/road_waybill_dto.h
    model/road_waybill_dto_envelope.h
    model/road_waybill_dto_list_envelope.h
    model/road_waybill_update_dto.h
    model/seaway_bill_create_dto.h
    model/seaway_bill_dto.h
    model/seaway_bill_dto_envelope.h
    model/seaway_bill_dto_list_envelope.h
    model/seaway_bill_update_dto.h
    model/sign_proof_of_delivery_request.h
    model/supplier_profile_create_dto.h
    model/supplier_profile_dto.h
    model/supplier_profile_dto_envelope.h
    model/supplier_profile_dto_list_envelope.h
    model/supplier_profile_update_dto.h
    model/truck_create_dto.h
    model/truck_driver_create_dto.h
    model/truck_driver_dto.h
    model/truck_driver_dto_envelope.h
    model/truck_driver_dto_list_envelope.h
    model/truck_driver_update_dto.h
    model/truck_dto.h
    model/truck_dto_envelope.h
    model/truck_dto_list_envelope.h
    model/truck_trip_create_dto.h
    model/truck_trip_dto.h
    model/truck_trip_dto_list_envelope.h
    model/truck_trip_update_dto.h
    model/truck_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/vessel_create_dto.h
    model/vessel_dto.h
    model/vessel_dto_envelope.h
    model/vessel_dto_list_envelope.h
    model/vessel_update_dto.h
    model/voyage_create_dto.h
    model/voyage_dto.h
    model/voyage_dto_envelope.h
    model/voyage_dto_list_envelope.h
    model/voyage_port_call_create_dto.h
    model/voyage_port_call_dto.h
    model/voyage_port_call_dto_list_envelope.h
    model/voyage_port_call_update_dto.h
    model/voyage_update_dto.h
    model/warehouse_create_dto.h
    model/warehouse_dto.h
    model/warehouse_dto_envelope.h
    model/warehouse_dto_list_envelope.h
    model/warehouse_update_dto.h
    model/waybill_line_create_dto.h
    model/waybill_line_dto.h
    model/waybill_line_dto_list_envelope.h
    model/waybill_line_update_dto.h
    api/AirwayBillsAPI.h
    api/CompletionsAPI.h
    api/DeliveryNotesAPI.h
    api/FenixAlliancePortalsWebsiteAPI.h
    api/ItemPackingSlipsAPI.h
    api/ItemPickListsAPI.h
    api/ItemRestocksAPI.h
    api/ItemRetainSamplesAPI.h
    api/PortsAPI.h
    api/ProofsOfDeliveryAPI.h
    api/RailWaybillsAPI.h
    api/RoadWaybillsAPI.h
    api/SeawayBillsAPI.h
    api/SupplierProfilesAPI.h
    api/TruckDriversAPI.h
    api/TrucksAPI.h
    api/VesselsAPI.h
    api/VoyagesAPI.h
    api/WarehousesAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-AirwayBillsAPI.c
#    unit-tests/manual-CompletionsAPI.c
#    unit-tests/manual-DeliveryNotesAPI.c
#    unit-tests/manual-FenixAlliancePortalsWebsiteAPI.c
#    unit-tests/manual-ItemPackingSlipsAPI.c
#    unit-tests/manual-ItemPickListsAPI.c
#    unit-tests/manual-ItemRestocksAPI.c
#    unit-tests/manual-ItemRetainSamplesAPI.c
#    unit-tests/manual-PortsAPI.c
#    unit-tests/manual-ProofsOfDeliveryAPI.c
#    unit-tests/manual-RailWaybillsAPI.c
#    unit-tests/manual-RoadWaybillsAPI.c
#    unit-tests/manual-SeawayBillsAPI.c
#    unit-tests/manual-SupplierProfilesAPI.c
#    unit-tests/manual-TruckDriversAPI.c
#    unit-tests/manual-TrucksAPI.c
#    unit-tests/manual-VesselsAPI.c
#    unit-tests/manual-VoyagesAPI.c
#    unit-tests/manual-WarehousesAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
