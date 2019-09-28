#
# Find KHR
#
# Try to find KHR headers
# This module defines
# - KHR_INCLUDE_DIRS
# - KHR_FOUND
#
# The following variables can be set as arguments for the module.
# - KHR_DIR : Directory hint where to look for khrplatform.h
#

# Additional modules
include(FindPackageHandleStandardArgs)

if (WIN32)
	# Find include files
	find_path(KHR_INCLUDE_DIR
		NAMES KHR/khrplatform.h
		PATHS
			$ENV{PROGRAMFILES}/include
			${KHR_DIR}/include
		DOC "The directory where KHR/khrplatform.h resides")
else()
	# Find include files
	find_path(KHR_INCLUDE_DIR
		NAMES KHR/khrplatform.h
		PATHS
			/usr/include
			/usr/local/include
			/sw/include
			/opt/local/include
			${KHR_DIR}/include
		DOC "The directory where KHR/khrplatform.h resides")
endif()

# Handle REQUIRD argument, define *_FOUND variable
find_package_handle_standard_args(KHR DEFAULT_MSG KHR_INCLUDE_DIR)

# Define GLM_INCLUDE_DIRS
if (KHR_FOUND)
	set(KHR_INCLUDE_DIRS ${KHR_INCLUDE_DIR})
endif()

# Hide some variables
mark_as_advanced(KHR_INCLUDE_DIR)
