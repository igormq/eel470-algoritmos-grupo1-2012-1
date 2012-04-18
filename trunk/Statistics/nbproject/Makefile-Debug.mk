#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/FileProcessor.o \
	${OBJECTDIR}/StringCounter.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/MainApp.o \
	${OBJECTDIR}/MainFrame.o \
	${OBJECTDIR}/StringStatistics.o \
	${OBJECTDIR}/StringContainer.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=`wx-config --cxxflags` 
CXXFLAGS=`wx-config --cxxflags` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/lib/i386-linux-gnu -lcppunit -lwx_gtk2u_richtext-2.8 -lwx_gtk2u_aui-2.8 -lwx_gtk2u_xrc-2.8 -lwx_gtk2u_qa-2.8 -lwx_gtk2u_html-2.8 -lwx_gtk2u_adv-2.8 -lwx_gtk2u_core-2.8 -lwx_baseu_xml-2.8 -lwx_baseu_net-2.8 -lwx_baseu-2.8

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} `wx-config --libs` -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics  ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/FileProcessor.o: FileProcessor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/FileProcessor.o FileProcessor.cpp

${OBJECTDIR}/StringCounter.o: StringCounter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringCounter.o StringCounter.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/MainApp.o: MainApp.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/MainApp.o MainApp.cpp

${OBJECTDIR}/MainFrame.o: MainFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/MainFrame.o MainFrame.cpp

${OBJECTDIR}/StringStatistics.o: StringStatistics.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringStatistics.o StringStatistics.cpp

${OBJECTDIR}/StringContainer.o: StringContainer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -D__WXGTK__ -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringContainer.o StringContainer.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
