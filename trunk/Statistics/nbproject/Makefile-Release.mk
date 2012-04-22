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
CND_CONF=Release
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
	${OBJECTDIR}/_ext/758266167/wxTranslationHelper.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/MainApp.o \
	${OBJECTDIR}/MainFrame.o \
	${OBJECTDIR}/StringStatistics.o \
	${OBJECTDIR}/StringContainer.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics \
	${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics \
	${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/FileProcessor.o: FileProcessor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/FileProcessor.o FileProcessor.cpp

${OBJECTDIR}/StringCounter.o: StringCounter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringCounter.o StringCounter.cpp

${OBJECTDIR}/_ext/758266167/wxTranslationHelper.o: /home/igormq/NetBeansProjects/Statistics/wxTranslationHelper.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/758266167
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/758266167/wxTranslationHelper.o /home/igormq/NetBeansProjects/Statistics/wxTranslationHelper.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/MainApp.o: MainApp.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/MainApp.o MainApp.cpp

${OBJECTDIR}/MainFrame.o: MainFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/MainFrame.o MainFrame.cpp

${OBJECTDIR}/StringStatistics.o: StringStatistics.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringStatistics.o StringStatistics.cpp

${OBJECTDIR}/StringContainer.o: StringContainer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringContainer.o StringContainer.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics: ${TESTDIR}/tests/TestRunner.o ${TESTDIR}/tests/TestStringContainer.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc}   -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics $^ ${LDLIBSOPTIONS} 

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics: ${TESTDIR}/tests/TestRunnerStringStatistics.o ${TESTDIR}/tests/testStringStatisticsClass.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc}   -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics $^ ${LDLIBSOPTIONS} 

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics: ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc}   -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics $^ ${LDLIBSOPTIONS} 


${TESTDIR}/tests/TestRunner.o: tests/TestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/TestRunner.o tests/TestRunner.cpp


${TESTDIR}/tests/TestStringContainer.o: tests/TestStringContainer.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/TestStringContainer.o tests/TestStringContainer.cpp


${TESTDIR}/tests/TestRunnerStringStatistics.o: tests/TestRunnerStringStatistics.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/TestRunnerStringStatistics.o tests/TestRunnerStringStatistics.cpp


${TESTDIR}/tests/testStringStatisticsClass.o: tests/testStringStatisticsClass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${TESTDIR}/tests/testStringStatisticsClass.o tests/testStringStatisticsClass.cpp


${OBJECTDIR}/FileProcessor_nomain.o: ${OBJECTDIR}/FileProcessor.o FileProcessor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/FileProcessor.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/FileProcessor_nomain.o FileProcessor.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/FileProcessor.o ${OBJECTDIR}/FileProcessor_nomain.o;\
	fi

${OBJECTDIR}/StringCounter_nomain.o: ${OBJECTDIR}/StringCounter.o StringCounter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/StringCounter.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringCounter_nomain.o StringCounter.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/StringCounter.o ${OBJECTDIR}/StringCounter_nomain.o;\
	fi

${OBJECTDIR}/_ext/758266167/wxTranslationHelper_nomain.o: ${OBJECTDIR}/_ext/758266167/wxTranslationHelper.o /home/igormq/NetBeansProjects/Statistics/wxTranslationHelper.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/758266167
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/758266167/wxTranslationHelper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/758266167/wxTranslationHelper_nomain.o /home/igormq/NetBeansProjects/Statistics/wxTranslationHelper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/758266167/wxTranslationHelper.o ${OBJECTDIR}/_ext/758266167/wxTranslationHelper_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/MainApp_nomain.o: ${OBJECTDIR}/MainApp.o MainApp.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MainApp.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/MainApp_nomain.o MainApp.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MainApp.o ${OBJECTDIR}/MainApp_nomain.o;\
	fi

${OBJECTDIR}/MainFrame_nomain.o: ${OBJECTDIR}/MainFrame.o MainFrame.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MainFrame.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/MainFrame_nomain.o MainFrame.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MainFrame.o ${OBJECTDIR}/MainFrame_nomain.o;\
	fi

${OBJECTDIR}/StringStatistics_nomain.o: ${OBJECTDIR}/StringStatistics.o StringStatistics.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/StringStatistics.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringStatistics_nomain.o StringStatistics.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/StringStatistics.o ${OBJECTDIR}/StringStatistics_nomain.o;\
	fi

${OBJECTDIR}/StringContainer_nomain.o: ${OBJECTDIR}/StringContainer.o StringContainer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/StringContainer.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringContainer_nomain.o StringContainer.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/StringContainer.o ${OBJECTDIR}/StringContainer_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics || true; \
	    ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics || true; \
	    ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/statistics

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
