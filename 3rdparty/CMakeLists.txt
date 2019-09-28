
# External libraries
set(IDE_FOLDER "3rdparty")

if(NOT OPTION_EXTERNAL_KHR)
    add_subdirectory(KHR)
endif(NOT OPTION_EXTERNAL_KHR)
