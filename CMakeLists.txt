cmake_minimum_required(VERSION 3.7)
set(NAME j2735v2016)
set(TARGET lib${NAME})
project(CVehicle-${TARGET})
set(CMAKE_INSTALL_PREFIX ..)
set(LIBRARY ${TARGET})

set(ASN_SRCS J2735_201603DA.ASN)

# list of header files
file(GLOB ASN1C_HDRS "src/*.h")
set(LIBH
  ${ASN1C_HDRS}
)

# list of source files
file(GLOB ASN1C_SRCS "src/*.c")
list(REMOVE_ITEM ASN1C_SRCS converter-example.c)
set(LIBSRC
  ${ASN1C_SRCS}
)

add_custom_command (
  OUTPUT ${LIBH} ${ASN1C_SRCS}
  COMMAND asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example ${ASN_SRCS}
  DEPENDS ${ASN_SRCS}
  )

# defines
add_definitions()

# includes
include_directories(src /usr/local/share/asn1c)

# outputs
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# this is the "object library" target: compiles the sources only once
add_library(${LIBRARY} OBJECT ${LIBSRC})

# shared libraries need PIC
set_property(TARGET ${LIBRARY} PROPERTY POSITION_INDEPENDENT_CODE 1)

# shared and static libraries built from the same object files
add_library(${LIBRARY}-shared SHARED $<TARGET_OBJECTS:${LIBRARY}>)
add_library(${LIBRARY}-static STATIC $<TARGET_OBJECTS:${LIBRARY}>)

# output file names
set_target_properties(${LIBRARY}-shared PROPERTIES OUTPUT_NAME ${NAME})
set_target_properties(${LIBRARY}-static PROPERTIES OUTPUT_NAME ${NAME})

# installations
install (FILES ${LIBH} DESTINATION include/${NAME})
#install (FILES lib${NAME}.a lib${NAME}.so DESTINATION lib)
