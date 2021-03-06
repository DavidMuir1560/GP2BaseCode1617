# Copyright (c) 2014 Andrew Kelley
# This file is MIT licensed.
# See http://opensource.org/licenses/MIT

# TINYXML2_FOUND
# TINYXML2_INCLUDE_DIR
# TINYXML2_LIBRARIES

find_path(TINYXML2_INCLUDE_DIR NAMES tinyxml2.h
HINTS /opt/local/include
/usr/local/include
${TINYXML2_PATH}/include)

find_library(TINYXML2_LIBRARIES NAMES tinyxml2
HINTS /opt/local/lib
/usr/local/lib
${TINYXML2_PATH}/lib)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(TINYXML2 DEFAULT_MSG TINYXML2_LIBRARIES TINYXML2_INCLUDE_DIR)

mark_as_advanced(TINYXML2_INCLUDE_DIR TINYXML2_LIBRARIES)
