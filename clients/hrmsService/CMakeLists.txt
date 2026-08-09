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

set(pkgName "hrmsservice")

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
    model/appraisal_stage_create_dto.c
    model/appraisal_stage_dto.c
    model/appraisal_stage_dto_collection_query_parameters.c
    model/appraisal_stage_dto_envelope.c
    model/appraisal_stage_dto_list_envelope.c
    model/appraisal_stage_update_dto.c
    model/appraisal_workflow_create_dto.c
    model/appraisal_workflow_dto.c
    model/appraisal_workflow_dto_collection_query_parameters.c
    model/appraisal_workflow_dto_envelope.c
    model/appraisal_workflow_dto_list_envelope.c
    model/appraisal_workflow_update_dto.c
    model/contact_create_dto.c
    model/contact_dto.c
    model/employee_appraisal_session_create_dto.c
    model/employee_appraisal_session_dto.c
    model/employee_appraisal_session_dto_collection_query_parameters.c
    model/employee_appraisal_session_dto_envelope.c
    model/employee_appraisal_session_dto_list_envelope.c
    model/employee_appraisal_session_update_dto.c
    model/employee_profile_create_dto.c
    model/employee_profile_dto.c
    model/employee_profile_dto_collection_query_parameters.c
    model/employee_profile_dto_envelope.c
    model/employee_profile_dto_list_envelope.c
    model/employee_profile_update_dto.c
    model/employee_type_create_dto.c
    model/employee_type_dto.c
    model/employee_type_dto_collection_query_parameters.c
    model/employee_type_dto_envelope.c
    model/employee_type_dto_list_envelope.c
    model/employee_type_update_dto.c
    model/employer_profile_create_dto.c
    model/employer_profile_dto.c
    model/employer_profile_dto_collection_query_parameters.c
    model/employer_profile_dto_envelope.c
    model/employer_profile_dto_list_envelope.c
    model/employer_profile_update_dto.c
    model/empty_envelope.c
    model/error_envelope.c
    model/forgot_password_request.c
    model/gig_application_create_dto.c
    model/gig_application_dto.c
    model/gig_application_dto_collection_query_parameters.c
    model/gig_application_dto_envelope.c
    model/gig_application_dto_list_envelope.c
    model/gig_application_update_dto.c
    model/gig_create_dto.c
    model/gig_dto.c
    model/gig_dto_collection_query_parameters.c
    model/gig_dto_envelope.c
    model/gig_dto_list_envelope.c
    model/gig_update_dto.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/job_applicant_profile_create_dto.c
    model/job_applicant_profile_dto.c
    model/job_applicant_profile_dto_collection_query_parameters.c
    model/job_applicant_profile_dto_envelope.c
    model/job_applicant_profile_dto_list_envelope.c
    model/job_applicant_profile_update_dto.c
    model/job_field_create_dto.c
    model/job_field_dto.c
    model/job_field_dto_collection_query_parameters.c
    model/job_field_dto_envelope.c
    model/job_field_dto_list_envelope.c
    model/job_field_update_dto.c
    model/job_offer_application_create_dto.c
    model/job_offer_application_dto.c
    model/job_offer_application_dto_collection_query_parameters.c
    model/job_offer_application_dto_envelope.c
    model/job_offer_application_dto_list_envelope.c
    model/job_offer_application_update_dto.c
    model/job_offer_create_dto.c
    model/job_offer_dto.c
    model/job_offer_dto_collection_query_parameters.c
    model/job_offer_dto_envelope.c
    model/job_offer_dto_list_envelope.c
    model/job_offer_field_record_create_dto.c
    model/job_offer_field_record_dto.c
    model/job_offer_field_record_dto_collection_query_parameters.c
    model/job_offer_field_record_dto_envelope.c
    model/job_offer_field_record_dto_list_envelope.c
    model/job_offer_field_record_update_dto.c
    model/job_offer_update_dto.c
    model/job_title_create_dto.c
    model/job_title_dto.c
    model/job_title_dto_collection_query_parameters.c
    model/job_title_dto_envelope.c
    model/job_title_dto_list_envelope.c
    model/job_title_update_dto.c
    model/leave_application_create_dto.c
    model/leave_application_dto.c
    model/leave_application_dto_collection_query_parameters.c
    model/leave_application_dto_envelope.c
    model/leave_application_dto_list_envelope.c
    model/leave_application_update_dto.c
    model/leave_type_create_dto.c
    model/leave_type_dto.c
    model/leave_type_dto_collection_query_parameters.c
    model/leave_type_dto_envelope.c
    model/leave_type_dto_list_envelope.c
    model/leave_type_update_dto.c
    model/login_request.c
    model/patch_operation.c
    model/payroll_create_dto.c
    model/payroll_dto.c
    model/payroll_dto_collection_query_parameters.c
    model/payroll_dto_envelope.c
    model/payroll_dto_list_envelope.c
    model/payroll_period_create_dto.c
    model/payroll_period_dto.c
    model/payroll_period_dto_collection_query_parameters.c
    model/payroll_period_dto_envelope.c
    model/payroll_period_dto_list_envelope.c
    model/payroll_period_update_dto.c
    model/payroll_update_dto.c
    model/refresh_request.c
    model/register_request.c
    model/required_skill_record_create_dto.c
    model/required_skill_record_dto.c
    model/required_skill_record_dto_collection_query_parameters.c
    model/required_skill_record_dto_envelope.c
    model/required_skill_record_dto_list_envelope.c
    model/required_skill_record_update_dto.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/salary_create_dto.c
    model/salary_dto.c
    model/salary_dto_collection_query_parameters.c
    model/salary_dto_envelope.c
    model/salary_dto_list_envelope.c
    model/salary_update_dto.c
    model/schedule_create_dto.c
    model/schedule_dto.c
    model/schedule_dto_collection_query_parameters.c
    model/schedule_dto_envelope.c
    model/schedule_dto_list_envelope.c
    model/schedule_update_dto.c
    model/shift_create_dto.c
    model/shift_dto.c
    model/shift_dto_collection_query_parameters.c
    model/shift_dto_envelope.c
    model/shift_dto_list_envelope.c
    model/shift_update_dto.c
    model/time_interval_create_dto.c
    model/time_interval_dto.c
    model/time_interval_dto_collection_query_parameters.c
    model/time_interval_dto_envelope.c
    model/time_interval_dto_list_envelope.c
    model/time_interval_update_dto.c
    model/training_program_course_create_dto.c
    model/training_program_course_dto.c
    model/training_program_course_dto_collection_query_parameters.c
    model/training_program_course_dto_envelope.c
    model/training_program_course_dto_list_envelope.c
    model/training_program_course_update_dto.c
    model/training_program_create_dto.c
    model/training_program_dto.c
    model/training_program_dto_collection_query_parameters.c
    model/training_program_dto_envelope.c
    model/training_program_dto_list_envelope.c
    model/training_program_event_create_dto.c
    model/training_program_event_dto.c
    model/training_program_event_dto_collection_query_parameters.c
    model/training_program_event_dto_envelope.c
    model/training_program_event_dto_list_envelope.c
    model/training_program_event_update_dto.c
    model/training_program_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    api/AppraisalStagesAPI.c
    api/AppraisalWorkflowsAPI.c
    api/EmployeeAppraisalSessionsAPI.c
    api/EmployeeTypesAPI.c
    api/EmployeesAPI.c
    api/EmployersAPI.c
    api/FenixAllianceABSWebAPI.c
    api/GigApplicationsAPI.c
    api/GigsAPI.c
    api/JobApplicantsAPI.c
    api/JobApplicationsAPI.c
    api/JobFieldsAPI.c
    api/JobOfferFieldsAPI.c
    api/JobOffersAPI.c
    api/JobTitlesAPI.c
    api/LeaveApplicationsAPI.c
    api/LeaveTypesAPI.c
    api/PayrollPeriodsAPI.c
    api/PayrollsAPI.c
    api/RequiredSkillsAPI.c
    api/SalariesAPI.c
    api/SchedulesAPI.c
    api/ShiftsAPI.c
    api/TimeIntervalsAPI.c
    api/TrainingProgramCoursesAPI.c
    api/TrainingProgramEventsAPI.c
    api/TrainingProgramsAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/appraisal_stage_create_dto.h
    model/appraisal_stage_dto.h
    model/appraisal_stage_dto_collection_query_parameters.h
    model/appraisal_stage_dto_envelope.h
    model/appraisal_stage_dto_list_envelope.h
    model/appraisal_stage_update_dto.h
    model/appraisal_workflow_create_dto.h
    model/appraisal_workflow_dto.h
    model/appraisal_workflow_dto_collection_query_parameters.h
    model/appraisal_workflow_dto_envelope.h
    model/appraisal_workflow_dto_list_envelope.h
    model/appraisal_workflow_update_dto.h
    model/contact_create_dto.h
    model/contact_dto.h
    model/employee_appraisal_session_create_dto.h
    model/employee_appraisal_session_dto.h
    model/employee_appraisal_session_dto_collection_query_parameters.h
    model/employee_appraisal_session_dto_envelope.h
    model/employee_appraisal_session_dto_list_envelope.h
    model/employee_appraisal_session_update_dto.h
    model/employee_profile_create_dto.h
    model/employee_profile_dto.h
    model/employee_profile_dto_collection_query_parameters.h
    model/employee_profile_dto_envelope.h
    model/employee_profile_dto_list_envelope.h
    model/employee_profile_update_dto.h
    model/employee_type_create_dto.h
    model/employee_type_dto.h
    model/employee_type_dto_collection_query_parameters.h
    model/employee_type_dto_envelope.h
    model/employee_type_dto_list_envelope.h
    model/employee_type_update_dto.h
    model/employer_profile_create_dto.h
    model/employer_profile_dto.h
    model/employer_profile_dto_collection_query_parameters.h
    model/employer_profile_dto_envelope.h
    model/employer_profile_dto_list_envelope.h
    model/employer_profile_update_dto.h
    model/empty_envelope.h
    model/error_envelope.h
    model/forgot_password_request.h
    model/gig_application_create_dto.h
    model/gig_application_dto.h
    model/gig_application_dto_collection_query_parameters.h
    model/gig_application_dto_envelope.h
    model/gig_application_dto_list_envelope.h
    model/gig_application_update_dto.h
    model/gig_create_dto.h
    model/gig_dto.h
    model/gig_dto_collection_query_parameters.h
    model/gig_dto_envelope.h
    model/gig_dto_list_envelope.h
    model/gig_update_dto.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/job_applicant_profile_create_dto.h
    model/job_applicant_profile_dto.h
    model/job_applicant_profile_dto_collection_query_parameters.h
    model/job_applicant_profile_dto_envelope.h
    model/job_applicant_profile_dto_list_envelope.h
    model/job_applicant_profile_update_dto.h
    model/job_field_create_dto.h
    model/job_field_dto.h
    model/job_field_dto_collection_query_parameters.h
    model/job_field_dto_envelope.h
    model/job_field_dto_list_envelope.h
    model/job_field_update_dto.h
    model/job_offer_application_create_dto.h
    model/job_offer_application_dto.h
    model/job_offer_application_dto_collection_query_parameters.h
    model/job_offer_application_dto_envelope.h
    model/job_offer_application_dto_list_envelope.h
    model/job_offer_application_update_dto.h
    model/job_offer_create_dto.h
    model/job_offer_dto.h
    model/job_offer_dto_collection_query_parameters.h
    model/job_offer_dto_envelope.h
    model/job_offer_dto_list_envelope.h
    model/job_offer_field_record_create_dto.h
    model/job_offer_field_record_dto.h
    model/job_offer_field_record_dto_collection_query_parameters.h
    model/job_offer_field_record_dto_envelope.h
    model/job_offer_field_record_dto_list_envelope.h
    model/job_offer_field_record_update_dto.h
    model/job_offer_update_dto.h
    model/job_title_create_dto.h
    model/job_title_dto.h
    model/job_title_dto_collection_query_parameters.h
    model/job_title_dto_envelope.h
    model/job_title_dto_list_envelope.h
    model/job_title_update_dto.h
    model/leave_application_create_dto.h
    model/leave_application_dto.h
    model/leave_application_dto_collection_query_parameters.h
    model/leave_application_dto_envelope.h
    model/leave_application_dto_list_envelope.h
    model/leave_application_update_dto.h
    model/leave_type_create_dto.h
    model/leave_type_dto.h
    model/leave_type_dto_collection_query_parameters.h
    model/leave_type_dto_envelope.h
    model/leave_type_dto_list_envelope.h
    model/leave_type_update_dto.h
    model/login_request.h
    model/patch_operation.h
    model/payroll_create_dto.h
    model/payroll_dto.h
    model/payroll_dto_collection_query_parameters.h
    model/payroll_dto_envelope.h
    model/payroll_dto_list_envelope.h
    model/payroll_period_create_dto.h
    model/payroll_period_dto.h
    model/payroll_period_dto_collection_query_parameters.h
    model/payroll_period_dto_envelope.h
    model/payroll_period_dto_list_envelope.h
    model/payroll_period_update_dto.h
    model/payroll_update_dto.h
    model/refresh_request.h
    model/register_request.h
    model/required_skill_record_create_dto.h
    model/required_skill_record_dto.h
    model/required_skill_record_dto_collection_query_parameters.h
    model/required_skill_record_dto_envelope.h
    model/required_skill_record_dto_list_envelope.h
    model/required_skill_record_update_dto.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/salary_create_dto.h
    model/salary_dto.h
    model/salary_dto_collection_query_parameters.h
    model/salary_dto_envelope.h
    model/salary_dto_list_envelope.h
    model/salary_update_dto.h
    model/schedule_create_dto.h
    model/schedule_dto.h
    model/schedule_dto_collection_query_parameters.h
    model/schedule_dto_envelope.h
    model/schedule_dto_list_envelope.h
    model/schedule_update_dto.h
    model/shift_create_dto.h
    model/shift_dto.h
    model/shift_dto_collection_query_parameters.h
    model/shift_dto_envelope.h
    model/shift_dto_list_envelope.h
    model/shift_update_dto.h
    model/time_interval_create_dto.h
    model/time_interval_dto.h
    model/time_interval_dto_collection_query_parameters.h
    model/time_interval_dto_envelope.h
    model/time_interval_dto_list_envelope.h
    model/time_interval_update_dto.h
    model/training_program_course_create_dto.h
    model/training_program_course_dto.h
    model/training_program_course_dto_collection_query_parameters.h
    model/training_program_course_dto_envelope.h
    model/training_program_course_dto_list_envelope.h
    model/training_program_course_update_dto.h
    model/training_program_create_dto.h
    model/training_program_dto.h
    model/training_program_dto_collection_query_parameters.h
    model/training_program_dto_envelope.h
    model/training_program_dto_list_envelope.h
    model/training_program_event_create_dto.h
    model/training_program_event_dto.h
    model/training_program_event_dto_collection_query_parameters.h
    model/training_program_event_dto_envelope.h
    model/training_program_event_dto_list_envelope.h
    model/training_program_event_update_dto.h
    model/training_program_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    api/AppraisalStagesAPI.h
    api/AppraisalWorkflowsAPI.h
    api/EmployeeAppraisalSessionsAPI.h
    api/EmployeeTypesAPI.h
    api/EmployeesAPI.h
    api/EmployersAPI.h
    api/FenixAllianceABSWebAPI.h
    api/GigApplicationsAPI.h
    api/GigsAPI.h
    api/JobApplicantsAPI.h
    api/JobApplicationsAPI.h
    api/JobFieldsAPI.h
    api/JobOfferFieldsAPI.h
    api/JobOffersAPI.h
    api/JobTitlesAPI.h
    api/LeaveApplicationsAPI.h
    api/LeaveTypesAPI.h
    api/PayrollPeriodsAPI.h
    api/PayrollsAPI.h
    api/RequiredSkillsAPI.h
    api/SalariesAPI.h
    api/SchedulesAPI.h
    api/ShiftsAPI.h
    api/TimeIntervalsAPI.h
    api/TrainingProgramCoursesAPI.h
    api/TrainingProgramEventsAPI.h
    api/TrainingProgramsAPI.h

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
#    unit-tests/manual-AppraisalStagesAPI.c
#    unit-tests/manual-AppraisalWorkflowsAPI.c
#    unit-tests/manual-EmployeeAppraisalSessionsAPI.c
#    unit-tests/manual-EmployeeTypesAPI.c
#    unit-tests/manual-EmployeesAPI.c
#    unit-tests/manual-EmployersAPI.c
#    unit-tests/manual-FenixAllianceABSWebAPI.c
#    unit-tests/manual-GigApplicationsAPI.c
#    unit-tests/manual-GigsAPI.c
#    unit-tests/manual-JobApplicantsAPI.c
#    unit-tests/manual-JobApplicationsAPI.c
#    unit-tests/manual-JobFieldsAPI.c
#    unit-tests/manual-JobOfferFieldsAPI.c
#    unit-tests/manual-JobOffersAPI.c
#    unit-tests/manual-JobTitlesAPI.c
#    unit-tests/manual-LeaveApplicationsAPI.c
#    unit-tests/manual-LeaveTypesAPI.c
#    unit-tests/manual-PayrollPeriodsAPI.c
#    unit-tests/manual-PayrollsAPI.c
#    unit-tests/manual-RequiredSkillsAPI.c
#    unit-tests/manual-SalariesAPI.c
#    unit-tests/manual-SchedulesAPI.c
#    unit-tests/manual-ShiftsAPI.c
#    unit-tests/manual-TimeIntervalsAPI.c
#    unit-tests/manual-TrainingProgramCoursesAPI.c
#    unit-tests/manual-TrainingProgramEventsAPI.c
#    unit-tests/manual-TrainingProgramsAPI.c
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
