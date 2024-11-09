# source files in this project 
PROJECT_NAME=assg12

assg_src = ${PROJECT_NAME}-library.cpp

test_src  = ${PROJECT_NAME}-tests.cpp \
	    ${assg_src}

# template files, list all files that define template classes
# or functions and should not be compiled separately (template
# is included where used)
template_files =

# assignment description documentation
assg_doc  = ${PROJECT_NAME}.pdf

# common targets and variables used for all assignments/projects
include include/Makefile.inc

# assignment header file specific dependencies
${OBJ_DIR}/${PROJECT_NAME}-library.o: ${SRC_DIR}/${PROJECT_NAME}-library.cpp ${INC_DIR}/${PROJECT_NAME}-library.hpp
${OBJ_DIR}/${PROJECT_NAME}-tests.o: ${SRC_DIR}/${PROJECT_NAME}-tests.cpp ${INC_DIR}/${PROJECT_NAME}-library.hpp
